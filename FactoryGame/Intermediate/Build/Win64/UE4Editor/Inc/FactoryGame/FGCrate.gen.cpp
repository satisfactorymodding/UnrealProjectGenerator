// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGCrate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGCrate() {}
// Cross Module References
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_EFGCrateIconType();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGCrate_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGCrate();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGInteractActor();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGCrate_FilterInventoryClasses();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGCrate_GetInventory();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGInventoryComponent_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGCrate_OnRequestReprecentMarker();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSaveInterface_NoRegister();
// End Cross Module References
	static UEnum* EFGCrateIconType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FactoryGame_EFGCrateIconType, Z_Construct_UPackage__Script_FactoryGame(), TEXT("EFGCrateIconType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFGCrateIconType(EFGCrateIconType_StaticEnum, TEXT("/Script/FactoryGame"), TEXT("EFGCrateIconType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FactoryGame_EFGCrateIconType_CRC() { return 918727109U; }
	UEnum* Z_Construct_UEnum_FactoryGame_EFGCrateIconType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFGCrateIconType"), 0, Get_Z_Construct_UEnum_FactoryGame_EFGCrateIconType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFGCrateIconType::CIT_DeathIcon", (int64)EFGCrateIconType::CIT_DeathIcon },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "FGCrate.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FactoryGame,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EFGCrateIconType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EFGCrateIconType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static FName NAME_AFGCrate_OnRequestReprecentMarker = FName(TEXT("OnRequestReprecentMarker"));
	void AFGCrate::OnRequestReprecentMarker()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGCrate_OnRequestReprecentMarker),NULL);
	}
	void AFGCrate::StaticRegisterNativesAFGCrate()
	{
		UClass* Class = AFGCrate::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FilterInventoryClasses", &AFGCrate::execFilterInventoryClasses },
			{ "GetInventory", &AFGCrate::execGetInventory },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGCrate_FilterInventoryClasses_Statics
	{
		struct FGCrate_eventFilterInventoryClasses_Parms
		{
			TSubclassOf<UObject>  object;
			int32 idx;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_idx;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_object;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGCrate_FilterInventoryClasses_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGCrate_eventFilterInventoryClasses_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGCrate_FilterInventoryClasses_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGCrate_eventFilterInventoryClasses_Parms), &Z_Construct_UFunction_AFGCrate_FilterInventoryClasses_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGCrate_FilterInventoryClasses_Statics::NewProp_idx = { UE4CodeGen_Private::EPropertyClass::Int, "idx", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGCrate_eventFilterInventoryClasses_Parms, idx), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGCrate_FilterInventoryClasses_Statics::NewProp_object = { UE4CodeGen_Private::EPropertyClass::Class, "object", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGCrate_eventFilterInventoryClasses_Parms, object), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGCrate_FilterInventoryClasses_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCrate_FilterInventoryClasses_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCrate_FilterInventoryClasses_Statics::NewProp_idx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCrate_FilterInventoryClasses_Statics::NewProp_object,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCrate_FilterInventoryClasses_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGCrate.h" },
		{ "ToolTip", "Bound to mItemFilter to filter what items can be used in the item slots." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGCrate_FilterInventoryClasses_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGCrate, "FilterInventoryClasses", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x40020401, sizeof(FGCrate_eventFilterInventoryClasses_Parms), Z_Construct_UFunction_AFGCrate_FilterInventoryClasses_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGCrate_FilterInventoryClasses_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGCrate_FilterInventoryClasses_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGCrate_FilterInventoryClasses_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGCrate_FilterInventoryClasses()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGCrate_FilterInventoryClasses_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGCrate_GetInventory_Statics
	{
		struct FGCrate_eventGetInventory_Parms
		{
			UFGInventoryComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCrate_GetInventory_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGCrate_GetInventory_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080588, 1, nullptr, STRUCT_OFFSET(FGCrate_eventGetInventory_Parms, ReturnValue), Z_Construct_UClass_UFGInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFGCrate_GetInventory_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGCrate_GetInventory_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGCrate_GetInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCrate_GetInventory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCrate_GetInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "FGCrate.h" },
		{ "ToolTip", "@return The crates inventory; cannot be null." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGCrate_GetInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGCrate, "GetInventory", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGCrate_eventGetInventory_Parms), Z_Construct_UFunction_AFGCrate_GetInventory_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGCrate_GetInventory_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGCrate_GetInventory_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGCrate_GetInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGCrate_GetInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGCrate_GetInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGCrate_OnRequestReprecentMarker_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCrate_OnRequestReprecentMarker_Statics::Function_MetaDataParams[] = {
		{ "Category", "Compass" },
		{ "ModuleRelativePath", "FGCrate.h" },
		{ "ToolTip", "Called when we want a crate to be visible on the compasse." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGCrate_OnRequestReprecentMarker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGCrate, "OnRequestReprecentMarker", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGCrate_OnRequestReprecentMarker_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGCrate_OnRequestReprecentMarker_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGCrate_OnRequestReprecentMarker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGCrate_OnRequestReprecentMarker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGCrate_NoRegister()
	{
		return AFGCrate::StaticClass();
	}
	struct Z_Construct_UClass_AFGCrate_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mIconType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_mIconType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_mIconType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mInventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mInventory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGCrate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGInteractActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGCrate_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGCrate_FilterInventoryClasses, "FilterInventoryClasses" }, // 3110805457
		{ &Z_Construct_UFunction_AFGCrate_GetInventory, "GetInventory" }, // 3176768621
		{ &Z_Construct_UFunction_AFGCrate_OnRequestReprecentMarker, "OnRequestReprecentMarker" }, // 433078003
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCrate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FGCrate.h" },
		{ "ModuleRelativePath", "FGCrate.h" },
		{ "ToolTip", "@todo Comment me please!" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCrate_Statics::NewProp_mIconType_MetaData[] = {
		{ "Category", "Compass" },
		{ "ModuleRelativePath", "FGCrate.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AFGCrate_Statics::NewProp_mIconType = { UE4CodeGen_Private::EPropertyClass::Enum, "mIconType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(AFGCrate, mIconType), Z_Construct_UEnum_FactoryGame_EFGCrateIconType, METADATA_PARAMS(Z_Construct_UClass_AFGCrate_Statics::NewProp_mIconType_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCrate_Statics::NewProp_mIconType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AFGCrate_Statics::NewProp_mIconType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCrate_Statics::NewProp_mInventory_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FGCrate.h" },
		{ "ToolTip", "The inventory of this crate" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGCrate_Statics::NewProp_mInventory = { UE4CodeGen_Private::EPropertyClass::Object, "mInventory", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000001080028, 1, nullptr, STRUCT_OFFSET(AFGCrate, mInventory), Z_Construct_UClass_UFGInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGCrate_Statics::NewProp_mInventory_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCrate_Statics::NewProp_mInventory_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGCrate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCrate_Statics::NewProp_mIconType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCrate_Statics::NewProp_mIconType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCrate_Statics::NewProp_mInventory,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AFGCrate_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UFGSaveInterface_NoRegister, (int32)VTABLE_OFFSET(AFGCrate, IFGSaveInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGCrate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGCrate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGCrate_Statics::ClassParams = {
		&AFGCrate::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AFGCrate_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFGCrate_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		InterfaceParams, ARRAY_COUNT(InterfaceParams),
		METADATA_PARAMS(Z_Construct_UClass_AFGCrate_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGCrate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGCrate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGCrate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGCrate, 3075891028);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGCrate(Z_Construct_UClass_AFGCrate, &AFGCrate::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGCrate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGCrate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
