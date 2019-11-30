// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGDestructibleActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGDestructibleActor() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGDestructibleActor_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGDestructibleActor();
	APEXDESTRUCTION_API UClass* Z_Construct_UClass_ADestructibleActor();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGDestructibleActor_Multicast_OnDestructibleFractured();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGDestructibleActor_OnDestructibleFractured();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGDestructibleActor_PlayDestructEffects();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSaveInterface_NoRegister();
// End Cross Module References
	static FName NAME_AFGDestructibleActor_Multicast_OnDestructibleFractured = FName(TEXT("Multicast_OnDestructibleFractured"));
	void AFGDestructibleActor::Multicast_OnDestructibleFractured(FVector const& hitPoint, FVector const& hitDirection)
	{
		FGDestructibleActor_eventMulticast_OnDestructibleFractured_Parms Parms;
		Parms.hitPoint=hitPoint;
		Parms.hitDirection=hitDirection;
		ProcessEvent(FindFunctionChecked(NAME_AFGDestructibleActor_Multicast_OnDestructibleFractured),&Parms);
	}
	static FName NAME_AFGDestructibleActor_PlayDestructEffects = FName(TEXT("PlayDestructEffects"));
	void AFGDestructibleActor::PlayDestructEffects()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGDestructibleActor_PlayDestructEffects),NULL);
	}
	void AFGDestructibleActor::StaticRegisterNativesAFGDestructibleActor()
	{
		UClass* Class = AFGDestructibleActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multicast_OnDestructibleFractured", &AFGDestructibleActor::execMulticast_OnDestructibleFractured },
			{ "OnDestructibleFractured", &AFGDestructibleActor::execOnDestructibleFractured },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGDestructibleActor_Multicast_OnDestructibleFractured_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hitDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_hitDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hitPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_hitPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGDestructibleActor_Multicast_OnDestructibleFractured_Statics::NewProp_hitDirection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGDestructibleActor_Multicast_OnDestructibleFractured_Statics::NewProp_hitDirection = { "hitDirection", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGDestructibleActor_eventMulticast_OnDestructibleFractured_Parms, hitDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AFGDestructibleActor_Multicast_OnDestructibleFractured_Statics::NewProp_hitDirection_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGDestructibleActor_Multicast_OnDestructibleFractured_Statics::NewProp_hitDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGDestructibleActor_Multicast_OnDestructibleFractured_Statics::NewProp_hitPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGDestructibleActor_Multicast_OnDestructibleFractured_Statics::NewProp_hitPoint = { "hitPoint", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGDestructibleActor_eventMulticast_OnDestructibleFractured_Parms, hitPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AFGDestructibleActor_Multicast_OnDestructibleFractured_Statics::NewProp_hitPoint_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGDestructibleActor_Multicast_OnDestructibleFractured_Statics::NewProp_hitPoint_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGDestructibleActor_Multicast_OnDestructibleFractured_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGDestructibleActor_Multicast_OnDestructibleFractured_Statics::NewProp_hitDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGDestructibleActor_Multicast_OnDestructibleFractured_Statics::NewProp_hitPoint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGDestructibleActor_Multicast_OnDestructibleFractured_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGDestructibleActor.h" },
		{ "ToolTip", "Called on client when this is fractured" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGDestructibleActor_Multicast_OnDestructibleFractured_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGDestructibleActor, nullptr, "Multicast_OnDestructibleFractured", sizeof(FGDestructibleActor_eventMulticast_OnDestructibleFractured_Parms), Z_Construct_UFunction_AFGDestructibleActor_Multicast_OnDestructibleFractured_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGDestructibleActor_Multicast_OnDestructibleFractured_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00844C41, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGDestructibleActor_Multicast_OnDestructibleFractured_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGDestructibleActor_Multicast_OnDestructibleFractured_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGDestructibleActor_Multicast_OnDestructibleFractured()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGDestructibleActor_Multicast_OnDestructibleFractured_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGDestructibleActor_OnDestructibleFractured_Statics
	{
		struct FGDestructibleActor_eventOnDestructibleFractured_Parms
		{
			FVector hitPoint;
			FVector hitDirection;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hitDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_hitDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hitPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_hitPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGDestructibleActor_OnDestructibleFractured_Statics::NewProp_hitDirection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGDestructibleActor_OnDestructibleFractured_Statics::NewProp_hitDirection = { "hitDirection", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGDestructibleActor_eventOnDestructibleFractured_Parms, hitDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AFGDestructibleActor_OnDestructibleFractured_Statics::NewProp_hitDirection_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGDestructibleActor_OnDestructibleFractured_Statics::NewProp_hitDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGDestructibleActor_OnDestructibleFractured_Statics::NewProp_hitPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGDestructibleActor_OnDestructibleFractured_Statics::NewProp_hitPoint = { "hitPoint", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGDestructibleActor_eventOnDestructibleFractured_Parms, hitPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AFGDestructibleActor_OnDestructibleFractured_Statics::NewProp_hitPoint_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGDestructibleActor_OnDestructibleFractured_Statics::NewProp_hitPoint_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGDestructibleActor_OnDestructibleFractured_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGDestructibleActor_OnDestructibleFractured_Statics::NewProp_hitDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGDestructibleActor_OnDestructibleFractured_Statics::NewProp_hitPoint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGDestructibleActor_OnDestructibleFractured_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGDestructibleActor.h" },
		{ "ToolTip", "Called when this actor is fractured" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGDestructibleActor_OnDestructibleFractured_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGDestructibleActor, nullptr, "OnDestructibleFractured", sizeof(FGDestructibleActor_eventOnDestructibleFractured_Parms), Z_Construct_UFunction_AFGDestructibleActor_OnDestructibleFractured_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGDestructibleActor_OnDestructibleFractured_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C40401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGDestructibleActor_OnDestructibleFractured_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGDestructibleActor_OnDestructibleFractured_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGDestructibleActor_OnDestructibleFractured()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGDestructibleActor_OnDestructibleFractured_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGDestructibleActor_PlayDestructEffects_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGDestructibleActor_PlayDestructEffects_Statics::Function_MetaDataParams[] = {
		{ "Category", "Destructible" },
		{ "ModuleRelativePath", "Public/FGDestructibleActor.h" },
		{ "ToolTip", "Called on server and client when we destruct this actor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGDestructibleActor_PlayDestructEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGDestructibleActor, nullptr, "PlayDestructEffects", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGDestructibleActor_PlayDestructEffects_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGDestructibleActor_PlayDestructEffects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGDestructibleActor_PlayDestructEffects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGDestructibleActor_PlayDestructEffects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGDestructibleActor_NoRegister()
	{
		return AFGDestructibleActor::StaticClass();
	}
	struct Z_Construct_UClass_AFGDestructibleActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mHasBeenFractured_MetaData[];
#endif
		static void NewProp_mHasBeenFractured_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mHasBeenFractured;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mStaticMeshProxy_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mStaticMeshProxy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGDestructibleActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADestructibleActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGDestructibleActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGDestructibleActor_Multicast_OnDestructibleFractured, "Multicast_OnDestructibleFractured" }, // 1251681436
		{ &Z_Construct_UFunction_AFGDestructibleActor_OnDestructibleFractured, "OnDestructibleFractured" }, // 3205700707
		{ &Z_Construct_UFunction_AFGDestructibleActor_PlayDestructEffects, "PlayDestructEffects" }, // 2155023326
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGDestructibleActor_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input" },
		{ "IncludePath", "FGDestructibleActor.h" },
		{ "ModuleRelativePath", "Public/FGDestructibleActor.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "This is an actor that should be able to be destroyed by explosions and stuff. Can block cave entrances and stuff.\nIf you make a new rock that should be destructible, then you should make a data only blueprint of this" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGDestructibleActor_Statics::NewProp_mHasBeenFractured_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGDestructibleActor.h" },
		{ "ToolTip", "So we can save if this has been fractured" },
	};
#endif
	void Z_Construct_UClass_AFGDestructibleActor_Statics::NewProp_mHasBeenFractured_SetBit(void* Obj)
	{
		((AFGDestructibleActor*)Obj)->mHasBeenFractured = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGDestructibleActor_Statics::NewProp_mHasBeenFractured = { "mHasBeenFractured", nullptr, (EPropertyFlags)0x0040000001000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFGDestructibleActor), &Z_Construct_UClass_AFGDestructibleActor_Statics::NewProp_mHasBeenFractured_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGDestructibleActor_Statics::NewProp_mHasBeenFractured_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGDestructibleActor_Statics::NewProp_mHasBeenFractured_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGDestructibleActor_Statics::NewProp_mStaticMeshProxy_MetaData[] = {
		{ "Category", "Destructible" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FGDestructibleActor.h" },
		{ "ToolTip", "The mesh that should be rendered before we start going destructible. Used for optimization as it has less triangles" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGDestructibleActor_Statics::NewProp_mStaticMeshProxy = { "mStaticMeshProxy", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGDestructibleActor, mStaticMeshProxy), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGDestructibleActor_Statics::NewProp_mStaticMeshProxy_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGDestructibleActor_Statics::NewProp_mStaticMeshProxy_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGDestructibleActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGDestructibleActor_Statics::NewProp_mHasBeenFractured,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGDestructibleActor_Statics::NewProp_mStaticMeshProxy,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AFGDestructibleActor_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UFGSaveInterface_NoRegister, (int32)VTABLE_OFFSET(AFGDestructibleActor, IFGSaveInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGDestructibleActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGDestructibleActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGDestructibleActor_Statics::ClassParams = {
		&AFGDestructibleActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFGDestructibleActor_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AFGDestructibleActor_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AFGDestructibleActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGDestructibleActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGDestructibleActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGDestructibleActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGDestructibleActor, 3880788873);
	template<> FACTORYGAME_API UClass* StaticClass<AFGDestructibleActor>()
	{
		return AFGDestructibleActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGDestructibleActor(Z_Construct_UClass_AFGDestructibleActor, &AFGDestructibleActor::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGDestructibleActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGDestructibleActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
