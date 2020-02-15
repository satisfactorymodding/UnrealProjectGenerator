// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGVolumeMapArea.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGVolumeMapArea() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGVolumeMapArea_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGVolumeMapArea();
	ENGINE_API UClass* Z_Construct_UClass_AVolume();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGVolumeMapArea_GetMapArea();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGMapArea_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGVolumeMapArea_OnPrimitiveComponentEntered();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void AFGVolumeMapArea::StaticRegisterNativesAFGVolumeMapArea()
	{
		UClass* Class = AFGVolumeMapArea::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMapArea", &AFGVolumeMapArea::execGetMapArea },
			{ "OnPrimitiveComponentEntered", &AFGVolumeMapArea::execOnPrimitiveComponentEntered },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGVolumeMapArea_GetMapArea_Statics
	{
		struct FGVolumeMapArea_eventGetMapArea_Parms
		{
			TSubclassOf<UFGMapArea>  ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGVolumeMapArea_GetMapArea_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGVolumeMapArea_eventGetMapArea_Parms, ReturnValue), Z_Construct_UClass_UFGMapArea_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGVolumeMapArea_GetMapArea_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGVolumeMapArea_GetMapArea_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGVolumeMapArea_GetMapArea_Statics::Function_MetaDataParams[] = {
		{ "Category", "Map Area" },
		{ "ModuleRelativePath", "Public/FGVolumeMapArea.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGVolumeMapArea_GetMapArea_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGVolumeMapArea, nullptr, "GetMapArea", sizeof(FGVolumeMapArea_eventGetMapArea_Parms), Z_Construct_UFunction_AFGVolumeMapArea_GetMapArea_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGVolumeMapArea_GetMapArea_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGVolumeMapArea_GetMapArea_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGVolumeMapArea_GetMapArea_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGVolumeMapArea_GetMapArea()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGVolumeMapArea_GetMapArea_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGVolumeMapArea_OnPrimitiveComponentEntered_Statics
	{
		struct FGVolumeMapArea_eventOnPrimitiveComponentEntered_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGVolumeMapArea_OnPrimitiveComponentEntered_Statics::NewProp_sweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGVolumeMapArea_OnPrimitiveComponentEntered_Statics::NewProp_sweepResult = { "sweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGVolumeMapArea_eventOnPrimitiveComponentEntered_Parms, sweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AFGVolumeMapArea_OnPrimitiveComponentEntered_Statics::NewProp_sweepResult_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGVolumeMapArea_OnPrimitiveComponentEntered_Statics::NewProp_sweepResult_MetaData)) };
	void Z_Construct_UFunction_AFGVolumeMapArea_OnPrimitiveComponentEntered_Statics::NewProp_fromSweep_SetBit(void* Obj)
	{
		((FGVolumeMapArea_eventOnPrimitiveComponentEntered_Parms*)Obj)->fromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGVolumeMapArea_OnPrimitiveComponentEntered_Statics::NewProp_fromSweep = { "fromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGVolumeMapArea_eventOnPrimitiveComponentEntered_Parms), &Z_Construct_UFunction_AFGVolumeMapArea_OnPrimitiveComponentEntered_Statics::NewProp_fromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGVolumeMapArea_OnPrimitiveComponentEntered_Statics::NewProp_otherBodyIndex = { "otherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGVolumeMapArea_eventOnPrimitiveComponentEntered_Parms, otherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGVolumeMapArea_OnPrimitiveComponentEntered_Statics::NewProp_otherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGVolumeMapArea_OnPrimitiveComponentEntered_Statics::NewProp_otherComp = { "otherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGVolumeMapArea_eventOnPrimitiveComponentEntered_Parms, otherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFGVolumeMapArea_OnPrimitiveComponentEntered_Statics::NewProp_otherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGVolumeMapArea_OnPrimitiveComponentEntered_Statics::NewProp_otherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGVolumeMapArea_OnPrimitiveComponentEntered_Statics::NewProp_other = { "other", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGVolumeMapArea_eventOnPrimitiveComponentEntered_Parms, other), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGVolumeMapArea_OnPrimitiveComponentEntered_Statics::NewProp_overlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGVolumeMapArea_OnPrimitiveComponentEntered_Statics::NewProp_overlappedComp = { "overlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGVolumeMapArea_eventOnPrimitiveComponentEntered_Parms, overlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFGVolumeMapArea_OnPrimitiveComponentEntered_Statics::NewProp_overlappedComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGVolumeMapArea_OnPrimitiveComponentEntered_Statics::NewProp_overlappedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGVolumeMapArea_OnPrimitiveComponentEntered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGVolumeMapArea_OnPrimitiveComponentEntered_Statics::NewProp_sweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGVolumeMapArea_OnPrimitiveComponentEntered_Statics::NewProp_fromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGVolumeMapArea_OnPrimitiveComponentEntered_Statics::NewProp_otherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGVolumeMapArea_OnPrimitiveComponentEntered_Statics::NewProp_otherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGVolumeMapArea_OnPrimitiveComponentEntered_Statics::NewProp_other,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGVolumeMapArea_OnPrimitiveComponentEntered_Statics::NewProp_overlappedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGVolumeMapArea_OnPrimitiveComponentEntered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGVolumeMapArea.h" },
		{ "ToolTip", "Called whenever a primitive component enters this volume" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGVolumeMapArea_OnPrimitiveComponentEntered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGVolumeMapArea, nullptr, "OnPrimitiveComponentEntered", sizeof(FGVolumeMapArea_eventOnPrimitiveComponentEntered_Parms), Z_Construct_UFunction_AFGVolumeMapArea_OnPrimitiveComponentEntered_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGVolumeMapArea_OnPrimitiveComponentEntered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGVolumeMapArea_OnPrimitiveComponentEntered_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGVolumeMapArea_OnPrimitiveComponentEntered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGVolumeMapArea_OnPrimitiveComponentEntered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGVolumeMapArea_OnPrimitiveComponentEntered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGVolumeMapArea_NoRegister()
	{
		return AFGVolumeMapArea::StaticClass();
	}
	struct Z_Construct_UClass_AFGVolumeMapArea_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMapArea_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mMapArea;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGVolumeMapArea_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGVolumeMapArea_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGVolumeMapArea_GetMapArea, "GetMapArea" }, // 3556479165
		{ &Z_Construct_UFunction_AFGVolumeMapArea_OnPrimitiveComponentEntered, "OnPrimitiveComponentEntered" }, // 3023099332
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGVolumeMapArea_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Brush Physics Object Display Rendering Physics Input Blueprint" },
		{ "IncludePath", "FGVolumeMapArea.h" },
		{ "ModuleRelativePath", "Public/FGVolumeMapArea.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "This is a volume that will define the physical location of a map area." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGVolumeMapArea_Statics::NewProp_mMapArea_MetaData[] = {
		{ "Category", "Map Area" },
		{ "ModuleRelativePath", "Public/FGVolumeMapArea.h" },
		{ "ToolTip", "This is the area this map defines." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGVolumeMapArea_Statics::NewProp_mMapArea = { "mMapArea", nullptr, (EPropertyFlags)0x0044000000000801, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGVolumeMapArea, mMapArea), Z_Construct_UClass_UFGMapArea_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFGVolumeMapArea_Statics::NewProp_mMapArea_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGVolumeMapArea_Statics::NewProp_mMapArea_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGVolumeMapArea_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGVolumeMapArea_Statics::NewProp_mMapArea,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGVolumeMapArea_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGVolumeMapArea>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGVolumeMapArea_Statics::ClassParams = {
		&AFGVolumeMapArea::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFGVolumeMapArea_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AFGVolumeMapArea_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AFGVolumeMapArea_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGVolumeMapArea_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGVolumeMapArea()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGVolumeMapArea_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGVolumeMapArea, 4035535070);
	template<> FACTORYGAME_API UClass* StaticClass<AFGVolumeMapArea>()
	{
		return AFGVolumeMapArea::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGVolumeMapArea(Z_Construct_UClass_AFGVolumeMapArea, &AFGVolumeMapArea::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGVolumeMapArea"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGVolumeMapArea);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
