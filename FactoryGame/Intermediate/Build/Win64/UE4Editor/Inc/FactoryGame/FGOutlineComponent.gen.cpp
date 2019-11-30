// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGOutlineComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGOutlineComponent() {}
// Cross Module References
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FCachedSplineMeshToMaterialObject();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineMeshComponent_NoRegister();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FCachedMaterialInterfaceArray();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FCachedMeshToMaterialObject();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGOutlineComponent_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGOutlineComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGOutlineComponent_GetOutlineColor();
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_EOutlineColor();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGOutlineComponent_HideOutline();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGOutlineComponent_IsOutlineVisible();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGOutlineComponent_ShowMultiActorOutline();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGOutlineComponent_ShowOutline();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGOutlineComponent_ShowProxyOutline();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGOutlineComponent_UpdateProxyOutlineLocationAndRotation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGOutlineComponent_UpdateProxyOutlineMesh();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSplineComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FCachedSplineMeshToMaterialObject::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FCachedSplineMeshToMaterialObject_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCachedSplineMeshToMaterialObject, Z_Construct_UPackage__Script_FactoryGame(), TEXT("CachedSplineMeshToMaterialObject"), sizeof(FCachedSplineMeshToMaterialObject), Get_Z_Construct_UScriptStruct_FCachedSplineMeshToMaterialObject_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCachedSplineMeshToMaterialObject(FCachedSplineMeshToMaterialObject::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("CachedSplineMeshToMaterialObject"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFCachedSplineMeshToMaterialObject
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFCachedSplineMeshToMaterialObject()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CachedSplineMeshToMaterialObject")),new UScriptStruct::TCppStructOps<FCachedSplineMeshToMaterialObject>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFCachedSplineMeshToMaterialObject;
	struct Z_Construct_UScriptStruct_FCachedSplineMeshToMaterialObject_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstancedMaterialInterfaces_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InstancedMaterialInterfaces;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstancedMaterialInterfaces_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedMaterialInterfaces_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_CachedMaterialInterfaces;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CachedMaterialInterfaces_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CachedMaterialInterfaces_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCachedSplineMeshToMaterialObject_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGOutlineComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCachedSplineMeshToMaterialObject_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCachedSplineMeshToMaterialObject>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCachedSplineMeshToMaterialObject_Statics::NewProp_InstancedMaterialInterfaces_MetaData[] = {
		{ "ModuleRelativePath", "FGOutlineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCachedSplineMeshToMaterialObject_Statics::NewProp_InstancedMaterialInterfaces = { UE4CodeGen_Private::EPropertyClass::Array, "InstancedMaterialInterfaces", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FCachedSplineMeshToMaterialObject, InstancedMaterialInterfaces), METADATA_PARAMS(Z_Construct_UScriptStruct_FCachedSplineMeshToMaterialObject_Statics::NewProp_InstancedMaterialInterfaces_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedSplineMeshToMaterialObject_Statics::NewProp_InstancedMaterialInterfaces_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCachedSplineMeshToMaterialObject_Statics::NewProp_InstancedMaterialInterfaces_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "InstancedMaterialInterfaces", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCachedSplineMeshToMaterialObject_Statics::NewProp_CachedMaterialInterfaces_MetaData[] = {
		{ "ModuleRelativePath", "FGOutlineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FCachedSplineMeshToMaterialObject_Statics::NewProp_CachedMaterialInterfaces = { UE4CodeGen_Private::EPropertyClass::Map, "CachedMaterialInterfaces", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FCachedSplineMeshToMaterialObject, CachedMaterialInterfaces), METADATA_PARAMS(Z_Construct_UScriptStruct_FCachedSplineMeshToMaterialObject_Statics::NewProp_CachedMaterialInterfaces_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedSplineMeshToMaterialObject_Statics::NewProp_CachedMaterialInterfaces_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCachedSplineMeshToMaterialObject_Statics::NewProp_CachedMaterialInterfaces_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Object, "CachedMaterialInterfaces_Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000080000, 1, nullptr, 0, Z_Construct_UClass_USplineMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCachedSplineMeshToMaterialObject_Statics::NewProp_CachedMaterialInterfaces_ValueProp = { UE4CodeGen_Private::EPropertyClass::Struct, "CachedMaterialInterfaces", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 1, Z_Construct_UScriptStruct_FCachedMaterialInterfaceArray, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCachedSplineMeshToMaterialObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCachedSplineMeshToMaterialObject_Statics::NewProp_InstancedMaterialInterfaces,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCachedSplineMeshToMaterialObject_Statics::NewProp_InstancedMaterialInterfaces_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCachedSplineMeshToMaterialObject_Statics::NewProp_CachedMaterialInterfaces,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCachedSplineMeshToMaterialObject_Statics::NewProp_CachedMaterialInterfaces_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCachedSplineMeshToMaterialObject_Statics::NewProp_CachedMaterialInterfaces_ValueProp,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCachedSplineMeshToMaterialObject_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"CachedSplineMeshToMaterialObject",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FCachedSplineMeshToMaterialObject),
		alignof(FCachedSplineMeshToMaterialObject),
		Z_Construct_UScriptStruct_FCachedSplineMeshToMaterialObject_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedSplineMeshToMaterialObject_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCachedSplineMeshToMaterialObject_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedSplineMeshToMaterialObject_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCachedSplineMeshToMaterialObject()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCachedSplineMeshToMaterialObject_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CachedSplineMeshToMaterialObject"), sizeof(FCachedSplineMeshToMaterialObject), Get_Z_Construct_UScriptStruct_FCachedSplineMeshToMaterialObject_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCachedSplineMeshToMaterialObject_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCachedSplineMeshToMaterialObject_CRC() { return 1821222020U; }
class UScriptStruct* FCachedMeshToMaterialObject::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FCachedMeshToMaterialObject_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCachedMeshToMaterialObject, Z_Construct_UPackage__Script_FactoryGame(), TEXT("CachedMeshToMaterialObject"), sizeof(FCachedMeshToMaterialObject), Get_Z_Construct_UScriptStruct_FCachedMeshToMaterialObject_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCachedMeshToMaterialObject(FCachedMeshToMaterialObject::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("CachedMeshToMaterialObject"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFCachedMeshToMaterialObject
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFCachedMeshToMaterialObject()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CachedMeshToMaterialObject")),new UScriptStruct::TCppStructOps<FCachedMeshToMaterialObject>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFCachedMeshToMaterialObject;
	struct Z_Construct_UScriptStruct_FCachedMeshToMaterialObject_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedMaterialInterfaces_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_CachedMaterialInterfaces;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CachedMaterialInterfaces_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CachedMaterialInterfaces_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCachedMeshToMaterialObject_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGOutlineComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCachedMeshToMaterialObject_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCachedMeshToMaterialObject>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCachedMeshToMaterialObject_Statics::NewProp_CachedMaterialInterfaces_MetaData[] = {
		{ "ModuleRelativePath", "FGOutlineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FCachedMeshToMaterialObject_Statics::NewProp_CachedMaterialInterfaces = { UE4CodeGen_Private::EPropertyClass::Map, "CachedMaterialInterfaces", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FCachedMeshToMaterialObject, CachedMaterialInterfaces), METADATA_PARAMS(Z_Construct_UScriptStruct_FCachedMeshToMaterialObject_Statics::NewProp_CachedMaterialInterfaces_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedMeshToMaterialObject_Statics::NewProp_CachedMaterialInterfaces_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCachedMeshToMaterialObject_Statics::NewProp_CachedMaterialInterfaces_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Object, "CachedMaterialInterfaces_Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000080000, 1, nullptr, 0, Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCachedMeshToMaterialObject_Statics::NewProp_CachedMaterialInterfaces_ValueProp = { UE4CodeGen_Private::EPropertyClass::Struct, "CachedMaterialInterfaces", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 1, Z_Construct_UScriptStruct_FCachedMaterialInterfaceArray, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCachedMeshToMaterialObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCachedMeshToMaterialObject_Statics::NewProp_CachedMaterialInterfaces,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCachedMeshToMaterialObject_Statics::NewProp_CachedMaterialInterfaces_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCachedMeshToMaterialObject_Statics::NewProp_CachedMaterialInterfaces_ValueProp,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCachedMeshToMaterialObject_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"CachedMeshToMaterialObject",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FCachedMeshToMaterialObject),
		alignof(FCachedMeshToMaterialObject),
		Z_Construct_UScriptStruct_FCachedMeshToMaterialObject_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedMeshToMaterialObject_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCachedMeshToMaterialObject_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedMeshToMaterialObject_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCachedMeshToMaterialObject()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCachedMeshToMaterialObject_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CachedMeshToMaterialObject"), sizeof(FCachedMeshToMaterialObject), Get_Z_Construct_UScriptStruct_FCachedMeshToMaterialObject_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCachedMeshToMaterialObject_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCachedMeshToMaterialObject_CRC() { return 4005304080U; }
class UScriptStruct* FCachedMaterialInterfaceArray::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FCachedMaterialInterfaceArray_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCachedMaterialInterfaceArray, Z_Construct_UPackage__Script_FactoryGame(), TEXT("CachedMaterialInterfaceArray"), sizeof(FCachedMaterialInterfaceArray), Get_Z_Construct_UScriptStruct_FCachedMaterialInterfaceArray_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCachedMaterialInterfaceArray(FCachedMaterialInterfaceArray::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("CachedMaterialInterfaceArray"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFCachedMaterialInterfaceArray
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFCachedMaterialInterfaceArray()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CachedMaterialInterfaceArray")),new UScriptStruct::TCppStructOps<FCachedMaterialInterfaceArray>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFCachedMaterialInterfaceArray;
	struct Z_Construct_UScriptStruct_FCachedMaterialInterfaceArray_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialInterfaces_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MaterialInterfaces;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaterialInterfaces_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCachedMaterialInterfaceArray_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGOutlineComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCachedMaterialInterfaceArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCachedMaterialInterfaceArray>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCachedMaterialInterfaceArray_Statics::NewProp_MaterialInterfaces_MetaData[] = {
		{ "ModuleRelativePath", "FGOutlineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCachedMaterialInterfaceArray_Statics::NewProp_MaterialInterfaces = { UE4CodeGen_Private::EPropertyClass::Array, "MaterialInterfaces", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FCachedMaterialInterfaceArray, MaterialInterfaces), METADATA_PARAMS(Z_Construct_UScriptStruct_FCachedMaterialInterfaceArray_Statics::NewProp_MaterialInterfaces_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedMaterialInterfaceArray_Statics::NewProp_MaterialInterfaces_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCachedMaterialInterfaceArray_Statics::NewProp_MaterialInterfaces_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "MaterialInterfaces", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCachedMaterialInterfaceArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCachedMaterialInterfaceArray_Statics::NewProp_MaterialInterfaces,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCachedMaterialInterfaceArray_Statics::NewProp_MaterialInterfaces_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCachedMaterialInterfaceArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"CachedMaterialInterfaceArray",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FCachedMaterialInterfaceArray),
		alignof(FCachedMaterialInterfaceArray),
		Z_Construct_UScriptStruct_FCachedMaterialInterfaceArray_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedMaterialInterfaceArray_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCachedMaterialInterfaceArray_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedMaterialInterfaceArray_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCachedMaterialInterfaceArray()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCachedMaterialInterfaceArray_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CachedMaterialInterfaceArray"), sizeof(FCachedMaterialInterfaceArray), Get_Z_Construct_UScriptStruct_FCachedMaterialInterfaceArray_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCachedMaterialInterfaceArray_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCachedMaterialInterfaceArray_CRC() { return 785923473U; }
	void UFGOutlineComponent::StaticRegisterNativesUFGOutlineComponent()
	{
		UClass* Class = UFGOutlineComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetOutlineColor", &UFGOutlineComponent::execGetOutlineColor },
			{ "HideOutline", &UFGOutlineComponent::execHideOutline },
			{ "IsOutlineVisible", &UFGOutlineComponent::execIsOutlineVisible },
			{ "ShowMultiActorOutline", &UFGOutlineComponent::execShowMultiActorOutline },
			{ "ShowOutline", &UFGOutlineComponent::execShowOutline },
			{ "ShowProxyOutline", &UFGOutlineComponent::execShowProxyOutline },
			{ "UpdateProxyOutlineLocationAndRotation", &UFGOutlineComponent::execUpdateProxyOutlineLocationAndRotation },
			{ "UpdateProxyOutlineMesh", &UFGOutlineComponent::execUpdateProxyOutlineMesh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGOutlineComponent_GetOutlineColor_Statics
	{
		struct FGOutlineComponent_eventGetOutlineColor_Parms
		{
			EOutlineColor ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFGOutlineComponent_GetOutlineColor_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Enum, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGOutlineComponent_eventGetOutlineColor_Parms, ReturnValue), Z_Construct_UEnum_FactoryGame_EOutlineColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFGOutlineComponent_GetOutlineColor_Statics::NewProp_ReturnValue_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGOutlineComponent_GetOutlineColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGOutlineComponent_GetOutlineColor_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGOutlineComponent_GetOutlineColor_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGOutlineComponent_GetOutlineColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Outline" },
		{ "ModuleRelativePath", "FGOutlineComponent.h" },
		{ "ToolTip", "Gets the current outline color. If the outline isn't visible the color will be OC_NONE." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGOutlineComponent_GetOutlineColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGOutlineComponent, "GetOutlineColor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGOutlineComponent_eventGetOutlineColor_Parms), Z_Construct_UFunction_UFGOutlineComponent_GetOutlineColor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGOutlineComponent_GetOutlineColor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGOutlineComponent_GetOutlineColor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGOutlineComponent_GetOutlineColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGOutlineComponent_GetOutlineColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGOutlineComponent_GetOutlineColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGOutlineComponent_HideOutline_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGOutlineComponent_HideOutline_Statics::Function_MetaDataParams[] = {
		{ "Category", "Outline" },
		{ "ModuleRelativePath", "FGOutlineComponent.h" },
		{ "ToolTip", "Disables highlight if it is visible." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGOutlineComponent_HideOutline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGOutlineComponent, "HideOutline", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGOutlineComponent_HideOutline_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGOutlineComponent_HideOutline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGOutlineComponent_HideOutline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGOutlineComponent_HideOutline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGOutlineComponent_IsOutlineVisible_Statics
	{
		struct FGOutlineComponent_eventIsOutlineVisible_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFGOutlineComponent_IsOutlineVisible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGOutlineComponent_eventIsOutlineVisible_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGOutlineComponent_IsOutlineVisible_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGOutlineComponent_eventIsOutlineVisible_Parms), &Z_Construct_UFunction_UFGOutlineComponent_IsOutlineVisible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGOutlineComponent_IsOutlineVisible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGOutlineComponent_IsOutlineVisible_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGOutlineComponent_IsOutlineVisible_Statics::Function_MetaDataParams[] = {
		{ "Category", "Outline" },
		{ "ModuleRelativePath", "FGOutlineComponent.h" },
		{ "ToolTip", "Checks if any outline is visible." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGOutlineComponent_IsOutlineVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGOutlineComponent, "IsOutlineVisible", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGOutlineComponent_eventIsOutlineVisible_Parms), Z_Construct_UFunction_UFGOutlineComponent_IsOutlineVisible_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGOutlineComponent_IsOutlineVisible_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGOutlineComponent_IsOutlineVisible_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGOutlineComponent_IsOutlineVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGOutlineComponent_IsOutlineVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGOutlineComponent_IsOutlineVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGOutlineComponent_ShowMultiActorOutline_Statics
	{
		struct FGOutlineComponent_eventShowMultiActorOutline_Parms
		{
			TArray<AActor*> actorsToOutline;
			EOutlineColor color;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_color;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_color_Underlying;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_actorsToOutline;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actorsToOutline_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFGOutlineComponent_ShowMultiActorOutline_Statics::NewProp_color = { UE4CodeGen_Private::EPropertyClass::Enum, "color", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGOutlineComponent_eventShowMultiActorOutline_Parms, color), Z_Construct_UEnum_FactoryGame_EOutlineColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFGOutlineComponent_ShowMultiActorOutline_Statics::NewProp_color_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFGOutlineComponent_ShowMultiActorOutline_Statics::NewProp_actorsToOutline = { UE4CodeGen_Private::EPropertyClass::Array, "actorsToOutline", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGOutlineComponent_eventShowMultiActorOutline_Parms, actorsToOutline), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGOutlineComponent_ShowMultiActorOutline_Statics::NewProp_actorsToOutline_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "actorsToOutline", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGOutlineComponent_ShowMultiActorOutline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGOutlineComponent_ShowMultiActorOutline_Statics::NewProp_color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGOutlineComponent_ShowMultiActorOutline_Statics::NewProp_color_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGOutlineComponent_ShowMultiActorOutline_Statics::NewProp_actorsToOutline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGOutlineComponent_ShowMultiActorOutline_Statics::NewProp_actorsToOutline_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGOutlineComponent_ShowMultiActorOutline_Statics::Function_MetaDataParams[] = {
		{ "Category", "Outline" },
		{ "ModuleRelativePath", "FGOutlineComponent.h" },
		{ "ToolTip", "Shows outline for multiple actors at the same time." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGOutlineComponent_ShowMultiActorOutline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGOutlineComponent, "ShowMultiActorOutline", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGOutlineComponent_eventShowMultiActorOutline_Parms), Z_Construct_UFunction_UFGOutlineComponent_ShowMultiActorOutline_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGOutlineComponent_ShowMultiActorOutline_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGOutlineComponent_ShowMultiActorOutline_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGOutlineComponent_ShowMultiActorOutline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGOutlineComponent_ShowMultiActorOutline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGOutlineComponent_ShowMultiActorOutline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGOutlineComponent_ShowOutline_Statics
	{
		struct FGOutlineComponent_eventShowOutline_Parms
		{
			AActor* actorToOutline;
			EOutlineColor color;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_color;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_color_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actorToOutline;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFGOutlineComponent_ShowOutline_Statics::NewProp_color = { UE4CodeGen_Private::EPropertyClass::Enum, "color", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGOutlineComponent_eventShowOutline_Parms, color), Z_Construct_UEnum_FactoryGame_EOutlineColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFGOutlineComponent_ShowOutline_Statics::NewProp_color_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGOutlineComponent_ShowOutline_Statics::NewProp_actorToOutline = { UE4CodeGen_Private::EPropertyClass::Object, "actorToOutline", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGOutlineComponent_eventShowOutline_Parms, actorToOutline), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGOutlineComponent_ShowOutline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGOutlineComponent_ShowOutline_Statics::NewProp_color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGOutlineComponent_ShowOutline_Statics::NewProp_color_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGOutlineComponent_ShowOutline_Statics::NewProp_actorToOutline,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGOutlineComponent_ShowOutline_Statics::Function_MetaDataParams[] = {
		{ "Category", "Outline" },
		{ "ModuleRelativePath", "FGOutlineComponent.h" },
		{ "ToolTip", "Shows outline using actor's mesh components. Default way to show outline." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGOutlineComponent_ShowOutline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGOutlineComponent, "ShowOutline", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGOutlineComponent_eventShowOutline_Parms), Z_Construct_UFunction_UFGOutlineComponent_ShowOutline_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGOutlineComponent_ShowOutline_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGOutlineComponent_ShowOutline_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGOutlineComponent_ShowOutline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGOutlineComponent_ShowOutline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGOutlineComponent_ShowOutline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGOutlineComponent_ShowProxyOutline_Statics
	{
		struct FGOutlineComponent_eventShowProxyOutline_Parms
		{
			UStaticMesh* outlineMesh;
			FTransform transform;
			EOutlineColor color;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_color;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_color_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_transform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_transform;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_outlineMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFGOutlineComponent_ShowProxyOutline_Statics::NewProp_color = { UE4CodeGen_Private::EPropertyClass::Enum, "color", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGOutlineComponent_eventShowProxyOutline_Parms, color), Z_Construct_UEnum_FactoryGame_EOutlineColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFGOutlineComponent_ShowProxyOutline_Statics::NewProp_color_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGOutlineComponent_ShowProxyOutline_Statics::NewProp_transform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGOutlineComponent_ShowProxyOutline_Statics::NewProp_transform = { UE4CodeGen_Private::EPropertyClass::Struct, "transform", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(FGOutlineComponent_eventShowProxyOutline_Parms, transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UFGOutlineComponent_ShowProxyOutline_Statics::NewProp_transform_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGOutlineComponent_ShowProxyOutline_Statics::NewProp_transform_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGOutlineComponent_ShowProxyOutline_Statics::NewProp_outlineMesh = { UE4CodeGen_Private::EPropertyClass::Object, "outlineMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGOutlineComponent_eventShowProxyOutline_Parms, outlineMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGOutlineComponent_ShowProxyOutline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGOutlineComponent_ShowProxyOutline_Statics::NewProp_color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGOutlineComponent_ShowProxyOutline_Statics::NewProp_color_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGOutlineComponent_ShowProxyOutline_Statics::NewProp_transform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGOutlineComponent_ShowProxyOutline_Statics::NewProp_outlineMesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGOutlineComponent_ShowProxyOutline_Statics::Function_MetaDataParams[] = {
		{ "Category", "Outline" },
		{ "ModuleRelativePath", "FGOutlineComponent.h" },
		{ "ToolTip", "Shows outline using a proxy components. Should only be used if used on instanced actors where default usage fails." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGOutlineComponent_ShowProxyOutline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGOutlineComponent, "ShowProxyOutline", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(FGOutlineComponent_eventShowProxyOutline_Parms), Z_Construct_UFunction_UFGOutlineComponent_ShowProxyOutline_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGOutlineComponent_ShowProxyOutline_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGOutlineComponent_ShowProxyOutline_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGOutlineComponent_ShowProxyOutline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGOutlineComponent_ShowProxyOutline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGOutlineComponent_ShowProxyOutline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGOutlineComponent_UpdateProxyOutlineLocationAndRotation_Statics
	{
		struct FGOutlineComponent_eventUpdateProxyOutlineLocationAndRotation_Parms
		{
			FVector newLocation;
			FRotator newRotation;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_newRotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_newLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGOutlineComponent_UpdateProxyOutlineLocationAndRotation_Statics::NewProp_newRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "newRotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGOutlineComponent_eventUpdateProxyOutlineLocationAndRotation_Parms, newRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGOutlineComponent_UpdateProxyOutlineLocationAndRotation_Statics::NewProp_newLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "newLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGOutlineComponent_eventUpdateProxyOutlineLocationAndRotation_Parms, newLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGOutlineComponent_UpdateProxyOutlineLocationAndRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGOutlineComponent_UpdateProxyOutlineLocationAndRotation_Statics::NewProp_newRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGOutlineComponent_UpdateProxyOutlineLocationAndRotation_Statics::NewProp_newLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGOutlineComponent_UpdateProxyOutlineLocationAndRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Outline" },
		{ "ModuleRelativePath", "FGOutlineComponent.h" },
		{ "ToolTip", "Updates the current proxy outline mesh's world location and rotation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGOutlineComponent_UpdateProxyOutlineLocationAndRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGOutlineComponent, "UpdateProxyOutlineLocationAndRotation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(FGOutlineComponent_eventUpdateProxyOutlineLocationAndRotation_Parms), Z_Construct_UFunction_UFGOutlineComponent_UpdateProxyOutlineLocationAndRotation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGOutlineComponent_UpdateProxyOutlineLocationAndRotation_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGOutlineComponent_UpdateProxyOutlineLocationAndRotation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGOutlineComponent_UpdateProxyOutlineLocationAndRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGOutlineComponent_UpdateProxyOutlineLocationAndRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGOutlineComponent_UpdateProxyOutlineLocationAndRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGOutlineComponent_UpdateProxyOutlineMesh_Statics
	{
		struct FGOutlineComponent_eventUpdateProxyOutlineMesh_Parms
		{
			UStaticMesh* newOutlineMesh;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_newOutlineMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGOutlineComponent_UpdateProxyOutlineMesh_Statics::NewProp_newOutlineMesh = { UE4CodeGen_Private::EPropertyClass::Object, "newOutlineMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGOutlineComponent_eventUpdateProxyOutlineMesh_Parms, newOutlineMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGOutlineComponent_UpdateProxyOutlineMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGOutlineComponent_UpdateProxyOutlineMesh_Statics::NewProp_newOutlineMesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGOutlineComponent_UpdateProxyOutlineMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Outline" },
		{ "ModuleRelativePath", "FGOutlineComponent.h" },
		{ "ToolTip", "Will change the static mesh used for proxy outlines." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGOutlineComponent_UpdateProxyOutlineMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGOutlineComponent, "UpdateProxyOutlineMesh", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGOutlineComponent_eventUpdateProxyOutlineMesh_Parms), Z_Construct_UFunction_UFGOutlineComponent_UpdateProxyOutlineMesh_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGOutlineComponent_UpdateProxyOutlineMesh_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGOutlineComponent_UpdateProxyOutlineMesh_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGOutlineComponent_UpdateProxyOutlineMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGOutlineComponent_UpdateProxyOutlineMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGOutlineComponent_UpdateProxyOutlineMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGOutlineComponent_NoRegister()
	{
		return UFGOutlineComponent::StaticClass();
	}
	struct Z_Construct_UClass_UFGOutlineComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCachedSplineComponentMaterials_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_mCachedSplineComponentMaterials;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mCachedSplineComponentMaterials_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mCachedSplineComponentMaterials_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCachedActorMaterials_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_mCachedActorMaterials;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mCachedActorMaterials_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mCachedActorMaterials_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mActiveMultiOutlineActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mActiveMultiOutlineActors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mActiveMultiOutlineActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mActiveOutlineActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mActiveOutlineActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mOutlineProxy_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mOutlineProxy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGOutlineComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGOutlineComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGOutlineComponent_GetOutlineColor, "GetOutlineColor" }, // 1015064730
		{ &Z_Construct_UFunction_UFGOutlineComponent_HideOutline, "HideOutline" }, // 2815879935
		{ &Z_Construct_UFunction_UFGOutlineComponent_IsOutlineVisible, "IsOutlineVisible" }, // 1566549109
		{ &Z_Construct_UFunction_UFGOutlineComponent_ShowMultiActorOutline, "ShowMultiActorOutline" }, // 1186158013
		{ &Z_Construct_UFunction_UFGOutlineComponent_ShowOutline, "ShowOutline" }, // 191973933
		{ &Z_Construct_UFunction_UFGOutlineComponent_ShowProxyOutline, "ShowProxyOutline" }, // 608187583
		{ &Z_Construct_UFunction_UFGOutlineComponent_UpdateProxyOutlineLocationAndRotation, "UpdateProxyOutlineLocationAndRotation" }, // 3942580533
		{ &Z_Construct_UFunction_UFGOutlineComponent_UpdateProxyOutlineMesh, "UpdateProxyOutlineMesh" }, // 614655847
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGOutlineComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "FGOutlineComponent.h" },
		{ "ModuleRelativePath", "FGOutlineComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGOutlineComponent_Statics::NewProp_mCachedSplineComponentMaterials_MetaData[] = {
		{ "ModuleRelativePath", "FGOutlineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UFGOutlineComponent_Statics::NewProp_mCachedSplineComponentMaterials = { UE4CodeGen_Private::EPropertyClass::Map, "mCachedSplineComponentMaterials", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UFGOutlineComponent, mCachedSplineComponentMaterials), METADATA_PARAMS(Z_Construct_UClass_UFGOutlineComponent_Statics::NewProp_mCachedSplineComponentMaterials_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGOutlineComponent_Statics::NewProp_mCachedSplineComponentMaterials_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGOutlineComponent_Statics::NewProp_mCachedSplineComponentMaterials_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Object, "mCachedSplineComponentMaterials_Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000080000, 1, nullptr, 0, Z_Construct_UClass_UFGSplineComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGOutlineComponent_Statics::NewProp_mCachedSplineComponentMaterials_ValueProp = { UE4CodeGen_Private::EPropertyClass::Struct, "mCachedSplineComponentMaterials", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 1, Z_Construct_UScriptStruct_FCachedSplineMeshToMaterialObject, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGOutlineComponent_Statics::NewProp_mCachedActorMaterials_MetaData[] = {
		{ "ModuleRelativePath", "FGOutlineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UFGOutlineComponent_Statics::NewProp_mCachedActorMaterials = { UE4CodeGen_Private::EPropertyClass::Map, "mCachedActorMaterials", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UFGOutlineComponent, mCachedActorMaterials), METADATA_PARAMS(Z_Construct_UClass_UFGOutlineComponent_Statics::NewProp_mCachedActorMaterials_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGOutlineComponent_Statics::NewProp_mCachedActorMaterials_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGOutlineComponent_Statics::NewProp_mCachedActorMaterials_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Object, "mCachedActorMaterials_Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGOutlineComponent_Statics::NewProp_mCachedActorMaterials_ValueProp = { UE4CodeGen_Private::EPropertyClass::Struct, "mCachedActorMaterials", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 1, Z_Construct_UScriptStruct_FCachedMeshToMaterialObject, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGOutlineComponent_Statics::NewProp_mActiveMultiOutlineActors_MetaData[] = {
		{ "ModuleRelativePath", "FGOutlineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGOutlineComponent_Statics::NewProp_mActiveMultiOutlineActors = { UE4CodeGen_Private::EPropertyClass::Array, "mActiveMultiOutlineActors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UFGOutlineComponent, mActiveMultiOutlineActors), METADATA_PARAMS(Z_Construct_UClass_UFGOutlineComponent_Statics::NewProp_mActiveMultiOutlineActors_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGOutlineComponent_Statics::NewProp_mActiveMultiOutlineActors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGOutlineComponent_Statics::NewProp_mActiveMultiOutlineActors_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "mActiveMultiOutlineActors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGOutlineComponent_Statics::NewProp_mActiveOutlineActor_MetaData[] = {
		{ "ModuleRelativePath", "FGOutlineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGOutlineComponent_Statics::NewProp_mActiveOutlineActor = { UE4CodeGen_Private::EPropertyClass::Object, "mActiveOutlineActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UFGOutlineComponent, mActiveOutlineActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGOutlineComponent_Statics::NewProp_mActiveOutlineActor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGOutlineComponent_Statics::NewProp_mActiveOutlineActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGOutlineComponent_Statics::NewProp_mOutlineProxy_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FGOutlineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGOutlineComponent_Statics::NewProp_mOutlineProxy = { UE4CodeGen_Private::EPropertyClass::Object, "mOutlineProxy", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000080008, 1, nullptr, STRUCT_OFFSET(UFGOutlineComponent, mOutlineProxy), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGOutlineComponent_Statics::NewProp_mOutlineProxy_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGOutlineComponent_Statics::NewProp_mOutlineProxy_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGOutlineComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGOutlineComponent_Statics::NewProp_mCachedSplineComponentMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGOutlineComponent_Statics::NewProp_mCachedSplineComponentMaterials_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGOutlineComponent_Statics::NewProp_mCachedSplineComponentMaterials_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGOutlineComponent_Statics::NewProp_mCachedActorMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGOutlineComponent_Statics::NewProp_mCachedActorMaterials_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGOutlineComponent_Statics::NewProp_mCachedActorMaterials_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGOutlineComponent_Statics::NewProp_mActiveMultiOutlineActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGOutlineComponent_Statics::NewProp_mActiveMultiOutlineActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGOutlineComponent_Statics::NewProp_mActiveOutlineActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGOutlineComponent_Statics::NewProp_mOutlineProxy,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGOutlineComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGOutlineComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGOutlineComponent_Statics::ClassParams = {
		&UFGOutlineComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A4u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UFGOutlineComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UFGOutlineComponent_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFGOutlineComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGOutlineComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGOutlineComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGOutlineComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGOutlineComponent, 4192816566);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGOutlineComponent(Z_Construct_UClass_UFGOutlineComponent, &UFGOutlineComponent::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGOutlineComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGOutlineComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
