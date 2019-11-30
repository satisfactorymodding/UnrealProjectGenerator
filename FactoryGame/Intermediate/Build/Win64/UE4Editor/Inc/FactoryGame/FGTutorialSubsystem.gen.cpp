// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
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
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FTutorialData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTutorialData, Z_Construct_UPackage__Script_FactoryGame(), TEXT("TutorialData"), sizeof(FTutorialData), Get_Z_Construct_UScriptStruct_FTutorialData_Hash());
	}
	return Singleton;
}
template<> FACTORYGAME_API UScriptStruct* StaticStruct<FTutorialData>()
{
	return FTutorialData::StaticStruct();
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
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_MessageID = { "MessageID", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTutorialData, MessageID), Z_Construct_UClass_UFGMessageBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_MessageID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_MessageID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_ClassBuilt_MetaData[] = {
		{ "Category", "Tutorial" },
		{ "ModuleRelativePath", "FGTutorialSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_ClassBuilt = { "ClassBuilt", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTutorialData, ClassBuilt), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_ClassBuilt_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_ClassBuilt_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTutorialData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_MessageID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialData_Statics::NewProp_ClassBuilt,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTutorialData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"TutorialData",
		sizeof(FTutorialData),
		alignof(FTutorialData),
		Z_Construct_UScriptStruct_FTutorialData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTutorialData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTutorialData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TutorialData"), sizeof(FTutorialData), Get_Z_Construct_UScriptStruct_FTutorialData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTutorialData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTutorialData_Hash() { return 2338571612U; }
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
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGTutorialSubsystem_AddToBuiltClasses_Statics::NewProp_inClass = { "inClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGTutorialSubsystem_eventAddToBuiltClasses_Parms, inClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGTutorialSubsystem_AddToBuiltClasses_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGTutorialSubsystem, nullptr, "AddToBuiltClasses", sizeof(FGTutorialSubsystem_eventAddToBuiltClasses_Parms), Z_Construct_UFunction_UFGTutorialSubsystem_AddToBuiltClasses_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGTutorialSubsystem_AddToBuiltClasses_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGTutorialSubsystem_AddToBuiltClasses_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGTutorialSubsystem_AddToBuiltClasses_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGTutorialSubsystem_ClearBuiltData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGTutorialSubsystem, nullptr, "ClearBuiltData", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGTutorialSubsystem_ClearBuiltData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGTutorialSubsystem_ClearBuiltData_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGTutorialSubsystem_OnBuildingBuilt_Statics::NewProp_itemDesc = { "itemDesc", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGTutorialSubsystem_eventOnBuildingBuilt_Parms, itemDesc), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGTutorialSubsystem_OnBuildingBuilt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGTutorialSubsystem_OnBuildingBuilt_Statics::NewProp_itemDesc,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGTutorialSubsystem_OnBuildingBuilt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGTutorialSubsystem.h" },
		{ "ToolTip", "Called when the local player builds anything" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGTutorialSubsystem_OnBuildingBuilt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGTutorialSubsystem, nullptr, "OnBuildingBuilt", sizeof(FGTutorialSubsystem_eventOnBuildingBuilt_Parms), Z_Construct_UFunction_UFGTutorialSubsystem_OnBuildingBuilt_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGTutorialSubsystem_OnBuildingBuilt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGTutorialSubsystem_OnBuildingBuilt_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGTutorialSubsystem_OnBuildingBuilt_Statics::Function_MetaDataParams)) };
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
		{ &Z_Construct_UFunction_UFGTutorialSubsystem_AddToBuiltClasses, "AddToBuiltClasses" }, // 3190970599
		{ &Z_Construct_UFunction_UFGTutorialSubsystem_ClearBuiltData, "ClearBuiltData" }, // 466294966
		{ &Z_Construct_UFunction_UFGTutorialSubsystem_OnBuildingBuilt, "OnBuildingBuilt" }, // 2362732333
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGTutorialSubsystem_Statics::NewProp_mOwningPlayerState = { "mOwningPlayerState", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGTutorialSubsystem, mOwningPlayerState), Z_Construct_UClass_AFGPlayerState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGTutorialSubsystem_Statics::NewProp_mOwningPlayerState_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGTutorialSubsystem_Statics::NewProp_mOwningPlayerState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGTutorialSubsystem_Statics::NewProp_mTutorialData_MetaData[] = {
		{ "Category", "Tutorial" },
		{ "ModuleRelativePath", "FGTutorialSubsystem.h" },
		{ "ToolTip", "In this array we specify what buildings we want in-game tutorial for" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGTutorialSubsystem_Statics::NewProp_mTutorialData = { "mTutorialData", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGTutorialSubsystem, mTutorialData), METADATA_PARAMS(Z_Construct_UClass_UFGTutorialSubsystem_Statics::NewProp_mTutorialData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGTutorialSubsystem_Statics::NewProp_mTutorialData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGTutorialSubsystem_Statics::NewProp_mTutorialData_Inner = { "mTutorialData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTutorialData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGTutorialSubsystem_Statics::NewProp_mIntroTutorialMessages_MetaData[] = {
		{ "Category", "Tutorial" },
		{ "ModuleRelativePath", "FGTutorialSubsystem.h" },
		{ "ToolTip", "Messages to display when first starting the game" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGTutorialSubsystem_Statics::NewProp_mIntroTutorialMessages = { "mIntroTutorialMessages", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGTutorialSubsystem, mIntroTutorialMessages), METADATA_PARAMS(Z_Construct_UClass_UFGTutorialSubsystem_Statics::NewProp_mIntroTutorialMessages_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGTutorialSubsystem_Statics::NewProp_mIntroTutorialMessages_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFGTutorialSubsystem_Statics::NewProp_mIntroTutorialMessages_Inner = { "mIntroTutorialMessages", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFGMessageBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGTutorialSubsystem_Statics::NewProp_mHasSeenIntroTutorial = { "mHasSeenIntroTutorial", nullptr, (EPropertyFlags)0x0040000001000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFGTutorialSubsystem), &Z_Construct_UClass_UFGTutorialSubsystem_Statics::NewProp_mHasSeenIntroTutorial_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGTutorialSubsystem_Statics::NewProp_mHasSeenIntroTutorial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGTutorialSubsystem_Statics::NewProp_mHasSeenIntroTutorial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGTutorialSubsystem_Statics::NewProp_mBuildingsBuilt_MetaData[] = {
		{ "ModuleRelativePath", "FGTutorialSubsystem.h" },
		{ "ToolTip", "classes of things we have build" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGTutorialSubsystem_Statics::NewProp_mBuildingsBuilt = { "mBuildingsBuilt", nullptr, (EPropertyFlags)0x0044000001000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGTutorialSubsystem, mBuildingsBuilt), METADATA_PARAMS(Z_Construct_UClass_UFGTutorialSubsystem_Statics::NewProp_mBuildingsBuilt_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGTutorialSubsystem_Statics::NewProp_mBuildingsBuilt_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFGTutorialSubsystem_Statics::NewProp_mBuildingsBuilt_Inner = { "mBuildingsBuilt", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
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
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFGTutorialSubsystem_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UFGTutorialSubsystem_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
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
	IMPLEMENT_CLASS(UFGTutorialSubsystem, 3046508404);
	template<> FACTORYGAME_API UClass* StaticClass<UFGTutorialSubsystem>()
	{
		return UFGTutorialSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGTutorialSubsystem(Z_Construct_UClass_UFGTutorialSubsystem, &UFGTutorialSubsystem::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGTutorialSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGTutorialSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
