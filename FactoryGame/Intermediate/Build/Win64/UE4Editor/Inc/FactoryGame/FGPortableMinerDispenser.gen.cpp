// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/Equipment/FGPortableMinerDispenser.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGPortableMinerDispenser() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGPortableMinerDispenser_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGPortableMinerDispenser();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGEquipment();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGPortableMinerDispenser_Server_PrimaryFire();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGPortableMinerDispenser_SpawnPortableMiner();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGResourceNode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_EResourceForm();
// End Cross Module References
	static FName NAME_AFGPortableMinerDispenser_Server_PrimaryFire = FName(TEXT("Server_PrimaryFire"));
	void AFGPortableMinerDispenser::Server_PrimaryFire()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGPortableMinerDispenser_Server_PrimaryFire),NULL);
	}
	static FName NAME_AFGPortableMinerDispenser_SpawnPortableMiner = FName(TEXT("SpawnPortableMiner"));
	void AFGPortableMinerDispenser::SpawnPortableMiner(AFGResourceNode* resourceNode)
	{
		FGPortableMinerDispenser_eventSpawnPortableMiner_Parms Parms;
		Parms.resourceNode=resourceNode;
		ProcessEvent(FindFunctionChecked(NAME_AFGPortableMinerDispenser_SpawnPortableMiner),&Parms);
	}
	void AFGPortableMinerDispenser::StaticRegisterNativesAFGPortableMinerDispenser()
	{
		UClass* Class = AFGPortableMinerDispenser::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Server_PrimaryFire", &AFGPortableMinerDispenser::execServer_PrimaryFire },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGPortableMinerDispenser_Server_PrimaryFire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPortableMinerDispenser_Server_PrimaryFire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Equipment/FGPortableMinerDispenser.h" },
		{ "ToolTip", "Only the server handles the building." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPortableMinerDispenser_Server_PrimaryFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPortableMinerDispenser, nullptr, "Server_PrimaryFire", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPortableMinerDispenser_Server_PrimaryFire_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPortableMinerDispenser_Server_PrimaryFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGPortableMinerDispenser_Server_PrimaryFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGPortableMinerDispenser_Server_PrimaryFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGPortableMinerDispenser_SpawnPortableMiner_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_resourceNode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGPortableMinerDispenser_SpawnPortableMiner_Statics::NewProp_resourceNode = { "resourceNode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPortableMinerDispenser_eventSpawnPortableMiner_Parms, resourceNode), Z_Construct_UClass_AFGResourceNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGPortableMinerDispenser_SpawnPortableMiner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPortableMinerDispenser_SpawnPortableMiner_Statics::NewProp_resourceNode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPortableMinerDispenser_SpawnPortableMiner_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Equipment/FGPortableMinerDispenser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPortableMinerDispenser_SpawnPortableMiner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPortableMinerDispenser, nullptr, "SpawnPortableMiner", sizeof(FGPortableMinerDispenser_eventSpawnPortableMiner_Parms), Z_Construct_UFunction_AFGPortableMinerDispenser_SpawnPortableMiner_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGPortableMinerDispenser_SpawnPortableMiner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPortableMinerDispenser_SpawnPortableMiner_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPortableMinerDispenser_SpawnPortableMiner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGPortableMinerDispenser_SpawnPortableMiner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGPortableMinerDispenser_SpawnPortableMiner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGPortableMinerDispenser_NoRegister()
	{
		return AFGPortableMinerDispenser::StaticClass();
	}
	struct Z_Construct_UClass_AFGPortableMinerDispenser_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mInvalidPlacementMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mInvalidPlacementMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mValidPlacementMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mValidPlacementMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPlaceDistanceMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mPlaceDistanceMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mAllowedResourceForms_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mAllowedResourceForms;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_mAllowedResourceForms_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_mAllowedResourceForms_Inner_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGPortableMinerDispenser_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGEquipment,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGPortableMinerDispenser_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGPortableMinerDispenser_Server_PrimaryFire, "Server_PrimaryFire" }, // 884313774
		{ &Z_Construct_UFunction_AFGPortableMinerDispenser_SpawnPortableMiner, "SpawnPortableMiner" }, // 4016608594
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGPortableMinerDispenser_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Equipment/FGPortableMinerDispenser.h" },
		{ "ModuleRelativePath", "Public/Equipment/FGPortableMinerDispenser.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGPortableMinerDispenser_Statics::NewProp_mInvalidPlacementMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/Equipment/FGPortableMinerDispenser.h" },
		{ "ToolTip", "Material on hologram for invalid placement." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGPortableMinerDispenser_Statics::NewProp_mInvalidPlacementMaterial = { "mInvalidPlacementMaterial", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGPortableMinerDispenser, mInvalidPlacementMaterial), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGPortableMinerDispenser_Statics::NewProp_mInvalidPlacementMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGPortableMinerDispenser_Statics::NewProp_mInvalidPlacementMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGPortableMinerDispenser_Statics::NewProp_mValidPlacementMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/Equipment/FGPortableMinerDispenser.h" },
		{ "ToolTip", "Material on hologram for valid placement." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGPortableMinerDispenser_Statics::NewProp_mValidPlacementMaterial = { "mValidPlacementMaterial", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGPortableMinerDispenser, mValidPlacementMaterial), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGPortableMinerDispenser_Statics::NewProp_mValidPlacementMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGPortableMinerDispenser_Statics::NewProp_mValidPlacementMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGPortableMinerDispenser_Statics::NewProp_mPlaceDistanceMax_MetaData[] = {
		{ "Category", "Buildable" },
		{ "ModuleRelativePath", "Public/Equipment/FGPortableMinerDispenser.h" },
		{ "ToolTip", "Trace distance when building. * /" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGPortableMinerDispenser_Statics::NewProp_mPlaceDistanceMax = { "mPlaceDistanceMax", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGPortableMinerDispenser, mPlaceDistanceMax), METADATA_PARAMS(Z_Construct_UClass_AFGPortableMinerDispenser_Statics::NewProp_mPlaceDistanceMax_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGPortableMinerDispenser_Statics::NewProp_mPlaceDistanceMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGPortableMinerDispenser_Statics::NewProp_mAllowedResourceForms_MetaData[] = {
		{ "Category", "FGPortableMinerDispenser" },
		{ "ModuleRelativePath", "Public/Equipment/FGPortableMinerDispenser.h" },
		{ "ToolTip", "What form can the overlapping resources be in." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGPortableMinerDispenser_Statics::NewProp_mAllowedResourceForms = { "mAllowedResourceForms", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGPortableMinerDispenser, mAllowedResourceForms), METADATA_PARAMS(Z_Construct_UClass_AFGPortableMinerDispenser_Statics::NewProp_mAllowedResourceForms_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGPortableMinerDispenser_Statics::NewProp_mAllowedResourceForms_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AFGPortableMinerDispenser_Statics::NewProp_mAllowedResourceForms_Inner = { "mAllowedResourceForms", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_FactoryGame_EResourceForm, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AFGPortableMinerDispenser_Statics::NewProp_mAllowedResourceForms_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGPortableMinerDispenser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGPortableMinerDispenser_Statics::NewProp_mInvalidPlacementMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGPortableMinerDispenser_Statics::NewProp_mValidPlacementMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGPortableMinerDispenser_Statics::NewProp_mPlaceDistanceMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGPortableMinerDispenser_Statics::NewProp_mAllowedResourceForms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGPortableMinerDispenser_Statics::NewProp_mAllowedResourceForms_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGPortableMinerDispenser_Statics::NewProp_mAllowedResourceForms_Inner_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGPortableMinerDispenser_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGPortableMinerDispenser>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGPortableMinerDispenser_Statics::ClassParams = {
		&AFGPortableMinerDispenser::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFGPortableMinerDispenser_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AFGPortableMinerDispenser_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AFGPortableMinerDispenser_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGPortableMinerDispenser_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGPortableMinerDispenser()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGPortableMinerDispenser_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGPortableMinerDispenser, 1348556097);
	template<> FACTORYGAME_API UClass* StaticClass<AFGPortableMinerDispenser>()
	{
		return AFGPortableMinerDispenser::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGPortableMinerDispenser(Z_Construct_UClass_AFGPortableMinerDispenser, &AFGPortableMinerDispenser::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGPortableMinerDispenser"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGPortableMinerDispenser);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
