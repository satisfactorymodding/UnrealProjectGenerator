// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Resources/FGConsumableDescriptor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGConsumableDescriptor() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGConsumableDescriptor_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGConsumableDescriptor();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGEquipmentDescriptor();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGConsumableDescriptor_ConsumedBy();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGCharacterPlayer_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGConsumableDescriptor_GetFPOverrideMesh();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGConsumableDescriptor_GetTPOverrideMesh();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
// End Cross Module References
	static FName NAME_UFGConsumableDescriptor_ConsumedBy = FName(TEXT("ConsumedBy"));
	void UFGConsumableDescriptor::ConsumedBy(AFGCharacterPlayer* player) const
	{
		FGConsumableDescriptor_eventConsumedBy_Parms Parms;
		Parms.player=player;
		const_cast<UFGConsumableDescriptor*>(this)->ProcessEvent(FindFunctionChecked(NAME_UFGConsumableDescriptor_ConsumedBy),&Parms);
	}
	void UFGConsumableDescriptor::StaticRegisterNativesUFGConsumableDescriptor()
	{
		UClass* Class = UFGConsumableDescriptor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetFPOverrideMesh", &UFGConsumableDescriptor::execGetFPOverrideMesh },
			{ "GetTPOverrideMesh", &UFGConsumableDescriptor::execGetTPOverrideMesh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGConsumableDescriptor_ConsumedBy_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGConsumableDescriptor_ConsumedBy_Statics::NewProp_player = { UE4CodeGen_Private::EPropertyClass::Object, "player", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGConsumableDescriptor_eventConsumedBy_Parms, player), Z_Construct_UClass_AFGCharacterPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGConsumableDescriptor_ConsumedBy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGConsumableDescriptor_ConsumedBy_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGConsumableDescriptor_ConsumedBy_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Descriptor|Consumable" },
		{ "ModuleRelativePath", "Resources/FGConsumableDescriptor.h" },
		{ "ToolTip", "NEVER EVER change any state of this object in this function, it's the default object.\n\n@param player - the player consuming the consumeable" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGConsumableDescriptor_ConsumedBy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGConsumableDescriptor, "ConsumedBy", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x48020800, sizeof(FGConsumableDescriptor_eventConsumedBy_Parms), Z_Construct_UFunction_UFGConsumableDescriptor_ConsumedBy_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGConsumableDescriptor_ConsumedBy_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGConsumableDescriptor_ConsumedBy_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGConsumableDescriptor_ConsumedBy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGConsumableDescriptor_ConsumedBy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGConsumableDescriptor_ConsumedBy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGConsumableDescriptor_GetFPOverrideMesh_Statics
	{
		struct FGConsumableDescriptor_eventGetFPOverrideMesh_Parms
		{
			TSubclassOf<UFGConsumableDescriptor>  inClass;
			USkeletalMesh* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGConsumableDescriptor_GetFPOverrideMesh_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGConsumableDescriptor_eventGetFPOverrideMesh_Parms, ReturnValue), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGConsumableDescriptor_GetFPOverrideMesh_Statics::NewProp_inClass = { UE4CodeGen_Private::EPropertyClass::Class, "inClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGConsumableDescriptor_eventGetFPOverrideMesh_Parms, inClass), Z_Construct_UClass_UFGConsumableDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGConsumableDescriptor_GetFPOverrideMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGConsumableDescriptor_GetFPOverrideMesh_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGConsumableDescriptor_GetFPOverrideMesh_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGConsumableDescriptor_GetFPOverrideMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Descriptor|Consumable" },
		{ "ModuleRelativePath", "Resources/FGConsumableDescriptor.h" },
		{ "ToolTip", "The skeletal mesh we want for representing the resource when they are in the production line.\n@return The items mesh; a default mesh if the item has no mesh specified, nullptr if inClass is nullptr." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGConsumableDescriptor_GetFPOverrideMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGConsumableDescriptor, "GetFPOverrideMesh", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(FGConsumableDescriptor_eventGetFPOverrideMesh_Parms), Z_Construct_UFunction_UFGConsumableDescriptor_GetFPOverrideMesh_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGConsumableDescriptor_GetFPOverrideMesh_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGConsumableDescriptor_GetFPOverrideMesh_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGConsumableDescriptor_GetFPOverrideMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGConsumableDescriptor_GetFPOverrideMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGConsumableDescriptor_GetFPOverrideMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGConsumableDescriptor_GetTPOverrideMesh_Statics
	{
		struct FGConsumableDescriptor_eventGetTPOverrideMesh_Parms
		{
			TSubclassOf<UFGConsumableDescriptor>  inClass;
			UStaticMesh* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGConsumableDescriptor_GetTPOverrideMesh_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGConsumableDescriptor_eventGetTPOverrideMesh_Parms, ReturnValue), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGConsumableDescriptor_GetTPOverrideMesh_Statics::NewProp_inClass = { UE4CodeGen_Private::EPropertyClass::Class, "inClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGConsumableDescriptor_eventGetTPOverrideMesh_Parms, inClass), Z_Construct_UClass_UFGConsumableDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGConsumableDescriptor_GetTPOverrideMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGConsumableDescriptor_GetTPOverrideMesh_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGConsumableDescriptor_GetTPOverrideMesh_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGConsumableDescriptor_GetTPOverrideMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Descriptor|Consumable" },
		{ "ModuleRelativePath", "Resources/FGConsumableDescriptor.h" },
		{ "ToolTip", "The static mesh we want for representing the item when viewed as thir person.\n@return The items mesh; a default mesh if the item has no mesh specified, nullptr if inClass is nullptr." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGConsumableDescriptor_GetTPOverrideMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGConsumableDescriptor, "GetTPOverrideMesh", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(FGConsumableDescriptor_eventGetTPOverrideMesh_Parms), Z_Construct_UFunction_UFGConsumableDescriptor_GetTPOverrideMesh_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGConsumableDescriptor_GetTPOverrideMesh_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGConsumableDescriptor_GetTPOverrideMesh_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGConsumableDescriptor_GetTPOverrideMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGConsumableDescriptor_GetTPOverrideMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGConsumableDescriptor_GetTPOverrideMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGConsumableDescriptor_NoRegister()
	{
		return UFGConsumableDescriptor::StaticClass();
	}
	struct Z_Construct_UClass_UFGConsumableDescriptor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mTPOverrideMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mTPOverrideMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mFPOverrideMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mFPOverrideMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCustomLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mCustomLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCustomRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mCustomRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCustomHandsMeshScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mCustomHandsMeshScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mConsumeEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mConsumeEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGConsumableDescriptor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFGEquipmentDescriptor,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGConsumableDescriptor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGConsumableDescriptor_ConsumedBy, "ConsumedBy" }, // 2590747974
		{ &Z_Construct_UFunction_UFGConsumableDescriptor_GetFPOverrideMesh, "GetFPOverrideMesh" }, // 433108518
		{ &Z_Construct_UFunction_UFGConsumableDescriptor_GetTPOverrideMesh, "GetTPOverrideMesh" }, // 2735419329
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGConsumableDescriptor_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Icon Preview" },
		{ "IncludePath", "Resources/FGConsumableDescriptor.h" },
		{ "ModuleRelativePath", "Resources/FGConsumableDescriptor.h" },
		{ "ToolTip", "Item descriptor for consumable items." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGConsumableDescriptor_Statics::NewProp_mTPOverrideMesh_MetaData[] = {
		{ "Category", "Consumeable" },
		{ "ModuleRelativePath", "Resources/FGConsumableDescriptor.h" },
		{ "ToolTip", "The static mesh we want for representing the resource when it is in third person." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGConsumableDescriptor_Statics::NewProp_mTPOverrideMesh = { UE4CodeGen_Private::EPropertyClass::Object, "mTPOverrideMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(UFGConsumableDescriptor, mTPOverrideMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGConsumableDescriptor_Statics::NewProp_mTPOverrideMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGConsumableDescriptor_Statics::NewProp_mTPOverrideMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGConsumableDescriptor_Statics::NewProp_mFPOverrideMesh_MetaData[] = {
		{ "Category", "Consumeable" },
		{ "ModuleRelativePath", "Resources/FGConsumableDescriptor.h" },
		{ "ToolTip", "The skeletal  mesh we want for representing the resource when it is in first person." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGConsumableDescriptor_Statics::NewProp_mFPOverrideMesh = { UE4CodeGen_Private::EPropertyClass::Object, "mFPOverrideMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(UFGConsumableDescriptor, mFPOverrideMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGConsumableDescriptor_Statics::NewProp_mFPOverrideMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGConsumableDescriptor_Statics::NewProp_mFPOverrideMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGConsumableDescriptor_Statics::NewProp_mCustomLocation_MetaData[] = {
		{ "Category", "Consumeable" },
		{ "ModuleRelativePath", "Resources/FGConsumableDescriptor.h" },
		{ "ToolTip", "Custom local location of mesh in hands" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGConsumableDescriptor_Statics::NewProp_mCustomLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "mCustomLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010015, 1, nullptr, STRUCT_OFFSET(UFGConsumableDescriptor, mCustomLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UFGConsumableDescriptor_Statics::NewProp_mCustomLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGConsumableDescriptor_Statics::NewProp_mCustomLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGConsumableDescriptor_Statics::NewProp_mCustomRotation_MetaData[] = {
		{ "Category", "Consumeable" },
		{ "ModuleRelativePath", "Resources/FGConsumableDescriptor.h" },
		{ "ToolTip", "Custom local rotaion of mesh in hands" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGConsumableDescriptor_Statics::NewProp_mCustomRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "mCustomRotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010015, 1, nullptr, STRUCT_OFFSET(UFGConsumableDescriptor, mCustomRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UFGConsumableDescriptor_Statics::NewProp_mCustomRotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGConsumableDescriptor_Statics::NewProp_mCustomRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGConsumableDescriptor_Statics::NewProp_mCustomHandsMeshScale_MetaData[] = {
		{ "Category", "Consumeable" },
		{ "ModuleRelativePath", "Resources/FGConsumableDescriptor.h" },
		{ "ToolTip", "Custom scale of mesh in hands" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGConsumableDescriptor_Statics::NewProp_mCustomHandsMeshScale = { UE4CodeGen_Private::EPropertyClass::Float, "mCustomHandsMeshScale", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010015, 1, nullptr, STRUCT_OFFSET(UFGConsumableDescriptor, mCustomHandsMeshScale), METADATA_PARAMS(Z_Construct_UClass_UFGConsumableDescriptor_Statics::NewProp_mCustomHandsMeshScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGConsumableDescriptor_Statics::NewProp_mCustomHandsMeshScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGConsumableDescriptor_Statics::NewProp_mConsumeEvent_MetaData[] = {
		{ "Category", "Consumeable" },
		{ "ModuleRelativePath", "Resources/FGConsumableDescriptor.h" },
		{ "ToolTip", "Sound played when consuming" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGConsumableDescriptor_Statics::NewProp_mConsumeEvent = { UE4CodeGen_Private::EPropertyClass::Object, "mConsumeEvent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010015, 1, nullptr, STRUCT_OFFSET(UFGConsumableDescriptor, mConsumeEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGConsumableDescriptor_Statics::NewProp_mConsumeEvent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGConsumableDescriptor_Statics::NewProp_mConsumeEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGConsumableDescriptor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGConsumableDescriptor_Statics::NewProp_mTPOverrideMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGConsumableDescriptor_Statics::NewProp_mFPOverrideMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGConsumableDescriptor_Statics::NewProp_mCustomLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGConsumableDescriptor_Statics::NewProp_mCustomRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGConsumableDescriptor_Statics::NewProp_mCustomHandsMeshScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGConsumableDescriptor_Statics::NewProp_mConsumeEvent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGConsumableDescriptor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGConsumableDescriptor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGConsumableDescriptor_Statics::ClassParams = {
		&UFGConsumableDescriptor::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UFGConsumableDescriptor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UFGConsumableDescriptor_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFGConsumableDescriptor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGConsumableDescriptor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGConsumableDescriptor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGConsumableDescriptor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGConsumableDescriptor, 2114558976);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGConsumableDescriptor(Z_Construct_UClass_UFGConsumableDescriptor, &UFGConsumableDescriptor::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGConsumableDescriptor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGConsumableDescriptor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
