// Copyright 2023 Mo-Sys Engineering. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Blueprint/UserWidget.h"
#include "LensTweakerFunctionLibrary.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(LogMoSysLensTweaker, Log, All);

USTRUCT(BlueprintType)
struct FMoSysTrackingStatusDetail
{
    GENERATED_BODY()

        UPROPERTY(BlueprintReadWrite, Category = "Mo-Sys|LensDistortion")
        FString Detail = "";

    UPROPERTY(BlueprintReadWrite, Category = "Mo-Sys|LensDistortion")
        FColor Color = FColor::Transparent;
};

UCLASS()
class ULensTweakerFunctionLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()
public:

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Float to string with decimal places"), Category = "Mo-Sys|LensDistortion")
    static FString FloatToDPString(float F, int32 DecimalPlaces);

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Unsigned int16 to percent string"), Category = "Mo-Sys|LensDistortion")
    static FString UnsignedIntToPercentString(int32 I, int32 DecimalPlaces);

    UFUNCTION(BlueprintCallable, Category = "Mo-Sys|LensDistortion")
    static void GetWidgetCentreLocation(const class UWidget* ParentWidget, const class UWidget* Widget, FVector2D& OutCentrePosition);

    /**
    * Decrypt Lens File
    */
    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Decrypt Lens File", Keywords = "Decrypt File"), Category = "Mo-Sys|LensDistortion")
    static void DecryptLensFile(FString SelectedLensFileName, TArray<uint8> EncryptedData, FString HardwareID, FString UserPin, FString & DecryptedLensFileData, bool &Success);

    UFUNCTION(BlueprintCallable, Category = "Mo-Sys|LensDistortion")
    static void SaveTweakerState();
};
