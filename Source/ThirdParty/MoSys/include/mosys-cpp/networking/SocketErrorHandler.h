#pragma once
#include <iostream>
#include <string>

#include <boost/asio.hpp>

#include <functional>

namespace mosys
{
    class SocketErrorHandler
    {
    public:
        SocketErrorHandler() = delete;
        SocketErrorHandler(bool logErrors, bool isUDP)
        :m_errorCallback(nullptr)
        , m_errorLogging(logErrors)
        , m_isUp(true)
        , m_isUDP(isUDP)
        {}

        enum class ErrorSeverity
        {
            NoError,
            Permissive,
            Warning,
            Bad
        };

        virtual ~SocketErrorHandler() = default;

        std::string getLastErrorMessage() 
        {
            std::string errorMsg = m_lastErrorMessage;
            m_lastErrorMessage = "";
            return errorMsg;
        }

        void setErrorCallback(const std::function<void(const char*)>& callback)
        {
            if (!m_errorCallback)
            {
                m_errorCallback = callback;
            }
        }

    protected:
        boost::system::error_code m_error;
        std::string m_lastErrorMessage;
        std::function<void(const char*)> m_errorCallback;
        bool m_errorLogging;
        bool m_isUp;
        bool m_isUDP;
        
        void setLastErrorMessage(const std::string& msg)
        {
            m_lastErrorMessage = msg;
        };

        ErrorSeverity setError(boost::wrapexcept<boost::system::system_error>& sysError)
        {
	        return setError(sysError.code());
        }

        ErrorSeverity setError(const boost::system::error_code& err);

        /**
        * \brief When an error occurs Boost asio can throw a C++ exception or return a code.
        * We should prefer the use of Boost error codes over throwing and catching exceptions as
        * exception handling can be tricky and expensive.
        *
        * \param operation The function to execute that could cause an error
        * \return True if no serious error (permissive warnings and logs are called back separately) and the socket is active
        */
        bool CheckForError(const std::function<void(boost::system::error_code&)>& operation)
        {
            if (m_isUp)
            {
                operation(m_error);

                if (SocketErrorHandler::ErrorSeverity::Bad == setError(m_error))
                {
                    m_isUp = false;
                    if (m_errorCallback)
                    {
                        m_errorCallback(m_error.message().c_str());
                    }
                }
                if (m_error && m_errorLogging)
                {
                    m_lastErrorMessage = m_error.message();
                    
                }
                else 
                {
                    m_lastErrorMessage = "";
                }
            }

            return m_isUp;
        }

    };
}