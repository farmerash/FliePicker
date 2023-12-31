// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "FilePickerPluginBPLibrary.generated.h"

/* 
*	Function library class.
*	Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.
*
*	When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.
*	BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.
*	BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.
*	DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.
*				Its lets you name the node using characters not allowed in C++ function names.
*	CompactNodeTitle - the word(s) that appear on the node.
*	Keywords -	the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. 
*				Good example is "Print String" node which you can find also by using keyword "log".
*	Category -	the category your node will be under in the Blueprint drop-down menu.
*
*	For more info on custom blueprint nodes visit documentation:
*	https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation
*/
UENUM()
enum class EDialogResult : uint8
{
	Successful, Cancelled
};

UCLASS()
class UFilePickerPluginBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "FilePickerPlugin | OpenFileDialog", meta = (ExpandEnumAsExecs = "OutputPin"))
		static void OpenFileDialog(
			EDialogResult& OutputPin,
			TArray<FString>& FilePath,
			const FString& DialogTitle = TEXT("Open File Dialog"),
			const FString& DefaultPath = TEXT(""),
			const FString& DefaultFile = TEXT(""),
			const FString& FileType = TEXT("All (*)|*.*"),
			bool IsMultiple = false
		);

	UFUNCTION(BlueprintCallable, Category = "FilePickerPlugin | OpenDirectoryDialog", meta = (ExpandEnumAsExecs = "OutputPin"))
		static void OpenDirectoryDialog(
			EDialogResult& OutputPin, 
			FString& FolderPath,
			const FString& DialogTitle = TEXT("Open Directory Dialog"),
			const FString& DefaultPath = TEXT("")
		);

protected:
	static void* GetWindowHandle();
};