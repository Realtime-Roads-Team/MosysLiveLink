// Copyright 2023 Mo-Sys Engineering. All Rights Reserved.

#include "LensTweakerFunctionLibrary.h"
#include "IPAddress.h"
#include "SocketSubsystem.h"
#include "Misc/Paths.h"
#include "GenericPlatform/GenericWindow.h"
#include "Widgets/SWindow.h"
#include "Misc/FileHelper.h"
#include "HAL/FileManager.h"
#include "Kismet/GameplayStatics.h"

#include "lens/LensFile.h"

#include <iomanip>
#include <sstream>

#if WITH_EDITOR
#include "Editor.h"
#endif

DEFINE_LOG_CATEGORY(LogMoSysLensTweaker);

FString ULensTweakerFunctionLibrary::FloatToDPString(float F, int32 DecimalPlaces)
{
    std::stringstream stream;
    stream << std::fixed << std::setprecision(DecimalPlaces) << F;
    return UTF8_TO_TCHAR(stream.str().c_str());
}

FString ULensTweakerFunctionLibrary::UnsignedIntToPercentString(int32 I, int32 DecimalPlaces)
{
    float Percent = (float)I / 655.36f;
    return FloatToDPString(Percent, DecimalPlaces) + "%";
}

void ULensTweakerFunctionLibrary::GetWidgetCentreLocation(const UWidget* ParentWidget, const UWidget* Widget, FVector2D& OutCentrePosition)
{
    if (ParentWidget && Widget)
    {
        FGeometry ParentGeometry = ParentWidget->GetCachedGeometry();
        OutCentrePosition = ParentGeometry.AbsoluteToLocal(
            Widget->GetCachedGeometry().GetAbsolutePosition() +
            Widget->GetCachedGeometry().GetLocalSize() / 2.f);
    }
}

void ULensTweakerFunctionLibrary::DecryptLensFile(FString SelectedLensFileName, TArray<uint8> EncryptedData, FString HardwareID, FString UserPin, FString &DecryptedLensFileData, bool &Success)
{
    size_t EncryptedDataLength = EncryptedData.Num();
    size_t OutDecryptedLensFileSize = 0;
    char* DecryptedFile = new char[EncryptedDataLength];
    if (mosys::lens::DecryptLensFile((const ANSICHAR*)EncryptedData.GetData(), EncryptedDataLength,
        TCHAR_TO_ANSI(*HardwareID), TCHAR_TO_ANSI(*UserPin), DecryptedFile, EncryptedDataLength, OutDecryptedLensFileSize))
    {
        Success = true;
        DecryptedLensFileData = FString(DecryptedFile);
        delete DecryptedFile;
        return;
    }
    delete DecryptedFile;
    Success = false;
}

