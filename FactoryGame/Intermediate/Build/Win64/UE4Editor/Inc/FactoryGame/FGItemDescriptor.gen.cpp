// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Resources/FGItemDescriptor.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGItemDescriptor() {}
// Cross Module References
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_EStackSize();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_EResourceForm();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FItemView();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGItemDescriptor_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGItemDescriptor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGItemDescriptor_CanBeDiscarded();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGItemDescriptor_GetBigIcon();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGItemDescriptor_GetEnergyValue();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGItemDescriptor_GetForm();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGItemDescriptor_GetIconView();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGItemDescriptor_GetItemDescription();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGItemDescriptor_GetItemIcon();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGItemDescriptor_GetItemMesh();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGItemDescriptor_GetItemName();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGItemDescriptor_GetPreviewView();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGItemDescriptor_GetRadioactiveDecay();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGItemDescriptor_GetSmallIcon();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGItemDescriptor_GetStackSize();
// End Cross Module References
	static UEnum* EStackSize_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FactoryGame_EStackSize, Z_Construct_UPackage__Script_FactoryGame(), TEXT("EStackSize"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EStackSize(EStackSize_StaticEnum, TEXT("/Script/FactoryGame"), TEXT("EStackSize"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FactoryGame_EStackSize_CRC() { return 2191352509U; }
	UEnum* Z_Construct_UEnum_FactoryGame_EStackSize()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EStackSize"), 0, Get_Z_Construct_UEnum_FactoryGame_EStackSize_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EStackSize::SS_ONE", (int64)EStackSize::SS_ONE },
				{ "EStackSize::SS_SMALL", (int64)EStackSize::SS_SMALL },
				{ "EStackSize::SS_MEDIUM", (int64)EStackSize::SS_MEDIUM },
				{ "EStackSize::SS_BIG", (int64)EStackSize::SS_BIG },
				{ "EStackSize::SS_HUGE", (int64)EStackSize::SS_HUGE },
				{ "EStackSize::SS_LAST_ENUM", (int64)EStackSize::SS_LAST_ENUM },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Resources/FGItemDescriptor.h" },
				{ "SS_BIG.DisplayName", "Big" },
				{ "SS_HUGE.DisplayName", "Huge" },
				{ "SS_LAST_ENUM.Hidden", "" },
				{ "SS_MEDIUM.DisplayName", "Medium" },
				{ "SS_ONE.DisplayName", "One" },
				{ "SS_SMALL.DisplayName", "Small" },
				{ "ToolTip", "Stack Size for items" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FactoryGame,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EStackSize",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EStackSize",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EResourceForm_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FactoryGame_EResourceForm, Z_Construct_UPackage__Script_FactoryGame(), TEXT("EResourceForm"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EResourceForm(EResourceForm_StaticEnum, TEXT("/Script/FactoryGame"), TEXT("EResourceForm"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FactoryGame_EResourceForm_CRC() { return 1909696876U; }
	UEnum* Z_Construct_UEnum_FactoryGame_EResourceForm()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EResourceForm"), 0, Get_Z_Construct_UEnum_FactoryGame_EResourceForm_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EResourceForm::RF_INVALID", (int64)EResourceForm::RF_INVALID },
				{ "EResourceForm::RF_SOLID", (int64)EResourceForm::RF_SOLID },
				{ "EResourceForm::RF_LIQUID", (int64)EResourceForm::RF_LIQUID },
				{ "EResourceForm::RF_GAS", (int64)EResourceForm::RF_GAS },
				{ "EResourceForm::RF_HEAT", (int64)EResourceForm::RF_HEAT },
				{ "EResourceForm::RF_LAST_ENUM", (int64)EResourceForm::RF_LAST_ENUM },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Resources/FGItemDescriptor.h" },
				{ "RF_GAS.DisplayName", "Gas" },
				{ "RF_HEAT.DisplayName", "Heat" },
				{ "RF_INVALID.DisplayName", "Invalid" },
				{ "RF_LAST_ENUM.Hidden", "" },
				{ "RF_LIQUID.DisplayName", "Liquid" },
				{ "RF_SOLID.DisplayName", "Solid" },
				{ "ToolTip", "The form this item is in, i.e. does it require pipes or conveyors, can the player pick it up etc." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FactoryGame,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EResourceForm",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EResourceForm",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FItemView::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FItemView_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemView, Z_Construct_UPackage__Script_FactoryGame(), TEXT("ItemView"), sizeof(FItemView), Get_Z_Construct_UScriptStruct_FItemView_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FItemView(FItemView::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("ItemView"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFItemView
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFItemView()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ItemView")),new UScriptStruct::TCppStructOps<FItemView>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFItemView;
	struct Z_Construct_UScriptStruct_FItemView_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraPitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraPitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FocalOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FocalOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Distance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemView_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Resources/FGItemDescriptor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FItemView_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemView>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemView_Statics::NewProp_CameraPitch_MetaData[] = {
		{ "Category", "View" },
		{ "ModuleRelativePath", "Resources/FGItemDescriptor.h" },
		{ "ToolTip", "How much \"down or up\" the camera should be angeled (in degrees) when crating the view" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FItemView_Statics::NewProp_CameraPitch = { UE4CodeGen_Private::EPropertyClass::Float, "CameraPitch", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(FItemView, CameraPitch), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemView_Statics::NewProp_CameraPitch_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FItemView_Statics::NewProp_CameraPitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemView_Statics::NewProp_FocalOffset_MetaData[] = {
		{ "Category", "View" },
		{ "ModuleRelativePath", "Resources/FGItemDescriptor.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Where should the camera focus offsetted on the mesh" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FItemView_Statics::NewProp_FocalOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "FocalOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(FItemView, FocalOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemView_Statics::NewProp_FocalOffset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FItemView_Statics::NewProp_FocalOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemView_Statics::NewProp_Distance_MetaData[] = {
		{ "Category", "View" },
		{ "ModuleRelativePath", "Resources/FGItemDescriptor.h" },
		{ "ToolTip", "The distance to the object when creating it's view" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FItemView_Statics::NewProp_Distance = { UE4CodeGen_Private::EPropertyClass::Float, "Distance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(FItemView, Distance), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemView_Statics::NewProp_Distance_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FItemView_Statics::NewProp_Distance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemView_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemView_Statics::NewProp_CameraPitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemView_Statics::NewProp_FocalOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemView_Statics::NewProp_Distance,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemView_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"ItemView",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FItemView),
		alignof(FItemView),
		Z_Construct_UScriptStruct_FItemView_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FItemView_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FItemView_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FItemView_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FItemView()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FItemView_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ItemView"), sizeof(FItemView), Get_Z_Construct_UScriptStruct_FItemView_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FItemView_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FItemView_CRC() { return 2116303488U; }
	void UFGItemDescriptor::StaticRegisterNativesUFGItemDescriptor()
	{
		UClass* Class = UFGItemDescriptor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanBeDiscarded", &UFGItemDescriptor::execCanBeDiscarded },
			{ "GetBigIcon", &UFGItemDescriptor::execGetBigIcon },
			{ "GetEnergyValue", &UFGItemDescriptor::execGetEnergyValue },
			{ "GetForm", &UFGItemDescriptor::execGetForm },
			{ "GetIconView", &UFGItemDescriptor::execGetIconView },
			{ "GetItemDescription", &UFGItemDescriptor::execGetItemDescription },
			{ "GetItemIcon", &UFGItemDescriptor::execGetItemIcon },
			{ "GetItemMesh", &UFGItemDescriptor::execGetItemMesh },
			{ "GetItemName", &UFGItemDescriptor::execGetItemName },
			{ "GetPreviewView", &UFGItemDescriptor::execGetPreviewView },
			{ "GetRadioactiveDecay", &UFGItemDescriptor::execGetRadioactiveDecay },
			{ "GetSmallIcon", &UFGItemDescriptor::execGetSmallIcon },
			{ "GetStackSize", &UFGItemDescriptor::execGetStackSize },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGItemDescriptor_CanBeDiscarded_Statics
	{
		struct FGItemDescriptor_eventCanBeDiscarded_Parms
		{
			TSubclassOf<UFGItemDescriptor>  inClass;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFGItemDescriptor_CanBeDiscarded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGItemDescriptor_eventCanBeDiscarded_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGItemDescriptor_CanBeDiscarded_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGItemDescriptor_eventCanBeDiscarded_Parms), &Z_Construct_UFunction_UFGItemDescriptor_CanBeDiscarded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGItemDescriptor_CanBeDiscarded_Statics::NewProp_inClass = { UE4CodeGen_Private::EPropertyClass::Class, "inClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGItemDescriptor_eventCanBeDiscarded_Parms, inClass), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGItemDescriptor_CanBeDiscarded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGItemDescriptor_CanBeDiscarded_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGItemDescriptor_CanBeDiscarded_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGItemDescriptor_CanBeDiscarded_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Descriptor|Item" },
		{ "ModuleRelativePath", "Resources/FGItemDescriptor.h" },
		{ "ToolTip", "Returns if this item can be discarded" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGItemDescriptor_CanBeDiscarded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGItemDescriptor, "CanBeDiscarded", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(FGItemDescriptor_eventCanBeDiscarded_Parms), Z_Construct_UFunction_UFGItemDescriptor_CanBeDiscarded_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGItemDescriptor_CanBeDiscarded_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGItemDescriptor_CanBeDiscarded_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGItemDescriptor_CanBeDiscarded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGItemDescriptor_CanBeDiscarded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGItemDescriptor_CanBeDiscarded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGItemDescriptor_GetBigIcon_Statics
	{
		struct FGItemDescriptor_eventGetBigIcon_Parms
		{
			TSubclassOf<UFGItemDescriptor>  inClass;
			UTexture2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGItemDescriptor_GetBigIcon_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGItemDescriptor_eventGetBigIcon_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGItemDescriptor_GetBigIcon_Statics::NewProp_inClass = { UE4CodeGen_Private::EPropertyClass::Class, "inClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGItemDescriptor_eventGetBigIcon_Parms, inClass), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGItemDescriptor_GetBigIcon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGItemDescriptor_GetBigIcon_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGItemDescriptor_GetBigIcon_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGItemDescriptor_GetBigIcon_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Descriptor|Item" },
		{ "ModuleRelativePath", "Resources/FGItemDescriptor.h" },
		{ "ToolTip", "The big icon of the item" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGItemDescriptor_GetBigIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGItemDescriptor, "GetBigIcon", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(FGItemDescriptor_eventGetBigIcon_Parms), Z_Construct_UFunction_UFGItemDescriptor_GetBigIcon_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGItemDescriptor_GetBigIcon_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGItemDescriptor_GetBigIcon_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGItemDescriptor_GetBigIcon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGItemDescriptor_GetBigIcon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGItemDescriptor_GetBigIcon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGItemDescriptor_GetEnergyValue_Statics
	{
		struct FGItemDescriptor_eventGetEnergyValue_Parms
		{
			TSubclassOf<UFGItemDescriptor>  inClass;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGItemDescriptor_GetEnergyValue_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGItemDescriptor_eventGetEnergyValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGItemDescriptor_GetEnergyValue_Statics::NewProp_inClass = { UE4CodeGen_Private::EPropertyClass::Class, "inClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGItemDescriptor_eventGetEnergyValue_Parms, inClass), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGItemDescriptor_GetEnergyValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGItemDescriptor_GetEnergyValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGItemDescriptor_GetEnergyValue_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGItemDescriptor_GetEnergyValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Descriptor|Item" },
		{ "ModuleRelativePath", "Resources/FGItemDescriptor.h" },
		{ "ToolTip", "Energy value for this resource if used as fuel." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGItemDescriptor_GetEnergyValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGItemDescriptor, "GetEnergyValue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(FGItemDescriptor_eventGetEnergyValue_Parms), Z_Construct_UFunction_UFGItemDescriptor_GetEnergyValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGItemDescriptor_GetEnergyValue_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGItemDescriptor_GetEnergyValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGItemDescriptor_GetEnergyValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGItemDescriptor_GetEnergyValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGItemDescriptor_GetEnergyValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGItemDescriptor_GetForm_Statics
	{
		struct FGItemDescriptor_eventGetForm_Parms
		{
			TSubclassOf<UFGItemDescriptor>  inClass;
			EResourceForm ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFGItemDescriptor_GetForm_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Enum, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGItemDescriptor_eventGetForm_Parms, ReturnValue), Z_Construct_UEnum_FactoryGame_EResourceForm, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFGItemDescriptor_GetForm_Statics::NewProp_ReturnValue_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGItemDescriptor_GetForm_Statics::NewProp_inClass = { UE4CodeGen_Private::EPropertyClass::Class, "inClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGItemDescriptor_eventGetForm_Parms, inClass), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGItemDescriptor_GetForm_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGItemDescriptor_GetForm_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGItemDescriptor_GetForm_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGItemDescriptor_GetForm_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGItemDescriptor_GetForm_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Descriptor|Item" },
		{ "ModuleRelativePath", "Resources/FGItemDescriptor.h" },
		{ "ToolTip", "The state of this resource." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGItemDescriptor_GetForm_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGItemDescriptor, "GetForm", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(FGItemDescriptor_eventGetForm_Parms), Z_Construct_UFunction_UFGItemDescriptor_GetForm_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGItemDescriptor_GetForm_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGItemDescriptor_GetForm_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGItemDescriptor_GetForm_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGItemDescriptor_GetForm()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGItemDescriptor_GetForm_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGItemDescriptor_GetIconView_Statics
	{
		struct FGItemDescriptor_eventGetIconView_Parms
		{
			TSubclassOf<UFGItemDescriptor>  inClass;
			FItemView out_itemView;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_out_itemView;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGItemDescriptor_GetIconView_Statics::NewProp_out_itemView = { UE4CodeGen_Private::EPropertyClass::Struct, "out_itemView", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(FGItemDescriptor_eventGetIconView_Parms, out_itemView), Z_Construct_UScriptStruct_FItemView, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGItemDescriptor_GetIconView_Statics::NewProp_inClass = { UE4CodeGen_Private::EPropertyClass::Class, "inClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGItemDescriptor_eventGetIconView_Parms, inClass), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGItemDescriptor_GetIconView_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGItemDescriptor_GetIconView_Statics::NewProp_out_itemView,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGItemDescriptor_GetIconView_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGItemDescriptor_GetIconView_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Descriptor|Item" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Resources/FGItemDescriptor.h" },
		{ "ToolTip", "Get the view to use when previewing this item" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGItemDescriptor_GetIconView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGItemDescriptor, "GetIconView", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(FGItemDescriptor_eventGetIconView_Parms), Z_Construct_UFunction_UFGItemDescriptor_GetIconView_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGItemDescriptor_GetIconView_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGItemDescriptor_GetIconView_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGItemDescriptor_GetIconView_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGItemDescriptor_GetIconView()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGItemDescriptor_GetIconView_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGItemDescriptor_GetItemDescription_Statics
	{
		struct FGItemDescriptor_eventGetItemDescription_Parms
		{
			TSubclassOf<UFGItemDescriptor>  inClass;
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UFGItemDescriptor_GetItemDescription_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGItemDescriptor_eventGetItemDescription_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGItemDescriptor_GetItemDescription_Statics::NewProp_inClass = { UE4CodeGen_Private::EPropertyClass::Class, "inClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGItemDescriptor_eventGetItemDescription_Parms, inClass), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGItemDescriptor_GetItemDescription_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGItemDescriptor_GetItemDescription_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGItemDescriptor_GetItemDescription_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGItemDescriptor_GetItemDescription_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Descriptor|Item" },
		{ "ModuleRelativePath", "Resources/FGItemDescriptor.h" },
		{ "ToolTip", "Used to get the resource description in blueprints" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGItemDescriptor_GetItemDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGItemDescriptor, "GetItemDescription", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(FGItemDescriptor_eventGetItemDescription_Parms), Z_Construct_UFunction_UFGItemDescriptor_GetItemDescription_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGItemDescriptor_GetItemDescription_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGItemDescriptor_GetItemDescription_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGItemDescriptor_GetItemDescription_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGItemDescriptor_GetItemDescription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGItemDescriptor_GetItemDescription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGItemDescriptor_GetItemIcon_Statics
	{
		struct FGItemDescriptor_eventGetItemIcon_Parms
		{
			TSubclassOf<UFGItemDescriptor>  inClass;
			FSlateBrush ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGItemDescriptor_GetItemIcon_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGItemDescriptor_eventGetItemIcon_Parms, ReturnValue), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGItemDescriptor_GetItemIcon_Statics::NewProp_inClass = { UE4CodeGen_Private::EPropertyClass::Class, "inClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGItemDescriptor_eventGetItemIcon_Parms, inClass), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGItemDescriptor_GetItemIcon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGItemDescriptor_GetItemIcon_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGItemDescriptor_GetItemIcon_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGItemDescriptor_GetItemIcon_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Descriptor|Item" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Don't use the brush anymore, please use GetSmallIcon or GetBigIcon" },
		{ "ModuleRelativePath", "Resources/FGItemDescriptor.h" },
		{ "ToolTip", "The icon to be used in UI." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGItemDescriptor_GetItemIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGItemDescriptor, "GetItemIcon", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(FGItemDescriptor_eventGetItemIcon_Parms), Z_Construct_UFunction_UFGItemDescriptor_GetItemIcon_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGItemDescriptor_GetItemIcon_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGItemDescriptor_GetItemIcon_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGItemDescriptor_GetItemIcon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGItemDescriptor_GetItemIcon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGItemDescriptor_GetItemIcon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGItemDescriptor_GetItemMesh_Statics
	{
		struct FGItemDescriptor_eventGetItemMesh_Parms
		{
			TSubclassOf<UFGItemDescriptor>  inClass;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGItemDescriptor_GetItemMesh_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGItemDescriptor_eventGetItemMesh_Parms, ReturnValue), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGItemDescriptor_GetItemMesh_Statics::NewProp_inClass = { UE4CodeGen_Private::EPropertyClass::Class, "inClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGItemDescriptor_eventGetItemMesh_Parms, inClass), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGItemDescriptor_GetItemMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGItemDescriptor_GetItemMesh_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGItemDescriptor_GetItemMesh_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGItemDescriptor_GetItemMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Descriptor|Item" },
		{ "ModuleRelativePath", "Resources/FGItemDescriptor.h" },
		{ "ToolTip", "The static mesh we want for representing the resource when they are in the production line.\n@return The items mesh; a default mesh if the item has no mesh specified, nullptr if inClass is nullptr." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGItemDescriptor_GetItemMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGItemDescriptor, "GetItemMesh", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(FGItemDescriptor_eventGetItemMesh_Parms), Z_Construct_UFunction_UFGItemDescriptor_GetItemMesh_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGItemDescriptor_GetItemMesh_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGItemDescriptor_GetItemMesh_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGItemDescriptor_GetItemMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGItemDescriptor_GetItemMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGItemDescriptor_GetItemMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGItemDescriptor_GetItemName_Statics
	{
		struct FGItemDescriptor_eventGetItemName_Parms
		{
			TSubclassOf<UFGItemDescriptor>  inClass;
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UFGItemDescriptor_GetItemName_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGItemDescriptor_eventGetItemName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGItemDescriptor_GetItemName_Statics::NewProp_inClass = { UE4CodeGen_Private::EPropertyClass::Class, "inClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGItemDescriptor_eventGetItemName_Parms, inClass), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGItemDescriptor_GetItemName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGItemDescriptor_GetItemName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGItemDescriptor_GetItemName_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGItemDescriptor_GetItemName_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Descriptor|Item" },
		{ "ModuleRelativePath", "Resources/FGItemDescriptor.h" },
		{ "ToolTip", "Used to get the resource name in blueprints" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGItemDescriptor_GetItemName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGItemDescriptor, "GetItemName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(FGItemDescriptor_eventGetItemName_Parms), Z_Construct_UFunction_UFGItemDescriptor_GetItemName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGItemDescriptor_GetItemName_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGItemDescriptor_GetItemName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGItemDescriptor_GetItemName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGItemDescriptor_GetItemName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGItemDescriptor_GetItemName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGItemDescriptor_GetPreviewView_Statics
	{
		struct FGItemDescriptor_eventGetPreviewView_Parms
		{
			TSubclassOf<UFGItemDescriptor>  inClass;
			FItemView out_previewView;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_out_previewView;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGItemDescriptor_GetPreviewView_Statics::NewProp_out_previewView = { UE4CodeGen_Private::EPropertyClass::Struct, "out_previewView", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(FGItemDescriptor_eventGetPreviewView_Parms, out_previewView), Z_Construct_UScriptStruct_FItemView, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGItemDescriptor_GetPreviewView_Statics::NewProp_inClass = { UE4CodeGen_Private::EPropertyClass::Class, "inClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGItemDescriptor_eventGetPreviewView_Parms, inClass), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGItemDescriptor_GetPreviewView_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGItemDescriptor_GetPreviewView_Statics::NewProp_out_previewView,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGItemDescriptor_GetPreviewView_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGItemDescriptor_GetPreviewView_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Descriptor|Item" },
		{ "ModuleRelativePath", "Resources/FGItemDescriptor.h" },
		{ "ToolTip", "Get the view to use when previewing this item" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGItemDescriptor_GetPreviewView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGItemDescriptor, "GetPreviewView", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(FGItemDescriptor_eventGetPreviewView_Parms), Z_Construct_UFunction_UFGItemDescriptor_GetPreviewView_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGItemDescriptor_GetPreviewView_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGItemDescriptor_GetPreviewView_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGItemDescriptor_GetPreviewView_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGItemDescriptor_GetPreviewView()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGItemDescriptor_GetPreviewView_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGItemDescriptor_GetRadioactiveDecay_Statics
	{
		struct FGItemDescriptor_eventGetRadioactiveDecay_Parms
		{
			TSubclassOf<UFGItemDescriptor>  inClass;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGItemDescriptor_GetRadioactiveDecay_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGItemDescriptor_eventGetRadioactiveDecay_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGItemDescriptor_GetRadioactiveDecay_Statics::NewProp_inClass = { UE4CodeGen_Private::EPropertyClass::Class, "inClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGItemDescriptor_eventGetRadioactiveDecay_Parms, inClass), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGItemDescriptor_GetRadioactiveDecay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGItemDescriptor_GetRadioactiveDecay_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGItemDescriptor_GetRadioactiveDecay_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGItemDescriptor_GetRadioactiveDecay_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Descriptor|Item" },
		{ "ModuleRelativePath", "Resources/FGItemDescriptor.h" },
		{ "ToolTip", "How much radiation this item gives out, 0 means it's not radioactive." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGItemDescriptor_GetRadioactiveDecay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGItemDescriptor, "GetRadioactiveDecay", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(FGItemDescriptor_eventGetRadioactiveDecay_Parms), Z_Construct_UFunction_UFGItemDescriptor_GetRadioactiveDecay_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGItemDescriptor_GetRadioactiveDecay_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGItemDescriptor_GetRadioactiveDecay_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGItemDescriptor_GetRadioactiveDecay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGItemDescriptor_GetRadioactiveDecay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGItemDescriptor_GetRadioactiveDecay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGItemDescriptor_GetSmallIcon_Statics
	{
		struct FGItemDescriptor_eventGetSmallIcon_Parms
		{
			TSubclassOf<UFGItemDescriptor>  inClass;
			UTexture2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGItemDescriptor_GetSmallIcon_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGItemDescriptor_eventGetSmallIcon_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGItemDescriptor_GetSmallIcon_Statics::NewProp_inClass = { UE4CodeGen_Private::EPropertyClass::Class, "inClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGItemDescriptor_eventGetSmallIcon_Parms, inClass), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGItemDescriptor_GetSmallIcon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGItemDescriptor_GetSmallIcon_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGItemDescriptor_GetSmallIcon_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGItemDescriptor_GetSmallIcon_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Descriptor|Item" },
		{ "ModuleRelativePath", "Resources/FGItemDescriptor.h" },
		{ "ToolTip", "The small icon of the item" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGItemDescriptor_GetSmallIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGItemDescriptor, "GetSmallIcon", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(FGItemDescriptor_eventGetSmallIcon_Parms), Z_Construct_UFunction_UFGItemDescriptor_GetSmallIcon_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGItemDescriptor_GetSmallIcon_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGItemDescriptor_GetSmallIcon_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGItemDescriptor_GetSmallIcon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGItemDescriptor_GetSmallIcon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGItemDescriptor_GetSmallIcon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGItemDescriptor_GetStackSize_Statics
	{
		struct FGItemDescriptor_eventGetStackSize_Parms
		{
			TSubclassOf<UFGItemDescriptor>  inClass;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGItemDescriptor_GetStackSize_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGItemDescriptor_eventGetStackSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGItemDescriptor_GetStackSize_Statics::NewProp_inClass = { UE4CodeGen_Private::EPropertyClass::Class, "inClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGItemDescriptor_eventGetStackSize_Parms, inClass), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGItemDescriptor_GetStackSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGItemDescriptor_GetStackSize_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGItemDescriptor_GetStackSize_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGItemDescriptor_GetStackSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Descriptor|Item" },
		{ "ModuleRelativePath", "Resources/FGItemDescriptor.h" },
		{ "ToolTip", "Returns the number of items of a certain type we can stack in one inventory slot" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGItemDescriptor_GetStackSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGItemDescriptor, "GetStackSize", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(FGItemDescriptor_eventGetStackSize_Parms), Z_Construct_UFunction_UFGItemDescriptor_GetStackSize_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGItemDescriptor_GetStackSize_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGItemDescriptor_GetStackSize_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGItemDescriptor_GetStackSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGItemDescriptor_GetStackSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGItemDescriptor_GetStackSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGItemDescriptor_NoRegister()
	{
		return UFGItemDescriptor::StaticClass();
	}
	struct Z_Construct_UClass_UFGItemDescriptor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mIconView_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mIconView;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mIconYaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mIconYaw;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPreviewView_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mPreviewView;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mConveyorMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mConveyorMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPersistentBigIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mPersistentBigIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSmallIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mSmallIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mInventoryIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mInventoryIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mForm_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_mForm;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_mForm_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mRadioactiveDecay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mRadioactiveDecay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mEnergyValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mEnergyValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCanBeDiscarded_MetaData[];
#endif
		static void NewProp_mCanBeDiscarded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mCanBeDiscarded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mStackSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_mStackSize;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_mStackSize_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_mDescription;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_mDisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mUseDisplayNameAndDescription_MetaData[];
#endif
		static void NewProp_mUseDisplayNameAndDescription_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mUseDisplayNameAndDescription;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGItemDescriptor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGItemDescriptor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGItemDescriptor_CanBeDiscarded, "CanBeDiscarded" }, // 2325616794
		{ &Z_Construct_UFunction_UFGItemDescriptor_GetBigIcon, "GetBigIcon" }, // 2567019252
		{ &Z_Construct_UFunction_UFGItemDescriptor_GetEnergyValue, "GetEnergyValue" }, // 1884830668
		{ &Z_Construct_UFunction_UFGItemDescriptor_GetForm, "GetForm" }, // 4110883313
		{ &Z_Construct_UFunction_UFGItemDescriptor_GetIconView, "GetIconView" }, // 2591459172
		{ &Z_Construct_UFunction_UFGItemDescriptor_GetItemDescription, "GetItemDescription" }, // 43972647
		{ &Z_Construct_UFunction_UFGItemDescriptor_GetItemIcon, "GetItemIcon" }, // 2015961453
		{ &Z_Construct_UFunction_UFGItemDescriptor_GetItemMesh, "GetItemMesh" }, // 3907276095
		{ &Z_Construct_UFunction_UFGItemDescriptor_GetItemName, "GetItemName" }, // 1693631394
		{ &Z_Construct_UFunction_UFGItemDescriptor_GetPreviewView, "GetPreviewView" }, // 814638394
		{ &Z_Construct_UFunction_UFGItemDescriptor_GetRadioactiveDecay, "GetRadioactiveDecay" }, // 3625666009
		{ &Z_Construct_UFunction_UFGItemDescriptor_GetSmallIcon, "GetSmallIcon" }, // 1165635708
		{ &Z_Construct_UFunction_UFGItemDescriptor_GetStackSize, "GetStackSize" }, // 3423175679
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGItemDescriptor_Statics::Class_MetaDataParams[] = {
		{ "AutoJSON", "TRUE" },
		{ "BlueprintType", "true" },
		{ "HideCategories", "Icon Preview" },
		{ "IncludePath", "Resources/FGItemDescriptor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Resources/FGItemDescriptor.h" },
		{ "SerializeToFArchive", "" },
		{ "ToolTip", "Base for all descriptors in the game like resource, equipment etc." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mIconView_MetaData[] = {
		{ "Category", "Icon" },
		{ "ModuleRelativePath", "Resources/FGItemDescriptor.h" },
		{ "NoAutoJSON", "TRUE" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The distance to the object when rendering the icon" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mIconView = { UE4CodeGen_Private::EPropertyClass::Struct, "mIconView", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080800010001, 1, nullptr, STRUCT_OFFSET(UFGItemDescriptor, mIconView), Z_Construct_UScriptStruct_FItemView, METADATA_PARAMS(Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mIconView_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mIconView_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mIconYaw_MetaData[] = {
		{ "Category", "Icon" },
		{ "ModuleRelativePath", "Resources/FGItemDescriptor.h" },
		{ "NoAutoJSON", "TRUE" },
		{ "ToolTip", "The jaw of the object when rendering the icon" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mIconYaw = { UE4CodeGen_Private::EPropertyClass::Float, "mIconYaw", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080800010001, 1, nullptr, STRUCT_OFFSET(UFGItemDescriptor, mIconYaw), METADATA_PARAMS(Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mIconYaw_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mIconYaw_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mPreviewView_MetaData[] = {
		{ "Category", "Preview" },
		{ "ModuleRelativePath", "Resources/FGItemDescriptor.h" },
		{ "NoAutoJSON", "TRUE" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The view in the build menu for this item" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mPreviewView = { UE4CodeGen_Private::EPropertyClass::Struct, "mPreviewView", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(UFGItemDescriptor, mPreviewView), Z_Construct_UScriptStruct_FItemView, METADATA_PARAMS(Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mPreviewView_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mPreviewView_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mConveyorMesh_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Resources/FGItemDescriptor.h" },
		{ "ToolTip", "The static mesh we want for representing the resource when they are in the production line." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mConveyorMesh = { UE4CodeGen_Private::EPropertyClass::Object, "mConveyorMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(UFGItemDescriptor, mConveyorMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mConveyorMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mConveyorMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mPersistentBigIcon_MetaData[] = {
		{ "Category", "UI" },
		{ "DisplayName", "Big Icon" },
		{ "ModuleRelativePath", "Resources/FGItemDescriptor.h" },
		{ "ToolTip", "Big icon of the item, SHOULD only be loaded by demand, but right now persistent in memory" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mPersistentBigIcon = { UE4CodeGen_Private::EPropertyClass::Object, "mPersistentBigIcon", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(UFGItemDescriptor, mPersistentBigIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mPersistentBigIcon_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mPersistentBigIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mSmallIcon_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Resources/FGItemDescriptor.h" },
		{ "ToolTip", "Small icon of the item, always in memory" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mSmallIcon = { UE4CodeGen_Private::EPropertyClass::Object, "mSmallIcon", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(UFGItemDescriptor, mSmallIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mSmallIcon_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mSmallIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mInventoryIcon_MetaData[] = {
		{ "ModuleRelativePath", "Resources/FGItemDescriptor.h" },
		{ "NoAutoJSON", "TRUE" },
		{ "ToolTip", "Old brush used for UI, can't be DEPRECATED_ as it won't work in shipping builds during conversion then" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mInventoryIcon = { UE4CodeGen_Private::EPropertyClass::Struct, "mInventoryIcon", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UFGItemDescriptor, mInventoryIcon), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mInventoryIcon_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mInventoryIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mForm_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Resources/FGItemDescriptor.h" },
		{ "ToolTip", "The state of this resource (cannot change during it's lifetime)." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mForm = { UE4CodeGen_Private::EPropertyClass::Enum, "mForm", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(UFGItemDescriptor, mForm), Z_Construct_UEnum_FactoryGame_EResourceForm, METADATA_PARAMS(Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mForm_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mForm_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mForm_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mRadioactiveDecay_MetaData[] = {
		{ "Category", "Item" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Resources/FGItemDescriptor.h" },
		{ "ToolTip", "How much radiation this item gives out in the number of nucleus that decays per second.\n0 means no radiation and 1 is 10^15 (1 quadrillion) decays/s.\nGood values are in the range 0 to 1." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mRadioactiveDecay = { UE4CodeGen_Private::EPropertyClass::Float, "mRadioactiveDecay", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(UFGItemDescriptor, mRadioactiveDecay), METADATA_PARAMS(Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mRadioactiveDecay_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mRadioactiveDecay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mEnergyValue_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Resources/FGItemDescriptor.h" },
		{ "ToolTip", "Energy value for this resource if used as fuel. In megawatt seconds (MWs), a.k.a. mega joule (MJ)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mEnergyValue = { UE4CodeGen_Private::EPropertyClass::Float, "mEnergyValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(UFGItemDescriptor, mEnergyValue), METADATA_PARAMS(Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mEnergyValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mEnergyValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mCanBeDiscarded_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Resources/FGItemDescriptor.h" },
		{ "ToolTip", "Indicates if this item can be thrown in the trash or not" },
	};
#endif
	void Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mCanBeDiscarded_SetBit(void* Obj)
	{
		((UFGItemDescriptor*)Obj)->mCanBeDiscarded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mCanBeDiscarded = { UE4CodeGen_Private::EPropertyClass::Bool, "mCanBeDiscarded", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UFGItemDescriptor), &Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mCanBeDiscarded_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mCanBeDiscarded_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mCanBeDiscarded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mStackSize_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Resources/FGItemDescriptor.h" },
		{ "ToolTip", "How many of this item can be in the same slot in an inventory" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mStackSize = { UE4CodeGen_Private::EPropertyClass::Enum, "mStackSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(UFGItemDescriptor, mStackSize), Z_Construct_UEnum_FactoryGame_EStackSize, METADATA_PARAMS(Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mStackSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mStackSize_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mStackSize_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mDescription_MetaData[] = {
		{ "Category", "Item" },
		{ "EditCondition", "mUseDisplayNameAndDescription" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Resources/FGItemDescriptor.h" },
		{ "MultiLine", "TRUE" },
		{ "ToolTip", "Readable description of the item" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mDescription = { UE4CodeGen_Private::EPropertyClass::Text, "mDescription", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UFGItemDescriptor, mDescription), METADATA_PARAMS(Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mDescription_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mDescription_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mDisplayName_MetaData[] = {
		{ "Category", "Item" },
		{ "EditCondition", "mUseDisplayNameAndDescription" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Resources/FGItemDescriptor.h" },
		{ "ToolTip", "Readable name of the item" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mDisplayName = { UE4CodeGen_Private::EPropertyClass::Text, "mDisplayName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UFGItemDescriptor, mDisplayName), METADATA_PARAMS(Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mDisplayName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mDisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mUseDisplayNameAndDescription_MetaData[] = {
		{ "Category", "FGItemDescriptor" },
		{ "ModuleRelativePath", "Resources/FGItemDescriptor.h" },
		{ "ToolTip", "If mDisplayName and mDisplayName is overridden and specified elsewhere.\nThis is specified in the native constructor and is meant to be per class.\nE.g. vehicle descriptors get name and description from the vehicle class so the defaults are useless.\n        // MODDING EDIT" },
	};
#endif
	void Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mUseDisplayNameAndDescription_SetBit(void* Obj)
	{
		((UFGItemDescriptor*)Obj)->mUseDisplayNameAndDescription = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mUseDisplayNameAndDescription = { UE4CodeGen_Private::EPropertyClass::Bool, "mUseDisplayNameAndDescription", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000012001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UFGItemDescriptor), &Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mUseDisplayNameAndDescription_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mUseDisplayNameAndDescription_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mUseDisplayNameAndDescription_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGItemDescriptor_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mIconView,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mIconYaw,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mPreviewView,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mConveyorMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mPersistentBigIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mSmallIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mInventoryIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mForm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mForm_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mRadioactiveDecay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mEnergyValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mCanBeDiscarded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mStackSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mStackSize_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mDisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mUseDisplayNameAndDescription,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGItemDescriptor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGItemDescriptor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGItemDescriptor_Statics::ClassParams = {
		&UFGItemDescriptor::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A1u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UFGItemDescriptor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UFGItemDescriptor_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFGItemDescriptor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGItemDescriptor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGItemDescriptor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGItemDescriptor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGItemDescriptor, 4169925240);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGItemDescriptor(Z_Construct_UClass_UFGItemDescriptor, &UFGItemDescriptor::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGItemDescriptor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGItemDescriptor);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UFGItemDescriptor)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
