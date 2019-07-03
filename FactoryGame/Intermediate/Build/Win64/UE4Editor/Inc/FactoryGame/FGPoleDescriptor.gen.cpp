// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Resources/FGPoleDescriptor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGPoleDescriptor() {}
// Cross Module References
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FPoleHeightMesh();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGPoleDescriptor_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGPoleDescriptor();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGBuildingDescriptor();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGPoleDescriptor_GetHeightMeshes();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
class UScriptStruct* FPoleHeightMesh::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FPoleHeightMesh_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPoleHeightMesh, Z_Construct_UPackage__Script_FactoryGame(), TEXT("PoleHeightMesh"), sizeof(FPoleHeightMesh), Get_Z_Construct_UScriptStruct_FPoleHeightMesh_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPoleHeightMesh(FPoleHeightMesh::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("PoleHeightMesh"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFPoleHeightMesh
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFPoleHeightMesh()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PoleHeightMesh")),new UScriptStruct::TCppStructOps<FPoleHeightMesh>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFPoleHeightMesh;
	struct Z_Construct_UScriptStruct_FPoleHeightMesh_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Height;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoleHeightMesh_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Resources/FGPoleDescriptor.h" },
		{ "ToolTip", "Defines a pole height." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPoleHeightMesh_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPoleHeightMesh>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoleHeightMesh_Statics::NewProp_Height_MetaData[] = {
		{ "Category", "PoleHeightMesh" },
		{ "ModuleRelativePath", "Resources/FGPoleDescriptor.h" },
		{ "ToolTip", "Pole height for the current mesh." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPoleHeightMesh_Statics::NewProp_Height = { UE4CodeGen_Private::EPropertyClass::Float, "Height", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(FPoleHeightMesh, Height), METADATA_PARAMS(Z_Construct_UScriptStruct_FPoleHeightMesh_Statics::NewProp_Height_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPoleHeightMesh_Statics::NewProp_Height_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoleHeightMesh_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "PoleHeightMesh" },
		{ "ModuleRelativePath", "Resources/FGPoleDescriptor.h" },
		{ "ToolTip", "Mesh for the current pole height." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPoleHeightMesh_Statics::NewProp_Mesh = { UE4CodeGen_Private::EPropertyClass::Object, "Mesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(FPoleHeightMesh, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPoleHeightMesh_Statics::NewProp_Mesh_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPoleHeightMesh_Statics::NewProp_Mesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPoleHeightMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoleHeightMesh_Statics::NewProp_Height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoleHeightMesh_Statics::NewProp_Mesh,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPoleHeightMesh_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"PoleHeightMesh",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FPoleHeightMesh),
		alignof(FPoleHeightMesh),
		Z_Construct_UScriptStruct_FPoleHeightMesh_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FPoleHeightMesh_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPoleHeightMesh_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPoleHeightMesh_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPoleHeightMesh()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPoleHeightMesh_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PoleHeightMesh"), sizeof(FPoleHeightMesh), Get_Z_Construct_UScriptStruct_FPoleHeightMesh_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPoleHeightMesh_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPoleHeightMesh_CRC() { return 4273912187U; }
	void UFGPoleDescriptor::StaticRegisterNativesUFGPoleDescriptor()
	{
		UClass* Class = UFGPoleDescriptor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHeightMeshes", &UFGPoleDescriptor::execGetHeightMeshes },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGPoleDescriptor_GetHeightMeshes_Statics
	{
		struct FGPoleDescriptor_eventGetHeightMeshes_Parms
		{
			TSubclassOf<UFGPoleDescriptor>  inClass;
			TArray<FPoleHeightMesh> out_heightMeshes;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_out_heightMeshes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_out_heightMeshes_Inner;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFGPoleDescriptor_GetHeightMeshes_Statics::NewProp_out_heightMeshes = { UE4CodeGen_Private::EPropertyClass::Array, "out_heightMeshes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(FGPoleDescriptor_eventGetHeightMeshes_Parms, out_heightMeshes), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGPoleDescriptor_GetHeightMeshes_Statics::NewProp_out_heightMeshes_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "out_heightMeshes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FPoleHeightMesh, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGPoleDescriptor_GetHeightMeshes_Statics::NewProp_inClass = { UE4CodeGen_Private::EPropertyClass::Class, "inClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGPoleDescriptor_eventGetHeightMeshes_Parms, inClass), Z_Construct_UClass_UFGPoleDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGPoleDescriptor_GetHeightMeshes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGPoleDescriptor_GetHeightMeshes_Statics::NewProp_out_heightMeshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGPoleDescriptor_GetHeightMeshes_Statics::NewProp_out_heightMeshes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGPoleDescriptor_GetHeightMeshes_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGPoleDescriptor_GetHeightMeshes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Item|Building|Pole" },
		{ "ModuleRelativePath", "Resources/FGPoleDescriptor.h" },
		{ "ToolTip", "Get the heights for this pole." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGPoleDescriptor_GetHeightMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGPoleDescriptor, "GetHeightMeshes", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(FGPoleDescriptor_eventGetHeightMeshes_Parms), Z_Construct_UFunction_UFGPoleDescriptor_GetHeightMeshes_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGPoleDescriptor_GetHeightMeshes_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGPoleDescriptor_GetHeightMeshes_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGPoleDescriptor_GetHeightMeshes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGPoleDescriptor_GetHeightMeshes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGPoleDescriptor_GetHeightMeshes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGPoleDescriptor_NoRegister()
	{
		return UFGPoleDescriptor::StaticClass();
	}
	struct Z_Construct_UClass_UFGPoleDescriptor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mHeightMeshes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mHeightMeshes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mHeightMeshes_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGPoleDescriptor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFGBuildingDescriptor,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGPoleDescriptor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGPoleDescriptor_GetHeightMeshes, "GetHeightMeshes" }, // 3342554915
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGPoleDescriptor_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Icon Preview" },
		{ "IncludePath", "Resources/FGPoleDescriptor.h" },
		{ "ModuleRelativePath", "Resources/FGPoleDescriptor.h" },
		{ "ToolTip", "Descriptors for poles defined by a set of meshes." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGPoleDescriptor_Statics::NewProp_mHeightMeshes_MetaData[] = {
		{ "Category", "Pole" },
		{ "ModuleRelativePath", "Resources/FGPoleDescriptor.h" },
		{ "NoAutoJSON", "TRUE" },
		{ "ToolTip", "Array with meshes and their heights for the pole." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGPoleDescriptor_Statics::NewProp_mHeightMeshes = { UE4CodeGen_Private::EPropertyClass::Array, "mHeightMeshes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(UFGPoleDescriptor, mHeightMeshes), METADATA_PARAMS(Z_Construct_UClass_UFGPoleDescriptor_Statics::NewProp_mHeightMeshes_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGPoleDescriptor_Statics::NewProp_mHeightMeshes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGPoleDescriptor_Statics::NewProp_mHeightMeshes_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "mHeightMeshes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FPoleHeightMesh, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGPoleDescriptor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGPoleDescriptor_Statics::NewProp_mHeightMeshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGPoleDescriptor_Statics::NewProp_mHeightMeshes_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGPoleDescriptor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGPoleDescriptor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGPoleDescriptor_Statics::ClassParams = {
		&UFGPoleDescriptor::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UFGPoleDescriptor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UFGPoleDescriptor_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFGPoleDescriptor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGPoleDescriptor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGPoleDescriptor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGPoleDescriptor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGPoleDescriptor, 1513863143);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGPoleDescriptor(Z_Construct_UClass_UFGPoleDescriptor, &UFGPoleDescriptor::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGPoleDescriptor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGPoleDescriptor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
