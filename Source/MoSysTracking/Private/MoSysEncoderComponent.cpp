// Copyright 2023 Mo-Sys Engineering Ltd. All Rights Reserved.
#include "MoSysEncoderComponent.h"

#include "GameFramework/Actor.h"

#include "MoSysLiveLinkComponentController.h"
#include "MoSysTrackingPrivate.h"

UMoSysEncoderComponent::UMoSysEncoderComponent()
	: bEditorLiveTracking(true)
	, EncoderMode(EMoSysEncoderMode::MEM_Linear)
	, EncoderAxis(EMoSysEncoderAxis::MEA_X)
	, Scale(0.5f)
	, bCanOutputLiveLinkError(true)
	, bCanOutputLiveDataError(true)
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.
	PrimaryComponentTick.bCanEverTick = true;
	bTickInEditor = true;
}

// Called every frame
void UMoSysEncoderComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	AActor* Actor = GetOwner();
	if (Actor == nullptr)
	{
		return;
	}

	// Get MoSysLiveLinkComponentController
	// If you didn't get it and have not output a message yet then print to console.
	UMoSysLiveLinkComponentController* MoSysLiveLink = Actor->FindComponentByClass<UMoSysLiveLinkComponentController>();
	if (MoSysLiveLink == nullptr)
	{
		if (bCanOutputLiveLinkError)
		{
			bCanOutputLiveLinkError = false;
			UE_LOG(LogMoSysTracking, Error, TEXT("Could not find Mo-Sys Live Link Component Controller. Make sure this component is attached to %s."), *Actor->GetName());
		}
	}
	else
	{
		// We want this back to true in case we lose the Live Link 
		// and need to output again that we can't find it again.
		if (!bCanOutputLiveLinkError)
		{
			bCanOutputLiveLinkError = true;
		}
		
		// Output an error if we're not receiving valid data but only once.
		if (!MoSysLiveLink->HasValidData())
		{
			if (bCanOutputLiveDataError)
			{
				bCanOutputLiveDataError = false;
				UE_LOG(LogMoSysTracking, Error, TEXT("%s's Mo-Sys Encoder Component is not receiving valid data from Mo-Sys Live Link Component Controller."), *Actor->GetName());
			}
		}
		else
		{
			// Same thing here, allow the component to output an error again 
			// if data stops being valid. 
			if (!bCanOutputLiveDataError)
			{
				bCanOutputLiveDataError = true;
			}
			
			// Extract the ticks from the encoder, apply a scaling factor to them
			// and then apply the result to the actor's chosen axis on location
			// or rotation (depending on options provided).
			const FLiveLinkMoSysFrameData FrameData = MoSysLiveLink->GetTrackingData();
			const float Result = FrameData.RawEncoder * Scale;
			if (EncoderMode == EMoSysEncoderMode::MEM_Linear)
			{
				FVector CurrentLocation = Actor->GetActorLocation();
				switch (EncoderAxis)
				{
				case EMoSysEncoderAxis::MEA_X:
					Actor->SetActorLocation( CurrentLocation + FVector(Result, 0, 0));
					break; 
				case EMoSysEncoderAxis::MEA_Y:
					Actor->SetActorLocation( CurrentLocation + FVector(0, Result, 0));
					break;
				case EMoSysEncoderAxis::MEA_Z:
					Actor->SetActorLocation( CurrentLocation + FVector(0, 0, Result));
					break;
				}
			}
			else 
			{
				FRotator CurrentRotator = Actor->GetActorRotation();
				switch (EncoderAxis)
				{
				case EMoSysEncoderAxis::MEA_X:
					CurrentRotator.Roll += Result;
					Actor->SetActorRotation(CurrentRotator);
					break; 
				case EMoSysEncoderAxis::MEA_Y:
				{
					// There is a problem with Pitch (Y axis) which is forced to be between -90 and 90.
					// A quick check seems to point to this being an Unreal enforcement to avoid Gimbal lock.
					// As a result it won't rotate properly and will in fact jitter at 89 permanently.
					/**
					 * \file MoSysEncoderComponent.h
					 * \todo Below is a simple solution that is working but worth checking for other solutions in the future.
					 */
					const FQuat CurrentQuatRotation = FQuat(CurrentRotator);
					const FQuat RelRotQuat = FQuat(FRotator(Result, 0, 0));
					const FQuat NewRelRotQuat = RelRotQuat * CurrentQuatRotation;
					Actor->SetActorRotation(NewRelRotQuat);
					break;
				}
				case EMoSysEncoderAxis::MEA_Z:
					CurrentRotator.Yaw += Result;
					Actor->SetActorRotation(CurrentRotator);
					break;
				}
			}
		}
	}
}

#if WITH_EDITOR
// Giving the option to tick or not in editor.
void UMoSysEncoderComponent::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	if (PropertyChangedEvent.MemberProperty && PropertyChangedEvent.MemberProperty->GetFName() == "bEditorLiveTracking")
	{
		bTickInEditor = bEditorLiveTracking;
	}
}
#endif 


