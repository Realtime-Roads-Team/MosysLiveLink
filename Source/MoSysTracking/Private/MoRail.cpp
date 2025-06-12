// Copyright 2023 Mo-Sys Engineering Ltd. All Rights Reserved.

#include "MoSysMoRail.h"
#include "Async/Async.h"


DECLARE_LOG_CATEGORY_EXTERN(LogMoSysMoRail, Log, All);
DEFINE_LOG_CATEGORY(LogMoSysMoRail);

UMoRail::UMoRail()
{
}

UMoRail::~UMoRail()
{
}

bool UMoRail::SetMoRailAddress(FString IpAddress)
{
    return m_moRail.setMoRailAddress(TCHAR_TO_ANSI(*IpAddress));
}

bool UMoRail::SetPTZAddress(FString IpAddress)
{
    return m_moRail.setPTZAddress(TCHAR_TO_ANSI(*IpAddress));
}

void UMoRail::Connect()
{
    mosys::MoRail::ConnectCallback callback = [this](bool success)
        {
            UE_LOG(LogMoSysMoRail, Warning, TEXT("Connect callback"));
            AsyncTask(ENamedThreads::GameThread, [this, success]() {ConnectEvent.Broadcast(success); });
        };
    m_moRail.connect(callback);
}

void UMoRail::Disconnect()
{
    m_moRail.disconnect();
}

bool UMoRail::IsConnected() const
{
    return m_moRail.isConnected();
}

bool UMoRail::GotoPosition(std::int32_t Index)
{
    return m_moRail.gotoPosition(Index, [this](bool success)
        {
            AsyncTask(ENamedThreads::GameThread, [this, success]() {GotoPositionEvent.Broadcast(success); });
        });
}

bool UMoRail::Stop()
{
    return m_moRail.stop([this](bool success)
        {
            AsyncTask(ENamedThreads::GameThread, [this, success]() {StopEvent.Broadcast(success); });
        });
}

bool UMoRail::SetGotoMinTimeMs(std::int32_t TimeMs)
{
    return m_moRail.setGotoMinTimeMs(TimeMs, [this](bool success)
        {
            AsyncTask(ENamedThreads::GameThread, [this, success]() {SetGotoMinTimeEvent.Broadcast(success); });
        });
}

bool UMoRail::GetRequiredTimeMs(std::int32_t PositionIndex)
{
    return m_moRail.getRequiredTimeMs(PositionIndex, [this](bool success, int requiredTime)
        {
            AsyncTask(ENamedThreads::GameThread, [this, success, requiredTime]() {GetRequiredTimeEvent.Broadcast(success, requiredTime); });
        });
}

void UMoRail::SetMoRailPort(int port)
{
    return m_moRail.setMoRailPort(port);
}

void UMoRail::SetPtzPort(int port)
{
    m_moRail.setPtzPort(port);
}

bool UMoRail::FlushCommands()
{
    return m_moRail.flushCommands();
}
