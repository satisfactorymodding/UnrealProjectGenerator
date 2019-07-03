// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGFoliagePickup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGFoliagePickup() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGFoliagePickup_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGFoliagePickup();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGFoliagePickup_BroadcastPickup();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGFoliagePickup_PlayPickupEffect();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGFoliageResourceUserData_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGFoliagePickup_Server_PickupWithTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGFoliageRemoval_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGCharacterPlayer_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGUseableInterface_NoRegister();
// End Cross Module References
	static FName NAME_AFGFoliagePickup_BroadcastPickup = FName(TEXT("BroadcastPickup"));
	void AFGFoliagePickup::BroadcastPickup(UStaticMesh* fromStaticMesh, FVector atLocation)
	{
		FGFoliagePickup_eventBroadcastPickup_Parms Parms;
		Parms.fromStaticMesh=fromStaticMesh;
		Parms.atLocation=atLocation;
		ProcessEvent(FindFunctionChecked(NAME_AFGFoliagePickup_BroadcastPickup),&Parms);
	}
	static FName NAME_AFGFoliagePickup_PlayPickupEffect = FName(TEXT("PlayPickupEffect"));
	void AFGFoliagePickup::PlayPickupEffect(UFGFoliageResourceUserData* foliageUserData, FVector atLocation)
	{
		FGFoliagePickup_eventPlayPickupEffect_Parms Parms;
		Parms.foliageUserData=foliageUserData;
		Parms.atLocation=atLocation;
		ProcessEvent(FindFunctionChecked(NAME_AFGFoliagePickup_PlayPickupEffect),&Parms);
	}
	static FName NAME_AFGFoliagePickup_Server_PickupWithTransform = FName(TEXT("Server_PickupWithTransform"));
	void AFGFoliagePickup::Server_PickupWithTransform(AFGCharacterPlayer* byCharacter, AFGFoliageRemoval* foliageRemoval, FTransform withTransform)
	{
		FGFoliagePickup_eventServer_PickupWithTransform_Parms Parms;
		Parms.byCharacter=byCharacter;
		Parms.foliageRemoval=foliageRemoval;
		Parms.withTransform=withTransform;
		ProcessEvent(FindFunctionChecked(NAME_AFGFoliagePickup_Server_PickupWithTransform),&Parms);
	}
	void AFGFoliagePickup::StaticRegisterNativesAFGFoliagePickup()
	{
		UClass* Class = AFGFoliagePickup::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BroadcastPickup", &AFGFoliagePickup::execBroadcastPickup },
			{ "Server_PickupWithTransform", &AFGFoliagePickup::execServer_PickupWithTransform },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGFoliagePickup_BroadcastPickup_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_atLocation;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_fromStaticMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGFoliagePickup_BroadcastPickup_Statics::NewProp_atLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "atLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGFoliagePickup_eventBroadcastPickup_Parms, atLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGFoliagePickup_BroadcastPickup_Statics::NewProp_fromStaticMesh = { UE4CodeGen_Private::EPropertyClass::Object, "fromStaticMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGFoliagePickup_eventBroadcastPickup_Parms, fromStaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGFoliagePickup_BroadcastPickup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGFoliagePickup_BroadcastPickup_Statics::NewProp_atLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGFoliagePickup_BroadcastPickup_Statics::NewProp_fromStaticMesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGFoliagePickup_BroadcastPickup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGFoliagePickup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGFoliagePickup_BroadcastPickup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGFoliagePickup, "BroadcastPickup", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00824C40, sizeof(FGFoliagePickup_eventBroadcastPickup_Parms), Z_Construct_UFunction_AFGFoliagePickup_BroadcastPickup_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGFoliagePickup_BroadcastPickup_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGFoliagePickup_BroadcastPickup_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGFoliagePickup_BroadcastPickup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGFoliagePickup_BroadcastPickup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGFoliagePickup_BroadcastPickup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGFoliagePickup_PlayPickupEffect_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_atLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_foliageUserData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_foliageUserData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGFoliagePickup_PlayPickupEffect_Statics::NewProp_atLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "atLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGFoliagePickup_eventPlayPickupEffect_Parms, atLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGFoliagePickup_PlayPickupEffect_Statics::NewProp_foliageUserData_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGFoliagePickup_PlayPickupEffect_Statics::NewProp_foliageUserData = { UE4CodeGen_Private::EPropertyClass::Object, "foliageUserData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(FGFoliagePickup_eventPlayPickupEffect_Parms, foliageUserData), Z_Construct_UClass_UFGFoliageResourceUserData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFGFoliagePickup_PlayPickupEffect_Statics::NewProp_foliageUserData_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGFoliagePickup_PlayPickupEffect_Statics::NewProp_foliageUserData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGFoliagePickup_PlayPickupEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGFoliagePickup_PlayPickupEffect_Statics::NewProp_atLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGFoliagePickup_PlayPickupEffect_Statics::NewProp_foliageUserData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGFoliagePickup_PlayPickupEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGFoliagePickup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGFoliagePickup_PlayPickupEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGFoliagePickup, "PlayPickupEffect", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08820808, sizeof(FGFoliagePickup_eventPlayPickupEffect_Parms), Z_Construct_UFunction_AFGFoliagePickup_PlayPickupEffect_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGFoliagePickup_PlayPickupEffect_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGFoliagePickup_PlayPickupEffect_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGFoliagePickup_PlayPickupEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGFoliagePickup_PlayPickupEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGFoliagePickup_PlayPickupEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGFoliagePickup_Server_PickupWithTransform_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_withTransform;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_foliageRemoval;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_byCharacter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGFoliagePickup_Server_PickupWithTransform_Statics::NewProp_withTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "withTransform", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGFoliagePickup_eventServer_PickupWithTransform_Parms, withTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGFoliagePickup_Server_PickupWithTransform_Statics::NewProp_foliageRemoval = { UE4CodeGen_Private::EPropertyClass::Object, "foliageRemoval", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGFoliagePickup_eventServer_PickupWithTransform_Parms, foliageRemoval), Z_Construct_UClass_AFGFoliageRemoval_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGFoliagePickup_Server_PickupWithTransform_Statics::NewProp_byCharacter = { UE4CodeGen_Private::EPropertyClass::Object, "byCharacter", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGFoliagePickup_eventServer_PickupWithTransform_Parms, byCharacter), Z_Construct_UClass_AFGCharacterPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGFoliagePickup_Server_PickupWithTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGFoliagePickup_Server_PickupWithTransform_Statics::NewProp_withTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGFoliagePickup_Server_PickupWithTransform_Statics::NewProp_foliageRemoval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGFoliagePickup_Server_PickupWithTransform_Statics::NewProp_byCharacter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGFoliagePickup_Server_PickupWithTransform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGFoliagePickup.h" },
		{ "ToolTip", "Sends to the server that something should be removed up at a specific location" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGFoliagePickup_Server_PickupWithTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGFoliagePickup, "Server_PickupWithTransform", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80A80CC0, sizeof(FGFoliagePickup_eventServer_PickupWithTransform_Parms), Z_Construct_UFunction_AFGFoliagePickup_Server_PickupWithTransform_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGFoliagePickup_Server_PickupWithTransform_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGFoliagePickup_Server_PickupWithTransform_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGFoliagePickup_Server_PickupWithTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGFoliagePickup_Server_PickupWithTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGFoliagePickup_Server_PickupWithTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGFoliagePickup_NoRegister()
	{
		return AFGFoliagePickup::StaticClass();
	}
	struct Z_Construct_UClass_AFGFoliagePickup_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPickupMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mPickupMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGFoliagePickup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGFoliagePickup_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGFoliagePickup_BroadcastPickup, "BroadcastPickup" }, // 2365985535
		{ &Z_Construct_UFunction_AFGFoliagePickup_PlayPickupEffect, "PlayPickupEffect" }, // 1641748443
		{ &Z_Construct_UFunction_AFGFoliagePickup_Server_PickupWithTransform, "Server_PickupWithTransform" }, // 481128354
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGFoliagePickup_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FGFoliagePickup.h" },
		{ "ModuleRelativePath", "FGFoliagePickup.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGFoliagePickup_Statics::NewProp_mPickupMesh_MetaData[] = {
		{ "ModuleRelativePath", "FGFoliagePickup.h" },
		{ "ToolTip", "The mesh that should be outlining" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGFoliagePickup_Statics::NewProp_mPickupMesh = { UE4CodeGen_Private::EPropertyClass::Object, "mPickupMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000000, 1, nullptr, STRUCT_OFFSET(AFGFoliagePickup, mPickupMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGFoliagePickup_Statics::NewProp_mPickupMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGFoliagePickup_Statics::NewProp_mPickupMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGFoliagePickup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGFoliagePickup_Statics::NewProp_mPickupMesh,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AFGFoliagePickup_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UFGUseableInterface_NoRegister, (int32)VTABLE_OFFSET(AFGFoliagePickup, IFGUseableInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGFoliagePickup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGFoliagePickup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGFoliagePickup_Statics::ClassParams = {
		&AFGFoliagePickup::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A9u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AFGFoliagePickup_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFGFoliagePickup_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		InterfaceParams, ARRAY_COUNT(InterfaceParams),
		METADATA_PARAMS(Z_Construct_UClass_AFGFoliagePickup_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGFoliagePickup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGFoliagePickup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGFoliagePickup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGFoliagePickup, 3618663320);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGFoliagePickup(Z_Construct_UClass_AFGFoliagePickup, &AFGFoliagePickup::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGFoliagePickup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGFoliagePickup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
