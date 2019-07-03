// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGEquipmentChild.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGEquipmentChild() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGEquipmentChild_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGEquipmentChild();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGEquipmentChild_GetAttachSocketTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGEquipmentChild_OnEquip();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGCharacterPlayer_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGEquipmentChild_OnUnEquip();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGEquipment_NoRegister();
// End Cross Module References
	static FName NAME_AFGEquipmentChild_OnEquip = FName(TEXT("OnEquip"));
	void AFGEquipmentChild::OnEquip(AFGCharacterPlayer* character)
	{
		FGEquipmentChild_eventOnEquip_Parms Parms;
		Parms.character=character;
		ProcessEvent(FindFunctionChecked(NAME_AFGEquipmentChild_OnEquip),&Parms);
	}
	static FName NAME_AFGEquipmentChild_OnUnEquip = FName(TEXT("OnUnEquip"));
	void AFGEquipmentChild::OnUnEquip()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGEquipmentChild_OnUnEquip),NULL);
	}
	void AFGEquipmentChild::StaticRegisterNativesAFGEquipmentChild()
	{
		UClass* Class = AFGEquipmentChild::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAttachSocketTransform", &AFGEquipmentChild::execGetAttachSocketTransform },
			{ "OnEquip", &AFGEquipmentChild::execOnEquip },
			{ "OnUnEquip", &AFGEquipmentChild::execOnUnEquip },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGEquipmentChild_GetAttachSocketTransform_Statics
	{
		struct FGEquipmentChild_eventGetAttachSocketTransform_Parms
		{
			FTransform ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGEquipmentChild_GetAttachSocketTransform_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGEquipmentChild_eventGetAttachSocketTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGEquipmentChild_GetAttachSocketTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGEquipmentChild_GetAttachSocketTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGEquipmentChild_GetAttachSocketTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Equipment" },
		{ "ModuleRelativePath", "FGEquipmentChild.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGEquipmentChild_GetAttachSocketTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGEquipmentChild, "GetAttachSocketTransform", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(FGEquipmentChild_eventGetAttachSocketTransform_Parms), Z_Construct_UFunction_AFGEquipmentChild_GetAttachSocketTransform_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGEquipmentChild_GetAttachSocketTransform_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGEquipmentChild_GetAttachSocketTransform_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGEquipmentChild_GetAttachSocketTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGEquipmentChild_GetAttachSocketTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGEquipmentChild_GetAttachSocketTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGEquipmentChild_OnEquip_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGEquipmentChild_OnEquip_Statics::NewProp_character = { UE4CodeGen_Private::EPropertyClass::Object, "character", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGEquipmentChild_eventOnEquip_Parms, character), Z_Construct_UClass_AFGCharacterPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGEquipmentChild_OnEquip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGEquipmentChild_OnEquip_Statics::NewProp_character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGEquipmentChild_OnEquip_Statics::Function_MetaDataParams[] = {
		{ "Category", "Equipment" },
		{ "ModuleRelativePath", "FGEquipmentChild.h" },
		{ "ToolTip", "Called by after equip has run allowing for blueprint functionality" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGEquipmentChild_OnEquip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGEquipmentChild, "OnEquip", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, sizeof(FGEquipmentChild_eventOnEquip_Parms), Z_Construct_UFunction_AFGEquipmentChild_OnEquip_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGEquipmentChild_OnEquip_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGEquipmentChild_OnEquip_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGEquipmentChild_OnEquip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGEquipmentChild_OnEquip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGEquipmentChild_OnEquip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGEquipmentChild_OnUnEquip_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGEquipmentChild_OnUnEquip_Statics::Function_MetaDataParams[] = {
		{ "Category", "Equipment" },
		{ "ModuleRelativePath", "FGEquipmentChild.h" },
		{ "ToolTip", "Called by after Unequip has run allowing for blueprint functionality" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGEquipmentChild_OnUnEquip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGEquipmentChild, "OnUnEquip", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGEquipmentChild_OnUnEquip_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGEquipmentChild_OnUnEquip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGEquipmentChild_OnUnEquip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGEquipmentChild_OnUnEquip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGEquipmentChild_NoRegister()
	{
		return AFGEquipmentChild::StaticClass();
	}
	struct Z_Construct_UClass_AFGEquipmentChild_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mAttachSocket_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_mAttachSocket;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mParentEquipment_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mParentEquipment;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGEquipmentChild_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGEquipmentChild_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGEquipmentChild_GetAttachSocketTransform, "GetAttachSocketTransform" }, // 1950700730
		{ &Z_Construct_UFunction_AFGEquipmentChild_OnEquip, "OnEquip" }, // 3055606424
		{ &Z_Construct_UFunction_AFGEquipmentChild_OnUnEquip, "OnUnEquip" }, // 2430487345
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGEquipmentChild_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FGEquipmentChild.h" },
		{ "ModuleRelativePath", "FGEquipmentChild.h" },
		{ "ToolTip", "Equipment children are a second actor spawned when the FGEquipable parent is spawned from FGCharacterPlayer\nThey are not saved and thus all actions should be driven by their parent.\nIf the FGEquipable parent is loaded from save, then their FGEquipmentChild (this) is spawned in PostLoadGame()" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGEquipmentChild_Statics::NewProp_mAttachSocket_MetaData[] = {
		{ "Category", "Equipment" },
		{ "ModuleRelativePath", "FGEquipmentChild.h" },
		{ "ToolTip", "The socket to attach any child equipment to" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AFGEquipmentChild_Statics::NewProp_mAttachSocket = { UE4CodeGen_Private::EPropertyClass::Name, "mAttachSocket", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000010001, 1, nullptr, STRUCT_OFFSET(AFGEquipmentChild, mAttachSocket), METADATA_PARAMS(Z_Construct_UClass_AFGEquipmentChild_Statics::NewProp_mAttachSocket_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGEquipmentChild_Statics::NewProp_mAttachSocket_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGEquipmentChild_Statics::NewProp_mParentEquipment_MetaData[] = {
		{ "Category", "Equipment" },
		{ "ModuleRelativePath", "FGEquipmentChild.h" },
		{ "ToolTip", "stores a reference to the FGEquipment that spawned this class" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGEquipmentChild_Statics::NewProp_mParentEquipment = { UE4CodeGen_Private::EPropertyClass::Object, "mParentEquipment", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000014, 1, nullptr, STRUCT_OFFSET(AFGEquipmentChild, mParentEquipment), Z_Construct_UClass_AFGEquipment_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGEquipmentChild_Statics::NewProp_mParentEquipment_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGEquipmentChild_Statics::NewProp_mParentEquipment_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGEquipmentChild_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGEquipmentChild_Statics::NewProp_mAttachSocket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGEquipmentChild_Statics::NewProp_mParentEquipment,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGEquipmentChild_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGEquipmentChild>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGEquipmentChild_Statics::ClassParams = {
		&AFGEquipmentChild::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AFGEquipmentChild_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFGEquipmentChild_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AFGEquipmentChild_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGEquipmentChild_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGEquipmentChild()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGEquipmentChild_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGEquipmentChild, 151836693);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGEquipmentChild(Z_Construct_UClass_AFGEquipmentChild, &AFGEquipmentChild::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGEquipmentChild"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGEquipmentChild);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
