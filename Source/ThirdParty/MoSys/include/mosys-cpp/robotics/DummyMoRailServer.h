// Copyright 2024 Mo-Sys Engineering Ltd. All Rights Reserved.
#pragma once

#include <string>
#include <memory>

namespace mosys
{

class DummyMoRailServer
{
public:
    DummyMoRailServer(const char* address);
    DummyMoRailServer(const char* address, int port);

    ~DummyMoRailServer();

    void setName(const char* name);

    static std::string sendReceive(const char* address, int port, std::string message);

private:
    struct Pimpl;
    std::unique_ptr<Pimpl> m_pimpl;
};


} // namespace mosys
