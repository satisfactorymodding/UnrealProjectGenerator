// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGVehicleCollisionBoxComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGVehicleCollisionBoxComponent() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGVehicleCollisionBoxComponent_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGVehicleCollisionBoxComponent();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGVehicleCollisionBoxComponent_OnOverlapBegin();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void UFGVehicleCollisionBoxComponent::StaticRegisterNativesUFGVehicleCollisionBoxComponent()
	{
		UClass* Class = UFGVehicleCollisionBoxComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnOverlapBegin", &UFGVehicleCollisionBoxComponent::execOnOverlapBegin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGVehicleCollisionBoxComponent_OnOverlapBegin_Statics
	{
		struct FGVehicleCollisionBoxComponent_eventOnOverlapBegin_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGVehicleCollisionBoxComponent_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGVehicleCollisionBoxComponent_OnOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGVehicleCollisionBoxComponent_eventOnOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_UFGVehicleCollisionBoxComponent_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGVehicleCollisionBoxComponent_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData)) };
	void Z_Construct_UFunction_UFGVehicleCollisionBoxComponent_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((FGVehicleCollisionBoxComponent_eventOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGVehicleCollisionBoxComponent_OnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGVehicleCollisionBoxComponent_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_UFGVehicleCollisionBoxComponent_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGVehicleCollisionBoxComponent_OnOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGVehicleCollisionBoxComponent_eventOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGVehicleCollisionBoxComponent_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGVehicleCollisionBoxComponent_OnOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGVehicleCollisionBoxComponent_eventOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFGVehicleCollisionBoxComponent_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGVehicleCollisionBoxComponent_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGVehicleCollisionBoxComponent_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGVehicleCollisionBoxComponent_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGVehicleCollisionBoxComponent_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGVehicleCollisionBoxComponent_OnOverlapBegin_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGVehicleCollisionBoxComponent_eventOnOverlapBegin_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFGVehicleCollisionBoxComponent_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGVehicleCollisionBoxComponent_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGVehicleCollisionBoxComponent_OnOverlapBegin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGVehicleCollisionBoxComponent_OnOverlapBegin_Statics::NewProp_SweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGVehicleCollisionBoxComponent_OnOverlapBegin_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGVehicleCollisionBoxComponent_OnOverlapBegin_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGVehicleCollisionBoxComponent_OnOverlapBegin_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGVehicleCollisionBoxComponent_OnOverlapBegin_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGVehicleCollisionBoxComponent_OnOverlapBegin_Statics::NewProp_OverlappedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGVehicleCollisionBoxComponent_OnOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGVehicleCollisionBoxComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGVehicleCollisionBoxComponent_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGVehicleCollisionBoxComponent, nullptr, "OnOverlapBegin", sizeof(FGVehicleCollisionBoxComponent_eventOnOverlapBegin_Parms), Z_Construct_UFunction_UFGVehicleCollisionBoxComponent_OnOverlapBegin_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGVehicleCollisionBoxComponent_OnOverlapBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGVehicleCollisionBoxComponent_OnOverlapBegin_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGVehicleCollisionBoxComponent_OnOverlapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGVehicleCollisionBoxComponent_OnOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGVehicleCollisionBoxComponent_OnOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGVehicleCollisionBoxComponent_NoRegister()
	{
		return UFGVehicleCollisionBoxComponent::StaticClass();
	}
	struct Z_Construct_UClass_UFGVehicleCollisionBoxComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMinVelocityForAddedZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mMinVelocityForAddedZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMaxCollisionVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mMaxCollisionVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMaxAddedZVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mMaxAddedZVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mAddedZVelocityFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mAddedZVelocityFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mFudgeFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mFudgeFactor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGVehicleCollisionBoxComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBoxComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGVehicleCollisionBoxComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGVehicleCollisionBoxComponent_OnOverlapBegin, "OnOverlapBegin" }, // 279950268
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGVehicleCollisionBoxComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger" },
		{ "IncludePath", "FGVehicleCollisionBoxComponent.h" },
		{ "ModuleRelativePath", "Public/FGVehicleCollisionBoxComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGVehicleCollisionBoxComponent_Statics::NewProp_mMinVelocityForAddedZ_MetaData[] = {
		{ "Category", "Vehicle Collision" },
		{ "ModuleRelativePath", "Public/FGVehicleCollisionBoxComponent.h" },
		{ "ToolTip", "The minimum velocity required for any fudged Z values to take effect. This helps when player just runs against the vehicle." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGVehicleCollisionBoxComponent_Statics::NewProp_mMinVelocityForAddedZ = { "mMinVelocityForAddedZ", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGVehicleCollisionBoxComponent, mMinVelocityForAddedZ), METADATA_PARAMS(Z_Construct_UClass_UFGVehicleCollisionBoxComponent_Statics::NewProp_mMinVelocityForAddedZ_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGVehicleCollisionBoxComponent_Statics::NewProp_mMinVelocityForAddedZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGVehicleCollisionBoxComponent_Statics::NewProp_mMaxCollisionVelocity_MetaData[] = {
		{ "Category", "Vehicle Collision" },
		{ "ModuleRelativePath", "Public/FGVehicleCollisionBoxComponent.h" },
		{ "ToolTip", "The maximum velocity that can be added on a collision." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGVehicleCollisionBoxComponent_Statics::NewProp_mMaxCollisionVelocity = { "mMaxCollisionVelocity", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGVehicleCollisionBoxComponent, mMaxCollisionVelocity), METADATA_PARAMS(Z_Construct_UClass_UFGVehicleCollisionBoxComponent_Statics::NewProp_mMaxCollisionVelocity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGVehicleCollisionBoxComponent_Statics::NewProp_mMaxCollisionVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGVehicleCollisionBoxComponent_Statics::NewProp_mMaxAddedZVelocity_MetaData[] = {
		{ "Category", "Vehicle Collision" },
		{ "ModuleRelativePath", "Public/FGVehicleCollisionBoxComponent.h" },
		{ "ToolTip", "The maximum Z velocity that can be added on a collision." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGVehicleCollisionBoxComponent_Statics::NewProp_mMaxAddedZVelocity = { "mMaxAddedZVelocity", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGVehicleCollisionBoxComponent, mMaxAddedZVelocity), METADATA_PARAMS(Z_Construct_UClass_UFGVehicleCollisionBoxComponent_Statics::NewProp_mMaxAddedZVelocity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGVehicleCollisionBoxComponent_Statics::NewProp_mMaxAddedZVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGVehicleCollisionBoxComponent_Statics::NewProp_mAddedZVelocityFactor_MetaData[] = {
		{ "Category", "Vehicle Collision" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/FGVehicleCollisionBoxComponent.h" },
		{ "ToolTip", "Added Z Velocity multiplier. DOES NOT specify how much velocity. This number should be small 0.0-1.0 range" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGVehicleCollisionBoxComponent_Statics::NewProp_mAddedZVelocityFactor = { "mAddedZVelocityFactor", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGVehicleCollisionBoxComponent, mAddedZVelocityFactor), METADATA_PARAMS(Z_Construct_UClass_UFGVehicleCollisionBoxComponent_Statics::NewProp_mAddedZVelocityFactor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGVehicleCollisionBoxComponent_Statics::NewProp_mAddedZVelocityFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGVehicleCollisionBoxComponent_Statics::NewProp_mFudgeFactor_MetaData[] = {
		{ "Category", "Vehicle Collision" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.1" },
		{ "ModuleRelativePath", "Public/FGVehicleCollisionBoxComponent.h" },
		{ "ToolTip", "Multiplier for velocity change with all impacts." },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGVehicleCollisionBoxComponent_Statics::NewProp_mFudgeFactor = { "mFudgeFactor", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGVehicleCollisionBoxComponent, mFudgeFactor), METADATA_PARAMS(Z_Construct_UClass_UFGVehicleCollisionBoxComponent_Statics::NewProp_mFudgeFactor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGVehicleCollisionBoxComponent_Statics::NewProp_mFudgeFactor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGVehicleCollisionBoxComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGVehicleCollisionBoxComponent_Statics::NewProp_mMinVelocityForAddedZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGVehicleCollisionBoxComponent_Statics::NewProp_mMaxCollisionVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGVehicleCollisionBoxComponent_Statics::NewProp_mMaxAddedZVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGVehicleCollisionBoxComponent_Statics::NewProp_mAddedZVelocityFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGVehicleCollisionBoxComponent_Statics::NewProp_mFudgeFactor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGVehicleCollisionBoxComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGVehicleCollisionBoxComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGVehicleCollisionBoxComponent_Statics::ClassParams = {
		&UFGVehicleCollisionBoxComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFGVehicleCollisionBoxComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UFGVehicleCollisionBoxComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFGVehicleCollisionBoxComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGVehicleCollisionBoxComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGVehicleCollisionBoxComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGVehicleCollisionBoxComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGVehicleCollisionBoxComponent, 3046052283);
	template<> FACTORYGAME_API UClass* StaticClass<UFGVehicleCollisionBoxComponent>()
	{
		return UFGVehicleCollisionBoxComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGVehicleCollisionBoxComponent(Z_Construct_UClass_UFGVehicleCollisionBoxComponent, &UFGVehicleCollisionBoxComponent::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGVehicleCollisionBoxComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGVehicleCollisionBoxComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
