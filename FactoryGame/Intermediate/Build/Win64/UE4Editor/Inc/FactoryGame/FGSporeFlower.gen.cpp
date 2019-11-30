// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGSporeFlower.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGSporeFlower() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGSporeFlower_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGSporeFlower();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGSporeFlower_ActorShouldTriggerFlower();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSaveInterface_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSignificanceInterface_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGExplosiveDestroyableInterface_NoRegister();
// End Cross Module References
	void AFGSporeFlower::StaticRegisterNativesAFGSporeFlower()
	{
		UClass* Class = AFGSporeFlower::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActorShouldTriggerFlower", &AFGSporeFlower::execActorShouldTriggerFlower },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGSporeFlower_ActorShouldTriggerFlower_Statics
	{
		struct FGSporeFlower_eventActorShouldTriggerFlower_Parms
		{
			AActor* actor;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGSporeFlower_ActorShouldTriggerFlower_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGSporeFlower_eventActorShouldTriggerFlower_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGSporeFlower_ActorShouldTriggerFlower_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGSporeFlower_eventActorShouldTriggerFlower_Parms), &Z_Construct_UFunction_AFGSporeFlower_ActorShouldTriggerFlower_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGSporeFlower_ActorShouldTriggerFlower_Statics::NewProp_actor = { UE4CodeGen_Private::EPropertyClass::Object, "actor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGSporeFlower_eventActorShouldTriggerFlower_Parms, actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGSporeFlower_ActorShouldTriggerFlower_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSporeFlower_ActorShouldTriggerFlower_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGSporeFlower_ActorShouldTriggerFlower_Statics::NewProp_actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGSporeFlower_ActorShouldTriggerFlower_Statics::Function_MetaDataParams[] = {
		{ "Category", "SporeFlower" },
		{ "ModuleRelativePath", "Public/FGSporeFlower.h" },
		{ "ToolTip", "Test if an actor should trigger spore flower to rise" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGSporeFlower_ActorShouldTriggerFlower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGSporeFlower, "ActorShouldTriggerFlower", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14080401, sizeof(FGSporeFlower_eventActorShouldTriggerFlower_Parms), Z_Construct_UFunction_AFGSporeFlower_ActorShouldTriggerFlower_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGSporeFlower_ActorShouldTriggerFlower_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGSporeFlower_ActorShouldTriggerFlower_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGSporeFlower_ActorShouldTriggerFlower_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGSporeFlower_ActorShouldTriggerFlower()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGSporeFlower_ActorShouldTriggerFlower_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGSporeFlower_NoRegister()
	{
		return AFGSporeFlower::StaticClass();
	}
	struct Z_Construct_UClass_AFGSporeFlower_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mTriggerActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mTriggerActors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mTriggerActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mTriggerActorClasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mTriggerActorClasses;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mTriggerActorClasses_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGSporeFlower_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGSporeFlower_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGSporeFlower_ActorShouldTriggerFlower, "ActorShouldTriggerFlower" }, // 4116699170
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGSporeFlower_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FGSporeFlower.h" },
		{ "ModuleRelativePath", "Public/FGSporeFlower.h" },
		{ "ToolTip", "todo: (a bigish one) this is just a start of what should be a much more complete nativization of the spore flower" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGSporeFlower_Statics::NewProp_mTriggerActors_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGSporeFlower.h" },
		{ "ToolTip", "Holds a list of all actors inside trigger spehere" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGSporeFlower_Statics::NewProp_mTriggerActors = { UE4CodeGen_Private::EPropertyClass::Array, "mTriggerActors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000000, 1, nullptr, STRUCT_OFFSET(AFGSporeFlower, mTriggerActors), METADATA_PARAMS(Z_Construct_UClass_AFGSporeFlower_Statics::NewProp_mTriggerActors_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGSporeFlower_Statics::NewProp_mTriggerActors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGSporeFlower_Statics::NewProp_mTriggerActors_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "mTriggerActors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGSporeFlower_Statics::NewProp_mTriggerActorClasses_MetaData[] = {
		{ "Category", "SporeFlower" },
		{ "ModuleRelativePath", "Public/FGSporeFlower.h" },
		{ "ToolTip", "These actor types will trigger the spore flower to emit" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGSporeFlower_Statics::NewProp_mTriggerActorClasses = { UE4CodeGen_Private::EPropertyClass::Array, "mTriggerActorClasses", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000010001, 1, nullptr, STRUCT_OFFSET(AFGSporeFlower, mTriggerActorClasses), METADATA_PARAMS(Z_Construct_UClass_AFGSporeFlower_Statics::NewProp_mTriggerActorClasses_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGSporeFlower_Statics::NewProp_mTriggerActorClasses_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGSporeFlower_Statics::NewProp_mTriggerActorClasses_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "mTriggerActorClasses", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGSporeFlower_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGSporeFlower_Statics::NewProp_mTriggerActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGSporeFlower_Statics::NewProp_mTriggerActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGSporeFlower_Statics::NewProp_mTriggerActorClasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGSporeFlower_Statics::NewProp_mTriggerActorClasses_Inner,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AFGSporeFlower_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UFGSaveInterface_NoRegister, (int32)VTABLE_OFFSET(AFGSporeFlower, IFGSaveInterface), false },
			{ Z_Construct_UClass_UFGSignificanceInterface_NoRegister, (int32)VTABLE_OFFSET(AFGSporeFlower, IFGSignificanceInterface), false },
			{ Z_Construct_UClass_UFGExplosiveDestroyableInterface_NoRegister, (int32)VTABLE_OFFSET(AFGSporeFlower, IFGExplosiveDestroyableInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGSporeFlower_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGSporeFlower>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGSporeFlower_Statics::ClassParams = {
		&AFGSporeFlower::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AFGSporeFlower_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFGSporeFlower_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		InterfaceParams, ARRAY_COUNT(InterfaceParams),
		METADATA_PARAMS(Z_Construct_UClass_AFGSporeFlower_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGSporeFlower_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGSporeFlower()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGSporeFlower_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGSporeFlower, 3551248303);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGSporeFlower(Z_Construct_UClass_AFGSporeFlower, &AFGSporeFlower::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGSporeFlower"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGSporeFlower);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
