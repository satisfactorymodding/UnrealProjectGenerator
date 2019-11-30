// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGDotComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGDotComponent() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGDotComponent_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGDotComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGDotComponent_DamageContainingActors();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGDotComponent_OnPrimitiveComponentEntered();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGDotComponent_OnPrimitiveComponentExited();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGDamageOverTime_NoRegister();
// End Cross Module References
	void UFGDotComponent::StaticRegisterNativesUFGDotComponent()
	{
		UClass* Class = UFGDotComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DamageContainingActors", &UFGDotComponent::execDamageContainingActors },
			{ "OnPrimitiveComponentEntered", &UFGDotComponent::execOnPrimitiveComponentEntered },
			{ "OnPrimitiveComponentExited", &UFGDotComponent::execOnPrimitiveComponentExited },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGDotComponent_DamageContainingActors_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGDotComponent_DamageContainingActors_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGDotComponent.h" },
		{ "ToolTip", "Called by timer to tell us to damage the containing actors" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGDotComponent_DamageContainingActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGDotComponent, "DamageContainingActors", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGDotComponent_DamageContainingActors_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGDotComponent_DamageContainingActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGDotComponent_DamageContainingActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGDotComponent_DamageContainingActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGDotComponent_OnPrimitiveComponentEntered_Statics
	{
		struct FGDotComponent_eventOnPrimitiveComponentEntered_Parms
		{
			UPrimitiveComponent* overlappedComp;
			AActor* other;
			UPrimitiveComponent* otherComp;
			int32 otherBodyIndex;
			bool fromSweep;
			FHitResult sweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_sweepResult;
		static void NewProp_fromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_fromSweep;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGDotComponent_OnPrimitiveComponentEntered_Statics::NewProp_sweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGDotComponent_OnPrimitiveComponentEntered_Statics::NewProp_sweepResult = { UE4CodeGen_Private::EPropertyClass::Struct, "sweepResult", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008008000182, 1, nullptr, STRUCT_OFFSET(FGDotComponent_eventOnPrimitiveComponentEntered_Parms, sweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_UFGDotComponent_OnPrimitiveComponentEntered_Statics::NewProp_sweepResult_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGDotComponent_OnPrimitiveComponentEntered_Statics::NewProp_sweepResult_MetaData)) };
	void Z_Construct_UFunction_UFGDotComponent_OnPrimitiveComponentEntered_Statics::NewProp_fromSweep_SetBit(void* Obj)
	{
		((FGDotComponent_eventOnPrimitiveComponentEntered_Parms*)Obj)->fromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGDotComponent_OnPrimitiveComponentEntered_Statics::NewProp_fromSweep = { UE4CodeGen_Private::EPropertyClass::Bool, "fromSweep", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGDotComponent_eventOnPrimitiveComponentEntered_Parms), &Z_Construct_UFunction_UFGDotComponent_OnPrimitiveComponentEntered_Statics::NewProp_fromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGDotComponent_OnPrimitiveComponentEntered_Statics::NewProp_otherBodyIndex = { UE4CodeGen_Private::EPropertyClass::Int, "otherBodyIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGDotComponent_eventOnPrimitiveComponentEntered_Parms, otherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGDotComponent_OnPrimitiveComponentEntered_Statics::NewProp_otherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGDotComponent_OnPrimitiveComponentEntered_Statics::NewProp_otherComp = { UE4CodeGen_Private::EPropertyClass::Object, "otherComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(FGDotComponent_eventOnPrimitiveComponentEntered_Parms, otherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFGDotComponent_OnPrimitiveComponentEntered_Statics::NewProp_otherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGDotComponent_OnPrimitiveComponentEntered_Statics::NewProp_otherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGDotComponent_OnPrimitiveComponentEntered_Statics::NewProp_other = { UE4CodeGen_Private::EPropertyClass::Object, "other", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGDotComponent_eventOnPrimitiveComponentEntered_Parms, other), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGDotComponent_OnPrimitiveComponentEntered_Statics::NewProp_overlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGDotComponent_OnPrimitiveComponentEntered_Statics::NewProp_overlappedComp = { UE4CodeGen_Private::EPropertyClass::Object, "overlappedComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(FGDotComponent_eventOnPrimitiveComponentEntered_Parms, overlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFGDotComponent_OnPrimitiveComponentEntered_Statics::NewProp_overlappedComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGDotComponent_OnPrimitiveComponentEntered_Statics::NewProp_overlappedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGDotComponent_OnPrimitiveComponentEntered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGDotComponent_OnPrimitiveComponentEntered_Statics::NewProp_sweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGDotComponent_OnPrimitiveComponentEntered_Statics::NewProp_fromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGDotComponent_OnPrimitiveComponentEntered_Statics::NewProp_otherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGDotComponent_OnPrimitiveComponentEntered_Statics::NewProp_otherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGDotComponent_OnPrimitiveComponentEntered_Statics::NewProp_other,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGDotComponent_OnPrimitiveComponentEntered_Statics::NewProp_overlappedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGDotComponent_OnPrimitiveComponentEntered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGDotComponent.h" },
		{ "ToolTip", "Called whenever a primitive component enters the volume, this triggers check if we should start damage them" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGDotComponent_OnPrimitiveComponentEntered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGDotComponent, "OnPrimitiveComponentEntered", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00480400, sizeof(FGDotComponent_eventOnPrimitiveComponentEntered_Parms), Z_Construct_UFunction_UFGDotComponent_OnPrimitiveComponentEntered_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGDotComponent_OnPrimitiveComponentEntered_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGDotComponent_OnPrimitiveComponentEntered_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGDotComponent_OnPrimitiveComponentEntered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGDotComponent_OnPrimitiveComponentEntered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGDotComponent_OnPrimitiveComponentEntered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGDotComponent_OnPrimitiveComponentExited_Statics
	{
		struct FGDotComponent_eventOnPrimitiveComponentExited_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGDotComponent_OnPrimitiveComponentExited_Statics::NewProp_otherBodyIndex = { UE4CodeGen_Private::EPropertyClass::Int, "otherBodyIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGDotComponent_eventOnPrimitiveComponentExited_Parms, otherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGDotComponent_OnPrimitiveComponentExited_Statics::NewProp_otherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGDotComponent_OnPrimitiveComponentExited_Statics::NewProp_otherComp = { UE4CodeGen_Private::EPropertyClass::Object, "otherComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(FGDotComponent_eventOnPrimitiveComponentExited_Parms, otherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFGDotComponent_OnPrimitiveComponentExited_Statics::NewProp_otherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGDotComponent_OnPrimitiveComponentExited_Statics::NewProp_otherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGDotComponent_OnPrimitiveComponentExited_Statics::NewProp_other = { UE4CodeGen_Private::EPropertyClass::Object, "other", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGDotComponent_eventOnPrimitiveComponentExited_Parms, other), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGDotComponent_OnPrimitiveComponentExited_Statics::NewProp_overlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGDotComponent_OnPrimitiveComponentExited_Statics::NewProp_overlappedComp = { UE4CodeGen_Private::EPropertyClass::Object, "overlappedComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(FGDotComponent_eventOnPrimitiveComponentExited_Parms, overlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFGDotComponent_OnPrimitiveComponentExited_Statics::NewProp_overlappedComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGDotComponent_OnPrimitiveComponentExited_Statics::NewProp_overlappedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGDotComponent_OnPrimitiveComponentExited_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGDotComponent_OnPrimitiveComponentExited_Statics::NewProp_otherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGDotComponent_OnPrimitiveComponentExited_Statics::NewProp_otherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGDotComponent_OnPrimitiveComponentExited_Statics::NewProp_other,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGDotComponent_OnPrimitiveComponentExited_Statics::NewProp_overlappedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGDotComponent_OnPrimitiveComponentExited_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGDotComponent.h" },
		{ "ToolTip", "Called whenever a primitive component enters the volume, stop damage them" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGDotComponent_OnPrimitiveComponentExited_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGDotComponent, "OnPrimitiveComponentExited", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080400, sizeof(FGDotComponent_eventOnPrimitiveComponentExited_Parms), Z_Construct_UFunction_UFGDotComponent_OnPrimitiveComponentExited_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGDotComponent_OnPrimitiveComponentExited_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGDotComponent_OnPrimitiveComponentExited_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGDotComponent_OnPrimitiveComponentExited_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGDotComponent_OnPrimitiveComponentExited()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGDotComponent_OnPrimitiveComponentExited_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGDotComponent_NoRegister()
	{
		return UFGDotComponent::StaticClass();
	}
	struct Z_Construct_UClass_UFGDotComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mActorsToDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mActorsToDamage;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mActorsToDamage_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDotClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mDotClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGDotComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGDotComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGDotComponent_DamageContainingActors, "DamageContainingActors" }, // 1036287214
		{ &Z_Construct_UFunction_UFGDotComponent_OnPrimitiveComponentEntered, "OnPrimitiveComponentEntered" }, // 2734545310
		{ &Z_Construct_UFunction_UFGDotComponent_OnPrimitiveComponentExited, "OnPrimitiveComponentExited" }, // 3794206291
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGDotComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "DisplayName", "DotComponent" },
		{ "HideCategories", "Cooking Collision Rendering Sockets Trigger PhysicsVolume" },
		{ "IncludePath", "FGDotComponent.h" },
		{ "ModuleRelativePath", "Public/FGDotComponent.h" },
		{ "ToolTip", "Attach this to a PrimtiveComponent (like Box, Mesh or Brush) and the whenever someone is inside this\nshape, then we apply the specified dot to the actors specified in the UFGDamageOverTime class" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGDotComponent_Statics::NewProp_mActorsToDamage_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGDotComponent.h" },
		{ "ToolTip", "The actors we want to damage" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGDotComponent_Statics::NewProp_mActorsToDamage = { UE4CodeGen_Private::EPropertyClass::Array, "mActorsToDamage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UFGDotComponent, mActorsToDamage), METADATA_PARAMS(Z_Construct_UClass_UFGDotComponent_Statics::NewProp_mActorsToDamage_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGDotComponent_Statics::NewProp_mActorsToDamage_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGDotComponent_Statics::NewProp_mActorsToDamage_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "mActorsToDamage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGDotComponent_Statics::NewProp_mDotClass_MetaData[] = {
		{ "Category", "Dot" },
		{ "ModuleRelativePath", "Public/FGDotComponent.h" },
		{ "ToolTip", "The dot we should apply to things in the primitive component we are attached to" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFGDotComponent_Statics::NewProp_mDotClass = { UE4CodeGen_Private::EPropertyClass::Class, "mDotClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000000001, 1, nullptr, STRUCT_OFFSET(UFGDotComponent, mDotClass), Z_Construct_UClass_UFGDamageOverTime_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UFGDotComponent_Statics::NewProp_mDotClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGDotComponent_Statics::NewProp_mDotClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGDotComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGDotComponent_Statics::NewProp_mActorsToDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGDotComponent_Statics::NewProp_mActorsToDamage_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGDotComponent_Statics::NewProp_mDotClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGDotComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGDotComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGDotComponent_Statics::ClassParams = {
		&UFGDotComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A4u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UFGDotComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UFGDotComponent_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFGDotComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGDotComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGDotComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGDotComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGDotComponent, 1417021309);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGDotComponent(Z_Construct_UClass_UFGDotComponent, &UFGDotComponent::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGDotComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGDotComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
