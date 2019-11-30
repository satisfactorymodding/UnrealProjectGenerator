// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/Buildables/Animation/FGFAnimInstanceFactory.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGFAnimInstanceFactory() {}
// Cross Module References
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimInstanceProxyFactory();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimInstanceProxy();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGFAnimInstanceFactory_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGFAnimInstanceFactory();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
// End Cross Module References
class UScriptStruct* FAnimInstanceProxyFactory::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimInstanceProxyFactory, Z_Construct_UPackage__Script_FactoryGame(), TEXT("AnimInstanceProxyFactory"), sizeof(FAnimInstanceProxyFactory), Get_Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimInstanceProxyFactory(FAnimInstanceProxyFactory::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("AnimInstanceProxyFactory"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFAnimInstanceProxyFactory
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFAnimInstanceProxyFactory()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimInstanceProxyFactory")),new UScriptStruct::TCppStructOps<FAnimInstanceProxyFactory>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFAnimInstanceProxyFactory;
	struct Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mIsFuelGeneratorOnline_MetaData[];
#endif
		static void NewProp_mIsFuelGeneratorOnline_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mIsFuelGeneratorOnline;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mIsGenerator_MetaData[];
#endif
		static void NewProp_mIsGenerator_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mIsGenerator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mUseRampUp_MetaData[];
#endif
		static void NewProp_mUseRampUp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mUseRampUp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCycleComplete_MetaData[];
#endif
		static void NewProp_mCycleComplete_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mCycleComplete;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mIsActivated_MetaData[];
#endif
		static void NewProp_mIsActivated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mIsActivated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mIsProducing_MetaData[];
#endif
		static void NewProp_mIsProducing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mIsProducing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mHasPower_MetaData[];
#endif
		static void NewProp_mHasPower_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mHasPower;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mHasFuel_MetaData[];
#endif
		static void NewProp_mHasFuel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mHasFuel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mLoadPercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mLoadPercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mStartFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mStartFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDefaultCycleTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mDefaultCycleTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCycleTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mCycleTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mRecipePlayRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mRecipePlayRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mLastProductionProgress_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mLastProductionProgress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mRampDownTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mRampDownTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mTimeNotProducing_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mTimeNotProducing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mRampUpTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mRampUpTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mAnimPlayRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mAnimPlayRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mProductionCycleTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mProductionCycleTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mProductionProgress_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mProductionProgress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDeltaTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mDeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Buildables/Animation/FGFAnimInstanceFactory.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimInstanceProxyFactory>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mIsFuelGeneratorOnline_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "Public/Buildables/Animation/FGFAnimInstanceFactory.h" },
		{ "ToolTip", "True if generator has power and is producing" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mIsFuelGeneratorOnline_SetBit(void* Obj)
	{
		((FAnimInstanceProxyFactory*)Obj)->mIsFuelGeneratorOnline = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mIsFuelGeneratorOnline = { UE4CodeGen_Private::EPropertyClass::Bool, "mIsFuelGeneratorOnline", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000002005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FAnimInstanceProxyFactory), &Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mIsFuelGeneratorOnline_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mIsFuelGeneratorOnline_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mIsFuelGeneratorOnline_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mIsGenerator_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "Public/Buildables/Animation/FGFAnimInstanceFactory.h" },
		{ "ToolTip", "Is the owning actor a generator" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mIsGenerator_SetBit(void* Obj)
	{
		((FAnimInstanceProxyFactory*)Obj)->mIsGenerator = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mIsGenerator = { UE4CodeGen_Private::EPropertyClass::Bool, "mIsGenerator", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000002005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FAnimInstanceProxyFactory), &Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mIsGenerator_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mIsGenerator_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mIsGenerator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mUseRampUp_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "Public/Buildables/Animation/FGFAnimInstanceFactory.h" },
		{ "ToolTip", "If we should use the ramp up system" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mUseRampUp_SetBit(void* Obj)
	{
		((FAnimInstanceProxyFactory*)Obj)->mUseRampUp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mUseRampUp = { UE4CodeGen_Private::EPropertyClass::Bool, "mUseRampUp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000002005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FAnimInstanceProxyFactory), &Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mUseRampUp_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mUseRampUp_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mUseRampUp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mCycleComplete_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "Public/Buildables/Animation/FGFAnimInstanceFactory.h" },
		{ "ToolTip", "A production cycle was completed" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mCycleComplete_SetBit(void* Obj)
	{
		((FAnimInstanceProxyFactory*)Obj)->mCycleComplete = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mCycleComplete = { UE4CodeGen_Private::EPropertyClass::Bool, "mCycleComplete", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000002005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FAnimInstanceProxyFactory), &Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mCycleComplete_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mCycleComplete_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mCycleComplete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mIsActivated_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "Public/Buildables/Animation/FGFAnimInstanceFactory.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mIsActivated_SetBit(void* Obj)
	{
		((FAnimInstanceProxyFactory*)Obj)->mIsActivated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mIsActivated = { UE4CodeGen_Private::EPropertyClass::Bool, "mIsActivated", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000002005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FAnimInstanceProxyFactory), &Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mIsActivated_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mIsActivated_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mIsActivated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mIsProducing_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "Public/Buildables/Animation/FGFAnimInstanceFactory.h" },
		{ "ToolTip", "Factory is producing something" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mIsProducing_SetBit(void* Obj)
	{
		((FAnimInstanceProxyFactory*)Obj)->mIsProducing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mIsProducing = { UE4CodeGen_Private::EPropertyClass::Bool, "mIsProducing", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000002005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FAnimInstanceProxyFactory), &Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mIsProducing_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mIsProducing_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mIsProducing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mHasPower_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "Public/Buildables/Animation/FGFAnimInstanceFactory.h" },
		{ "ToolTip", "Factory has power" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mHasPower_SetBit(void* Obj)
	{
		((FAnimInstanceProxyFactory*)Obj)->mHasPower = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mHasPower = { UE4CodeGen_Private::EPropertyClass::Bool, "mHasPower", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000002005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FAnimInstanceProxyFactory), &Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mHasPower_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mHasPower_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mHasPower_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mHasFuel_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "Public/Buildables/Animation/FGFAnimInstanceFactory.h" },
		{ "ToolTip", "valid for generators!" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mHasFuel_SetBit(void* Obj)
	{
		((FAnimInstanceProxyFactory*)Obj)->mHasFuel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mHasFuel = { UE4CodeGen_Private::EPropertyClass::Bool, "mHasFuel", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000002005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAnimInstanceProxyFactory), &Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mHasFuel_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mHasFuel_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mHasFuel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mLoadPercentage_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "Public/Buildables/Animation/FGFAnimInstanceFactory.h" },
		{ "ToolTip", "From 0.0 - 1.0 Only valid for generators!" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mLoadPercentage = { UE4CodeGen_Private::EPropertyClass::Float, "mLoadPercentage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000002005, 1, nullptr, STRUCT_OFFSET(FAnimInstanceProxyFactory, mLoadPercentage), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mLoadPercentage_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mLoadPercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mStartFrame_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "Public/Buildables/Animation/FGFAnimInstanceFactory.h" },
		{ "ToolTip", "Frame to...start?...i dunno" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mStartFrame = { UE4CodeGen_Private::EPropertyClass::Float, "mStartFrame", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000002005, 1, nullptr, STRUCT_OFFSET(FAnimInstanceProxyFactory, mStartFrame), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mStartFrame_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mStartFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mDefaultCycleTime_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "Public/Buildables/Animation/FGFAnimInstanceFactory.h" },
		{ "ToolTip", "Actual animation length" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mDefaultCycleTime = { UE4CodeGen_Private::EPropertyClass::Float, "mDefaultCycleTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000002005, 1, nullptr, STRUCT_OFFSET(FAnimInstanceProxyFactory, mDefaultCycleTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mDefaultCycleTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mDefaultCycleTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mCycleTime_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "Public/Buildables/Animation/FGFAnimInstanceFactory.h" },
		{ "ToolTip", "Length of production cycle" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mCycleTime = { UE4CodeGen_Private::EPropertyClass::Float, "mCycleTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000002005, 1, nullptr, STRUCT_OFFSET(FAnimInstanceProxyFactory, mCycleTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mCycleTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mCycleTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mRecipePlayRate_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "Public/Buildables/Animation/FGFAnimInstanceFactory.h" },
		{ "ToolTip", "Play rate for recipe" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mRecipePlayRate = { UE4CodeGen_Private::EPropertyClass::Float, "mRecipePlayRate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000002005, 1, nullptr, STRUCT_OFFSET(FAnimInstanceProxyFactory, mRecipePlayRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mRecipePlayRate_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mRecipePlayRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mLastProductionProgress_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "Public/Buildables/Animation/FGFAnimInstanceFactory.h" },
		{ "ToolTip", "Last frames production progress" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mLastProductionProgress = { UE4CodeGen_Private::EPropertyClass::Float, "mLastProductionProgress", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000002005, 1, nullptr, STRUCT_OFFSET(FAnimInstanceProxyFactory, mLastProductionProgress), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mLastProductionProgress_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mLastProductionProgress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mRampDownTime_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "Public/Buildables/Animation/FGFAnimInstanceFactory.h" },
		{ "ToolTip", "Time factory should spend ramping up" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mRampDownTime = { UE4CodeGen_Private::EPropertyClass::Float, "mRampDownTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000002005, 1, nullptr, STRUCT_OFFSET(FAnimInstanceProxyFactory, mRampDownTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mRampDownTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mRampDownTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mTimeNotProducing_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "Public/Buildables/Animation/FGFAnimInstanceFactory.h" },
		{ "ToolTip", "Time factory should not produce stuff" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mTimeNotProducing = { UE4CodeGen_Private::EPropertyClass::Float, "mTimeNotProducing", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000002005, 1, nullptr, STRUCT_OFFSET(FAnimInstanceProxyFactory, mTimeNotProducing), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mTimeNotProducing_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mTimeNotProducing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mRampUpTime_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "Public/Buildables/Animation/FGFAnimInstanceFactory.h" },
		{ "ToolTip", "Time factory should spend ramping up" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mRampUpTime = { UE4CodeGen_Private::EPropertyClass::Float, "mRampUpTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000002005, 1, nullptr, STRUCT_OFFSET(FAnimInstanceProxyFactory, mRampUpTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mRampUpTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mRampUpTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mAnimPlayRate_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "Public/Buildables/Animation/FGFAnimInstanceFactory.h" },
		{ "ToolTip", "Multiplier for play rate" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mAnimPlayRate = { UE4CodeGen_Private::EPropertyClass::Float, "mAnimPlayRate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000002005, 1, nullptr, STRUCT_OFFSET(FAnimInstanceProxyFactory, mAnimPlayRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mAnimPlayRate_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mAnimPlayRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mProductionCycleTime_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "Public/Buildables/Animation/FGFAnimInstanceFactory.h" },
		{ "ToolTip", "saved production cycle time for the factory" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mProductionCycleTime = { UE4CodeGen_Private::EPropertyClass::Float, "mProductionCycleTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000002005, 1, nullptr, STRUCT_OFFSET(FAnimInstanceProxyFactory, mProductionCycleTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mProductionCycleTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mProductionCycleTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mProductionProgress_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "Public/Buildables/Animation/FGFAnimInstanceFactory.h" },
		{ "ToolTip", "saved production progress for the factory" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mProductionProgress = { UE4CodeGen_Private::EPropertyClass::Float, "mProductionProgress", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000002005, 1, nullptr, STRUCT_OFFSET(FAnimInstanceProxyFactory, mProductionProgress), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mProductionProgress_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mProductionProgress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mDeltaTime_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "Public/Buildables/Animation/FGFAnimInstanceFactory.h" },
		{ "ToolTip", "saved DT" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mDeltaTime = { UE4CodeGen_Private::EPropertyClass::Float, "mDeltaTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000002005, 1, nullptr, STRUCT_OFFSET(FAnimInstanceProxyFactory, mDeltaTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mDeltaTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mDeltaTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mIsFuelGeneratorOnline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mIsGenerator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mUseRampUp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mCycleComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mIsActivated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mIsProducing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mHasPower,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mHasFuel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mLoadPercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mStartFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mDefaultCycleTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mCycleTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mRecipePlayRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mLastProductionProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mRampDownTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mTimeNotProducing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mRampUpTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mAnimPlayRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mProductionCycleTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mProductionProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::NewProp_mDeltaTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		Z_Construct_UScriptStruct_FAnimInstanceProxy,
		&NewStructOps,
		"AnimInstanceProxyFactory",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FAnimInstanceProxyFactory),
		alignof(FAnimInstanceProxyFactory),
		Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimInstanceProxyFactory()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimInstanceProxyFactory"), sizeof(FAnimInstanceProxyFactory), Get_Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimInstanceProxyFactory_CRC() { return 2334060071U; }
	void UFGFAnimInstanceFactory::StaticRegisterNativesUFGFAnimInstanceFactory()
	{
	}
	UClass* Z_Construct_UClass_UFGFAnimInstanceFactory_NoRegister()
	{
		return UFGFAnimInstanceFactory::StaticClass();
	}
	struct Z_Construct_UClass_UFGFAnimInstanceFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSoundSpeedRTPCMaxValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mSoundSpeedRTPCMaxValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSoundSpeedRTPCMinValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mSoundSpeedRTPCMinValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mIsGenerator_MetaData[];
#endif
		static void NewProp_mIsGenerator_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mIsGenerator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSoundSpeedAccumulator_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mSoundSpeedAccumulator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSoundSpeedRTPCInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mSoundSpeedRTPCInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSoundSpeedRTPC_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_mSoundSpeedRTPC;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDefaultCycleTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mDefaultCycleTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mRampDownTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mRampDownTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mRampUpTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mRampUpTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mUseRampUp_MetaData[];
#endif
		static void NewProp_mUseRampUp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mUseRampUp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mProxy_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mProxy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGFAnimInstanceFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGFAnimInstanceFactory_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Buildables/Animation/FGFAnimInstanceFactory.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Buildables/Animation/FGFAnimInstanceFactory.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGFAnimInstanceFactory_Statics::NewProp_mSoundSpeedRTPCMaxValue_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "Public/Buildables/Animation/FGFAnimInstanceFactory.h" },
		{ "ToolTip", "Max value for RTPC range" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGFAnimInstanceFactory_Statics::NewProp_mSoundSpeedRTPCMaxValue = { UE4CodeGen_Private::EPropertyClass::Float, "mSoundSpeedRTPCMaxValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UFGFAnimInstanceFactory, mSoundSpeedRTPCMaxValue), METADATA_PARAMS(Z_Construct_UClass_UFGFAnimInstanceFactory_Statics::NewProp_mSoundSpeedRTPCMaxValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGFAnimInstanceFactory_Statics::NewProp_mSoundSpeedRTPCMaxValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGFAnimInstanceFactory_Statics::NewProp_mSoundSpeedRTPCMinValue_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "Public/Buildables/Animation/FGFAnimInstanceFactory.h" },
		{ "ToolTip", "Min value for RTPC range" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGFAnimInstanceFactory_Statics::NewProp_mSoundSpeedRTPCMinValue = { UE4CodeGen_Private::EPropertyClass::Float, "mSoundSpeedRTPCMinValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UFGFAnimInstanceFactory, mSoundSpeedRTPCMinValue), METADATA_PARAMS(Z_Construct_UClass_UFGFAnimInstanceFactory_Statics::NewProp_mSoundSpeedRTPCMinValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGFAnimInstanceFactory_Statics::NewProp_mSoundSpeedRTPCMinValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGFAnimInstanceFactory_Statics::NewProp_mIsGenerator_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "Public/Buildables/Animation/FGFAnimInstanceFactory.h" },
		{ "ToolTip", "Is this factory a generator?" },
	};
#endif
	void Z_Construct_UClass_UFGFAnimInstanceFactory_Statics::NewProp_mIsGenerator_SetBit(void* Obj)
	{
		((UFGFAnimInstanceFactory*)Obj)->mIsGenerator = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGFAnimInstanceFactory_Statics::NewProp_mIsGenerator = { UE4CodeGen_Private::EPropertyClass::Bool, "mIsGenerator", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UFGFAnimInstanceFactory), &Z_Construct_UClass_UFGFAnimInstanceFactory_Statics::NewProp_mIsGenerator_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGFAnimInstanceFactory_Statics::NewProp_mIsGenerator_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGFAnimInstanceFactory_Statics::NewProp_mIsGenerator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGFAnimInstanceFactory_Statics::NewProp_mSoundSpeedAccumulator_MetaData[] = {
		{ "ModuleRelativePath", "Public/Buildables/Animation/FGFAnimInstanceFactory.h" },
		{ "ToolTip", "Accumulator for the interval" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGFAnimInstanceFactory_Statics::NewProp_mSoundSpeedAccumulator = { UE4CodeGen_Private::EPropertyClass::Float, "mSoundSpeedAccumulator", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UFGFAnimInstanceFactory, mSoundSpeedAccumulator), METADATA_PARAMS(Z_Construct_UClass_UFGFAnimInstanceFactory_Statics::NewProp_mSoundSpeedAccumulator_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGFAnimInstanceFactory_Statics::NewProp_mSoundSpeedAccumulator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGFAnimInstanceFactory_Statics::NewProp_mSoundSpeedRTPCInterval_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "Public/Buildables/Animation/FGFAnimInstanceFactory.h" },
		{ "ToolTip", "How often RTPC for sound speed should update" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGFAnimInstanceFactory_Statics::NewProp_mSoundSpeedRTPCInterval = { UE4CodeGen_Private::EPropertyClass::Float, "mSoundSpeedRTPCInterval", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UFGFAnimInstanceFactory, mSoundSpeedRTPCInterval), METADATA_PARAMS(Z_Construct_UClass_UFGFAnimInstanceFactory_Statics::NewProp_mSoundSpeedRTPCInterval_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGFAnimInstanceFactory_Statics::NewProp_mSoundSpeedRTPCInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGFAnimInstanceFactory_Statics::NewProp_mSoundSpeedRTPC_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "Public/Buildables/Animation/FGFAnimInstanceFactory.h" },
		{ "ToolTip", "RTPC for sound speed" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UFGFAnimInstanceFactory_Statics::NewProp_mSoundSpeedRTPC = { UE4CodeGen_Private::EPropertyClass::Name, "mSoundSpeedRTPC", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UFGFAnimInstanceFactory, mSoundSpeedRTPC), METADATA_PARAMS(Z_Construct_UClass_UFGFAnimInstanceFactory_Statics::NewProp_mSoundSpeedRTPC_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGFAnimInstanceFactory_Statics::NewProp_mSoundSpeedRTPC_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGFAnimInstanceFactory_Statics::NewProp_mDefaultCycleTime_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "Public/Buildables/Animation/FGFAnimInstanceFactory.h" },
		{ "ToolTip", "Actual animation length" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGFAnimInstanceFactory_Statics::NewProp_mDefaultCycleTime = { UE4CodeGen_Private::EPropertyClass::Float, "mDefaultCycleTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UFGFAnimInstanceFactory, mDefaultCycleTime), METADATA_PARAMS(Z_Construct_UClass_UFGFAnimInstanceFactory_Statics::NewProp_mDefaultCycleTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGFAnimInstanceFactory_Statics::NewProp_mDefaultCycleTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGFAnimInstanceFactory_Statics::NewProp_mRampDownTime_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "Public/Buildables/Animation/FGFAnimInstanceFactory.h" },
		{ "ToolTip", "Time factory should spend ramping up" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGFAnimInstanceFactory_Statics::NewProp_mRampDownTime = { UE4CodeGen_Private::EPropertyClass::Float, "mRampDownTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UFGFAnimInstanceFactory, mRampDownTime), METADATA_PARAMS(Z_Construct_UClass_UFGFAnimInstanceFactory_Statics::NewProp_mRampDownTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGFAnimInstanceFactory_Statics::NewProp_mRampDownTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGFAnimInstanceFactory_Statics::NewProp_mRampUpTime_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "Public/Buildables/Animation/FGFAnimInstanceFactory.h" },
		{ "ToolTip", "Time factory should spend ramping up" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGFAnimInstanceFactory_Statics::NewProp_mRampUpTime = { UE4CodeGen_Private::EPropertyClass::Float, "mRampUpTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UFGFAnimInstanceFactory, mRampUpTime), METADATA_PARAMS(Z_Construct_UClass_UFGFAnimInstanceFactory_Statics::NewProp_mRampUpTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGFAnimInstanceFactory_Statics::NewProp_mRampUpTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGFAnimInstanceFactory_Statics::NewProp_mUseRampUp_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "Public/Buildables/Animation/FGFAnimInstanceFactory.h" },
		{ "ToolTip", "If we should use the ramp up system" },
	};
#endif
	void Z_Construct_UClass_UFGFAnimInstanceFactory_Statics::NewProp_mUseRampUp_SetBit(void* Obj)
	{
		((UFGFAnimInstanceFactory*)Obj)->mUseRampUp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGFAnimInstanceFactory_Statics::NewProp_mUseRampUp = { UE4CodeGen_Private::EPropertyClass::Bool, "mUseRampUp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UFGFAnimInstanceFactory), &Z_Construct_UClass_UFGFAnimInstanceFactory_Statics::NewProp_mUseRampUp_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGFAnimInstanceFactory_Statics::NewProp_mUseRampUp_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGFAnimInstanceFactory_Statics::NewProp_mUseRampUp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGFAnimInstanceFactory_Statics::NewProp_mProxy_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Factory Anim" },
		{ "ModuleRelativePath", "Public/Buildables/Animation/FGFAnimInstanceFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGFAnimInstanceFactory_Statics::NewProp_mProxy = { UE4CodeGen_Private::EPropertyClass::Struct, "mProxy", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000002014, 1, nullptr, STRUCT_OFFSET(UFGFAnimInstanceFactory, mProxy), Z_Construct_UScriptStruct_FAnimInstanceProxyFactory, METADATA_PARAMS(Z_Construct_UClass_UFGFAnimInstanceFactory_Statics::NewProp_mProxy_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGFAnimInstanceFactory_Statics::NewProp_mProxy_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGFAnimInstanceFactory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGFAnimInstanceFactory_Statics::NewProp_mSoundSpeedRTPCMaxValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGFAnimInstanceFactory_Statics::NewProp_mSoundSpeedRTPCMinValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGFAnimInstanceFactory_Statics::NewProp_mIsGenerator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGFAnimInstanceFactory_Statics::NewProp_mSoundSpeedAccumulator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGFAnimInstanceFactory_Statics::NewProp_mSoundSpeedRTPCInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGFAnimInstanceFactory_Statics::NewProp_mSoundSpeedRTPC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGFAnimInstanceFactory_Statics::NewProp_mDefaultCycleTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGFAnimInstanceFactory_Statics::NewProp_mRampDownTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGFAnimInstanceFactory_Statics::NewProp_mRampUpTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGFAnimInstanceFactory_Statics::NewProp_mUseRampUp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGFAnimInstanceFactory_Statics::NewProp_mProxy,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGFAnimInstanceFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGFAnimInstanceFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGFAnimInstanceFactory_Statics::ClassParams = {
		&UFGFAnimInstanceFactory::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A8u,
		nullptr, 0,
		Z_Construct_UClass_UFGFAnimInstanceFactory_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UFGFAnimInstanceFactory_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFGFAnimInstanceFactory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGFAnimInstanceFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGFAnimInstanceFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGFAnimInstanceFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGFAnimInstanceFactory, 2071356305);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGFAnimInstanceFactory(Z_Construct_UClass_UFGFAnimInstanceFactory, &UFGFAnimInstanceFactory::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGFAnimInstanceFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGFAnimInstanceFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
