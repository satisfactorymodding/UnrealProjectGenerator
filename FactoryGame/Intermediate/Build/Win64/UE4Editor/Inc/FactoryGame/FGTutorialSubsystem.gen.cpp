// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGTutorialSubsystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGTutorialSubsystem() {}
// Cross Module References
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FTutorialData();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGMessageBase_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGTutorialSubsystem_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGTutorialSubsystem();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGTutorialSubsystem_AddToBuiltClasses();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGTutorialSubsystem_ClearBuiltData();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGTutorialSubsystem_OnBuildingBuilt();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGItemDescriptor_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGPlayerState_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSaveInterface_NoRegister();
// End Cross Module References
class UScriptStruct* FTutorialData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FTutorialData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTutorialData, Z_Construct_UPackage__Script_FactoryGame(), TEXT("TutorialData"), sizeof(FTutorialData), Get_Z_Construct_UScriptStruct_FTutorialData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTutorialData(FTutorialData::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("TutorialData"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFTutorialData
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFTutorialData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TutorialData")),new UScriptStruct::TCppStructOps<FTutorialData>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFTutorialData;
	struct Z_Construct_UScriptStruct_FTutorialData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MessageID_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_MessageID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClassBuilt_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ClassBuilt;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "FGTutorialSubsystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTutorialData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTutorialData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_MessageID_MetaData[] = {
		{ "Category", "Tutorial" },
		{ "ModuleRelativePath", "FGTutorialSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_MessageID = { UE4CodeGen_Private::EPropertyClass::Class, "MessageID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000010001, 1, nullptr, STRUCT_OFFSET(FTutorialData, MessageID), Z_Construct_UClass_UFGMessageBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_MessageID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_MessageID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_ClassBuilt_MetaData[] = {
		{ "Category", "Tutorial" },
		{ "ModuleRelativePath", "FGTutorialSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_ClassBuilt = { UE4CodeGen_Private::EPropertyClass::Class, "ClassBuilt", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000010001, 1, nullptr, STRUCT_OFFSET(FTutorialData, ClassBuilt), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_ClassBuilt_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_ClassBuilt_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTutorialData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_MessageID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_ClassBuilt,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTutorialData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"TutorialData",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FTutorialData),
		alignof(FTutorialData),
		Z_Construct_UScriptStruct_FTutorialData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialData_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTutorialData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTutorialData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TutorialData"), sizeof(FTutorialData), Get_Z_Construct_UScriptStruct_FTutorialData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTutorialData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTutorialData_CRC() { return 1650527489U; }
	void UFGTutorialSubsystem::StaticRegisterNativesUFGTutorialSubsystem()
	{
		UClass* Class = UFGTutorialSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddToBuiltClasses", &UFGTutorialSubsystem::execAddToBuiltClasses },
			{ "ClearBuiltData", &UFGTutorialSubsystem::execClearBuiltData },
			{ "OnBuildingBuilt", &UFGTutorialSubsystem::execOnBuildingBuilt },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGTutorialSubsystem_AddToBuiltClasses_Statics
	{
		struct FGTutorialSubsystem_eventAddToBuiltClasses_Parms
		{
			TSubclassOf<UObject>  inClass;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGTutorialSubsystem_AddToBuiltClasses_Statics::NewProp_inClass = { UE4CodeGen_Private::EPropertyClass::Class, "inClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGTutorialSubsystem_eventAddToBuiltClasses_Parms, inClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGTutorialSubsystem_AddToBuiltClasses_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGTutorialSubsystem_AddToBuiltClasses_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGTutorialSubsystem_AddToBuiltClasses_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tutorial" },
		{ "ModuleRelativePath", "FGTutorialSubsystem.h" },
		{ "ToolTip", "Starts checking if we should show a tutorial for the thing that was built" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGTutorialSubsystem_AddToBuiltClasses_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGTutorialSubsystem, "AddToBuiltClasses", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGTutorialSubsystem_eventAddToBuiltClasses_Parms), Z_Construct_UFunction_UFGTutorialSubsystem_AddToBuiltClasses_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGTutorialSubsystem_AddToBuiltClasses_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGTutorialSubsystem_AddToBuiltClasses_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGTutorialSubsystem_AddToBuiltClasses_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGTutorialSubsystem_AddToBuiltClasses()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGTutorialSubsystem_AddToBuiltClasses_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGTutorialSubsystem_ClearBuiltData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGTutorialSubsystem_ClearBuiltData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tutorial" },
		{ "ModuleRelativePath", "FGTutorialSubsystem.h" },
		{ "ToolTip", "Hax function for clearing all saved config data" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGTutorialSubsystem_ClearBuiltData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGTutorialSubsystem, "ClearBuiltData", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGTutorialSubsystem_ClearBuiltData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGTutorialSubsystem_ClearBuiltData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGTutorialSubsystem_ClearBuiltData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGTutorialSubsystem_ClearBuiltData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGTutorialSubsystem_OnBuildingBuilt_Statics
	{
		struct FGTutorialSubsystem_eventOnBuildingBuilt_Parms
		{
			TSubclassOf<UFGItemDescriptor>  itemDesc;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_itemDesc;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGTutorialSubsystem_OnBuildingBuilt_Statics::NewProp_itemDesc = { UE4CodeGen_Private::EPropertyClass::Class, "itemDesc", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGTutorialSubsystem_eventOnBuildingBuilt_Parms, itemDesc), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGTutorialSubsystem_OnBuildingBuilt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGTutorialSubsystem_OnBuildingBuilt_Statics::NewProp_itemDesc,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGTutorialSubsystem_OnBuildingBuilt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGTutorialSubsystem.h" },
		{ "ToolTip", "Called when the local player builds anything" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGTutorialSubsystem_OnBuildingBuilt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGTutorialSubsystem, "OnBuildingBuilt", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(FGTutorialSubsystem_eventOnBuildingBuilt_Parms), Z_Construct_UFunction_UFGTutorialSubsystem_OnBuildingBuilt_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGTutorialSubsystem_OnBuildingBuilt_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGTutorialSubsystem_OnBuildingBuilt_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGTutorialSubsystem_OnBuildingBuilt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGTutorialSubsystem_OnBuildingBuilt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGTutorialSubsystem_OnBuildingBuilt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGTutorialSubsystem_NoRegister()
	{
		return UFGTutorialSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UFGTutorialSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mOwningPlayerState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mOwningPlayerState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mTutorialData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mTutorialData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mTutorialData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mIntroTutorialMessages_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mIntroTutorialMessages;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mIntroTutorialMessages_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mHasSeenIntroTutorial_MetaData[];
#endif
		static void NewProp_mHasSeenIntroTutorial_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mHasSeenIntroTutorial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mBuildingsBuilt_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mBuildingsBuilt;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mBuildingsBuilt_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGTutorialSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGTutorialSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGTutorialSubsystem_AddToBuiltClasses, "AddToBuiltClasses" }, // 562427999
		{ &Z_Construct_UFunction_UFGTutorialSubsystem_ClearBuiltData, "ClearBuiltData" }, // 2612311754
		{ &Z_Construct_UFunction_UFGTutorialSubsystem_OnBuildingBuilt, "OnBuildingBuilt" }, // 4078991841
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGTutorialSubsystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FGTutorialSubsystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "FGTutorialSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGTutorialSubsystem_Statics::NewProp_mOwningPlayerState_MetaData[] = {
		{ "ModuleRelativePath", "FGTutorialSubsystem.h" },
		{ "ToolTip", "Needed to set up delegates" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGTutorialSubsystem_Statics::NewProp_mOwningPlayerState = { UE4CodeGen_Private::EPropertyClass::Object, "mOwningPlayerState", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000001000000, 1, nullptr, STRUCT_OFFSET(UFGTutorialSubsystem, mOwningPlayerState), Z_Construct_UClass_AFGPlayerState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGTutorialSubsystem_Statics::NewProp_mOwningPlayerState_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGTutorialSubsystem_Statics::NewProp_mOwningPlayerState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGTutorialSubsystem_Statics::NewProp_mTutorialData_MetaData[] = {
		{ "Category", "Tutorial" },
		{ "ModuleRelativePath", "FGTutorialSubsystem.h" },
		{ "ToolTip", "In this array we specify what buildings we want in-game tutorial for" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGTutorialSubsystem_Statics::NewProp_mTutorialData = { UE4CodeGen_Private::EPropertyClass::Array, "mTutorialData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000010001, 1, nullptr, STRUCT_OFFSET(UFGTutorialSubsystem, mTutorialData), METADATA_PARAMS(Z_Construct_UClass_UFGTutorialSubsystem_Statics::NewProp_mTutorialData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGTutorialSubsystem_Statics::NewProp_mTutorialData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGTutorialSubsystem_Statics::NewProp_mTutorialData_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "mTutorialData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FTutorialData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGTutorialSubsystem_Statics::NewProp_mIntroTutorialMessages_MetaData[] = {
		{ "Category", "Tutorial" },
		{ "ModuleRelativePath", "FGTutorialSubsystem.h" },
		{ "ToolTip", "Messages to display when first starting the game" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGTutorialSubsystem_Statics::NewProp_mIntroTutorialMessages = { UE4CodeGen_Private::EPropertyClass::Array, "mIntroTutorialMessages", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0044000000010001, 1, nullptr, STRUCT_OFFSET(UFGTutorialSubsystem, mIntroTutorialMessages), METADATA_PARAMS(Z_Construct_UClass_UFGTutorialSubsystem_Statics::NewProp_mIntroTutorialMessages_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGTutorialSubsystem_Statics::NewProp_mIntroTutorialMessages_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFGTutorialSubsystem_Statics::NewProp_mIntroTutorialMessages_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "mIntroTutorialMessages", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_UFGMessageBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGTutorialSubsystem_Statics::NewProp_mHasSeenIntroTutorial_MetaData[] = {
		{ "ModuleRelativePath", "FGTutorialSubsystem.h" },
		{ "ToolTip", "Used to indicate if we should push the intro messages" },
	};
#endif
	void Z_Construct_UClass_UFGTutorialSubsystem_Statics::NewProp_mHasSeenIntroTutorial_SetBit(void* Obj)
	{
		((UFGTutorialSubsystem*)Obj)->mHasSeenIntroTutorial = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGTutorialSubsystem_Statics::NewProp_mHasSeenIntroTutorial = { UE4CodeGen_Private::EPropertyClass::Bool, "mHasSeenIntroTutorial", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000001000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UFGTutorialSubsystem), &Z_Construct_UClass_UFGTutorialSubsystem_Statics::NewProp_mHasSeenIntroTutorial_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGTutorialSubsystem_Statics::NewProp_mHasSeenIntroTutorial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGTutorialSubsystem_Statics::NewProp_mHasSeenIntroTutorial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGTutorialSubsystem_Statics::NewProp_mBuildingsBuilt_MetaData[] = {
		{ "ModuleRelativePath", "FGTutorialSubsystem.h" },
		{ "ToolTip", "classes of things we have build" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGTutorialSubsystem_Statics::NewProp_mBuildingsBuilt = { UE4CodeGen_Private::EPropertyClass::Array, "mBuildingsBuilt", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0044000001000000, 1, nullptr, STRUCT_OFFSET(UFGTutorialSubsystem, mBuildingsBuilt), METADATA_PARAMS(Z_Construct_UClass_UFGTutorialSubsystem_Statics::NewProp_mBuildingsBuilt_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGTutorialSubsystem_Statics::NewProp_mBuildingsBuilt_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFGTutorialSubsystem_Statics::NewProp_mBuildingsBuilt_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "mBuildingsBuilt", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGTutorialSubsystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGTutorialSubsystem_Statics::NewProp_mOwningPlayerState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGTutorialSubsystem_Statics::NewProp_mTutorialData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGTutorialSubsystem_Statics::NewProp_mTutorialData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGTutorialSubsystem_Statics::NewProp_mIntroTutorialMessages,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGTutorialSubsystem_Statics::NewProp_mIntroTutorialMessages_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGTutorialSubsystem_Statics::NewProp_mHasSeenIntroTutorial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGTutorialSubsystem_Statics::NewProp_mBuildingsBuilt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGTutorialSubsystem_Statics::NewProp_mBuildingsBuilt_Inner,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UFGTutorialSubsystem_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UFGSaveInterface_NoRegister, (int32)VTABLE_OFFSET(UFGTutorialSubsystem, IFGSaveInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGTutorialSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGTutorialSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGTutorialSubsystem_Statics::ClassParams = {
		&UFGTutorialSubsystem::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UFGTutorialSubsystem_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UFGTutorialSubsystem_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		InterfaceParams, ARRAY_COUNT(InterfaceParams),
		METADATA_PARAMS(Z_Construct_UClass_UFGTutorialSubsystem_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGTutorialSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGTutorialSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGTutorialSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGTutorialSubsystem, 4286601572);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGTutorialSubsystem(Z_Construct_UClass_UFGTutorialSubsystem, &UFGTutorialSubsystem::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGTutorialSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGTutorialSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
