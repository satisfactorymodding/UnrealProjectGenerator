// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/Buildables/FGBuildableConveyorLift.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGBuildableConveyorLift() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableConveyorLift_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableConveyorLift();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableConveyorBase();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableConveyorLift_OnRep_TopTransform();
	ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
// End Cross Module References
	void AFGBuildableConveyorLift::StaticRegisterNativesAFGBuildableConveyorLift()
	{
		UClass* Class = AFGBuildableConveyorLift::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_TopTransform", &AFGBuildableConveyorLift::execOnRep_TopTransform },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGBuildableConveyorLift_OnRep_TopTransform_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableConveyorLift_OnRep_TopTransform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableConveyorLift.h" },
		{ "ToolTip", "The transform of the top part.\nThe transform of the bottom part is the same as actor.\nIf the input and output is reversed so the input is at the top, the reverse flag is set.\nFrom this the mesh and connection transform is calculated." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableConveyorLift_OnRep_TopTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableConveyorLift, nullptr, "OnRep_TopTransform", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableConveyorLift_OnRep_TopTransform_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableConveyorLift_OnRep_TopTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableConveyorLift_OnRep_TopTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableConveyorLift_OnRep_TopTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGBuildableConveyorLift_NoRegister()
	{
		return AFGBuildableConveyorLift::StaticClass();
	}
	struct Z_Construct_UClass_AFGBuildableConveyorLift_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mItemMeshMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_mItemMeshMap;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_mItemMeshMap_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mItemMeshMap_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mIsReversed_MetaData[];
#endif
		static void NewProp_mIsReversed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mIsReversed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mTopTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mTopTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mShelfMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mShelfMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mJointMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mJointMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mBellowMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mBellowMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mTopMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mTopMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMidMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mMidMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mBottomMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mBottomMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMeshHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mMeshHeight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGBuildableConveyorLift_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGBuildableConveyorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGBuildableConveyorLift_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGBuildableConveyorLift_OnRep_TopTransform, "OnRep_TopTransform" }, // 1738774424
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableConveyorLift_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Buildables/FGBuildableConveyorLift.h" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableConveyorLift.h" },
		{ "ToolTip", "Base for conveyor lifts." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableConveyorLift_Statics::NewProp_mItemMeshMap_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableConveyorLift.h" },
		{ "NoAutoJson", "" },
		{ "ToolTip", "Meshes for items." },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_AFGBuildableConveyorLift_Statics::NewProp_mItemMeshMap = { "mItemMeshMap", nullptr, (EPropertyFlags)0x0040008000000008, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableConveyorLift, mItemMeshMap), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableConveyorLift_Statics::NewProp_mItemMeshMap_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableConveyorLift_Statics::NewProp_mItemMeshMap_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AFGBuildableConveyorLift_Statics::NewProp_mItemMeshMap_Key_KeyProp = { "mItemMeshMap_Key", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableConveyorLift_Statics::NewProp_mItemMeshMap_ValueProp = { "mItemMeshMap", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableConveyorLift_Statics::NewProp_mIsReversed_MetaData[] = {
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableConveyorLift.h" },
	};
#endif
	void Z_Construct_UClass_AFGBuildableConveyorLift_Statics::NewProp_mIsReversed_SetBit(void* Obj)
	{
		((AFGBuildableConveyorLift*)Obj)->mIsReversed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGBuildableConveyorLift_Statics::NewProp_mIsReversed = { "mIsReversed", nullptr, (EPropertyFlags)0x0040000001000020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFGBuildableConveyorLift), &Z_Construct_UClass_AFGBuildableConveyorLift_Statics::NewProp_mIsReversed_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableConveyorLift_Statics::NewProp_mIsReversed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableConveyorLift_Statics::NewProp_mIsReversed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableConveyorLift_Statics::NewProp_mTopTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableConveyorLift.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGBuildableConveyorLift_Statics::NewProp_mTopTransform = { "mTopTransform", "OnRep_TopTransform", (EPropertyFlags)0x0040000101000020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableConveyorLift, mTopTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableConveyorLift_Statics::NewProp_mTopTransform_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableConveyorLift_Statics::NewProp_mTopTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableConveyorLift_Statics::NewProp_mShelfMesh_MetaData[] = {
		{ "Category", "FGBuildableConveyorLift" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableConveyorLift.h" },
		{ "ToolTip", "Shelf placed under each item." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableConveyorLift_Statics::NewProp_mShelfMesh = { "mShelfMesh", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableConveyorLift, mShelfMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableConveyorLift_Statics::NewProp_mShelfMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableConveyorLift_Statics::NewProp_mShelfMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableConveyorLift_Statics::NewProp_mJointMesh_MetaData[] = {
		{ "Category", "FGBuildableConveyorLift" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableConveyorLift.h" },
		{ "ToolTip", "Mesh placed between two joined lift sections." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableConveyorLift_Statics::NewProp_mJointMesh = { "mJointMesh", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableConveyorLift, mJointMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableConveyorLift_Statics::NewProp_mJointMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableConveyorLift_Statics::NewProp_mJointMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableConveyorLift_Statics::NewProp_mBellowMesh_MetaData[] = {
		{ "Category", "FGBuildableConveyorLift" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableConveyorLift.h" },
		{ "ToolTip", "Mesh placed on the input/output as a bellow between a wall or factory." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableConveyorLift_Statics::NewProp_mBellowMesh = { "mBellowMesh", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableConveyorLift, mBellowMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableConveyorLift_Statics::NewProp_mBellowMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableConveyorLift_Statics::NewProp_mBellowMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableConveyorLift_Statics::NewProp_mTopMesh_MetaData[] = {
		{ "Category", "FGBuildableConveyorLift" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableConveyorLift.h" },
		{ "ToolTip", "Mesh at the top of the lift." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableConveyorLift_Statics::NewProp_mTopMesh = { "mTopMesh", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableConveyorLift, mTopMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableConveyorLift_Statics::NewProp_mTopMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableConveyorLift_Statics::NewProp_mTopMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableConveyorLift_Statics::NewProp_mMidMesh_MetaData[] = {
		{ "Category", "FGBuildableConveyorLift" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableConveyorLift.h" },
		{ "ToolTip", "Mesh repeated for the mid section." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableConveyorLift_Statics::NewProp_mMidMesh = { "mMidMesh", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableConveyorLift, mMidMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableConveyorLift_Statics::NewProp_mMidMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableConveyorLift_Statics::NewProp_mMidMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableConveyorLift_Statics::NewProp_mBottomMesh_MetaData[] = {
		{ "Category", "FGBuildableConveyorLift" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableConveyorLift.h" },
		{ "ToolTip", "Mesh at the bottom of the lift." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableConveyorLift_Statics::NewProp_mBottomMesh = { "mBottomMesh", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableConveyorLift, mBottomMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableConveyorLift_Statics::NewProp_mBottomMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableConveyorLift_Statics::NewProp_mBottomMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableConveyorLift_Statics::NewProp_mMeshHeight_MetaData[] = {
		{ "Category", "FGBuildableConveyorLift" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableConveyorLift.h" },
		{ "ToolTip", "What's the height of the meshes used." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGBuildableConveyorLift_Statics::NewProp_mMeshHeight = { "mMeshHeight", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableConveyorLift, mMeshHeight), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableConveyorLift_Statics::NewProp_mMeshHeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableConveyorLift_Statics::NewProp_mMeshHeight_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGBuildableConveyorLift_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableConveyorLift_Statics::NewProp_mItemMeshMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableConveyorLift_Statics::NewProp_mItemMeshMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableConveyorLift_Statics::NewProp_mItemMeshMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableConveyorLift_Statics::NewProp_mIsReversed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableConveyorLift_Statics::NewProp_mTopTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableConveyorLift_Statics::NewProp_mShelfMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableConveyorLift_Statics::NewProp_mJointMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableConveyorLift_Statics::NewProp_mBellowMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableConveyorLift_Statics::NewProp_mTopMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableConveyorLift_Statics::NewProp_mMidMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableConveyorLift_Statics::NewProp_mBottomMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableConveyorLift_Statics::NewProp_mMeshHeight,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGBuildableConveyorLift_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGBuildableConveyorLift>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGBuildableConveyorLift_Statics::ClassParams = {
		&AFGBuildableConveyorLift::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFGBuildableConveyorLift_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AFGBuildableConveyorLift_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFGBuildableConveyorLift_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableConveyorLift_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGBuildableConveyorLift()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGBuildableConveyorLift_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGBuildableConveyorLift, 3521966440);
	template<> FACTORYGAME_API UClass* StaticClass<AFGBuildableConveyorLift>()
	{
		return AFGBuildableConveyorLift::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGBuildableConveyorLift(Z_Construct_UClass_AFGBuildableConveyorLift, &AFGBuildableConveyorLift::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGBuildableConveyorLift"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGBuildableConveyorLift);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
