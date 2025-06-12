// Copyright 2023 Mo-Sys Engineering Ltd. All Rights Reserved.

#pragma once

#include "InterpolationProcessor/LiveLinkBasicFrameInterpolateProcessor.h"
#include "MoSysLiveLinkFrameInterpolationProcessor.generated.h"

/**
 * Mo Sys interpolation.
 */
UCLASS(meta = (DisplayName = "Mo Sys Interpolation"))
class MOSYSTRACKING_API UMoSysLiveLinkFrameInterpolationProcessor : public ULiveLinkBasicFrameInterpolationProcessor
{
    GENERATED_BODY()

    public:
    class MOSYSTRACKING_API FMoSysLiveLinkFrameInterpolationProcessorWorker : public ULiveLinkBasicFrameInterpolationProcessor::FLiveLinkBasicFrameInterpolationProcessorWorker
    {
    public:
        FMoSysLiveLinkFrameInterpolationProcessorWorker(bool bInterpolatePropertyValues);

        virtual TSubclassOf<ULiveLinkRole> GetRole() const override;
        virtual void Interpolate(double InTime, const FLiveLinkStaticDataStruct& InStaticData, const TArray<FLiveLinkFrameDataStruct>& InSourceFrames, FLiveLinkSubjectFrameData& OutBlendedFrame, FLiveLinkInterpolationInfo& OutInterpolationInfo) override;
        virtual void Interpolate(const FQualifiedFrameTime& InTime, const FLiveLinkStaticDataStruct& InStaticData, const TArray<FLiveLinkFrameDataStruct>& InSourceFrames, FLiveLinkSubjectFrameData& OutBlendedFrame, FLiveLinkInterpolationInfo& OutInterpolationInfo) override;
    };

public:
    virtual TSubclassOf<ULiveLinkRole> GetRole() const override;
    virtual ULiveLinkFrameInterpolationProcessor::FWorkerSharedPtr FetchWorker() override;

private:
    TSharedPtr<FMoSysLiveLinkFrameInterpolationProcessorWorker, ESPMode::ThreadSafe> Instance;
};
