// Copyright 2024 Mo-Sys Engineering Ltd. All Rights Reserved.
#pragma once 

#include <cstdint>
#include <stdlib.h>
#include <string>
#include "mosys-cpp/tracking/TrackingTypes.h"

namespace mosys
{
    namespace tracking
    { 
       /**
         * Tracking communication mode.
         * Different Mo-Sys hardware support serial (RS422) and UDP communication modes.
         */
        enum class CommunicationMode
        {
            SerialBlocking = 0,
            SerialNonBlocking = 1,
            UDPBlocking = 2,
            UDPNonBlocking = 3,
            TrackerLiteSerial = 4
        };

        /**
         * Worker can be in either reader or writer mode.
         */
        enum class NetworkMode
        {
            Read = 0,
            Write
        };


        /**
         * Mo-Sys tracking thread worker.
         * A data manager designed to be wrapped in background thread-safe worker.
         */
        class Worker
        {
        public:

            /**
             * Create worker.
             * Create a worker with the given mode, protocol and either as a reader or write.
             *
             * @param communicationMode the communication mode
             * @param protocol the communication protocol
             * @param mode of the new worker which can be either reader or writer. Defaults to reader.
             * @return the Worker or nullptr if a Worker could not be created
             */
            static Worker *createWorker(CommunicationMode communicationMode, Protocol protocol, NetworkMode mode = NetworkMode::Read);

            /**
             * Destruct worker.
             */
            virtual ~Worker();

            /**
             * Initialise worker.
             * Initialise this worker's port with a given port address string.
             * If an error occured more information is available from getLastErrorMessage()
             *
             * @see getLastErrorMessage()
             *
             * @param port a string holding the port name or number
             * @param address an optional string holding the IP address of the local network interface when in read mode and the target ip when in write mode
             * @return true if the port was initialised successfully
             */
            virtual bool init(const char* port, const char* address = "");

            /**
             * Connect to the port.
             * This should be called after successful initialisation.
             * If an error occured more information is available from getLastErrorMessage()
             *
             * @see init()
             * @see getLastErrorMessage()
             *
             * @return true if the worker has connected to the port
             */
            bool connect();

            /**
             * Is the port ready to read.
             *
             * @see init()
             * @see connect()
             *
             * @return true if initialised and connected
             */
            bool isReady();

            /**
             * Either read or write data if a ReadWorker or WriteWorker
             *
             * @see ReadWorker
             * @see WriteWorker
             * @see TrackingFrame
             * @see getLastErrorMessage()
             * @return true if the data operation was successful
             */
            virtual bool execute(TrackingFrame &frame) = 0;


            /**
            * Deprecated, use execute instead.
            * @see execute
            */
            bool read(TrackingFrame& frame)
            {
                return execute(frame);
            }

            /*
            * Disconnect worker.
            */
            void disconnect();

            /**
             * Disconnect from and close port.
             */
            void stop();

            /**
             * Retrieve last error message.
             * If an error occured during initialisation, connection or read, this should be
             * called to obtain more information on the error.
             *
             * @param message the error message
             * return true if an error occured
             */
            bool getLastErrorMessage(std::string &message);

            /**
             * get the network mode this worker was created with
             * return NetworkMode of the worker
             */
            NetworkMode getNetworkMode() const;

        protected:
            /** Internal use only */
            Worker();
            TrackingPort* m_port;
            bool m_initialised;
            bool m_connected;
            std::string m_lastErrorMessage;
            NetworkMode m_networkMode;
            std::mutex *m_mutex;
        };

        class ReadWorker : public Worker
        {
        public:
            /**
             * Read tracking data.
             * Read tracking data from Mo-Sys hardware.
             * If an error occured more information is available from getLastErrorMessage()
             *
             * @see TrackingFrame
             * @see getLastErrorMessage()
             *
             * @param frame a structure reference the data will be written to.
             * @return true if the data read was successful
             */
            bool execute(TrackingFrame &frame) override;
            virtual ~ReadWorker();

        private:
            friend Worker* Worker::createWorker(CommunicationMode communicationMode, Protocol protocol, NetworkMode mode);
            ReadWorker(CommunicationMode communicationMode, Protocol protocol);
            PacketParser* m_parser;
        };

        class WriteWorker : public Worker
        {
        public:
            /**
             * Write tracking data.
             * Write tracking data to address and port.
             * If an error occured more information is available from getLastErrorMessage()
             *
             * @see TrackingFrame
             * @see getLastErrorMessage()
             *
             * @param frame a structure reference the data will be written to.
             * @return true if the data read was successful
             */
            bool execute(TrackingFrame &frame) override;
            virtual ~WriteWorker();

        private:
            friend Worker* Worker::createWorker(CommunicationMode communicationMode, Protocol protocol, NetworkMode mode);
            WriteWorker(CommunicationMode communicationMode, Protocol protocol);
            PacketBuilder* m_builder;
        };
    }
}

