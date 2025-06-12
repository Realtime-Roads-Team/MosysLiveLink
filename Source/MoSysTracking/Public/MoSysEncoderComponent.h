// Copyright 2023 Mo-Sys Engineering Ltd. All Rights Reserved.
#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MoSysEncoderComponent.generated.h"

class UMoSysLiveLinkComponentController;

UENUM()
enum class EMoSysEncoderMode : uint8
{
	/** The encoder is travelling on a continuous line. */
	MEM_Linear UMETA(DisplayName = "Linear"),

	/** The encoder is positioned on a rotating object. */
	MEM_Angular UMETA(DisplayName = "Angular")
};

UENUM()
enum class EMoSysEncoderAxis : uint8
{
	MEA_X UMETA(DisplayName = "X"),
	MEA_Y UMETA(DisplayName = "Y"),
	MEA_Z UMETA(DisplayName = "Z")
};

/**
 * Mo-Sys Encoder Component, needs a Mo-Sys Live Link to read data from a Mo-Sys Encoder and apply it to an actor in a level.
 */
UCLASS(ClassGroup=(Custom), meta=(DisplayName = "Mo Sys Encoder Component", BlueprintSpawnableComponent))
class MOSYSTRACKING_API UMoSysEncoderComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UMoSysEncoderComponent();

	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

#if WITH_EDITOR
	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent) override;
#endif
	
protected:
	
	/** Editor Live Tracking - Have this component tick in Editor as well, no just in Play Mode. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, DisplayName = "Editor Live Tracking", Category = "Mo-Sys")
	bool bEditorLiveTracking;
	
	/** Encoder Mode - Linear applies to transform, Angular applies to rotation. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mo-Sys")
		EMoSysEncoderMode EncoderMode;

	/** Encoder Axis - Axis to apply the scaling factor to. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mo-Sys")
		EMoSysEncoderAxis EncoderAxis;
	
	/** Scaling factor - Use this value to calibrate how far the encoder travels. E.g. Full turn (360 degrees) in 1800 ticks => Scale = 0.2. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mo-Sys")
		float Scale;

private:
	bool bCanOutputLiveLinkError;
	bool bCanOutputLiveDataError;
};