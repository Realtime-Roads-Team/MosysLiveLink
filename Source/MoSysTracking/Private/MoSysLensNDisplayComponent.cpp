// Copyright 2023 Mo-Sys Engineering Ltd. All Rights Reserved.
#include "MoSysLensNDisplayComponent.h"

#include "CineCameraComponent.h"
#include "MoSysLiveLinkComponentController.h"

#include "Engine/World.h"

UMoSysLensNDisplayComponent::UMoSysLensNDisplayComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
	PrimaryComponentTick.bStartWithTickEnabled = true;
	PrimaryComponentTick.TickGroup = ETickingGroup::TG_LastDemotable;
	bTickInEditor = true;

	//Hook up to PostActorTick to handle nodal offset
	FWorldDelegates::OnWorldPostActorTick.AddUObject(this, &UMoSysLensNDisplayComponent::OnPostActorTick);
}

void UMoSysLensNDisplayComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	if (GetOwner() == nullptr)
	{
		return;
	}
	if (CameraComponent == nullptr)
	{
		CameraComponent = GetOwner()->FindComponentByClass<UCineCameraComponent>();
	}
	if (MoSysLiveLink == nullptr)
	{
		MoSysLiveLink = GetOwner()->FindComponentByClass<UMoSysLiveLinkComponentController>();
	}
	
	if (CameraComponent != nullptr && MoSysLiveLink != nullptr)
	{
		FLiveLinkMoSysFrameData TrackingFrame = MoSysLiveLink->GetTrackingData();
		if (!bManualZoom)
		{
			SetFieldOfView(TrackingFrame.Lens.FxVirtualCamera);
		}

		if (!bManualFocus)
		{
			SetFocalDistance(TrackingFrame.Lens.RecipFocalDistance);
		}
	}
}

void UMoSysLensNDisplayComponent::OnPostActorTick(UWorld* World, ELevelTick TickType, float DeltaSeconds)
{
	// Modelled on super class
	if (World != nullptr && World == GetWorld())
	{
		if (CameraComponent != nullptr && MoSysLiveLink != nullptr)
		{
			FLiveLinkMoSysFrameData TrackingFrame = MoSysLiveLink->GetTrackingData();

			SetEPD(TrackingFrame.Lens.EntrancePupilDistance);
		}
	}
}
void UMoSysLensNDisplayComponent::SetFieldOfView(float FxVirtualCamera)
{
	if (FxVirtualCamera == 0)
	{
		return;
	}
	float FOV = FMath::RadiansToDegrees(2 * atan(1920.0f / (2 * FxVirtualCamera)));
	CameraComponent->SetFieldOfView(FOV);
}

void UMoSysLensNDisplayComponent::SetFocalDistance(float RecipFocalDistance)
{
	if (RecipFocalDistance == 0)
	{
		return;
	}
	float FD = 100.0f / RecipFocalDistance;
	CameraComponent->FocusSettings.ManualFocusDistance = FD;
	FD += CameraComponent->FocusSettings.FocusOffset;

	CameraComponent->PostProcessSettings.DepthOfFieldFocalDistance = FD;
}

void UMoSysLensNDisplayComponent::SetEPD(float EPD)
{
	EPD = EPD * 100;// m -> cm
	CameraComponent->SetRelativeLocation(FVector(EPD, 0, 0));
}