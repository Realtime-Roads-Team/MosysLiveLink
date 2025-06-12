// Copyright 2024 Mo-Sys Engineering Ltd. All Rights Reserved.

#pragma once
#include <queue>
#include <mutex>
#include <string>
#include <vector>


#define DEFAULT_TAIL_SIZE 100

namespace mosys
{
    /**
     * \brief Log information to a stream
     * \todo Make formatMsg use std::format and then we can better template these functions, Ticket MVP-3861
     */
    class Logger
    {
    public:
        enum class Level
        {
            None = 0x0,
            Error = 0x01,
            Warning = 0x02,
            Info = 0x04,
            Debug = 0x08
        };

        static Logger& instance()
        {
            static Logger INSTANCE;
            return INSTANCE;
        }

        void initialise(Level logLevel, const std::string& outFilePath = "", bool dualOutput = false);

        int error(const char*, ...);
        void warning(const char*, ...);
        void info(const char*, ...);
        void debug(const char*, ...);

        template<typename... Args>
        int error(std::string& msg, Args... args)
        {
            return error(msg.c_str(), args...);
        }
        
        template<typename ... Args>
        void warning(std::string& msg, Args... args)
        {
            warning(msg.c_str(), args...);
        }

        template<typename ... Args>
        void info(std::string& msg, Args... args)
        {
            info(msg.c_str(), args...);
        }

        template<typename ... Args>
        void debug(std::string& msg, Args... args)
        {
            debug(msg.c_str(), args...);
        }

        // Returns the last N lines in reverse order
        std::string tail(unsigned int N = DEFAULT_TAIL_SIZE);

        Logger(Logger const &) = delete;
        Logger& operator=(Logger const &) = delete;

    private:
        Logger();
        ~Logger();
        
        std::string formatMsg(const char* fmt, va_list args);
        std::string getCurrentDateTimeString();
        void printMessage(const std::string& levelString, const std::string& msg, Level level);
        void flushBufferedLogs();

        Level m_level;
        std::ostream* m_outStream; // either set to console/file out stream
        bool m_fileOutput;
        bool m_dualOutput;
        std::mutex m_tailLock;
        size_t m_maxTailSize = DEFAULT_TAIL_SIZE;
        std::vector<std::pair<Level, std::string>> m_bufferedMessages;
        std::deque<std::pair<Level, std::string>> m_tail;
    };
} // namespace mosys

