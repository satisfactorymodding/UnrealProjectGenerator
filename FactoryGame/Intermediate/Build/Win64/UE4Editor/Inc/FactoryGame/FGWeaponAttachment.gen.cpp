// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/Equipment/FGWeaponAttachment.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGWeaponAttachment() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGWeaponAttachment_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGWeaponAttachment();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGEquipmentAttachment();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGWeaponAttachment_ClientPlayReloadEffect();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGWeaponAttachment_Multicast_PlayReloadEffectMulticast();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGWeaponAttachment_Multicast_SetFlashLocation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGWeaponAttachment_PlayFireEffect();
// End Cross Module References
	static FName NAME_AFGWeaponAttachment_ClientPlayReloadEffect = FName(TEXT("ClientPlayReloadEffect"));
	void AFGWeaponAttachment::ClientPlayReloadEffect()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGWeaponAttachment_ClientPlayReloadEffect),NULL);
	}
	static FName NAME_AFGWeaponAttachment_Multicast_PlayReloadEffectMulticast = FName(TEXT("Multicast_PlayReloadEffectMulticast"));
	void AFGWeaponAttachment::Multicast_PlayReloadEffectMulticast()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGWeaponAttachment_Multicast_PlayReloadEffectMulticast),NULL);
	}
	static FName NAME_AFGWeaponAttachment_Multicast_SetFlashLocation = FName(TEXT("Multicast_SetFlashLocation"));
	void AFGWeaponAttachment::Multicast_SetFlashLocation(FVector const& newFlashLocation)
	{
		FGWeaponAttachment_eventMulticast_SetFlashLocation_Parms Parms;
		Parms.newFlashLocation=newFlashLocation;
		ProcessEvent(FindFunctionChecked(NAME_AFGWeaponAttachment_Multicast_SetFlashLocation),&Parms);
	}
	static FName NAME_AFGWeaponAttachment_PlayFireEffect = FName(TEXT("PlayFireEffect"));
	void AFGWeaponAttachment::PlayFireEffect(FVector flashLocation)
	{
		FGWeaponAttachment_eventPlayFireEffect_Parms Parms;
		Parms.flashLocation=flashLocation;
		ProcessEvent(FindFunctionChecked(NAME_AFGWeaponAttachment_PlayFireEffect),&Parms);
	}
	void AFGWeaponAttachment::StaticRegisterNativesAFGWeaponAttachment()
	{
		UClass* Class = AFGWeaponAttachment::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multicast_PlayReloadEffectMulticast", &AFGWeaponAttachment::execMulticast_PlayReloadEffectMulticast },
			{ "Multicast_SetFlashLocation", &AFGWeaponAttachment::execMulticast_SetFlashLocation },
			{ "PlayFireEffect", &AFGWeaponAttachment::execPlayFireEffect },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGWeaponAttachment_ClientPlayReloadEffect_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGWeaponAttachment_ClientPlayReloadEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attachment" },
		{ "ModuleRelativePath", "Public/Equipment/FGWeaponAttachment.h" },
		{ "ToolTip", "For client only" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGWeaponAttachment_ClientPlayReloadEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGWeaponAttachment, nullptr, "ClientPlayReloadEffect", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGWeaponAttachment_ClientPlayReloadEffect_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGWeaponAttachment_ClientPlayReloadEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGWeaponAttachment_ClientPlayReloadEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGWeaponAttachment_ClientPlayReloadEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGWeaponAttachment_Multicast_PlayReloadEffectMulticast_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGWeaponAttachment_Multicast_PlayReloadEffectMulticast_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attachment" },
		{ "ModuleRelativePath", "Public/Equipment/FGWeaponAttachment.h" },
		{ "ToolTip", "Called on all relevant attachments" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGWeaponAttachment_Multicast_PlayReloadEffectMulticast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGWeaponAttachment, nullptr, "Multicast_PlayReloadEffectMulticast", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGWeaponAttachment_Multicast_PlayReloadEffectMulticast_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGWeaponAttachment_Multicast_PlayReloadEffectMulticast_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGWeaponAttachment_Multicast_PlayReloadEffectMulticast()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGWeaponAttachment_Multicast_PlayReloadEffectMulticast_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGWeaponAttachment_Multicast_SetFlashLocation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_newFlashLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_newFlashLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGWeaponAttachment_Multicast_SetFlashLocation_Statics::NewProp_newFlashLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGWeaponAttachment_Multicast_SetFlashLocation_Statics::NewProp_newFlashLocation = { "newFlashLocation", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGWeaponAttachment_eventMulticast_SetFlashLocation_Parms, newFlashLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AFGWeaponAttachment_Multicast_SetFlashLocation_Statics::NewProp_newFlashLocation_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGWeaponAttachment_Multicast_SetFlashLocation_Statics::NewProp_newFlashLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGWeaponAttachment_Multicast_SetFlashLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGWeaponAttachment_Multicast_SetFlashLocation_Statics::NewProp_newFlashLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGWeaponAttachment_Multicast_SetFlashLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attachment" },
		{ "ModuleRelativePath", "Public/Equipment/FGWeaponAttachment.h" },
		{ "ToolTip", "Called on all relevant attachments" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGWeaponAttachment_Multicast_SetFlashLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGWeaponAttachment, nullptr, "Multicast_SetFlashLocation", sizeof(FGWeaponAttachment_eventMulticast_SetFlashLocation_Parms), Z_Construct_UFunction_AFGWeaponAttachment_Multicast_SetFlashLocation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGWeaponAttachment_Multicast_SetFlashLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00824C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGWeaponAttachment_Multicast_SetFlashLocation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGWeaponAttachment_Multicast_SetFlashLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGWeaponAttachment_Multicast_SetFlashLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGWeaponAttachment_Multicast_SetFlashLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGWeaponAttachment_PlayFireEffect_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_flashLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGWeaponAttachment_PlayFireEffect_Statics::NewProp_flashLocation = { "flashLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGWeaponAttachment_eventPlayFireEffect_Parms, flashLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGWeaponAttachment_PlayFireEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGWeaponAttachment_PlayFireEffect_Statics::NewProp_flashLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGWeaponAttachment_PlayFireEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attachment" },
		{ "ModuleRelativePath", "Public/Equipment/FGWeaponAttachment.h" },
		{ "ToolTip", "Handles playing of effects on remote clients" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGWeaponAttachment_PlayFireEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGWeaponAttachment, nullptr, "PlayFireEffect", sizeof(FGWeaponAttachment_eventPlayFireEffect_Parms), Z_Construct_UFunction_AFGWeaponAttachment_PlayFireEffect_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGWeaponAttachment_PlayFireEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGWeaponAttachment_PlayFireEffect_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGWeaponAttachment_PlayFireEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGWeaponAttachment_PlayFireEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGWeaponAttachment_PlayFireEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGWeaponAttachment_NoRegister()
	{
		return AFGWeaponAttachment::StaticClass();
	}
	struct Z_Construct_UClass_AFGWeaponAttachment_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGWeaponAttachment_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGEquipmentAttachment,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGWeaponAttachment_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGWeaponAttachment_ClientPlayReloadEffect, "ClientPlayReloadEffect" }, // 3613027965
		{ &Z_Construct_UFunction_AFGWeaponAttachment_Multicast_PlayReloadEffectMulticast, "Multicast_PlayReloadEffectMulticast" }, // 1982857922
		{ &Z_Construct_UFunction_AFGWeaponAttachment_Multicast_SetFlashLocation, "Multicast_SetFlashLocation" }, // 134404242
		{ &Z_Construct_UFunction_AFGWeaponAttachment_PlayFireEffect, "PlayFireEffect" }, // 2708598400
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGWeaponAttachment_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Equipment/FGWeaponAttachment.h" },
		{ "ModuleRelativePath", "Public/Equipment/FGWeaponAttachment.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGWeaponAttachment_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGWeaponAttachment>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGWeaponAttachment_Statics::ClassParams = {
		&AFGWeaponAttachment::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AFGWeaponAttachment_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGWeaponAttachment_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGWeaponAttachment()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGWeaponAttachment_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGWeaponAttachment, 4082260181);
	template<> FACTORYGAME_API UClass* StaticClass<AFGWeaponAttachment>()
	{
		return AFGWeaponAttachment::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGWeaponAttachment(Z_Construct_UClass_AFGWeaponAttachment, &AFGWeaponAttachment::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGWeaponAttachment"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGWeaponAttachment);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
