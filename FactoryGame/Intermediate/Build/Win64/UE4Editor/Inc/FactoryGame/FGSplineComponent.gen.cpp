// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGSplineComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGSplineComponent() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSplineComponent_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSplineComponent();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGSplineComponent_DrawDebugSpline();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGSplineComponent_SetOverrideMaterial();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGSplineComponent_UpdateSplineMeshes();
	ENGINE_API UClass* Z_Construct_UClass_UShapeComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
// End Cross Module References
	void UFGSplineComponent::StaticRegisterNativesUFGSplineComponent()
	{
		UClass* Class = UFGSplineComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DrawDebugSpline", &UFGSplineComponent::execDrawDebugSpline },
			{ "SetOverrideMaterial", &UFGSplineComponent::execSetOverrideMaterial },
			{ "UpdateSplineMeshes", &UFGSplineComponent::execUpdateSplineMeshes },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGSplineComponent_DrawDebugSpline_Statics
	{
		struct FGSplineComponent_eventDrawDebugSpline_Parms
		{
			FColor color1;
			FColor color2;
			float thickness;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_thickness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_color2_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_color2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_color1_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_color1;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGSplineComponent_DrawDebugSpline_Statics::NewProp_thickness = { UE4CodeGen_Private::EPropertyClass::Float, "thickness", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGSplineComponent_eventDrawDebugSpline_Parms, thickness), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGSplineComponent_DrawDebugSpline_Statics::NewProp_color2_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGSplineComponent_DrawDebugSpline_Statics::NewProp_color2 = { UE4CodeGen_Private::EPropertyClass::Struct, "color2", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(FGSplineComponent_eventDrawDebugSpline_Parms, color2), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UFunction_UFGSplineComponent_DrawDebugSpline_Statics::NewProp_color2_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGSplineComponent_DrawDebugSpline_Statics::NewProp_color2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGSplineComponent_DrawDebugSpline_Statics::NewProp_color1_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGSplineComponent_DrawDebugSpline_Statics::NewProp_color1 = { UE4CodeGen_Private::EPropertyClass::Struct, "color1", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(FGSplineComponent_eventDrawDebugSpline_Parms, color1), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UFunction_UFGSplineComponent_DrawDebugSpline_Statics::NewProp_color1_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGSplineComponent_DrawDebugSpline_Statics::NewProp_color1_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGSplineComponent_DrawDebugSpline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSplineComponent_DrawDebugSpline_Statics::NewProp_thickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSplineComponent_DrawDebugSpline_Statics::NewProp_color2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSplineComponent_DrawDebugSpline_Statics::NewProp_color1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGSplineComponent_DrawDebugSpline_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug" },
		{ "CPP_Default_thickness", "0.000000" },
		{ "ModuleRelativePath", "Public/FGSplineComponent.h" },
		{ "ToolTip", "Draw the spline using debug lines." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGSplineComponent_DrawDebugSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGSplineComponent, "DrawDebugSpline", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54C20401, sizeof(FGSplineComponent_eventDrawDebugSpline_Parms), Z_Construct_UFunction_UFGSplineComponent_DrawDebugSpline_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGSplineComponent_DrawDebugSpline_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGSplineComponent_DrawDebugSpline_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGSplineComponent_DrawDebugSpline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGSplineComponent_DrawDebugSpline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGSplineComponent_DrawDebugSpline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGSplineComponent_SetOverrideMaterial_Statics
	{
		struct FGSplineComponent_eventSetOverrideMaterial_Parms
		{
			UMaterialInterface* material;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_material;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGSplineComponent_SetOverrideMaterial_Statics::NewProp_material = { UE4CodeGen_Private::EPropertyClass::Object, "material", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGSplineComponent_eventSetOverrideMaterial_Parms, material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGSplineComponent_SetOverrideMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSplineComponent_SetOverrideMaterial_Statics::NewProp_material,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGSplineComponent_SetOverrideMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "ModuleRelativePath", "Public/FGSplineComponent.h" },
		{ "ToolTip", "Set the override material to use on the spline meshes, otherwise the default is used." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGSplineComponent_SetOverrideMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGSplineComponent, "SetOverrideMaterial", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGSplineComponent_eventSetOverrideMaterial_Parms), Z_Construct_UFunction_UFGSplineComponent_SetOverrideMaterial_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGSplineComponent_SetOverrideMaterial_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGSplineComponent_SetOverrideMaterial_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGSplineComponent_SetOverrideMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGSplineComponent_SetOverrideMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGSplineComponent_SetOverrideMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGSplineComponent_UpdateSplineMeshes_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGSplineComponent_UpdateSplineMeshes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "ModuleRelativePath", "Public/FGSplineComponent.h" },
		{ "ToolTip", "Update the spline meshes to fit on the spline." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGSplineComponent_UpdateSplineMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGSplineComponent, "UpdateSplineMeshes", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGSplineComponent_UpdateSplineMeshes_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGSplineComponent_UpdateSplineMeshes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGSplineComponent_UpdateSplineMeshes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGSplineComponent_UpdateSplineMeshes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGSplineComponent_NoRegister()
	{
		return UFGSplineComponent::StaticClass();
	}
	struct Z_Construct_UClass_UFGSplineComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSplineCollisionComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mSplineCollisionComponents;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mSplineCollisionComponents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCustomDepthSplineMeshComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mCustomDepthSplineMeshComponents;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mCustomDepthSplineMeshComponents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSplineMeshComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mSplineMeshComponents;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mSplineMeshComponents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mUseInstancing_MetaData[];
#endif
		static void NewProp_mUseInstancing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mUseInstancing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mOverrideMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mOverrideMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCollisionOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mCollisionOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCollisionExtent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mCollisionExtent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCollisionSpacing_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mCollisionSpacing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mGenerateCollisions_MetaData[];
#endif
		static void NewProp_mGenerateCollisions_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mGenerateCollisions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSplineMeshLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mSplineMeshLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSplineMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mSplineMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGSplineComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USplineComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGSplineComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGSplineComponent_DrawDebugSpline, "DrawDebugSpline" }, // 3388415218
		{ &Z_Construct_UFunction_UFGSplineComponent_SetOverrideMaterial, "SetOverrideMaterial" }, // 3970812513
		{ &Z_Construct_UFunction_UFGSplineComponent_UpdateSplineMeshes, "UpdateSplineMeshes" }, // 2864245501
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGSplineComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Utility" },
		{ "HideCategories", "Physics Lighting Rendering Mobile Trigger" },
		{ "IncludePath", "FGSplineComponent.h" },
		{ "ModuleRelativePath", "Public/FGSplineComponent.h" },
		{ "ToolTip", "A spline with spline meshes combined in the same component.\nWith this you can create a spline that automatically places meshes along itself.\n\n@note Only use the provided AddSplinePointFromData, RemoveSplinePointData and ClearSplinePointsData to add/remove points." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGSplineComponent_Statics::NewProp_mSplineCollisionComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FGSplineComponent.h" },
		{ "ToolTip", "The collisions that make up the spline." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGSplineComponent_Statics::NewProp_mSplineCollisionComponents = { UE4CodeGen_Private::EPropertyClass::Array, "mSplineCollisionComponents", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040008000000008, 1, nullptr, STRUCT_OFFSET(UFGSplineComponent, mSplineCollisionComponents), METADATA_PARAMS(Z_Construct_UClass_UFGSplineComponent_Statics::NewProp_mSplineCollisionComponents_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGSplineComponent_Statics::NewProp_mSplineCollisionComponents_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGSplineComponent_Statics::NewProp_mSplineCollisionComponents_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "mSplineCollisionComponents", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000080008, 1, nullptr, 0, Z_Construct_UClass_UShapeComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGSplineComponent_Statics::NewProp_mCustomDepthSplineMeshComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FGSplineComponent.h" },
		{ "ToolTip", "If we have enabled custom depth pass, then we store the custom depth spline meshes here" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGSplineComponent_Statics::NewProp_mCustomDepthSplineMeshComponents = { UE4CodeGen_Private::EPropertyClass::Array, "mCustomDepthSplineMeshComponents", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040008000000008, 1, nullptr, STRUCT_OFFSET(UFGSplineComponent, mCustomDepthSplineMeshComponents), METADATA_PARAMS(Z_Construct_UClass_UFGSplineComponent_Statics::NewProp_mCustomDepthSplineMeshComponents_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGSplineComponent_Statics::NewProp_mCustomDepthSplineMeshComponents_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGSplineComponent_Statics::NewProp_mCustomDepthSplineMeshComponents_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "mCustomDepthSplineMeshComponents", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000080008, 1, nullptr, 0, Z_Construct_UClass_USplineMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGSplineComponent_Statics::NewProp_mSplineMeshComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FGSplineComponent.h" },
		{ "ToolTip", "The meshes that make up the spline." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGSplineComponent_Statics::NewProp_mSplineMeshComponents = { UE4CodeGen_Private::EPropertyClass::Array, "mSplineMeshComponents", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040008000000008, 1, nullptr, STRUCT_OFFSET(UFGSplineComponent, mSplineMeshComponents), METADATA_PARAMS(Z_Construct_UClass_UFGSplineComponent_Statics::NewProp_mSplineMeshComponents_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGSplineComponent_Statics::NewProp_mSplineMeshComponents_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGSplineComponent_Statics::NewProp_mSplineMeshComponents_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "mSplineMeshComponents", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000080008, 1, nullptr, 0, Z_Construct_UClass_USplineMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGSplineComponent_Statics::NewProp_mUseInstancing_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGSplineComponent.h" },
		{ "ToolTip", "Whether to use instancing or not." },
	};
#endif
	void Z_Construct_UClass_UFGSplineComponent_Statics::NewProp_mUseInstancing_SetBit(void* Obj)
	{
		((UFGSplineComponent*)Obj)->mUseInstancing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGSplineComponent_Statics::NewProp_mUseInstancing = { UE4CodeGen_Private::EPropertyClass::Bool, "mUseInstancing", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UFGSplineComponent), &Z_Construct_UClass_UFGSplineComponent_Statics::NewProp_mUseInstancing_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGSplineComponent_Statics::NewProp_mUseInstancing_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGSplineComponent_Statics::NewProp_mUseInstancing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGSplineComponent_Statics::NewProp_mOverrideMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGSplineComponent.h" },
		{ "ToolTip", "The cached material, we cache this as the number of meshes grow/shrink as we drag the conveyor belt." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGSplineComponent_Statics::NewProp_mOverrideMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "mOverrideMaterial", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UFGSplineComponent, mOverrideMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGSplineComponent_Statics::NewProp_mOverrideMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGSplineComponent_Statics::NewProp_mOverrideMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGSplineComponent_Statics::NewProp_mCollisionOffset_MetaData[] = {
		{ "Category", "Collision|Generated" },
		{ "EditCondition", "mGenerateCollisions" },
		{ "ModuleRelativePath", "Public/FGSplineComponent.h" },
		{ "ToolTip", "Offset of the collision components. X is forward." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGSplineComponent_Statics::NewProp_mCollisionOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "mCollisionOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UFGSplineComponent, mCollisionOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UFGSplineComponent_Statics::NewProp_mCollisionOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGSplineComponent_Statics::NewProp_mCollisionOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGSplineComponent_Statics::NewProp_mCollisionExtent_MetaData[] = {
		{ "Category", "Collision|Generated" },
		{ "EditCondition", "mGenerateCollisions" },
		{ "ModuleRelativePath", "Public/FGSplineComponent.h" },
		{ "ToolTip", "Extent of the collision components. X is forward." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGSplineComponent_Statics::NewProp_mCollisionExtent = { UE4CodeGen_Private::EPropertyClass::Struct, "mCollisionExtent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UFGSplineComponent, mCollisionExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UFGSplineComponent_Statics::NewProp_mCollisionExtent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGSplineComponent_Statics::NewProp_mCollisionExtent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGSplineComponent_Statics::NewProp_mCollisionSpacing_MetaData[] = {
		{ "Category", "Collision|Generated" },
		{ "EditCondition", "mGenerateCollisions" },
		{ "ModuleRelativePath", "Public/FGSplineComponent.h" },
		{ "ToolTip", "Spacing between the collision components." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGSplineComponent_Statics::NewProp_mCollisionSpacing = { UE4CodeGen_Private::EPropertyClass::Float, "mCollisionSpacing", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UFGSplineComponent, mCollisionSpacing), METADATA_PARAMS(Z_Construct_UClass_UFGSplineComponent_Statics::NewProp_mCollisionSpacing_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGSplineComponent_Statics::NewProp_mCollisionSpacing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGSplineComponent_Statics::NewProp_mGenerateCollisions_MetaData[] = {
		{ "Category", "Collision|Generated" },
		{ "ModuleRelativePath", "Public/FGSplineComponent.h" },
		{ "ToolTip", "Spacing between the collision components." },
	};
#endif
	void Z_Construct_UClass_UFGSplineComponent_Statics::NewProp_mGenerateCollisions_SetBit(void* Obj)
	{
		((UFGSplineComponent*)Obj)->mGenerateCollisions = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGSplineComponent_Statics::NewProp_mGenerateCollisions = { UE4CodeGen_Private::EPropertyClass::Bool, "mGenerateCollisions", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UFGSplineComponent), &Z_Construct_UClass_UFGSplineComponent_Statics::NewProp_mGenerateCollisions_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGSplineComponent_Statics::NewProp_mGenerateCollisions_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGSplineComponent_Statics::NewProp_mGenerateCollisions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGSplineComponent_Statics::NewProp_mSplineMeshLength_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Public/FGSplineComponent.h" },
		{ "ToolTip", "The size of each spline mesh." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGSplineComponent_Statics::NewProp_mSplineMeshLength = { UE4CodeGen_Private::EPropertyClass::Float, "mSplineMeshLength", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UFGSplineComponent, mSplineMeshLength), METADATA_PARAMS(Z_Construct_UClass_UFGSplineComponent_Statics::NewProp_mSplineMeshLength_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGSplineComponent_Statics::NewProp_mSplineMeshLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGSplineComponent_Statics::NewProp_mSplineMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Public/FGSplineComponent.h" },
		{ "ToolTip", "The mesh to repeat on curved sections." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGSplineComponent_Statics::NewProp_mSplineMesh = { UE4CodeGen_Private::EPropertyClass::Object, "mSplineMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UFGSplineComponent, mSplineMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGSplineComponent_Statics::NewProp_mSplineMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGSplineComponent_Statics::NewProp_mSplineMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGSplineComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGSplineComponent_Statics::NewProp_mSplineCollisionComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGSplineComponent_Statics::NewProp_mSplineCollisionComponents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGSplineComponent_Statics::NewProp_mCustomDepthSplineMeshComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGSplineComponent_Statics::NewProp_mCustomDepthSplineMeshComponents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGSplineComponent_Statics::NewProp_mSplineMeshComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGSplineComponent_Statics::NewProp_mSplineMeshComponents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGSplineComponent_Statics::NewProp_mUseInstancing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGSplineComponent_Statics::NewProp_mOverrideMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGSplineComponent_Statics::NewProp_mCollisionOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGSplineComponent_Statics::NewProp_mCollisionExtent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGSplineComponent_Statics::NewProp_mCollisionSpacing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGSplineComponent_Statics::NewProp_mGenerateCollisions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGSplineComponent_Statics::NewProp_mSplineMeshLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGSplineComponent_Statics::NewProp_mSplineMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGSplineComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGSplineComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGSplineComponent_Statics::ClassParams = {
		&UFGSplineComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A4u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UFGSplineComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UFGSplineComponent_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFGSplineComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGSplineComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGSplineComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGSplineComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGSplineComponent, 2898071714);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGSplineComponent(Z_Construct_UClass_UFGSplineComponent, &UFGSplineComponent::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGSplineComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGSplineComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
