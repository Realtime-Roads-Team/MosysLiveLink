// Copyright 2023 Mo-Sys Engineering Ltd. All Rights Reserved.

#pragma once

#include "Containers/CircularQueue.h"

#define QUEUE_MAX 256

// Queue that can be default constructed in a UObject
template<typename T> class FMoSysQueue : public TCircularQueue<T>
{
public:
    FMoSysQueue() : TCircularQueue<T>(QUEUE_MAX) {}
    ~FMoSysQueue() {}

    // here for convenience
    uint32 FrameDelay = 0;
};
