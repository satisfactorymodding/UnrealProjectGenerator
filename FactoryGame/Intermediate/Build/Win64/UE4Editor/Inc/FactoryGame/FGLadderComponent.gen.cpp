// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGLadderComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGLadderComponent() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGLadderComponent_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGLadderComponent();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGLadderComponent_BeginPotentialClimberOverlap();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGLadderComponent_EndPotentialClimberOverlap();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGCharacterPlayer_NoRegister();
// End Cross Module References
	void UFGLadderComponent::StaticRegisterNativesUFGLadderComponent()
	{
		UClass* Class = UFGLadderComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginPotentialClimberOverlap", &UFGLadderComponent::execBeginPotentialClimberOverlap },
			{ "EndPotentialClimberOverlap", &UFGLadderComponent::execEndPotentialClimberOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGLadderComponent_BeginPotentialClimberOverlap_Statics
	{
		struct FGLadderComponent_eventBeginPotentialClimberOverlap_Parms
		{
			UPrimitiveComponent* overlappedComp;
			AActor* other;
			UPrimitiveComponent* otherComp;
			int32 otherBodyIndex;
			bool isFromSweep;
			FHitResult sweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_sweepResult;
		static void NewProp_isFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isFromSweep;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_otherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_otherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_otherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_other;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_overlappedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_overlappedComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGLadderComponent_BeginPotentialClimberOverlap_Statics::NewProp_sweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGLadderComponent_BeginPotentialClimberOverlap_Statics::NewProp_sweepResult = { "sweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGLadderComponent_eventBeginPotentialClimberOverlap_Parms, sweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_UFGLadderComponent_BeginPotentialClimberOverlap_Statics::NewProp_sweepResult_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGLadderComponent_BeginPotentialClimberOverlap_Statics::NewProp_sweepResult_MetaData)) };
	void Z_Construct_UFunction_UFGLadderComponent_BeginPotentialClimberOverlap_Statics::NewProp_isFromSweep_SetBit(void* Obj)
	{
		((FGLadderComponent_eventBeginPotentialClimberOverlap_Parms*)Obj)->isFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGLadderComponent_BeginPotentialClimberOverlap_Statics::NewProp_isFromSweep = { "isFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGLadderComponent_eventBeginPotentialClimberOverlap_Parms), &Z_Construct_UFunction_UFGLadderComponent_BeginPotentialClimberOverlap_Statics::NewProp_isFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGLadderComponent_BeginPotentialClimberOverlap_Statics::NewProp_otherBodyIndex = { "otherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGLadderComponent_eventBeginPotentialClimberOverlap_Parms, otherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGLadderComponent_BeginPotentialClimberOverlap_Statics::NewProp_otherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGLadderComponent_BeginPotentialClimberOverlap_Statics::NewProp_otherComp = { "otherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGLadderComponent_eventBeginPotentialClimberOverlap_Parms, otherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFGLadderComponent_BeginPotentialClimberOverlap_Statics::NewProp_otherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGLadderComponent_BeginPotentialClimberOverlap_Statics::NewProp_otherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGLadderComponent_BeginPotentialClimberOverlap_Statics::NewProp_other = { "other", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGLadderComponent_eventBeginPotentialClimberOverlap_Parms, other), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGLadderComponent_BeginPotentialClimberOverlap_Statics::NewProp_overlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGLadderComponent_BeginPotentialClimberOverlap_Statics::NewProp_overlappedComp = { "overlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGLadderComponent_eventBeginPotentialClimberOverlap_Parms, overlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFGLadderComponent_BeginPotentialClimberOverlap_Statics::NewProp_overlappedComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGLadderComponent_BeginPotentialClimberOverlap_Statics::NewProp_overlappedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGLadderComponent_BeginPotentialClimberOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGLadderComponent_BeginPotentialClimberOverlap_Statics::NewProp_sweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGLadderComponent_BeginPotentialClimberOverlap_Statics::NewProp_isFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGLadderComponent_BeginPotentialClimberOverlap_Statics::NewProp_otherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGLadderComponent_BeginPotentialClimberOverlap_Statics::NewProp_otherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGLadderComponent_BeginPotentialClimberOverlap_Statics::NewProp_other,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGLadderComponent_BeginPotentialClimberOverlap_Statics::NewProp_overlappedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGLadderComponent_BeginPotentialClimberOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGLadderComponent.h" },
		{ "ToolTip", "Callbacks" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGLadderComponent_BeginPotentialClimberOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGLadderComponent, nullptr, "BeginPotentialClimberOverlap", sizeof(FGLadderComponent_eventBeginPotentialClimberOverlap_Parms), Z_Construct_UFunction_UFGLadderComponent_BeginPotentialClimberOverlap_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGLadderComponent_BeginPotentialClimberOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGLadderComponent_BeginPotentialClimberOverlap_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGLadderComponent_BeginPotentialClimberOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGLadderComponent_BeginPotentialClimberOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGLadderComponent_BeginPotentialClimberOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGLadderComponent_EndPotentialClimberOverlap_Statics
	{
		struct FGLadderComponent_eventEndPotentialClimberOverlap_Parms
		{
			UPrimitiveComponent* overlappedComp;
			AActor* other;
			UPrimitiveComponent* otherComp;
			int32 otherBodyIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_otherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_otherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_otherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_other;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_overlappedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_overlappedComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGLadderComponent_EndPotentialClimberOverlap_Statics::NewProp_otherBodyIndex = { "otherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGLadderComponent_eventEndPotentialClimberOverlap_Parms, otherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGLadderComponent_EndPotentialClimberOverlap_Statics::NewProp_otherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGLadderComponent_EndPotentialClimberOverlap_Statics::NewProp_otherComp = { "otherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGLadderComponent_eventEndPotentialClimberOverlap_Parms, otherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFGLadderComponent_EndPotentialClimberOverlap_Statics::NewProp_otherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGLadderComponent_EndPotentialClimberOverlap_Statics::NewProp_otherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGLadderComponent_EndPotentialClimberOverlap_Statics::NewProp_other = { "other", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGLadderComponent_eventEndPotentialClimberOverlap_Parms, other), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGLadderComponent_EndPotentialClimberOverlap_Statics::NewProp_overlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGLadderComponent_EndPotentialClimberOverlap_Statics::NewProp_overlappedComp = { "overlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGLadderComponent_eventEndPotentialClimberOverlap_Parms, overlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFGLadderComponent_EndPotentialClimberOverlap_Statics::NewProp_overlappedComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGLadderComponent_EndPotentialClimberOverlap_Statics::NewProp_overlappedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGLadderComponent_EndPotentialClimberOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGLadderComponent_EndPotentialClimberOverlap_Statics::NewProp_otherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGLadderComponent_EndPotentialClimberOverlap_Statics::NewProp_otherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGLadderComponent_EndPotentialClimberOverlap_Statics::NewProp_other,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGLadderComponent_EndPotentialClimberOverlap_Statics::NewProp_overlappedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGLadderComponent_EndPotentialClimberOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGLadderComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGLadderComponent_EndPotentialClimberOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGLadderComponent, nullptr, "EndPotentialClimberOverlap", sizeof(FGLadderComponent_eventEndPotentialClimberOverlap_Parms), Z_Construct_UFunction_UFGLadderComponent_EndPotentialClimberOverlap_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGLadderComponent_EndPotentialClimberOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGLadderComponent_EndPotentialClimberOverlap_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGLadderComponent_EndPotentialClimberOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGLadderComponent_EndPotentialClimberOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGLadderComponent_EndPotentialClimberOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGLadderComponent_NoRegister()
	{
		return UFGLadderComponent::StaticClass();
	}
	struct Z_Construct_UClass_UFGLadderComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPotentialClimbers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mPotentialClimbers;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mPotentialClimbers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mEndClimbingLookAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mEndClimbingLookAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mClimbableLookAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mClimbableLookAngle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGLadderComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBoxComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGLadderComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGLadderComponent_BeginPotentialClimberOverlap, "BeginPotentialClimberOverlap" }, // 1550562253
		{ &Z_Construct_UFunction_UFGLadderComponent_EndPotentialClimberOverlap, "EndPotentialClimberOverlap" }, // 2273463753
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGLadderComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger" },
		{ "IncludePath", "FGLadderComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FGLadderComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGLadderComponent_Statics::NewProp_mPotentialClimbers_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGLadderComponent.h" },
		{ "ToolTip", "List of players that can potentially climb on the ladder, i.e. within grab distance.\nPlayers that do climb on the ladder is also in this list." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGLadderComponent_Statics::NewProp_mPotentialClimbers = { "mPotentialClimbers", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGLadderComponent, mPotentialClimbers), METADATA_PARAMS(Z_Construct_UClass_UFGLadderComponent_Statics::NewProp_mPotentialClimbers_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGLadderComponent_Statics::NewProp_mPotentialClimbers_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGLadderComponent_Statics::NewProp_mPotentialClimbers_Inner = { "mPotentialClimbers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AFGCharacterPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGLadderComponent_Statics::NewProp_mEndClimbingLookAngle_MetaData[] = {
		{ "Category", "Ladder" },
		{ "ModuleRelativePath", "Public/FGLadderComponent.h" },
		{ "ToolTip", "Angle in degrees. If the player must be looking and moving within this angle relative to the ladder or else they will hop off." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGLadderComponent_Statics::NewProp_mEndClimbingLookAngle = { "mEndClimbingLookAngle", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGLadderComponent, mEndClimbingLookAngle), METADATA_PARAMS(Z_Construct_UClass_UFGLadderComponent_Statics::NewProp_mEndClimbingLookAngle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGLadderComponent_Statics::NewProp_mEndClimbingLookAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGLadderComponent_Statics::NewProp_mClimbableLookAngle_MetaData[] = {
		{ "Category", "Ladder" },
		{ "ModuleRelativePath", "Public/FGLadderComponent.h" },
		{ "ToolTip", "Climbable angle in degrees. The player must be looking and moving within this angle relative to the ladder to climb it." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGLadderComponent_Statics::NewProp_mClimbableLookAngle = { "mClimbableLookAngle", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGLadderComponent, mClimbableLookAngle), METADATA_PARAMS(Z_Construct_UClass_UFGLadderComponent_Statics::NewProp_mClimbableLookAngle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGLadderComponent_Statics::NewProp_mClimbableLookAngle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGLadderComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGLadderComponent_Statics::NewProp_mPotentialClimbers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGLadderComponent_Statics::NewProp_mPotentialClimbers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGLadderComponent_Statics::NewProp_mEndClimbingLookAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGLadderComponent_Statics::NewProp_mClimbableLookAngle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGLadderComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGLadderComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGLadderComponent_Statics::ClassParams = {
		&UFGLadderComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFGLadderComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UFGLadderComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFGLadderComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGLadderComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGLadderComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGLadderComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGLadderComponent, 2610563039);
	template<> FACTORYGAME_API UClass* StaticClass<UFGLadderComponent>()
	{
		return UFGLadderComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGLadderComponent(Z_Construct_UClass_UFGLadderComponent, &UFGLadderComponent::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGLadderComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGLadderComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