void ULensTweakerFunctionLibrary::SaveTweakerState()
{
#if WITH_EDITOR
    TArray<AActor*> PlayActorArray;
    UGameplayStatics::GetAllActorsOfClass(GEditor->PlayWorld, AActor::StaticClass(), PlayActorArray);
    AActor* Graphic1Play = nullptr;
    AActor* Graphic2Play = nullptr;
    AActor* Graphic3Play = nullptr;
    AActor* CalibrationPolesPlay = nullptr;

    for (auto Actor : PlayActorArray)
    {
        if (Actor->GetActorLabel().Equals(TEXT("Mo-SysTweakerGraphic1")))
        {
            Graphic1Play = Actor;
        }
        else if (Actor->GetActorLabel().Equals(TEXT("Mo-SysTweakerGraphic2")))
        {
            Graphic2Play = Actor;
        }
        else if (Actor->GetActorLabel().Equals(TEXT("Mo-SysTweakerGraphic3")))
        {
            Graphic3Play = Actor;
        }
        else if (Actor->GetActorLabel().Contains(TEXT("MoSysCalibrationPoles")))
        {
            CalibrationPolesPlay = Actor;
        }
    }

    TArray<AActor*> EditorActorArray;
    UGameplayStatics::GetAllActorsOfClass(GEditor->EditorWorld, AActor::StaticClass(), EditorActorArray);
    AActor* Graphic1Editor = nullptr;
    AActor* Graphic2Editor = nullptr;
    AActor* Graphic3Editor = nullptr;

    // since CalibrationPoles actor was in the scene already and is always the same, we can use GetEditorWorldCounterpartActor()
    AActor* CalibrationPolesEditor = EditorUtilities::GetEditorWorldCounterpartActor(CalibrationPolesPlay); 

    for (auto Actor : EditorActorArray)
    {
        if (Actor->GetActorLabel().Equals(TEXT("Mo-SysTweakerGraphic1")))
        {
            Graphic1Editor = Actor;
        }
        else if (Actor->GetActorLabel().Equals(TEXT("Mo-SysTweakerGraphic2")))
        {
            Graphic2Editor = Actor;
        }
        else if (Actor->GetActorLabel().Equals(TEXT("Mo-SysTweakerGraphic3")))
        {
            Graphic3Editor = Actor;
        }
    }
    const auto CopyOptions = (EditorUtilities::ECopyOptions::Type)(
        EditorUtilities::ECopyOptions::CallPostEditChangeProperty |
        EditorUtilities::ECopyOptions::CallPostEditMove |
        EditorUtilities::ECopyOptions::FilterBlueprintReadOnly);

    if (Graphic1Play != nullptr && Graphic1Editor != nullptr)
    {
        if (Graphic1Play->GetClass() == Graphic1Editor->GetClass())
        {
            EditorUtilities::CopyActorProperties(Graphic1Play, Graphic1Editor, CopyOptions);

            //need to do this manually because CopyActorProperties doesn't copy Transform for some reason
            Graphic1Editor->SetActorTransform(Graphic1Play->GetActorTransform()); 
        }
        else
        {
            UE_LOG(LogMoSysLensTweaker, Error, TEXT("Cannot copy properties from actor of type '%s' to type '%s'"), *Graphic1Play->GetClass()->GetName(), *Graphic1Editor->GetClass()->GetName());
        }
    }
    if (Graphic2Play != nullptr && Graphic2Editor != nullptr)
    {
        if (Graphic2Play->GetClass() == Graphic2Editor->GetClass())
        {
            EditorUtilities::CopyActorProperties(Graphic2Play, Graphic2Editor, CopyOptions);

            //need to do this manually because CopyActorProperties doesn't copy Transform for some reason
            Graphic2Editor->SetActorTransform(Graphic2Play->GetActorTransform());
        }
        else
        {
            UE_LOG(LogMoSysLensTweaker, Error, TEXT("Cannot copy properties from actor of type '%s' to type '%s'"), *Graphic2Play->GetClass()->GetName(), *Graphic2Editor->GetClass()->GetName());
        }
    }
    if (Graphic3Play != nullptr && Graphic3Editor != nullptr)
    {
        if (Graphic3Play->GetClass() == Graphic3Editor->GetClass())
        {
            EditorUtilities::CopyActorProperties(Graphic3Play, Graphic3Editor, CopyOptions);

            //need to do this manually because CopyActorProperties doesn't copy Transform for some reason
            Graphic3Editor->SetActorTransform(Graphic3Play->GetActorTransform());
        }
        else
        {
            UE_LOG(LogMoSysLensTweaker, Error, TEXT("Cannot copy properties from actor of type '%s' to type '%s'"), *Graphic3Play->GetClass()->GetName(), *Graphic3Editor->GetClass()->GetName());
        }
    }
    if (CalibrationPolesPlay != nullptr && CalibrationPolesEditor != nullptr)
    {
        if (CalibrationPolesPlay->GetClass() == CalibrationPolesEditor->GetClass())
        {
            EditorUtilities::CopyActorProperties(CalibrationPolesPlay, CalibrationPolesEditor, CopyOptions);
        }
        else
        {
            UE_LOG(LogMoSysLensTweaker, Error, TEXT("Cannot copy properties from actor of type '%s' to type '%s'"), *CalibrationPolesPlay->GetClass()->GetName(), *CalibrationPolesEditor->GetClass()->GetName());
        }
    }
#endif
}