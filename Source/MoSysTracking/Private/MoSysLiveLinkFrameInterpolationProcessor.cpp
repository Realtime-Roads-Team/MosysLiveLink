// Copyright 2023 Mo-Sys Engineering Ltd. All Rights Reserved.

#include "MoSysLiveLinkFrameInterpolationProcessor.h"
#include "MoSysLiveLinkRole.h"

namespace MoSysLiveLinkInterpolationUtils
{
    double ApplyOffset(double InTime, double InOffset)
    {
        InTime -= InOffset;
        return InTime;
    }
    FQualifiedFrameTime ApplyOffset(const FQualifiedFrameTime& InTime, double InOffset)
    {
        FQualifiedFrameTime InTimeCopy = InTime;
        InTimeCopy.Time = (InTimeCopy.AsSeconds() - InOffset) * InTimeCopy.Rate;
        return InTime;
    }

    template<class TTimeType>
    TTimeType GetOffsettedTime(TTimeType& InTime, int InSourceFramesNum)
    {
        double Offset = 0;

        if (InSourceFramesNum)
        {
            Offset = 1.0 / InSourceFramesNum;
        }

        return ApplyOffset(InTime, Offset);
    }
}

/**
 * UMoSysLiveLinkFrameInterpolationProcessor::FMoSysLiveLinkFrameInterpolationProcessorWorker
 */
UMoSysLiveLinkFrameInterpolationProcessor::FMoSysLiveLinkFrameInterpolationProcessorWorker::FMoSysLiveLinkFrameInterpolationProcessorWorker(bool bInInterpolatePropertyValues)
    : ULiveLinkBasicFrameInterpolationProcessor::FLiveLinkBasicFrameInterpolationProcessorWorker(bInInterpolatePropertyValues)
{}

TSubclassOf<ULiveLinkRole> UMoSysLiveLinkFrameInterpolationProcessor::FMoSysLiveLinkFrameInterpolationProcessorWorker::GetRole() const
{
    return UMoSysLiveLinkRole::StaticClass();
}

void UMoSysLiveLinkFrameInterpolationProcessor::FMoSysLiveLinkFrameInterpolationProcessorWorker::Interpolate(double InTime, const FLiveLinkStaticDataStruct& InStaticData, const TArray<FLiveLinkFrameDataStruct>& InSourceFrames, FLiveLinkSubjectFrameData& OutBlendedFrame, FLiveLinkInterpolationInfo& OutInterpolationInfo)
{
    double InTimeOffsetted = MoSysLiveLinkInterpolationUtils::GetOffsettedTime(InTime, InSourceFrames.Num());
    Super::FLiveLinkBasicFrameInterpolationProcessorWorker::Interpolate(InTimeOffsetted, InStaticData, InSourceFrames, OutBlendedFrame, OutInterpolationInfo);
}

void UMoSysLiveLinkFrameInterpolationProcessor::FMoSysLiveLinkFrameInterpolationProcessorWorker::Interpolate(const FQualifiedFrameTime& InTime, const FLiveLinkStaticDataStruct& InStaticData, const TArray<FLiveLinkFrameDataStruct>& InSourceFrames, FLiveLinkSubjectFrameData& OutBlendedFrame, FLiveLinkInterpolationInfo& OutInterpolationInfo)
{
    FQualifiedFrameTime InTimeOffsetted = MoSysLiveLinkInterpolationUtils::GetOffsettedTime(InTime, InSourceFrames.Num());
    Super::FLiveLinkBasicFrameInterpolationProcessorWorker::Interpolate(InTimeOffsetted, InStaticData, InSourceFrames, OutBlendedFrame, OutInterpolationInfo);
}


/**
 * ULiveLinkFrameInterpolationProcessor
 */
TSubclassOf<ULiveLinkRole> UMoSysLiveLinkFrameInterpolationProcessor::GetRole() const
{
    return UMoSysLiveLinkRole::StaticClass();
}

ULiveLinkFrameInterpolationProcessor::FWorkerSharedPtr UMoSysLiveLinkFrameInterpolationProcessor::FetchWorker()
{
    if (!Instance.IsValid())
    {
        Instance = MakeShared<FMoSysLiveLinkFrameInterpolationProcessorWorker, ESPMode::ThreadSafe>(bInterpolatePropertyValues);
    }

    return Instance;
}