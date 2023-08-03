// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FilePickerPlugin/Public/FilePickerPluginBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFilePickerPluginBPLibrary() {}
// Cross Module References
	FILEPICKERPLUGIN_API UEnum* Z_Construct_UEnum_FilePickerPlugin_EDialogResult();
	UPackage* Z_Construct_UPackage__Script_FilePickerPlugin();
	FILEPICKERPLUGIN_API UClass* Z_Construct_UClass_UFilePickerPluginBPLibrary_NoRegister();
	FILEPICKERPLUGIN_API UClass* Z_Construct_UClass_UFilePickerPluginBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
// End Cross Module References
	static UEnum* EDialogResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FilePickerPlugin_EDialogResult, Z_Construct_UPackage__Script_FilePickerPlugin(), TEXT("EDialogResult"));
		}
		return Singleton;
	}
	template<> FILEPICKERPLUGIN_API UEnum* StaticEnum<EDialogResult>()
	{
		return EDialogResult_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDialogResult(EDialogResult_StaticEnum, TEXT("/Script/FilePickerPlugin"), TEXT("EDialogResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FilePickerPlugin_EDialogResult_Hash() { return 3296333771U; }
	UEnum* Z_Construct_UEnum_FilePickerPlugin_EDialogResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FilePickerPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDialogResult"), 0, Get_Z_Construct_UEnum_FilePickerPlugin_EDialogResult_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDialogResult::Successful", (int64)EDialogResult::Successful },
				{ "EDialogResult::Cancelled", (int64)EDialogResult::Cancelled },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Cancelled.Name", "EDialogResult::Cancelled" },
				{ "Comment", "/* \n*\x09""Function library class.\n*\x09""Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*\x09When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*\x09""BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*\x09""BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*\x09""DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*\x09\x09\x09\x09Its lets you name the node using characters not allowed in C++ function names.\n*\x09""CompactNodeTitle - the word(s) that appear on the node.\n*\x09Keywords -\x09the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. \n*\x09\x09\x09\x09Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*\x09""Category -\x09the category your node will be under in the Blueprint drop-down menu.\n*\n*\x09""For more info on custom blueprint nodes visit documentation:\n*\x09https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n*/" },
				{ "ModuleRelativePath", "Public/FilePickerPluginBPLibrary.h" },
				{ "Successful.Name", "EDialogResult::Successful" },
				{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FilePickerPlugin,
				nullptr,
				"EDialogResult",
				"EDialogResult",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(UFilePickerPluginBPLibrary::execOpenDirectoryDialog)
	{
		P_GET_ENUM_REF(EDialogResult,Z_Param_Out_OutputPin);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_FolderPath);
		P_GET_PROPERTY(FStrProperty,Z_Param_DialogTitle);
		P_GET_PROPERTY(FStrProperty,Z_Param_DefaultPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFilePickerPluginBPLibrary::OpenDirectoryDialog((EDialogResult&)(Z_Param_Out_OutputPin),Z_Param_Out_FolderPath,Z_Param_DialogTitle,Z_Param_DefaultPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFilePickerPluginBPLibrary::execOpenFileDialog)
	{
		P_GET_ENUM_REF(EDialogResult,Z_Param_Out_OutputPin);
		P_GET_TARRAY_REF(FString,Z_Param_Out_FilePath);
		P_GET_PROPERTY(FStrProperty,Z_Param_DialogTitle);
		P_GET_PROPERTY(FStrProperty,Z_Param_DefaultPath);
		P_GET_PROPERTY(FStrProperty,Z_Param_DefaultFile);
		P_GET_PROPERTY(FStrProperty,Z_Param_FileType);
		P_GET_UBOOL(Z_Param_IsMultiple);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFilePickerPluginBPLibrary::OpenFileDialog((EDialogResult&)(Z_Param_Out_OutputPin),Z_Param_Out_FilePath,Z_Param_DialogTitle,Z_Param_DefaultPath,Z_Param_DefaultFile,Z_Param_FileType,Z_Param_IsMultiple);
		P_NATIVE_END;
	}
	void UFilePickerPluginBPLibrary::StaticRegisterNativesUFilePickerPluginBPLibrary()
	{
		UClass* Class = UFilePickerPluginBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OpenDirectoryDialog", &UFilePickerPluginBPLibrary::execOpenDirectoryDialog },
			{ "OpenFileDialog", &UFilePickerPluginBPLibrary::execOpenFileDialog },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenDirectoryDialog_Statics
	{
		struct FilePickerPluginBPLibrary_eventOpenDirectoryDialog_Parms
		{
			EDialogResult OutputPin;
			FString FolderPath;
			FString DialogTitle;
			FString DefaultPath;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutputPin_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OutputPin;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FolderPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogTitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DialogTitle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DefaultPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenDirectoryDialog_Statics::NewProp_OutputPin_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenDirectoryDialog_Statics::NewProp_OutputPin = { "OutputPin", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FilePickerPluginBPLibrary_eventOpenDirectoryDialog_Parms, OutputPin), Z_Construct_UEnum_FilePickerPlugin_EDialogResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenDirectoryDialog_Statics::NewProp_FolderPath = { "FolderPath", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FilePickerPluginBPLibrary_eventOpenDirectoryDialog_Parms, FolderPath), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenDirectoryDialog_Statics::NewProp_DialogTitle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenDirectoryDialog_Statics::NewProp_DialogTitle = { "DialogTitle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FilePickerPluginBPLibrary_eventOpenDirectoryDialog_Parms, DialogTitle), METADATA_PARAMS(Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenDirectoryDialog_Statics::NewProp_DialogTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenDirectoryDialog_Statics::NewProp_DialogTitle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenDirectoryDialog_Statics::NewProp_DefaultPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenDirectoryDialog_Statics::NewProp_DefaultPath = { "DefaultPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FilePickerPluginBPLibrary_eventOpenDirectoryDialog_Parms, DefaultPath), METADATA_PARAMS(Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenDirectoryDialog_Statics::NewProp_DefaultPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenDirectoryDialog_Statics::NewProp_DefaultPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenDirectoryDialog_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenDirectoryDialog_Statics::NewProp_OutputPin_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenDirectoryDialog_Statics::NewProp_OutputPin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenDirectoryDialog_Statics::NewProp_FolderPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenDirectoryDialog_Statics::NewProp_DialogTitle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenDirectoryDialog_Statics::NewProp_DefaultPath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenDirectoryDialog_Statics::Function_MetaDataParams[] = {
		{ "Category", "FilePickerPlugin | OpenDirectoryDialog" },
		{ "CPP_Default_DefaultPath", "" },
		{ "CPP_Default_DialogTitle", "Open Directory Dialog" },
		{ "ExpandEnumAsExecs", "OutputPin" },
		{ "ModuleRelativePath", "Public/FilePickerPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenDirectoryDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFilePickerPluginBPLibrary, nullptr, "OpenDirectoryDialog", nullptr, nullptr, sizeof(FilePickerPluginBPLibrary_eventOpenDirectoryDialog_Parms), Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenDirectoryDialog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenDirectoryDialog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenDirectoryDialog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenDirectoryDialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenDirectoryDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenDirectoryDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenFileDialog_Statics
	{
		struct FilePickerPluginBPLibrary_eventOpenFileDialog_Parms
		{
			EDialogResult OutputPin;
			TArray<FString> FilePath;
			FString DialogTitle;
			FString DefaultPath;
			FString DefaultFile;
			FString FileType;
			bool IsMultiple;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutputPin_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OutputPin;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FilePath_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FilePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogTitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DialogTitle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DefaultPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultFile_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DefaultFile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FileType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileType;
		static void NewProp_IsMultiple_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsMultiple;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenFileDialog_Statics::NewProp_OutputPin_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenFileDialog_Statics::NewProp_OutputPin = { "OutputPin", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FilePickerPluginBPLibrary_eventOpenFileDialog_Parms, OutputPin), Z_Construct_UEnum_FilePickerPlugin_EDialogResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenFileDialog_Statics::NewProp_FilePath_Inner = { "FilePath", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenFileDialog_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FilePickerPluginBPLibrary_eventOpenFileDialog_Parms, FilePath), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenFileDialog_Statics::NewProp_DialogTitle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenFileDialog_Statics::NewProp_DialogTitle = { "DialogTitle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FilePickerPluginBPLibrary_eventOpenFileDialog_Parms, DialogTitle), METADATA_PARAMS(Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenFileDialog_Statics::NewProp_DialogTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenFileDialog_Statics::NewProp_DialogTitle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenFileDialog_Statics::NewProp_DefaultPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenFileDialog_Statics::NewProp_DefaultPath = { "DefaultPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FilePickerPluginBPLibrary_eventOpenFileDialog_Parms, DefaultPath), METADATA_PARAMS(Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenFileDialog_Statics::NewProp_DefaultPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenFileDialog_Statics::NewProp_DefaultPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenFileDialog_Statics::NewProp_DefaultFile_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenFileDialog_Statics::NewProp_DefaultFile = { "DefaultFile", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FilePickerPluginBPLibrary_eventOpenFileDialog_Parms, DefaultFile), METADATA_PARAMS(Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenFileDialog_Statics::NewProp_DefaultFile_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenFileDialog_Statics::NewProp_DefaultFile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenFileDialog_Statics::NewProp_FileType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenFileDialog_Statics::NewProp_FileType = { "FileType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FilePickerPluginBPLibrary_eventOpenFileDialog_Parms, FileType), METADATA_PARAMS(Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenFileDialog_Statics::NewProp_FileType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenFileDialog_Statics::NewProp_FileType_MetaData)) };
	void Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenFileDialog_Statics::NewProp_IsMultiple_SetBit(void* Obj)
	{
		((FilePickerPluginBPLibrary_eventOpenFileDialog_Parms*)Obj)->IsMultiple = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenFileDialog_Statics::NewProp_IsMultiple = { "IsMultiple", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FilePickerPluginBPLibrary_eventOpenFileDialog_Parms), &Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenFileDialog_Statics::NewProp_IsMultiple_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenFileDialog_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenFileDialog_Statics::NewProp_OutputPin_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenFileDialog_Statics::NewProp_OutputPin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenFileDialog_Statics::NewProp_FilePath_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenFileDialog_Statics::NewProp_FilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenFileDialog_Statics::NewProp_DialogTitle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenFileDialog_Statics::NewProp_DefaultPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenFileDialog_Statics::NewProp_DefaultFile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenFileDialog_Statics::NewProp_FileType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenFileDialog_Statics::NewProp_IsMultiple,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenFileDialog_Statics::Function_MetaDataParams[] = {
		{ "Category", "FilePickerPlugin | OpenFileDialog" },
		{ "CPP_Default_DefaultFile", "" },
		{ "CPP_Default_DefaultPath", "" },
		{ "CPP_Default_DialogTitle", "Open File Dialog" },
		{ "CPP_Default_FileType", "All (*)|*.*" },
		{ "CPP_Default_IsMultiple", "false" },
		{ "ExpandEnumAsExecs", "OutputPin" },
		{ "ModuleRelativePath", "Public/FilePickerPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenFileDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFilePickerPluginBPLibrary, nullptr, "OpenFileDialog", nullptr, nullptr, sizeof(FilePickerPluginBPLibrary_eventOpenFileDialog_Parms), Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenFileDialog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenFileDialog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenFileDialog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenFileDialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenFileDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenFileDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFilePickerPluginBPLibrary_NoRegister()
	{
		return UFilePickerPluginBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UFilePickerPluginBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFilePickerPluginBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_FilePickerPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFilePickerPluginBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenDirectoryDialog, "OpenDirectoryDialog" }, // 846680518
		{ &Z_Construct_UFunction_UFilePickerPluginBPLibrary_OpenFileDialog, "OpenFileDialog" }, // 44911106
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFilePickerPluginBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FilePickerPluginBPLibrary.h" },
		{ "ModuleRelativePath", "Public/FilePickerPluginBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFilePickerPluginBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFilePickerPluginBPLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFilePickerPluginBPLibrary_Statics::ClassParams = {
		&UFilePickerPluginBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFilePickerPluginBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFilePickerPluginBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFilePickerPluginBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFilePickerPluginBPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFilePickerPluginBPLibrary, 498415483);
	template<> FILEPICKERPLUGIN_API UClass* StaticClass<UFilePickerPluginBPLibrary>()
	{
		return UFilePickerPluginBPLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFilePickerPluginBPLibrary(Z_Construct_UClass_UFilePickerPluginBPLibrary, &UFilePickerPluginBPLibrary::StaticClass, TEXT("/Script/FilePickerPlugin"), TEXT("UFilePickerPluginBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFilePickerPluginBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
