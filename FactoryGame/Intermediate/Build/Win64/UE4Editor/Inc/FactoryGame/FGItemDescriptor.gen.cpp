// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/Resources/FGItemDescriptor.h"
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
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGItemDescriptor_GetAbbreviatedDisplayName();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGItemDescriptor_GetBigIcon();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGItemDescriptor_GetEnergyValue();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGItemDescriptor_GetFluidColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGItemDescriptor_GetFluidColorLinear();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGItemDescriptor_GetForm();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGItemDescriptor_GetIconCameraDistance();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGItemDescriptor_GetIconCameraTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGItemDescriptor_GetIconFOV();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGItemDescriptor_GetIconObjectOrientation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGItemDescriptor_GetIconSkyOrientation();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGItemDescriptor_GetIconView();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGItemDescriptor_GetItemCategory();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGItemCategory_NoRegister();
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
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGItemDescriptor_GetStackSizeConverted();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGItemDescriptor_RememberPickUp();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGItemDescriptor_SetIconCameraDistance();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGItemDescriptor_SetIconCameraTransform();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGItemDescriptor_SetIconFOV();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGItemDescriptor_SetIconObjectOrientation();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGItemDescriptor_SetIconSkyOrientation();
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
	template<> FACTORYGAME_API UEnum* StaticEnum<EStackSize>()
	{
		return EStackSize_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EStackSize(EStackSize_StaticEnum, TEXT("/Script/FactoryGame"), TEXT("EStackSize"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FactoryGame_EStackSize_Hash() { return 31186050U; }
	UEnum* Z_Construct_UEnum_FactoryGame_EStackSize()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EStackSize"), 0, Get_Z_Construct_UEnum_FactoryGame_EStackSize_Hash(), false);
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
				{ "EStackSize::SS_FLUID", (int64)EStackSize::SS_FLUID },
				{ "EStackSize::SS_LAST_ENUM", (int64)EStackSize::SS_LAST_ENUM },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Resources/FGItemDescriptor.h" },
				{ "SS_BIG.DisplayName", "Big" },
				{ "SS_FLUID.DisplayName", "Fluid" },
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
				nullptr,
				"EStackSize",
				"EStackSize",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
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
	template<> FACTORYGAME_API UEnum* StaticEnum<EResourceForm>()
	{
		return EResourceForm_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EResourceForm(EResourceForm_StaticEnum, TEXT("/Script/FactoryGame"), TEXT("EResourceForm"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FactoryGame_EResourceForm_Hash() { return 3124852804U; }
	UEnum* Z_Construct_UEnum_FactoryGame_EResourceForm()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EResourceForm"), 0, Get_Z_Construct_UEnum_FactoryGame_EResourceForm_Hash(), false);
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
				{ "ModuleRelativePath", "Public/Resources/FGItemDescriptor.h" },
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
				nullptr,
				"EResourceForm",
				"EResourceForm",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
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
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FItemView_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemView, Z_Construct_UPackage__Script_FactoryGame(), TEXT("ItemView"), sizeof(FItemView), Get_Z_Construct_UScriptStruct_FItemView_Hash());
	}
	return Singleton;
}
template<> FACTORYGAME_API UScriptStruct* StaticStruct<FItemView>()
{
	return FItemView::StaticStruct();
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
		{ "ModuleRelativePath", "Public/Resources/FGItemDescriptor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FItemView_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemView>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemView_Statics::NewProp_CameraPitch_MetaData[] = {
		{ "Category", "View" },
		{ "ModuleRelativePath", "Public/Resources/FGItemDescriptor.h" },
		{ "ToolTip", "How much \"down or up\" the camera should be angeled (in degrees) when crating the view" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FItemView_Statics::NewProp_CameraPitch = { "CameraPitch", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemView, CameraPitch), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemView_Statics::NewProp_CameraPitch_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FItemView_Statics::NewProp_CameraPitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemView_Statics::NewProp_FocalOffset_MetaData[] = {
		{ "Category", "View" },
		{ "ModuleRelativePath", "Public/Resources/FGItemDescriptor.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Where should the camera focus offsetted on the mesh" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FItemView_Statics::NewProp_FocalOffset = { "FocalOffset", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemView, FocalOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemView_Statics::NewProp_FocalOffset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FItemView_Statics::NewProp_FocalOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemView_Statics::NewProp_Distance_MetaData[] = {
		{ "Category", "View" },
		{ "ModuleRelativePath", "Public/Resources/FGItemDescriptor.h" },
		{ "ToolTip", "The distance to the object when creating it's view" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FItemView_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemView, Distance), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemView_Statics::NewProp_Distance_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FItemView_Statics::NewProp_Distance_MetaData)) };
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
		sizeof(FItemView),
		alignof(FItemView),
		Z_Construct_UScriptStruct_FItemView_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FItemView_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FItemView_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FItemView_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FItemView()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FItemView_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ItemView"), sizeof(FItemView), Get_Z_Construct_UScriptStruct_FItemView_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FItemView_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FItemView_Hash() { return 53595167U; }
	void UFGItemDescriptor::StaticRegisterNativesUFGItemDescriptor()
	{
		UClass* Class = UFGItemDescriptor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanBeDiscarded", &UFGItemDescriptor::execCanBeDiscarded },
			{ "GetAbbreviatedDisplayName", &UFGItemDescriptor::execGetAbbreviatedDisplayName },
			{ "GetBigIcon", &UFGItemDescriptor::execGetBigIcon },
			{ "GetEnergyValue", &UFGItemDescriptor::execGetEnergyValue },
			{ "GetFluidColor", &UFGItemDescriptor::execGetFluidColor },
			{ "GetFluidColorLinear", &UFGItemDescriptor::execGetFluidColorLinear },
			{ "GetForm", &UFGItemDescriptor::execGetForm },
			{ "GetIconCameraDistance", &UFGItemDescriptor::execGetIconCameraDistance },
			{ "GetIconCameraTransform", &UFGItemDescriptor::execGetIconCameraTransform },
			{ "GetIconFOV", &UFGItemDescriptor::execGetIconFOV },
			{ "GetIconObjectOrientation", &UFGItemDescriptor::execGetIconObjectOrientation },
			{ "GetIconSkyOrientation", &UFGItemDescriptor::execGetIconSkyOrientation },
			{ "GetIconView", &UFGItemDescriptor::execGetIconView },
			{ "GetItemCategory", &UFGItemDescriptor::execGetItemCategory },
			{ "GetItemDescription", &UFGItemDescriptor::execGetItemDescription },
			{ "GetItemIcon", &UFGItemDescriptor::execGetItemIcon },
			{ "GetItemMesh", &UFGItemDescriptor::execGetItemMesh },
			{ "GetItemName", &UFGItemDescriptor::execGetItemName },
			{ "GetPreviewView", &UFGItemDescriptor::execGetPreviewView },
			{ "GetRadioactiveDecay", &UFGItemDescriptor::execGetRadioactiveDecay },
			{ "GetSmallIcon", &UFGItemDescriptor::execGetSmallIcon },
			{ "GetStackSize", &UFGItemDescriptor::execGetStackSize },
			{ "GetStackSizeConverted", &UFGItemDescriptor::execGetStackSizeConverted },
			{ "RememberPickUp", &UFGItemDescriptor::execRememberPickUp },
			{ "SetIconCameraDistance", &UFGItemDescriptor::execSetIconCameraDistance },
			{ "SetIconCameraTransform", &UFGItemDescriptor::execSetIconCameraTransform },
			{ "SetIconFOV", &UFGItemDescriptor::execSetIconFOV },
			{ "SetIconObjectOrientation", &UFGItemDescriptor::execSetIconObjectOrientation },
			{ "SetIconSkyOrientation", &UFGItemDescriptor::execSetIconSkyOrientation },
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGItemDescriptor_CanBeDiscarded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGItemDescriptor_eventCanBeDiscarded_Parms), &Z_Construct_UFunction_UFGItemDescriptor_CanBeDiscarded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGItemDescriptor_CanBeDiscarded_Statics::NewProp_inClass = { "inClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGItemDescriptor_eventCanBeDiscarded_Parms, inClass), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGItemDescriptor_CanBeDiscarded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGItemDescriptor_CanBeDiscarded_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGItemDescriptor_CanBeDiscarded_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGItemDescriptor_CanBeDiscarded_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Descriptor|Item" },
		{ "ModuleRelativePath", "Public/Resources/FGItemDescriptor.h" },
		{ "ToolTip", "Returns if this item can be discarded" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGItemDescriptor_CanBeDiscarded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGItemDescriptor, nullptr, "CanBeDiscarded", sizeof(FGItemDescriptor_eventCanBeDiscarded_Parms), Z_Construct_UFunction_UFGItemDescriptor_CanBeDiscarded_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGItemDescriptor_CanBeDiscarded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGItemDescriptor_CanBeDiscarded_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGItemDescriptor_CanBeDiscarded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGItemDescriptor_CanBeDiscarded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGItemDescriptor_CanBeDiscarded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGItemDescriptor_GetAbbreviatedDisplayName_Statics
	{
		struct FGItemDescriptor_eventGetAbbreviatedDisplayName_Parms
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
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UFGItemDescriptor_GetAbbreviatedDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGItemDescriptor_eventGetAbbreviatedDisplayName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGItemDescriptor_GetAbbreviatedDisplayName_Statics::NewProp_inClass = { "inClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGItemDescriptor_eventGetAbbreviatedDisplayName_Parms, inClass), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGItemDescriptor_GetAbbreviatedDisplayName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGItemDescriptor_GetAbbreviatedDisplayName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGItemDescriptor_GetAbbreviatedDisplayName_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGItemDescriptor_GetAbbreviatedDisplayName_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Descriptor|Item" },
		{ "ModuleRelativePath", "Public/Resources/FGItemDescriptor.h" },
		{ "ToolTip", "Used to get the abbreviated name of the item in blueprints" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGItemDescriptor_GetAbbreviatedDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGItemDescriptor, nullptr, "GetAbbreviatedDisplayName", sizeof(FGItemDescriptor_eventGetAbbreviatedDisplayName_Parms), Z_Construct_UFunction_UFGItemDescriptor_GetAbbreviatedDisplayName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGItemDescriptor_GetAbbreviatedDisplayName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGItemDescriptor_GetAbbreviatedDisplayName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGItemDescriptor_GetAbbreviatedDisplayName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGItemDescriptor_GetAbbreviatedDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGItemDescriptor_GetAbbreviatedDisplayName_Statics::FuncParams);
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGItemDescriptor_GetBigIcon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGItemDescriptor_eventGetBigIcon_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGItemDescriptor_GetBigIcon_Statics::NewProp_inClass = { "inClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGItemDescriptor_eventGetBigIcon_Parms, inClass), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGItemDescriptor_GetBigIcon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGItemDescriptor_GetBigIcon_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGItemDescriptor_GetBigIcon_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGItemDescriptor_GetBigIcon_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Descriptor|Item" },
		{ "ModuleRelativePath", "Public/Resources/FGItemDescriptor.h" },
		{ "ToolTip", "The big icon of the item" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGItemDescriptor_GetBigIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGItemDescriptor, nullptr, "GetBigIcon", sizeof(FGItemDescriptor_eventGetBigIcon_Parms), Z_Construct_UFunction_UFGItemDescriptor_GetBigIcon_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGItemDescriptor_GetBigIcon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGItemDescriptor_GetBigIcon_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGItemDescriptor_GetBigIcon_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGItemDescriptor_GetEnergyValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGItemDescriptor_eventGetEnergyValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGItemDescriptor_GetEnergyValue_Statics::NewProp_inClass = { "inClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGItemDescriptor_eventGetEnergyValue_Parms, inClass), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGItemDescriptor_GetEnergyValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGItemDescriptor_GetEnergyValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGItemDescriptor_GetEnergyValue_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGItemDescriptor_GetEnergyValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Descriptor|Item" },
		{ "ModuleRelativePath", "Public/Resources/FGItemDescriptor.h" },
		{ "ToolTip", "Energy value for this resource if used as fuel." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGItemDescriptor_GetEnergyValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGItemDescriptor, nullptr, "GetEnergyValue", sizeof(FGItemDescriptor_eventGetEnergyValue_Parms), Z_Construct_UFunction_UFGItemDescriptor_GetEnergyValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGItemDescriptor_GetEnergyValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGItemDescriptor_GetEnergyValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGItemDescriptor_GetEnergyValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGItemDescriptor_GetEnergyValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGItemDescriptor_GetEnergyValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGItemDescriptor_GetFluidColor_Statics
	{
		struct FGItemDescriptor_eventGetFluidColor_Parms
		{
			TSubclassOf<UFGItemDescriptor>  inClass;
			FColor ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGItemDescriptor_GetFluidColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGItemDescriptor_eventGetFluidColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGItemDescriptor_GetFluidColor_Statics::NewProp_inClass = { "inClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGItemDescriptor_eventGetFluidColor_Parms, inClass), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGItemDescriptor_GetFluidColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGItemDescriptor_GetFluidColor_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGItemDescriptor_GetFluidColor_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGItemDescriptor_GetFluidColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Descriptor|Fluid" },
		{ "ModuleRelativePath", "Public/Resources/FGItemDescriptor.h" },
		{ "ToolTip", "Returns the color of this is a fluid." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGItemDescriptor_GetFluidColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGItemDescriptor, nullptr, "GetFluidColor", sizeof(FGItemDescriptor_eventGetFluidColor_Parms), Z_Construct_UFunction_UFGItemDescriptor_GetFluidColor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGItemDescriptor_GetFluidColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGItemDescriptor_GetFluidColor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGItemDescriptor_GetFluidColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGItemDescriptor_GetFluidColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGItemDescriptor_GetFluidColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGItemDescriptor_GetFluidColorLinear_Statics
	{
		struct FGItemDescriptor_eventGetFluidColorLinear_Parms
		{
			TSubclassOf<UFGItemDescriptor>  inClass;
			FLinearColor ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGItemDescriptor_GetFluidColorLinear_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGItemDescriptor_eventGetFluidColorLinear_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGItemDescriptor_GetFluidColorLinear_Statics::NewProp_inClass = { "inClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGItemDescriptor_eventGetFluidColorLinear_Parms, inClass), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGItemDescriptor_GetFluidColorLinear_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGItemDescriptor_GetFluidColorLinear_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGItemDescriptor_GetFluidColorLinear_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGItemDescriptor_GetFluidColorLinear_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Descriptor|Fluid" },
		{ "ModuleRelativePath", "Public/Resources/FGItemDescriptor.h" },
		{ "ToolTip", "Returns the color of this fluid ( if it is one ) as type FLinearColor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGItemDescriptor_GetFluidColorLinear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGItemDescriptor, nullptr, "GetFluidColorLinear", sizeof(FGItemDescriptor_eventGetFluidColorLinear_Parms), Z_Construct_UFunction_UFGItemDescriptor_GetFluidColorLinear_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGItemDescriptor_GetFluidColorLinear_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGItemDescriptor_GetFluidColorLinear_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGItemDescriptor_GetFluidColorLinear_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGItemDescriptor_GetFluidColorLinear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGItemDescriptor_GetFluidColorLinear_Statics::FuncParams);
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
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFGItemDescriptor_GetForm_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGItemDescriptor_eventGetForm_Parms, ReturnValue), Z_Construct_UEnum_FactoryGame_EResourceForm, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFGItemDescriptor_GetForm_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGItemDescriptor_GetForm_Statics::NewProp_inClass = { "inClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGItemDescriptor_eventGetForm_Parms, inClass), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGItemDescriptor_GetForm_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGItemDescriptor_GetForm_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGItemDescriptor_GetForm_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGItemDescriptor_GetForm_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGItemDescriptor_GetForm_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Descriptor|Item" },
		{ "ModuleRelativePath", "Public/Resources/FGItemDescriptor.h" },
		{ "ToolTip", "The state of this resource." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGItemDescriptor_GetForm_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGItemDescriptor, nullptr, "GetForm", sizeof(FGItemDescriptor_eventGetForm_Parms), Z_Construct_UFunction_UFGItemDescriptor_GetForm_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGItemDescriptor_GetForm_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGItemDescriptor_GetForm_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGItemDescriptor_GetForm_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGItemDescriptor_GetForm()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGItemDescriptor_GetForm_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGItemDescriptor_GetIconCameraDistance_Statics
	{
		struct FGItemDescriptor_eventGetIconCameraDistance_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGItemDescriptor_GetIconCameraDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGItemDescriptor_eventGetIconCameraDistance_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGItemDescriptor_GetIconCameraDistance_Statics::NewProp_inClass = { "inClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGItemDescriptor_eventGetIconCameraDistance_Parms, inClass), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGItemDescriptor_GetIconCameraDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGItemDescriptor_GetIconCameraDistance_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGItemDescriptor_GetIconCameraDistance_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGItemDescriptor_GetIconCameraDistance_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryEditor|Descriptor|Icon" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/Resources/FGItemDescriptor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGItemDescriptor_GetIconCameraDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGItemDescriptor, nullptr, "GetIconCameraDistance", sizeof(FGItemDescriptor_eventGetIconCameraDistance_Parms), Z_Construct_UFunction_UFGItemDescriptor_GetIconCameraDistance_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGItemDescriptor_GetIconCameraDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGItemDescriptor_GetIconCameraDistance_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGItemDescriptor_GetIconCameraDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGItemDescriptor_GetIconCameraDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGItemDescriptor_GetIconCameraDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGItemDescriptor_GetIconCameraTransform_Statics
	{
		struct FGItemDescriptor_eventGetIconCameraTransform_Parms
		{
			TSubclassOf<UFGItemDescriptor>  inClass;
			FTransform ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGItemDescriptor_GetIconCameraTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGItemDescriptor_eventGetIconCameraTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGItemDescriptor_GetIconCameraTransform_Statics::NewProp_inClass = { "inClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGItemDescriptor_eventGetIconCameraTransform_Parms, inClass), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGItemDescriptor_GetIconCameraTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGItemDescriptor_GetIconCameraTransform_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGItemDescriptor_GetIconCameraTransform_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGItemDescriptor_GetIconCameraTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryEditor|Descriptor|Icon" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/Resources/FGItemDescriptor.h" },
		{ "ToolTip", "Getters and setters for icon capture properties, for editor tools use only but not wrapped with WiTH_EDITOR since it's needed in a tool with a scene which is technically a game.\n     The content of the functions are instead wrapped" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGItemDescriptor_GetIconCameraTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGItemDescriptor, nullptr, "GetIconCameraTransform", sizeof(FGItemDescriptor_eventGetIconCameraTransform_Parms), Z_Construct_UFunction_UFGItemDescriptor_GetIconCameraTransform_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGItemDescriptor_GetIconCameraTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGItemDescriptor_GetIconCameraTransform_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGItemDescriptor_GetIconCameraTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGItemDescriptor_GetIconCameraTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGItemDescriptor_GetIconCameraTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGItemDescriptor_GetIconFOV_Statics
	{
		struct FGItemDescriptor_eventGetIconFOV_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGItemDescriptor_GetIconFOV_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGItemDescriptor_eventGetIconFOV_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGItemDescriptor_GetIconFOV_Statics::NewProp_inClass = { "inClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGItemDescriptor_eventGetIconFOV_Parms, inClass), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGItemDescriptor_GetIconFOV_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGItemDescriptor_GetIconFOV_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGItemDescriptor_GetIconFOV_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGItemDescriptor_GetIconFOV_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryEditor|Descriptor|Icon" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/Resources/FGItemDescriptor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGItemDescriptor_GetIconFOV_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGItemDescriptor, nullptr, "GetIconFOV", sizeof(FGItemDescriptor_eventGetIconFOV_Parms), Z_Construct_UFunction_UFGItemDescriptor_GetIconFOV_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGItemDescriptor_GetIconFOV_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGItemDescriptor_GetIconFOV_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGItemDescriptor_GetIconFOV_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGItemDescriptor_GetIconFOV()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGItemDescriptor_GetIconFOV_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGItemDescriptor_GetIconObjectOrientation_Statics
	{
		struct FGItemDescriptor_eventGetIconObjectOrientation_Parms
		{
			TSubclassOf<UFGItemDescriptor>  inClass;
			FRotator ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGItemDescriptor_GetIconObjectOrientation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGItemDescriptor_eventGetIconObjectOrientation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGItemDescriptor_GetIconObjectOrientation_Statics::NewProp_inClass = { "inClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGItemDescriptor_eventGetIconObjectOrientation_Parms, inClass), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGItemDescriptor_GetIconObjectOrientation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGItemDescriptor_GetIconObjectOrientation_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGItemDescriptor_GetIconObjectOrientation_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGItemDescriptor_GetIconObjectOrientation_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryEditor|Descriptor|Icon" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/Resources/FGItemDescriptor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGItemDescriptor_GetIconObjectOrientation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGItemDescriptor, nullptr, "GetIconObjectOrientation", sizeof(FGItemDescriptor_eventGetIconObjectOrientation_Parms), Z_Construct_UFunction_UFGItemDescriptor_GetIconObjectOrientation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGItemDescriptor_GetIconObjectOrientation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGItemDescriptor_GetIconObjectOrientation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGItemDescriptor_GetIconObjectOrientation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGItemDescriptor_GetIconObjectOrientation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGItemDescriptor_GetIconObjectOrientation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGItemDescriptor_GetIconSkyOrientation_Statics
	{
		struct FGItemDescriptor_eventGetIconSkyOrientation_Parms
		{
			TSubclassOf<UFGItemDescriptor>  inClass;
			FRotator ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGItemDescriptor_GetIconSkyOrientation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGItemDescriptor_eventGetIconSkyOrientation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGItemDescriptor_GetIconSkyOrientation_Statics::NewProp_inClass = { "inClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGItemDescriptor_eventGetIconSkyOrientation_Parms, inClass), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGItemDescriptor_GetIconSkyOrientation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGItemDescriptor_GetIconSkyOrientation_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGItemDescriptor_GetIconSkyOrientation_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGItemDescriptor_GetIconSkyOrientation_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryEditor|Descriptor|Icon" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/Resources/FGItemDescriptor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGItemDescriptor_GetIconSkyOrientation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGItemDescriptor, nullptr, "GetIconSkyOrientation", sizeof(FGItemDescriptor_eventGetIconSkyOrientation_Parms), Z_Construct_UFunction_UFGItemDescriptor_GetIconSkyOrientation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGItemDescriptor_GetIconSkyOrientation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGItemDescriptor_GetIconSkyOrientation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGItemDescriptor_GetIconSkyOrientation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGItemDescriptor_GetIconSkyOrientation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGItemDescriptor_GetIconSkyOrientation_Statics::FuncParams);
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGItemDescriptor_GetIconView_Statics::NewProp_out_itemView = { "out_itemView", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGItemDescriptor_eventGetIconView_Parms, out_itemView), Z_Construct_UScriptStruct_FItemView, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGItemDescriptor_GetIconView_Statics::NewProp_inClass = { "inClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGItemDescriptor_eventGetIconView_Parms, inClass), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGItemDescriptor_GetIconView_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGItemDescriptor_GetIconView_Statics::NewProp_out_itemView,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGItemDescriptor_GetIconView_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGItemDescriptor_GetIconView_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Descriptor|Item" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/Resources/FGItemDescriptor.h" },
		{ "ToolTip", "Get the view to use when previewing this item" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGItemDescriptor_GetIconView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGItemDescriptor, nullptr, "GetIconView", sizeof(FGItemDescriptor_eventGetIconView_Parms), Z_Construct_UFunction_UFGItemDescriptor_GetIconView_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGItemDescriptor_GetIconView_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGItemDescriptor_GetIconView_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGItemDescriptor_GetIconView_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGItemDescriptor_GetIconView()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGItemDescriptor_GetIconView_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGItemDescriptor_GetItemCategory_Statics
	{
		struct FGItemDescriptor_eventGetItemCategory_Parms
		{
			TSubclassOf<UFGItemDescriptor>  inClass;
			TSubclassOf<UFGItemCategory>  ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGItemDescriptor_GetItemCategory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGItemDescriptor_eventGetItemCategory_Parms, ReturnValue), Z_Construct_UClass_UFGItemCategory_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGItemDescriptor_GetItemCategory_Statics::NewProp_inClass = { "inClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGItemDescriptor_eventGetItemCategory_Parms, inClass), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGItemDescriptor_GetItemCategory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGItemDescriptor_GetItemCategory_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGItemDescriptor_GetItemCategory_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGItemDescriptor_GetItemCategory_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Descriptor|Item" },
		{ "ModuleRelativePath", "Public/Resources/FGItemDescriptor.h" },
		{ "ToolTip", "Returns the item category" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGItemDescriptor_GetItemCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGItemDescriptor, nullptr, "GetItemCategory", sizeof(FGItemDescriptor_eventGetItemCategory_Parms), Z_Construct_UFunction_UFGItemDescriptor_GetItemCategory_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGItemDescriptor_GetItemCategory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGItemDescriptor_GetItemCategory_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGItemDescriptor_GetItemCategory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGItemDescriptor_GetItemCategory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGItemDescriptor_GetItemCategory_Statics::FuncParams);
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
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UFGItemDescriptor_GetItemDescription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGItemDescriptor_eventGetItemDescription_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGItemDescriptor_GetItemDescription_Statics::NewProp_inClass = { "inClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGItemDescriptor_eventGetItemDescription_Parms, inClass), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGItemDescriptor_GetItemDescription_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGItemDescriptor_GetItemDescription_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGItemDescriptor_GetItemDescription_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGItemDescriptor_GetItemDescription_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Descriptor|Item" },
		{ "ModuleRelativePath", "Public/Resources/FGItemDescriptor.h" },
		{ "ToolTip", "Used to get the resource description in blueprints" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGItemDescriptor_GetItemDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGItemDescriptor, nullptr, "GetItemDescription", sizeof(FGItemDescriptor_eventGetItemDescription_Parms), Z_Construct_UFunction_UFGItemDescriptor_GetItemDescription_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGItemDescriptor_GetItemDescription_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGItemDescriptor_GetItemDescription_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGItemDescriptor_GetItemDescription_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGItemDescriptor_GetItemIcon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGItemDescriptor_eventGetItemIcon_Parms, ReturnValue), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGItemDescriptor_GetItemIcon_Statics::NewProp_inClass = { "inClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGItemDescriptor_eventGetItemIcon_Parms, inClass), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGItemDescriptor_GetItemIcon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGItemDescriptor_GetItemIcon_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGItemDescriptor_GetItemIcon_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGItemDescriptor_GetItemIcon_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Descriptor|Item" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Don't use the brush anymore, please use GetSmallIcon or GetBigIcon" },
		{ "ModuleRelativePath", "Public/Resources/FGItemDescriptor.h" },
		{ "ToolTip", "The icon to be used in UI." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGItemDescriptor_GetItemIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGItemDescriptor, nullptr, "GetItemIcon", sizeof(FGItemDescriptor_eventGetItemIcon_Parms), Z_Construct_UFunction_UFGItemDescriptor_GetItemIcon_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGItemDescriptor_GetItemIcon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGItemDescriptor_GetItemIcon_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGItemDescriptor_GetItemIcon_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGItemDescriptor_GetItemMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGItemDescriptor_eventGetItemMesh_Parms, ReturnValue), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGItemDescriptor_GetItemMesh_Statics::NewProp_inClass = { "inClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGItemDescriptor_eventGetItemMesh_Parms, inClass), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGItemDescriptor_GetItemMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGItemDescriptor_GetItemMesh_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGItemDescriptor_GetItemMesh_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGItemDescriptor_GetItemMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Descriptor|Item" },
		{ "ModuleRelativePath", "Public/Resources/FGItemDescriptor.h" },
		{ "ToolTip", "The static mesh we want for representing the resource when they are in the production line.\n@return The items mesh; a default mesh if the item has no mesh specified, nullptr if inClass is nullptr." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGItemDescriptor_GetItemMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGItemDescriptor, nullptr, "GetItemMesh", sizeof(FGItemDescriptor_eventGetItemMesh_Parms), Z_Construct_UFunction_UFGItemDescriptor_GetItemMesh_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGItemDescriptor_GetItemMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGItemDescriptor_GetItemMesh_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGItemDescriptor_GetItemMesh_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UFGItemDescriptor_GetItemName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGItemDescriptor_eventGetItemName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGItemDescriptor_GetItemName_Statics::NewProp_inClass = { "inClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGItemDescriptor_eventGetItemName_Parms, inClass), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGItemDescriptor_GetItemName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGItemDescriptor_GetItemName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGItemDescriptor_GetItemName_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGItemDescriptor_GetItemName_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Descriptor|Item" },
		{ "ModuleRelativePath", "Public/Resources/FGItemDescriptor.h" },
		{ "ToolTip", "Used to get the resource name in blueprints" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGItemDescriptor_GetItemName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGItemDescriptor, nullptr, "GetItemName", sizeof(FGItemDescriptor_eventGetItemName_Parms), Z_Construct_UFunction_UFGItemDescriptor_GetItemName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGItemDescriptor_GetItemName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGItemDescriptor_GetItemName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGItemDescriptor_GetItemName_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGItemDescriptor_GetPreviewView_Statics::NewProp_out_previewView = { "out_previewView", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGItemDescriptor_eventGetPreviewView_Parms, out_previewView), Z_Construct_UScriptStruct_FItemView, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGItemDescriptor_GetPreviewView_Statics::NewProp_inClass = { "inClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGItemDescriptor_eventGetPreviewView_Parms, inClass), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGItemDescriptor_GetPreviewView_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGItemDescriptor_GetPreviewView_Statics::NewProp_out_previewView,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGItemDescriptor_GetPreviewView_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGItemDescriptor_GetPreviewView_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Descriptor|Item" },
		{ "ModuleRelativePath", "Public/Resources/FGItemDescriptor.h" },
		{ "ToolTip", "Get the view to use when previewing this item" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGItemDescriptor_GetPreviewView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGItemDescriptor, nullptr, "GetPreviewView", sizeof(FGItemDescriptor_eventGetPreviewView_Parms), Z_Construct_UFunction_UFGItemDescriptor_GetPreviewView_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGItemDescriptor_GetPreviewView_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGItemDescriptor_GetPreviewView_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGItemDescriptor_GetPreviewView_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGItemDescriptor_GetRadioactiveDecay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGItemDescriptor_eventGetRadioactiveDecay_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGItemDescriptor_GetRadioactiveDecay_Statics::NewProp_inClass = { "inClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGItemDescriptor_eventGetRadioactiveDecay_Parms, inClass), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGItemDescriptor_GetRadioactiveDecay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGItemDescriptor_GetRadioactiveDecay_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGItemDescriptor_GetRadioactiveDecay_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGItemDescriptor_GetRadioactiveDecay_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Descriptor|Item" },
		{ "ModuleRelativePath", "Public/Resources/FGItemDescriptor.h" },
		{ "ToolTip", "How much radiation this item gives out, 0 means it's not radioactive." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGItemDescriptor_GetRadioactiveDecay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGItemDescriptor, nullptr, "GetRadioactiveDecay", sizeof(FGItemDescriptor_eventGetRadioactiveDecay_Parms), Z_Construct_UFunction_UFGItemDescriptor_GetRadioactiveDecay_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGItemDescriptor_GetRadioactiveDecay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGItemDescriptor_GetRadioactiveDecay_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGItemDescriptor_GetRadioactiveDecay_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGItemDescriptor_GetSmallIcon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGItemDescriptor_eventGetSmallIcon_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGItemDescriptor_GetSmallIcon_Statics::NewProp_inClass = { "inClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGItemDescriptor_eventGetSmallIcon_Parms, inClass), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGItemDescriptor_GetSmallIcon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGItemDescriptor_GetSmallIcon_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGItemDescriptor_GetSmallIcon_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGItemDescriptor_GetSmallIcon_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Descriptor|Item" },
		{ "ModuleRelativePath", "Public/Resources/FGItemDescriptor.h" },
		{ "ToolTip", "The small icon of the item" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGItemDescriptor_GetSmallIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGItemDescriptor, nullptr, "GetSmallIcon", sizeof(FGItemDescriptor_eventGetSmallIcon_Parms), Z_Construct_UFunction_UFGItemDescriptor_GetSmallIcon_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGItemDescriptor_GetSmallIcon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGItemDescriptor_GetSmallIcon_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGItemDescriptor_GetSmallIcon_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGItemDescriptor_GetStackSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGItemDescriptor_eventGetStackSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGItemDescriptor_GetStackSize_Statics::NewProp_inClass = { "inClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGItemDescriptor_eventGetStackSize_Parms, inClass), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGItemDescriptor_GetStackSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGItemDescriptor_GetStackSize_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGItemDescriptor_GetStackSize_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGItemDescriptor_GetStackSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Descriptor|Item" },
		{ "ModuleRelativePath", "Public/Resources/FGItemDescriptor.h" },
		{ "ToolTip", "Returns the number of items of a certain type we can stack in one inventory slot" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGItemDescriptor_GetStackSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGItemDescriptor, nullptr, "GetStackSize", sizeof(FGItemDescriptor_eventGetStackSize_Parms), Z_Construct_UFunction_UFGItemDescriptor_GetStackSize_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGItemDescriptor_GetStackSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGItemDescriptor_GetStackSize_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGItemDescriptor_GetStackSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGItemDescriptor_GetStackSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGItemDescriptor_GetStackSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGItemDescriptor_GetStackSizeConverted_Statics
	{
		struct FGItemDescriptor_eventGetStackSizeConverted_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGItemDescriptor_GetStackSizeConverted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGItemDescriptor_eventGetStackSizeConverted_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGItemDescriptor_GetStackSizeConverted_Statics::NewProp_inClass = { "inClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGItemDescriptor_eventGetStackSizeConverted_Parms, inClass), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGItemDescriptor_GetStackSizeConverted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGItemDescriptor_GetStackSizeConverted_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGItemDescriptor_GetStackSizeConverted_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGItemDescriptor_GetStackSizeConverted_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Descriptor|Item" },
		{ "ModuleRelativePath", "Public/Resources/FGItemDescriptor.h" },
		{ "ToolTip", "Returns the number of items of a certain type we can stack in one inventory slot converted by its resource form to match a unit specification\neg. Liquid Descriptors will divided by 1000 to switch from liters to m^3" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGItemDescriptor_GetStackSizeConverted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGItemDescriptor, nullptr, "GetStackSizeConverted", sizeof(FGItemDescriptor_eventGetStackSizeConverted_Parms), Z_Construct_UFunction_UFGItemDescriptor_GetStackSizeConverted_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGItemDescriptor_GetStackSizeConverted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGItemDescriptor_GetStackSizeConverted_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGItemDescriptor_GetStackSizeConverted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGItemDescriptor_GetStackSizeConverted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGItemDescriptor_GetStackSizeConverted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGItemDescriptor_RememberPickUp_Statics
	{
		struct FGItemDescriptor_eventRememberPickUp_Parms
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
	void Z_Construct_UFunction_UFGItemDescriptor_RememberPickUp_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGItemDescriptor_eventRememberPickUp_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGItemDescriptor_RememberPickUp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGItemDescriptor_eventRememberPickUp_Parms), &Z_Construct_UFunction_UFGItemDescriptor_RememberPickUp_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGItemDescriptor_RememberPickUp_Statics::NewProp_inClass = { "inClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGItemDescriptor_eventRememberPickUp_Parms, inClass), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGItemDescriptor_RememberPickUp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGItemDescriptor_RememberPickUp_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGItemDescriptor_RememberPickUp_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGItemDescriptor_RememberPickUp_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Descriptor|Item" },
		{ "ModuleRelativePath", "Public/Resources/FGItemDescriptor.h" },
		{ "ToolTip", "Returns if we should store if this item ever has been picked up" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGItemDescriptor_RememberPickUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGItemDescriptor, nullptr, "RememberPickUp", sizeof(FGItemDescriptor_eventRememberPickUp_Parms), Z_Construct_UFunction_UFGItemDescriptor_RememberPickUp_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGItemDescriptor_RememberPickUp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGItemDescriptor_RememberPickUp_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGItemDescriptor_RememberPickUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGItemDescriptor_RememberPickUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGItemDescriptor_RememberPickUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGItemDescriptor_SetIconCameraDistance_Statics
	{
		struct FGItemDescriptor_eventSetIconCameraDistance_Parms
		{
			TSubclassOf<UFGItemDescriptor>  inClass;
			float cameraDistance;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_cameraDistance;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGItemDescriptor_SetIconCameraDistance_Statics::NewProp_cameraDistance = { "cameraDistance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGItemDescriptor_eventSetIconCameraDistance_Parms, cameraDistance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGItemDescriptor_SetIconCameraDistance_Statics::NewProp_inClass = { "inClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGItemDescriptor_eventSetIconCameraDistance_Parms, inClass), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGItemDescriptor_SetIconCameraDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGItemDescriptor_SetIconCameraDistance_Statics::NewProp_cameraDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGItemDescriptor_SetIconCameraDistance_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGItemDescriptor_SetIconCameraDistance_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryEditor|Descriptor|Icon" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/Resources/FGItemDescriptor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGItemDescriptor_SetIconCameraDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGItemDescriptor, nullptr, "SetIconCameraDistance", sizeof(FGItemDescriptor_eventSetIconCameraDistance_Parms), Z_Construct_UFunction_UFGItemDescriptor_SetIconCameraDistance_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGItemDescriptor_SetIconCameraDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGItemDescriptor_SetIconCameraDistance_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGItemDescriptor_SetIconCameraDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGItemDescriptor_SetIconCameraDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGItemDescriptor_SetIconCameraDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGItemDescriptor_SetIconCameraTransform_Statics
	{
		struct FGItemDescriptor_eventSetIconCameraTransform_Parms
		{
			TSubclassOf<UFGItemDescriptor>  inClass;
			FTransform cameraTransform;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_cameraTransform;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGItemDescriptor_SetIconCameraTransform_Statics::NewProp_cameraTransform = { "cameraTransform", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGItemDescriptor_eventSetIconCameraTransform_Parms, cameraTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGItemDescriptor_SetIconCameraTransform_Statics::NewProp_inClass = { "inClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGItemDescriptor_eventSetIconCameraTransform_Parms, inClass), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGItemDescriptor_SetIconCameraTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGItemDescriptor_SetIconCameraTransform_Statics::NewProp_cameraTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGItemDescriptor_SetIconCameraTransform_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGItemDescriptor_SetIconCameraTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryEditor|Descriptor|Icon" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/Resources/FGItemDescriptor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGItemDescriptor_SetIconCameraTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGItemDescriptor, nullptr, "SetIconCameraTransform", sizeof(FGItemDescriptor_eventSetIconCameraTransform_Parms), Z_Construct_UFunction_UFGItemDescriptor_SetIconCameraTransform_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGItemDescriptor_SetIconCameraTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGItemDescriptor_SetIconCameraTransform_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGItemDescriptor_SetIconCameraTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGItemDescriptor_SetIconCameraTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGItemDescriptor_SetIconCameraTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGItemDescriptor_SetIconFOV_Statics
	{
		struct FGItemDescriptor_eventSetIconFOV_Parms
		{
			TSubclassOf<UFGItemDescriptor>  inClass;
			float iconFOV;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_iconFOV;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGItemDescriptor_SetIconFOV_Statics::NewProp_iconFOV = { "iconFOV", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGItemDescriptor_eventSetIconFOV_Parms, iconFOV), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGItemDescriptor_SetIconFOV_Statics::NewProp_inClass = { "inClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGItemDescriptor_eventSetIconFOV_Parms, inClass), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGItemDescriptor_SetIconFOV_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGItemDescriptor_SetIconFOV_Statics::NewProp_iconFOV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGItemDescriptor_SetIconFOV_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGItemDescriptor_SetIconFOV_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryEditor|Descriptor|Icon" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/Resources/FGItemDescriptor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGItemDescriptor_SetIconFOV_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGItemDescriptor, nullptr, "SetIconFOV", sizeof(FGItemDescriptor_eventSetIconFOV_Parms), Z_Construct_UFunction_UFGItemDescriptor_SetIconFOV_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGItemDescriptor_SetIconFOV_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGItemDescriptor_SetIconFOV_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGItemDescriptor_SetIconFOV_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGItemDescriptor_SetIconFOV()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGItemDescriptor_SetIconFOV_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGItemDescriptor_SetIconObjectOrientation_Statics
	{
		struct FGItemDescriptor_eventSetIconObjectOrientation_Parms
		{
			TSubclassOf<UFGItemDescriptor>  inClass;
			FRotator objectOrientation;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_objectOrientation;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGItemDescriptor_SetIconObjectOrientation_Statics::NewProp_objectOrientation = { "objectOrientation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGItemDescriptor_eventSetIconObjectOrientation_Parms, objectOrientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGItemDescriptor_SetIconObjectOrientation_Statics::NewProp_inClass = { "inClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGItemDescriptor_eventSetIconObjectOrientation_Parms, inClass), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGItemDescriptor_SetIconObjectOrientation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGItemDescriptor_SetIconObjectOrientation_Statics::NewProp_objectOrientation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGItemDescriptor_SetIconObjectOrientation_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGItemDescriptor_SetIconObjectOrientation_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryEditor|Descriptor|Icon" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/Resources/FGItemDescriptor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGItemDescriptor_SetIconObjectOrientation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGItemDescriptor, nullptr, "SetIconObjectOrientation", sizeof(FGItemDescriptor_eventSetIconObjectOrientation_Parms), Z_Construct_UFunction_UFGItemDescriptor_SetIconObjectOrientation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGItemDescriptor_SetIconObjectOrientation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGItemDescriptor_SetIconObjectOrientation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGItemDescriptor_SetIconObjectOrientation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGItemDescriptor_SetIconObjectOrientation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGItemDescriptor_SetIconObjectOrientation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGItemDescriptor_SetIconSkyOrientation_Statics
	{
		struct FGItemDescriptor_eventSetIconSkyOrientation_Parms
		{
			TSubclassOf<UFGItemDescriptor>  inClass;
			FRotator skyOrientation;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_skyOrientation;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGItemDescriptor_SetIconSkyOrientation_Statics::NewProp_skyOrientation = { "skyOrientation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGItemDescriptor_eventSetIconSkyOrientation_Parms, skyOrientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGItemDescriptor_SetIconSkyOrientation_Statics::NewProp_inClass = { "inClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGItemDescriptor_eventSetIconSkyOrientation_Parms, inClass), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGItemDescriptor_SetIconSkyOrientation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGItemDescriptor_SetIconSkyOrientation_Statics::NewProp_skyOrientation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGItemDescriptor_SetIconSkyOrientation_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGItemDescriptor_SetIconSkyOrientation_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryEditor|Descriptor|Icon" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/Resources/FGItemDescriptor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGItemDescriptor_SetIconSkyOrientation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGItemDescriptor, nullptr, "SetIconSkyOrientation", sizeof(FGItemDescriptor_eventSetIconSkyOrientation_Parms), Z_Construct_UFunction_UFGItemDescriptor_SetIconSkyOrientation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGItemDescriptor_SetIconSkyOrientation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGItemDescriptor_SetIconSkyOrientation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGItemDescriptor_SetIconSkyOrientation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGItemDescriptor_SetIconSkyOrientation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGItemDescriptor_SetIconSkyOrientation_Statics::FuncParams);
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mResourceSinkPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mResourceSinkPoints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mFluidColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mFluidColor;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mIconSkyOrientation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mIconSkyOrientation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mIconCameraDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mIconCameraDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mIconObjectOrientation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mIconObjectOrientation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mIconFOV_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mIconFOV;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mIconCameraTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mIconCameraTransform;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mItemCategory_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mItemCategory;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mRememberPickUp_MetaData[];
#endif
		static void NewProp_mRememberPickUp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mRememberPickUp;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mAbbreviatedDisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_mAbbreviatedDisplayName;
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
		{ &Z_Construct_UFunction_UFGItemDescriptor_CanBeDiscarded, "CanBeDiscarded" }, // 3529950035
		{ &Z_Construct_UFunction_UFGItemDescriptor_GetAbbreviatedDisplayName, "GetAbbreviatedDisplayName" }, // 3082883631
		{ &Z_Construct_UFunction_UFGItemDescriptor_GetBigIcon, "GetBigIcon" }, // 1012280671
		{ &Z_Construct_UFunction_UFGItemDescriptor_GetEnergyValue, "GetEnergyValue" }, // 2089772057
		{ &Z_Construct_UFunction_UFGItemDescriptor_GetFluidColor, "GetFluidColor" }, // 1906759735
		{ &Z_Construct_UFunction_UFGItemDescriptor_GetFluidColorLinear, "GetFluidColorLinear" }, // 3056967700
		{ &Z_Construct_UFunction_UFGItemDescriptor_GetForm, "GetForm" }, // 3250843866
		{ &Z_Construct_UFunction_UFGItemDescriptor_GetIconCameraDistance, "GetIconCameraDistance" }, // 292057953
		{ &Z_Construct_UFunction_UFGItemDescriptor_GetIconCameraTransform, "GetIconCameraTransform" }, // 2953599537
		{ &Z_Construct_UFunction_UFGItemDescriptor_GetIconFOV, "GetIconFOV" }, // 1696704048
		{ &Z_Construct_UFunction_UFGItemDescriptor_GetIconObjectOrientation, "GetIconObjectOrientation" }, // 3376324239
		{ &Z_Construct_UFunction_UFGItemDescriptor_GetIconSkyOrientation, "GetIconSkyOrientation" }, // 1059292415
		{ &Z_Construct_UFunction_UFGItemDescriptor_GetIconView, "GetIconView" }, // 1586904406
		{ &Z_Construct_UFunction_UFGItemDescriptor_GetItemCategory, "GetItemCategory" }, // 2181251282
		{ &Z_Construct_UFunction_UFGItemDescriptor_GetItemDescription, "GetItemDescription" }, // 1087197188
		{ &Z_Construct_UFunction_UFGItemDescriptor_GetItemIcon, "GetItemIcon" }, // 699904017
		{ &Z_Construct_UFunction_UFGItemDescriptor_GetItemMesh, "GetItemMesh" }, // 2265483818
		{ &Z_Construct_UFunction_UFGItemDescriptor_GetItemName, "GetItemName" }, // 678091048
		{ &Z_Construct_UFunction_UFGItemDescriptor_GetPreviewView, "GetPreviewView" }, // 3568865798
		{ &Z_Construct_UFunction_UFGItemDescriptor_GetRadioactiveDecay, "GetRadioactiveDecay" }, // 1261059143
		{ &Z_Construct_UFunction_UFGItemDescriptor_GetSmallIcon, "GetSmallIcon" }, // 2531341629
		{ &Z_Construct_UFunction_UFGItemDescriptor_GetStackSize, "GetStackSize" }, // 532216439
		{ &Z_Construct_UFunction_UFGItemDescriptor_GetStackSizeConverted, "GetStackSizeConverted" }, // 3012118798
		{ &Z_Construct_UFunction_UFGItemDescriptor_RememberPickUp, "RememberPickUp" }, // 2773887726
		{ &Z_Construct_UFunction_UFGItemDescriptor_SetIconCameraDistance, "SetIconCameraDistance" }, // 1950333919
		{ &Z_Construct_UFunction_UFGItemDescriptor_SetIconCameraTransform, "SetIconCameraTransform" }, // 2425266582
		{ &Z_Construct_UFunction_UFGItemDescriptor_SetIconFOV, "SetIconFOV" }, // 825616363
		{ &Z_Construct_UFunction_UFGItemDescriptor_SetIconObjectOrientation, "SetIconObjectOrientation" }, // 3842384461
		{ &Z_Construct_UFunction_UFGItemDescriptor_SetIconSkyOrientation, "SetIconSkyOrientation" }, // 2404996009
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGItemDescriptor_Statics::Class_MetaDataParams[] = {
		{ "AutoJSON", "TRUE" },
		{ "BlueprintType", "true" },
		{ "HideCategories", "Icon Preview" },
		{ "IncludePath", "Resources/FGItemDescriptor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Resources/FGItemDescriptor.h" },
		{ "SerializeToFArchive", "" },
		{ "ToolTip", "Base for all descriptors in the game like resource, equipment etc." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mResourceSinkPoints_MetaData[] = {
		{ "ModuleRelativePath", "Public/Resources/FGItemDescriptor.h" },
		{ "ToolTip", "This is just a hook for the resource sink points so we can add them to the\nJSON wiki file even though they are in a separate datatable." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mResourceSinkPoints = { "mResourceSinkPoints", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGItemDescriptor, mResourceSinkPoints), METADATA_PARAMS(Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mResourceSinkPoints_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mResourceSinkPoints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mFluidColor_MetaData[] = {
		{ "Category", "Item|Fluid" },
		{ "ModuleRelativePath", "Public/Resources/FGItemDescriptor.h" },
		{ "ToolTip", "Color for this fluid, RGB is the color and A is the transparency of the fluid.\nForm must be liquid or gas for this to be useful." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mFluidColor = { "mFluidColor", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGItemDescriptor, mFluidColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mFluidColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mFluidColor_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mIconSkyOrientation_MetaData[] = {
		{ "Category", "Icon - EDITOR ONLY" },
		{ "ModuleRelativePath", "Public/Resources/FGItemDescriptor.h" },
		{ "NoAutoJSON", "TRUE" },
		{ "ToolTip", "The sky orientation used for icon capture" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mIconSkyOrientation = { "mIconSkyOrientation", nullptr, (EPropertyFlags)0x0010000800010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGItemDescriptor, mIconSkyOrientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mIconSkyOrientation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mIconSkyOrientation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mIconCameraDistance_MetaData[] = {
		{ "Category", "Icon - EDITOR ONLY" },
		{ "ModuleRelativePath", "Public/Resources/FGItemDescriptor.h" },
		{ "NoAutoJSON", "TRUE" },
		{ "ToolTip", "The spring arm distance used for icon capture" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mIconCameraDistance = { "mIconCameraDistance", nullptr, (EPropertyFlags)0x0010000800010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGItemDescriptor, mIconCameraDistance), METADATA_PARAMS(Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mIconCameraDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mIconCameraDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mIconObjectOrientation_MetaData[] = {
		{ "Category", "Icon - EDITOR ONLY" },
		{ "ModuleRelativePath", "Public/Resources/FGItemDescriptor.h" },
		{ "NoAutoJSON", "TRUE" },
		{ "ToolTip", "The object orientation used for icon capture" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mIconObjectOrientation = { "mIconObjectOrientation", nullptr, (EPropertyFlags)0x0010000800010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGItemDescriptor, mIconObjectOrientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mIconObjectOrientation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mIconObjectOrientation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mIconFOV_MetaData[] = {
		{ "Category", "Icon - EDITOR ONLY" },
		{ "ModuleRelativePath", "Public/Resources/FGItemDescriptor.h" },
		{ "NoAutoJSON", "TRUE" },
		{ "ToolTip", "The FOV used for icon capture" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mIconFOV = { "mIconFOV", nullptr, (EPropertyFlags)0x0010000800010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGItemDescriptor, mIconFOV), METADATA_PARAMS(Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mIconFOV_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mIconFOV_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mIconCameraTransform_MetaData[] = {
		{ "Category", "Icon - EDITOR ONLY" },
		{ "ModuleRelativePath", "Public/Resources/FGItemDescriptor.h" },
		{ "NoAutoJSON", "TRUE" },
		{ "ToolTip", "The transform used for icon capture" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mIconCameraTransform = { "mIconCameraTransform", nullptr, (EPropertyFlags)0x0010000800010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGItemDescriptor, mIconCameraTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mIconCameraTransform_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mIconCameraTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mIconView_MetaData[] = {
		{ "Category", "Icon" },
		{ "ModuleRelativePath", "Public/Resources/FGItemDescriptor.h" },
		{ "NoAutoJSON", "TRUE" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The distance to the object when rendering the icon" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mIconView = { "mIconView", nullptr, (EPropertyFlags)0x0010000800010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGItemDescriptor, mIconView), Z_Construct_UScriptStruct_FItemView, METADATA_PARAMS(Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mIconView_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mIconView_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mIconYaw_MetaData[] = {
		{ "Category", "Icon" },
		{ "ModuleRelativePath", "Public/Resources/FGItemDescriptor.h" },
		{ "NoAutoJSON", "TRUE" },
		{ "ToolTip", "The jaw of the object when rendering the icon" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mIconYaw = { "mIconYaw", nullptr, (EPropertyFlags)0x0010000800010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGItemDescriptor, mIconYaw), METADATA_PARAMS(Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mIconYaw_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mIconYaw_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mItemCategory_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/Resources/FGItemDescriptor.h" },
		{ "ToolTip", "The category for this item" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mItemCategory = { "mItemCategory", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGItemDescriptor, mItemCategory), Z_Construct_UClass_UFGItemCategory_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mItemCategory_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mItemCategory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mPreviewView_MetaData[] = {
		{ "Category", "Preview" },
		{ "ModuleRelativePath", "Public/Resources/FGItemDescriptor.h" },
		{ "NoAutoJSON", "TRUE" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The view in the build menu for this item" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mPreviewView = { "mPreviewView", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGItemDescriptor, mPreviewView), Z_Construct_UScriptStruct_FItemView, METADATA_PARAMS(Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mPreviewView_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mPreviewView_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mConveyorMesh_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/Resources/FGItemDescriptor.h" },
		{ "ToolTip", "The static mesh we want for representing the resource when they are in the production line." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mConveyorMesh = { "mConveyorMesh", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGItemDescriptor, mConveyorMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mConveyorMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mConveyorMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mPersistentBigIcon_MetaData[] = {
		{ "AddAutoJSON", "TRUE" },
		{ "Category", "UI" },
		{ "DisplayName", "Big Icon" },
		{ "ModuleRelativePath", "Public/Resources/FGItemDescriptor.h" },
		{ "ToolTip", "Big icon of the item, SHOULD only be loaded by demand, but right now persistent in memory" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mPersistentBigIcon = { "mPersistentBigIcon", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGItemDescriptor, mPersistentBigIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mPersistentBigIcon_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mPersistentBigIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mSmallIcon_MetaData[] = {
		{ "AddAutoJSON", "TRUE" },
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/Resources/FGItemDescriptor.h" },
		{ "ToolTip", "Small icon of the item, always in memory" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mSmallIcon = { "mSmallIcon", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGItemDescriptor, mSmallIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mSmallIcon_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mSmallIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mInventoryIcon_MetaData[] = {
		{ "ModuleRelativePath", "Public/Resources/FGItemDescriptor.h" },
		{ "NoAutoJSON", "TRUE" },
		{ "ToolTip", "Old brush used for UI, can't be DEPRECATED_ as it won't work in shipping builds during conversion then" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mInventoryIcon = { "mInventoryIcon", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGItemDescriptor, mInventoryIcon), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mInventoryIcon_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mInventoryIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mForm_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/Resources/FGItemDescriptor.h" },
		{ "ToolTip", "The state of this resource (cannot change during it's lifetime)." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mForm = { "mForm", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGItemDescriptor, mForm), Z_Construct_UEnum_FactoryGame_EResourceForm, METADATA_PARAMS(Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mForm_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mForm_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mForm_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mRadioactiveDecay_MetaData[] = {
		{ "Category", "Item" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Resources/FGItemDescriptor.h" },
		{ "ToolTip", "How much radiation this item gives out in the number of nucleus that decays per second.\n0 means no radiation and 1 is 10^15 (1 quadrillion) decays/s.\nGood values are in the range 0 to 1." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mRadioactiveDecay = { "mRadioactiveDecay", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGItemDescriptor, mRadioactiveDecay), METADATA_PARAMS(Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mRadioactiveDecay_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mRadioactiveDecay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mEnergyValue_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/Resources/FGItemDescriptor.h" },
		{ "ToolTip", "Energy value for this resource if used as fuel. In megawatt seconds (MWs), a.k.a. mega joule (MJ)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mEnergyValue = { "mEnergyValue", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGItemDescriptor, mEnergyValue), METADATA_PARAMS(Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mEnergyValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mEnergyValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mRememberPickUp_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/Resources/FGItemDescriptor.h" },
		{ "ToolTip", "Do we want to know if this item ever has been picked up" },
	};
#endif
	void Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mRememberPickUp_SetBit(void* Obj)
	{
		((UFGItemDescriptor*)Obj)->mRememberPickUp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mRememberPickUp = { "mRememberPickUp", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFGItemDescriptor), &Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mRememberPickUp_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mRememberPickUp_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mRememberPickUp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mCanBeDiscarded_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/Resources/FGItemDescriptor.h" },
		{ "ToolTip", "Indicates if this item can be thrown in the trash or not" },
	};
#endif
	void Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mCanBeDiscarded_SetBit(void* Obj)
	{
		((UFGItemDescriptor*)Obj)->mCanBeDiscarded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mCanBeDiscarded = { "mCanBeDiscarded", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFGItemDescriptor), &Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mCanBeDiscarded_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mCanBeDiscarded_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mCanBeDiscarded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mStackSize_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/Resources/FGItemDescriptor.h" },
		{ "ToolTip", "How many of this item can be in the same slot in an inventory" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mStackSize = { "mStackSize", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGItemDescriptor, mStackSize), Z_Construct_UEnum_FactoryGame_EStackSize, METADATA_PARAMS(Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mStackSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mStackSize_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mStackSize_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mAbbreviatedDisplayName_MetaData[] = {
		{ "Category", "Item" },
		{ "EditCondition", "mUseDisplayNameAndDescription" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Resources/FGItemDescriptor.h" },
		{ "ToolTip", "Abbreviated name of the item" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mAbbreviatedDisplayName = { "mAbbreviatedDisplayName", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGItemDescriptor, mAbbreviatedDisplayName), METADATA_PARAMS(Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mAbbreviatedDisplayName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mAbbreviatedDisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mDescription_MetaData[] = {
		{ "Category", "Item" },
		{ "EditCondition", "mUseDisplayNameAndDescription" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Resources/FGItemDescriptor.h" },
		{ "MultiLine", "TRUE" },
		{ "ToolTip", "Readable description of the item" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mDescription = { "mDescription", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGItemDescriptor, mDescription), METADATA_PARAMS(Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mDescription_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mDescription_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mDisplayName_MetaData[] = {
		{ "Category", "Item" },
		{ "EditCondition", "mUseDisplayNameAndDescription" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Resources/FGItemDescriptor.h" },
		{ "ToolTip", "Readable name of the item" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mDisplayName = { "mDisplayName", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGItemDescriptor, mDisplayName), METADATA_PARAMS(Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mDisplayName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mDisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mUseDisplayNameAndDescription_MetaData[] = {
		{ "Category", "FGItemDescriptor" },
		{ "ModuleRelativePath", "Public/Resources/FGItemDescriptor.h" },
		{ "ToolTip", "If mDisplayName and mDisplayName is overridden and specified elsewhere.\nThis is specified in the native constructor and is meant to be per class.\nE.g. vehicle descriptors get name and description from the vehicle class so the defaults are useless.\n        // MODDING EDIT" },
	};
#endif
	void Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mUseDisplayNameAndDescription_SetBit(void* Obj)
	{
		((UFGItemDescriptor*)Obj)->mUseDisplayNameAndDescription = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mUseDisplayNameAndDescription = { "mUseDisplayNameAndDescription", nullptr, (EPropertyFlags)0x0010000000012001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFGItemDescriptor), &Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mUseDisplayNameAndDescription_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mUseDisplayNameAndDescription_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mUseDisplayNameAndDescription_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGItemDescriptor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mResourceSinkPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mFluidColor,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mIconSkyOrientation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mIconCameraDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mIconObjectOrientation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mIconFOV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mIconCameraTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mIconView,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mIconYaw,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mItemCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mPreviewView,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mConveyorMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mPersistentBigIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mSmallIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mInventoryIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mForm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mForm_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mRadioactiveDecay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mEnergyValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mRememberPickUp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mCanBeDiscarded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mStackSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mStackSize_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mAbbreviatedDisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mDisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGItemDescriptor_Statics::NewProp_mUseDisplayNameAndDescription,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGItemDescriptor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGItemDescriptor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGItemDescriptor_Statics::ClassParams = {
		&UFGItemDescriptor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFGItemDescriptor_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UFGItemDescriptor_Statics::PropPointers),
		0,
		0x001000A1u,
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
	IMPLEMENT_CLASS(UFGItemDescriptor, 3913480771);
	template<> FACTORYGAME_API UClass* StaticClass<UFGItemDescriptor>()
	{
		return UFGItemDescriptor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGItemDescriptor(Z_Construct_UClass_UFGItemDescriptor, &UFGItemDescriptor::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGItemDescriptor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGItemDescriptor);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UFGItemDescriptor)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
