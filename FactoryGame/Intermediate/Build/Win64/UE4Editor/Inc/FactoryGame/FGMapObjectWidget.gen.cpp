// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/UI/FGMapObjectWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGMapObjectWidget() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGMapObjectWidget_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGMapObjectWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGMapObjectWidget_OnActorRepresentationFiltered();
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_ERepresentationType();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGMapObjectWidget_OnActorRepresentationUpdated();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGMapObjectWidget_OnObjectFiltered();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGMapObjectWidget_OnObjectMoved();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGMinimapCaptureActor_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGMapWidget_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGActorRepresentation_NoRegister();
// End Cross Module References
	static FName NAME_UFGMapObjectWidget_OnActorRepresentationUpdated = FName(TEXT("OnActorRepresentationUpdated"));
	void UFGMapObjectWidget::OnActorRepresentationUpdated()
	{
		ProcessEvent(FindFunctionChecked(NAME_UFGMapObjectWidget_OnActorRepresentationUpdated),NULL);
	}
	static FName NAME_UFGMapObjectWidget_OnObjectFiltered = FName(TEXT("OnObjectFiltered"));
	void UFGMapObjectWidget::OnObjectFiltered(bool visible)
	{
		FGMapObjectWidget_eventOnObjectFiltered_Parms Parms;
		Parms.visible=visible ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UFGMapObjectWidget_OnObjectFiltered),&Parms);
	}
	static FName NAME_UFGMapObjectWidget_OnObjectMoved = FName(TEXT("OnObjectMoved"));
	void UFGMapObjectWidget::OnObjectMoved(FVector2D normalizedLocation)
	{
		FGMapObjectWidget_eventOnObjectMoved_Parms Parms;
		Parms.normalizedLocation=normalizedLocation;
		ProcessEvent(FindFunctionChecked(NAME_UFGMapObjectWidget_OnObjectMoved),&Parms);
	}
	void UFGMapObjectWidget::StaticRegisterNativesUFGMapObjectWidget()
	{
		UClass* Class = UFGMapObjectWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnActorRepresentationFiltered", &UFGMapObjectWidget::execOnActorRepresentationFiltered },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGMapObjectWidget_OnActorRepresentationFiltered_Statics
	{
		struct FGMapObjectWidget_eventOnActorRepresentationFiltered_Parms
		{
			ERepresentationType representationType;
			bool visible;
		};
		static void NewProp_visible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_visible;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_representationType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_representationType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFGMapObjectWidget_OnActorRepresentationFiltered_Statics::NewProp_visible_SetBit(void* Obj)
	{
		((FGMapObjectWidget_eventOnActorRepresentationFiltered_Parms*)Obj)->visible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGMapObjectWidget_OnActorRepresentationFiltered_Statics::NewProp_visible = { UE4CodeGen_Private::EPropertyClass::Bool, "visible", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGMapObjectWidget_eventOnActorRepresentationFiltered_Parms), &Z_Construct_UFunction_UFGMapObjectWidget_OnActorRepresentationFiltered_Statics::NewProp_visible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFGMapObjectWidget_OnActorRepresentationFiltered_Statics::NewProp_representationType = { UE4CodeGen_Private::EPropertyClass::Enum, "representationType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGMapObjectWidget_eventOnActorRepresentationFiltered_Parms, representationType), Z_Construct_UEnum_FactoryGame_ERepresentationType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFGMapObjectWidget_OnActorRepresentationFiltered_Statics::NewProp_representationType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGMapObjectWidget_OnActorRepresentationFiltered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGMapObjectWidget_OnActorRepresentationFiltered_Statics::NewProp_visible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGMapObjectWidget_OnActorRepresentationFiltered_Statics::NewProp_representationType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGMapObjectWidget_OnActorRepresentationFiltered_Statics::NewProp_representationType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGMapObjectWidget_OnActorRepresentationFiltered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/FGMapObjectWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGMapObjectWidget_OnActorRepresentationFiltered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGMapObjectWidget, "OnActorRepresentationFiltered", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, sizeof(FGMapObjectWidget_eventOnActorRepresentationFiltered_Parms), Z_Construct_UFunction_UFGMapObjectWidget_OnActorRepresentationFiltered_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGMapObjectWidget_OnActorRepresentationFiltered_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGMapObjectWidget_OnActorRepresentationFiltered_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGMapObjectWidget_OnActorRepresentationFiltered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGMapObjectWidget_OnActorRepresentationFiltered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGMapObjectWidget_OnActorRepresentationFiltered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGMapObjectWidget_OnActorRepresentationUpdated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGMapObjectWidget_OnActorRepresentationUpdated_Statics::Function_MetaDataParams[] = {
		{ "Category", "Map" },
		{ "ModuleRelativePath", "UI/FGMapObjectWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGMapObjectWidget_OnActorRepresentationUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGMapObjectWidget, "OnActorRepresentationUpdated", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGMapObjectWidget_OnActorRepresentationUpdated_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGMapObjectWidget_OnActorRepresentationUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGMapObjectWidget_OnActorRepresentationUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGMapObjectWidget_OnActorRepresentationUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGMapObjectWidget_OnObjectFiltered_Statics
	{
		static void NewProp_visible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_visible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFGMapObjectWidget_OnObjectFiltered_Statics::NewProp_visible_SetBit(void* Obj)
	{
		((FGMapObjectWidget_eventOnObjectFiltered_Parms*)Obj)->visible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGMapObjectWidget_OnObjectFiltered_Statics::NewProp_visible = { UE4CodeGen_Private::EPropertyClass::Bool, "visible", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGMapObjectWidget_eventOnObjectFiltered_Parms), &Z_Construct_UFunction_UFGMapObjectWidget_OnObjectFiltered_Statics::NewProp_visible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGMapObjectWidget_OnObjectFiltered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGMapObjectWidget_OnObjectFiltered_Statics::NewProp_visible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGMapObjectWidget_OnObjectFiltered_Statics::Function_MetaDataParams[] = {
		{ "Category", "Map" },
		{ "ModuleRelativePath", "UI/FGMapObjectWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGMapObjectWidget_OnObjectFiltered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGMapObjectWidget, "OnObjectFiltered", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, sizeof(FGMapObjectWidget_eventOnObjectFiltered_Parms), Z_Construct_UFunction_UFGMapObjectWidget_OnObjectFiltered_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGMapObjectWidget_OnObjectFiltered_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGMapObjectWidget_OnObjectFiltered_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGMapObjectWidget_OnObjectFiltered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGMapObjectWidget_OnObjectFiltered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGMapObjectWidget_OnObjectFiltered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGMapObjectWidget_OnObjectMoved_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_normalizedLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGMapObjectWidget_OnObjectMoved_Statics::NewProp_normalizedLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "normalizedLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGMapObjectWidget_eventOnObjectMoved_Parms, normalizedLocation), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGMapObjectWidget_OnObjectMoved_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGMapObjectWidget_OnObjectMoved_Statics::NewProp_normalizedLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGMapObjectWidget_OnObjectMoved_Statics::Function_MetaDataParams[] = {
		{ "Category", "Map" },
		{ "ModuleRelativePath", "UI/FGMapObjectWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGMapObjectWidget_OnObjectMoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGMapObjectWidget, "OnObjectMoved", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08880800, sizeof(FGMapObjectWidget_eventOnObjectMoved_Parms), Z_Construct_UFunction_UFGMapObjectWidget_OnObjectMoved_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGMapObjectWidget_OnObjectMoved_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGMapObjectWidget_OnObjectMoved_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGMapObjectWidget_OnObjectMoved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGMapObjectWidget_OnObjectMoved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGMapObjectWidget_OnObjectMoved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGMapObjectWidget_NoRegister()
	{
		return UFGMapObjectWidget::StaticClass();
	}
	struct Z_Construct_UClass_UFGMapObjectWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMinimapCaptureActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mMinimapCaptureActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mFilteredVisibility_MetaData[];
#endif
		static void NewProp_mFilteredVisibility_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mFilteredVisibility;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMapWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mMapWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mActorRepresentation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mActorRepresentation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGMapObjectWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGMapObjectWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGMapObjectWidget_OnActorRepresentationFiltered, "OnActorRepresentationFiltered" }, // 2701070466
		{ &Z_Construct_UFunction_UFGMapObjectWidget_OnActorRepresentationUpdated, "OnActorRepresentationUpdated" }, // 1832521055
		{ &Z_Construct_UFunction_UFGMapObjectWidget_OnObjectFiltered, "OnObjectFiltered" }, // 2178073518
		{ &Z_Construct_UFunction_UFGMapObjectWidget_OnObjectMoved, "OnObjectMoved" }, // 4166069725
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGMapObjectWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/FGMapObjectWidget.h" },
		{ "ModuleRelativePath", "UI/FGMapObjectWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGMapObjectWidget_Statics::NewProp_mMinimapCaptureActor_MetaData[] = {
		{ "ModuleRelativePath", "UI/FGMapObjectWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGMapObjectWidget_Statics::NewProp_mMinimapCaptureActor = { UE4CodeGen_Private::EPropertyClass::Object, "mMinimapCaptureActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UFGMapObjectWidget, mMinimapCaptureActor), Z_Construct_UClass_AFGMinimapCaptureActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGMapObjectWidget_Statics::NewProp_mMinimapCaptureActor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGMapObjectWidget_Statics::NewProp_mMinimapCaptureActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGMapObjectWidget_Statics::NewProp_mFilteredVisibility_MetaData[] = {
		{ "Category", "Map" },
		{ "ModuleRelativePath", "UI/FGMapObjectWidget.h" },
		{ "ToolTip", "If this map object is visible by it's representation type on the map" },
	};
#endif
	void Z_Construct_UClass_UFGMapObjectWidget_Statics::NewProp_mFilteredVisibility_SetBit(void* Obj)
	{
		((UFGMapObjectWidget*)Obj)->mFilteredVisibility = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGMapObjectWidget_Statics::NewProp_mFilteredVisibility = { UE4CodeGen_Private::EPropertyClass::Bool, "mFilteredVisibility", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000014, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UFGMapObjectWidget), &Z_Construct_UClass_UFGMapObjectWidget_Statics::NewProp_mFilteredVisibility_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGMapObjectWidget_Statics::NewProp_mFilteredVisibility_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGMapObjectWidget_Statics::NewProp_mFilteredVisibility_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGMapObjectWidget_Statics::NewProp_mMapWidget_MetaData[] = {
		{ "Category", "Map" },
		{ "EditInline", "true" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "UI/FGMapObjectWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGMapObjectWidget_Statics::NewProp_mMapWidget = { UE4CodeGen_Private::EPropertyClass::Object, "mMapWidget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x002108000008001c, 1, nullptr, STRUCT_OFFSET(UFGMapObjectWidget, mMapWidget), Z_Construct_UClass_UFGMapWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGMapObjectWidget_Statics::NewProp_mMapWidget_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGMapObjectWidget_Statics::NewProp_mMapWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGMapObjectWidget_Statics::NewProp_mActorRepresentation_MetaData[] = {
		{ "Category", "Map" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "UI/FGMapObjectWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGMapObjectWidget_Statics::NewProp_mActorRepresentation = { UE4CodeGen_Private::EPropertyClass::Object, "mActorRepresentation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0021080000000014, 1, nullptr, STRUCT_OFFSET(UFGMapObjectWidget, mActorRepresentation), Z_Construct_UClass_UFGActorRepresentation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGMapObjectWidget_Statics::NewProp_mActorRepresentation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGMapObjectWidget_Statics::NewProp_mActorRepresentation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGMapObjectWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGMapObjectWidget_Statics::NewProp_mMinimapCaptureActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGMapObjectWidget_Statics::NewProp_mFilteredVisibility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGMapObjectWidget_Statics::NewProp_mMapWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGMapObjectWidget_Statics::NewProp_mActorRepresentation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGMapObjectWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGMapObjectWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGMapObjectWidget_Statics::ClassParams = {
		&UFGMapObjectWidget::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B010A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UFGMapObjectWidget_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UFGMapObjectWidget_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFGMapObjectWidget_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGMapObjectWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGMapObjectWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGMapObjectWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGMapObjectWidget, 278671942);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGMapObjectWidget(Z_Construct_UClass_UFGMapObjectWidget, &UFGMapObjectWidget::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGMapObjectWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGMapObjectWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
