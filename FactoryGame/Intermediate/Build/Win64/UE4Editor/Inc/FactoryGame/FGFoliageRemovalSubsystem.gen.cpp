// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGFoliageRemovalSubsystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGFoliageRemovalSubsystem() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGFoliageRemovalSubsystem_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGFoliageRemovalSubsystem();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGSubsystem();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliage();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGFoliageIdentifier_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliageArrayForComponent();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliageForComponent();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetFoliageRemovalActor();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGFoliageRemoval_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetFoliageRemovalSubsystem();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetFoliageWithinRadius();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetLookAtFoliage();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGFoliageRemovalSubsystem_HasIdentifier();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGFoliageRemovalSubsystem_OnLevelAddedToWorld();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULevel_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGFoliageRemovalSubsystem_OnLevelRemovedFromWorld();
// End Cross Module References
	void AFGFoliageRemovalSubsystem::StaticRegisterNativesAFGFoliageRemovalSubsystem()
	{
		UClass* Class = AFGFoliageRemovalSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetClosestFoliage", &AFGFoliageRemovalSubsystem::execGetClosestFoliage },
			{ "GetClosestFoliageArrayForComponent", &AFGFoliageRemovalSubsystem::execGetClosestFoliageArrayForComponent },
			{ "GetClosestFoliageForComponent", &AFGFoliageRemovalSubsystem::execGetClosestFoliageForComponent },
			{ "GetFoliageRemovalActor", &AFGFoliageRemovalSubsystem::execGetFoliageRemovalActor },
			{ "GetFoliageRemovalSubsystem", &AFGFoliageRemovalSubsystem::execGetFoliageRemovalSubsystem },
			{ "GetFoliageWithinRadius", &AFGFoliageRemovalSubsystem::execGetFoliageWithinRadius },
			{ "GetLookAtFoliage", &AFGFoliageRemovalSubsystem::execGetLookAtFoliage },
			{ "HasIdentifier", &AFGFoliageRemovalSubsystem::execHasIdentifier },
			{ "OnLevelAddedToWorld", &AFGFoliageRemovalSubsystem::execOnLevelAddedToWorld },
			{ "OnLevelRemovedFromWorld", &AFGFoliageRemovalSubsystem::execOnLevelRemovedFromWorld },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliage_Statics
	{
		struct FGFoliageRemovalSubsystem_eventGetClosestFoliage_Parms
		{
			FVector location;
			float maxDistance;
			TSubclassOf<UFGFoliageIdentifier>  foliageIdentifier;
			UHierarchicalInstancedStaticMeshComponent* out_component;
			bool isLocalSpace;
			int32 out_instanceId;
			FVector out_instanceLocation;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_out_instanceLocation;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_out_instanceId;
		static void NewProp_isLocalSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isLocalSpace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_out_component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_out_component;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_foliageIdentifier;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_maxDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGFoliageRemovalSubsystem_eventGetClosestFoliage_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGFoliageRemovalSubsystem_eventGetClosestFoliage_Parms), &Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliage_Statics::NewProp_out_instanceLocation = { "out_instanceLocation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGFoliageRemovalSubsystem_eventGetClosestFoliage_Parms, out_instanceLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliage_Statics::NewProp_out_instanceId = { "out_instanceId", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGFoliageRemovalSubsystem_eventGetClosestFoliage_Parms, out_instanceId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliage_Statics::NewProp_isLocalSpace_SetBit(void* Obj)
	{
		((FGFoliageRemovalSubsystem_eventGetClosestFoliage_Parms*)Obj)->isLocalSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliage_Statics::NewProp_isLocalSpace = { "isLocalSpace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGFoliageRemovalSubsystem_eventGetClosestFoliage_Parms), &Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliage_Statics::NewProp_isLocalSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliage_Statics::NewProp_out_component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliage_Statics::NewProp_out_component = { "out_component", nullptr, (EPropertyFlags)0x0010000000080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGFoliageRemovalSubsystem_eventGetClosestFoliage_Parms, out_component), Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliage_Statics::NewProp_out_component_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliage_Statics::NewProp_out_component_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliage_Statics::NewProp_foliageIdentifier = { "foliageIdentifier", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGFoliageRemovalSubsystem_eventGetClosestFoliage_Parms, foliageIdentifier), Z_Construct_UClass_UFGFoliageIdentifier_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliage_Statics::NewProp_maxDistance = { "maxDistance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGFoliageRemovalSubsystem_eventGetClosestFoliage_Parms, maxDistance), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliage_Statics::NewProp_location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliage_Statics::NewProp_location = { "location", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGFoliageRemovalSubsystem_eventGetClosestFoliage_Parms, location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliage_Statics::NewProp_location_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliage_Statics::NewProp_location_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliage_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliage_Statics::NewProp_out_instanceLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliage_Statics::NewProp_out_instanceId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliage_Statics::NewProp_isLocalSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliage_Statics::NewProp_out_component,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliage_Statics::NewProp_foliageIdentifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliage_Statics::NewProp_maxDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliage_Statics::NewProp_location,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Foliage" },
		{ "ModuleRelativePath", "FGFoliageRemovalSubsystem.h" },
		{ "ToolTip", "Finds the closest foliage instance to a location\n\n@network: Server and Client\n\n@param location - the location you want to look around\n@param maxDistance - max distance from the location that the foliage needs to exist (note, looks at the root location of the foliage, not the bounds)\n@param foliageIdentifier - find foliage that matches this tag\n@param out_component - the closest component of foliage, only valid if we return true\n@param out_instanceId - id of the foliage we want to remove, only valid if we return true\n@param out_instanceLocation - the location of the instance, only valid if we return true\n@return true if there was any foliage close by" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGFoliageRemovalSubsystem, nullptr, "GetClosestFoliage", sizeof(FGFoliageRemovalSubsystem_eventGetClosestFoliage_Parms), Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliageArrayForComponent_Statics
	{
		struct FGFoliageRemovalSubsystem_eventGetClosestFoliageArrayForComponent_Parms
		{
			TArray<FVector> locations;
			float maxDistance;
			const UHierarchicalInstancedStaticMeshComponent* component;
			bool isLocalSpace;
			TArray<int32> out_instanceArray;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_out_instanceArray;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_out_instanceArray_Inner;
		static void NewProp_isLocalSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isLocalSpace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_component;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_maxDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_locations_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_locations;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_locations_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliageArrayForComponent_Statics::NewProp_out_instanceArray = { "out_instanceArray", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGFoliageRemovalSubsystem_eventGetClosestFoliageArrayForComponent_Parms, out_instanceArray), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliageArrayForComponent_Statics::NewProp_out_instanceArray_Inner = { "out_instanceArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliageArrayForComponent_Statics::NewProp_isLocalSpace_SetBit(void* Obj)
	{
		((FGFoliageRemovalSubsystem_eventGetClosestFoliageArrayForComponent_Parms*)Obj)->isLocalSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliageArrayForComponent_Statics::NewProp_isLocalSpace = { "isLocalSpace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGFoliageRemovalSubsystem_eventGetClosestFoliageArrayForComponent_Parms), &Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliageArrayForComponent_Statics::NewProp_isLocalSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliageArrayForComponent_Statics::NewProp_component_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliageArrayForComponent_Statics::NewProp_component = { "component", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGFoliageRemovalSubsystem_eventGetClosestFoliageArrayForComponent_Parms, component), Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliageArrayForComponent_Statics::NewProp_component_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliageArrayForComponent_Statics::NewProp_component_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliageArrayForComponent_Statics::NewProp_maxDistance = { "maxDistance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGFoliageRemovalSubsystem_eventGetClosestFoliageArrayForComponent_Parms, maxDistance), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliageArrayForComponent_Statics::NewProp_locations_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliageArrayForComponent_Statics::NewProp_locations = { "locations", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGFoliageRemovalSubsystem_eventGetClosestFoliageArrayForComponent_Parms, locations), METADATA_PARAMS(Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliageArrayForComponent_Statics::NewProp_locations_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliageArrayForComponent_Statics::NewProp_locations_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliageArrayForComponent_Statics::NewProp_locations_Inner = { "locations", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliageArrayForComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliageArrayForComponent_Statics::NewProp_out_instanceArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliageArrayForComponent_Statics::NewProp_out_instanceArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliageArrayForComponent_Statics::NewProp_isLocalSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliageArrayForComponent_Statics::NewProp_component,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliageArrayForComponent_Statics::NewProp_maxDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliageArrayForComponent_Statics::NewProp_locations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliageArrayForComponent_Statics::NewProp_locations_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliageArrayForComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Foliage" },
		{ "ModuleRelativePath", "FGFoliageRemovalSubsystem.h" },
		{ "ToolTip", "Takes several locations into considerations and find the closest foliage closest to those locations. Use this when you want to get several\nfoliage locations instead of using GetClosestFoliage several times. As this takes into consideration the locations passed in. So once instance has\nbeen added once to the array, it won't be added again\n\n@param locations - the locations that we want to find foliage close to\n@param maxDistance - maximum distance to any foliage\n@param component - component to search in\n@param isLocalSpace - set this to true if the locations is in local-space\n@param out_instanceArray - id's in component for all the foliage instances" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliageArrayForComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGFoliageRemovalSubsystem, nullptr, "GetClosestFoliageArrayForComponent", sizeof(FGFoliageRemovalSubsystem_eventGetClosestFoliageArrayForComponent_Parms), Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliageArrayForComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliageArrayForComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliageArrayForComponent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliageArrayForComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliageArrayForComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliageArrayForComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliageForComponent_Statics
	{
		struct FGFoliageRemovalSubsystem_eventGetClosestFoliageForComponent_Parms
		{
			FVector location;
			float maxDistance;
			const UHierarchicalInstancedStaticMeshComponent* component;
			bool isLocalSpace;
			int32 out_instanceId;
			FVector out_instanceLocation;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_out_instanceLocation;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_out_instanceId;
		static void NewProp_isLocalSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isLocalSpace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_component;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_maxDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliageForComponent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGFoliageRemovalSubsystem_eventGetClosestFoliageForComponent_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliageForComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGFoliageRemovalSubsystem_eventGetClosestFoliageForComponent_Parms), &Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliageForComponent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliageForComponent_Statics::NewProp_out_instanceLocation = { "out_instanceLocation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGFoliageRemovalSubsystem_eventGetClosestFoliageForComponent_Parms, out_instanceLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliageForComponent_Statics::NewProp_out_instanceId = { "out_instanceId", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGFoliageRemovalSubsystem_eventGetClosestFoliageForComponent_Parms, out_instanceId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliageForComponent_Statics::NewProp_isLocalSpace_SetBit(void* Obj)
	{
		((FGFoliageRemovalSubsystem_eventGetClosestFoliageForComponent_Parms*)Obj)->isLocalSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliageForComponent_Statics::NewProp_isLocalSpace = { "isLocalSpace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGFoliageRemovalSubsystem_eventGetClosestFoliageForComponent_Parms), &Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliageForComponent_Statics::NewProp_isLocalSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliageForComponent_Statics::NewProp_component_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliageForComponent_Statics::NewProp_component = { "component", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGFoliageRemovalSubsystem_eventGetClosestFoliageForComponent_Parms, component), Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliageForComponent_Statics::NewProp_component_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliageForComponent_Statics::NewProp_component_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliageForComponent_Statics::NewProp_maxDistance = { "maxDistance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGFoliageRemovalSubsystem_eventGetClosestFoliageForComponent_Parms, maxDistance), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliageForComponent_Statics::NewProp_location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliageForComponent_Statics::NewProp_location = { "location", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGFoliageRemovalSubsystem_eventGetClosestFoliageForComponent_Parms, location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliageForComponent_Statics::NewProp_location_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliageForComponent_Statics::NewProp_location_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliageForComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliageForComponent_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliageForComponent_Statics::NewProp_out_instanceLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliageForComponent_Statics::NewProp_out_instanceId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliageForComponent_Statics::NewProp_isLocalSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliageForComponent_Statics::NewProp_component,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliageForComponent_Statics::NewProp_maxDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliageForComponent_Statics::NewProp_location,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliageForComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Foliage" },
		{ "ModuleRelativePath", "FGFoliageRemovalSubsystem.h" },
		{ "ToolTip", "Finds the closest foliage instance to a location in a specified component\n\n@network: Server and Client\n\n@param location - the location you want to look around\n@param maxDistance - max distance from the location that the foliage needs to exist (note, looks at the root location of the foliage, not the bounds)\n@param component - the component we want to search for foliage\n@param isLocalSpace - set this to true if location is in localspace\n@param out_instanceId - id of the foliage we want to remove, only valid if we return true\n@param out_instanceLocation - the location of the instance, only valid if we return true\n@return true if there was any foliage close by" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliageForComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGFoliageRemovalSubsystem, nullptr, "GetClosestFoliageForComponent", sizeof(FGFoliageRemovalSubsystem_eventGetClosestFoliageForComponent_Parms), Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliageForComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliageForComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliageForComponent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliageForComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliageForComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliageForComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetFoliageRemovalActor_Statics
	{
		struct FGFoliageRemovalSubsystem_eventGetFoliageRemovalActor_Parms
		{
			UHierarchicalInstancedStaticMeshComponent* fromComponent;
			AFGFoliageRemoval* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fromComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_fromComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetFoliageRemovalActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGFoliageRemovalSubsystem_eventGetFoliageRemovalActor_Parms, ReturnValue), Z_Construct_UClass_AFGFoliageRemoval_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetFoliageRemovalActor_Statics::NewProp_fromComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetFoliageRemovalActor_Statics::NewProp_fromComponent = { "fromComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGFoliageRemovalSubsystem_eventGetFoliageRemovalActor_Parms, fromComponent), Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetFoliageRemovalActor_Statics::NewProp_fromComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetFoliageRemovalActor_Statics::NewProp_fromComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetFoliageRemovalActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetFoliageRemovalActor_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetFoliageRemovalActor_Statics::NewProp_fromComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetFoliageRemovalActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Foliage" },
		{ "ModuleRelativePath", "FGFoliageRemovalSubsystem.h" },
		{ "ToolTip", "Get the foliage removal actor that is associated with the component" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetFoliageRemovalActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGFoliageRemovalSubsystem, nullptr, "GetFoliageRemovalActor", sizeof(FGFoliageRemovalSubsystem_eventGetFoliageRemovalActor_Parms), Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetFoliageRemovalActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetFoliageRemovalActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetFoliageRemovalActor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetFoliageRemovalActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetFoliageRemovalActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetFoliageRemovalActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetFoliageRemovalSubsystem_Statics
	{
		struct FGFoliageRemovalSubsystem_eventGetFoliageRemovalSubsystem_Parms
		{
			UObject* worldContext;
			AFGFoliageRemovalSubsystem* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_worldContext;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetFoliageRemovalSubsystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGFoliageRemovalSubsystem_eventGetFoliageRemovalSubsystem_Parms, ReturnValue), Z_Construct_UClass_AFGFoliageRemovalSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetFoliageRemovalSubsystem_Statics::NewProp_worldContext = { "worldContext", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGFoliageRemovalSubsystem_eventGetFoliageRemovalSubsystem_Parms, worldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetFoliageRemovalSubsystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetFoliageRemovalSubsystem_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetFoliageRemovalSubsystem_Statics::NewProp_worldContext,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetFoliageRemovalSubsystem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Foliage" },
		{ "DefaultToSelf", "worldContext" },
		{ "ModuleRelativePath", "FGFoliageRemovalSubsystem.h" },
		{ "ToolTip", "Get the foliage removal subsystem from a world context, this should always return something unless you call it really early" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetFoliageRemovalSubsystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGFoliageRemovalSubsystem, nullptr, "GetFoliageRemovalSubsystem", sizeof(FGFoliageRemovalSubsystem_eventGetFoliageRemovalSubsystem_Parms), Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetFoliageRemovalSubsystem_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetFoliageRemovalSubsystem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetFoliageRemovalSubsystem_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetFoliageRemovalSubsystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetFoliageRemovalSubsystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetFoliageRemovalSubsystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetFoliageWithinRadius_Statics
	{
		struct FGFoliageRemovalSubsystem_eventGetFoliageWithinRadius_Parms
		{
			FVector location;
			float radius;
			bool isLocalSpace;
			TArray<int32> out_instanceArray;
			TArray<FVector> out_locationArray;
			TArray<UHierarchicalInstancedStaticMeshComponent*> out_componentArray;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_out_componentArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_out_componentArray;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_out_componentArray_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_out_locationArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_out_locationArray_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_out_instanceArray;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_out_instanceArray_Inner;
		static void NewProp_isLocalSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isLocalSpace;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetFoliageWithinRadius_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGFoliageRemovalSubsystem_eventGetFoliageWithinRadius_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetFoliageWithinRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGFoliageRemovalSubsystem_eventGetFoliageWithinRadius_Parms), &Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetFoliageWithinRadius_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetFoliageWithinRadius_Statics::NewProp_out_componentArray_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetFoliageWithinRadius_Statics::NewProp_out_componentArray = { "out_componentArray", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGFoliageRemovalSubsystem_eventGetFoliageWithinRadius_Parms, out_componentArray), METADATA_PARAMS(Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetFoliageWithinRadius_Statics::NewProp_out_componentArray_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetFoliageWithinRadius_Statics::NewProp_out_componentArray_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetFoliageWithinRadius_Statics::NewProp_out_componentArray_Inner = { "out_componentArray", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetFoliageWithinRadius_Statics::NewProp_out_locationArray = { "out_locationArray", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGFoliageRemovalSubsystem_eventGetFoliageWithinRadius_Parms, out_locationArray), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetFoliageWithinRadius_Statics::NewProp_out_locationArray_Inner = { "out_locationArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetFoliageWithinRadius_Statics::NewProp_out_instanceArray = { "out_instanceArray", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGFoliageRemovalSubsystem_eventGetFoliageWithinRadius_Parms, out_instanceArray), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetFoliageWithinRadius_Statics::NewProp_out_instanceArray_Inner = { "out_instanceArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetFoliageWithinRadius_Statics::NewProp_isLocalSpace_SetBit(void* Obj)
	{
		((FGFoliageRemovalSubsystem_eventGetFoliageWithinRadius_Parms*)Obj)->isLocalSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetFoliageWithinRadius_Statics::NewProp_isLocalSpace = { "isLocalSpace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGFoliageRemovalSubsystem_eventGetFoliageWithinRadius_Parms), &Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetFoliageWithinRadius_Statics::NewProp_isLocalSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetFoliageWithinRadius_Statics::NewProp_radius = { "radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGFoliageRemovalSubsystem_eventGetFoliageWithinRadius_Parms, radius), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetFoliageWithinRadius_Statics::NewProp_location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetFoliageWithinRadius_Statics::NewProp_location = { "location", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGFoliageRemovalSubsystem_eventGetFoliageWithinRadius_Parms, location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetFoliageWithinRadius_Statics::NewProp_location_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetFoliageWithinRadius_Statics::NewProp_location_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetFoliageWithinRadius_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetFoliageWithinRadius_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetFoliageWithinRadius_Statics::NewProp_out_componentArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetFoliageWithinRadius_Statics::NewProp_out_componentArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetFoliageWithinRadius_Statics::NewProp_out_locationArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetFoliageWithinRadius_Statics::NewProp_out_locationArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetFoliageWithinRadius_Statics::NewProp_out_instanceArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetFoliageWithinRadius_Statics::NewProp_out_instanceArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetFoliageWithinRadius_Statics::NewProp_isLocalSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetFoliageWithinRadius_Statics::NewProp_radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetFoliageWithinRadius_Statics::NewProp_location,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetFoliageWithinRadius_Statics::Function_MetaDataParams[] = {
		{ "Category", "Foliage" },
		{ "ModuleRelativePath", "FGFoliageRemovalSubsystem.h" },
		{ "ToolTip", "Finds foliage within a provided radius to a specified location." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetFoliageWithinRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGFoliageRemovalSubsystem, nullptr, "GetFoliageWithinRadius", sizeof(FGFoliageRemovalSubsystem_eventGetFoliageWithinRadius_Parms), Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetFoliageWithinRadius_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetFoliageWithinRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetFoliageWithinRadius_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetFoliageWithinRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetFoliageWithinRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetFoliageWithinRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetLookAtFoliage_Statics
	{
		struct FGFoliageRemovalSubsystem_eventGetLookAtFoliage_Parms
		{
			FVector viewLocation;
			FVector endViewLocation;
			TSubclassOf<UFGFoliageIdentifier>  foliageIdentifier;
			UHierarchicalInstancedStaticMeshComponent* out_component;
			int32 out_instanceId;
			FVector out_instanceLocation;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_out_instanceLocation;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_out_instanceId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_out_component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_out_component;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_foliageIdentifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_endViewLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_endViewLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_viewLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_viewLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetLookAtFoliage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGFoliageRemovalSubsystem_eventGetLookAtFoliage_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetLookAtFoliage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGFoliageRemovalSubsystem_eventGetLookAtFoliage_Parms), &Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetLookAtFoliage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetLookAtFoliage_Statics::NewProp_out_instanceLocation = { "out_instanceLocation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGFoliageRemovalSubsystem_eventGetLookAtFoliage_Parms, out_instanceLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetLookAtFoliage_Statics::NewProp_out_instanceId = { "out_instanceId", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGFoliageRemovalSubsystem_eventGetLookAtFoliage_Parms, out_instanceId), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetLookAtFoliage_Statics::NewProp_out_component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetLookAtFoliage_Statics::NewProp_out_component = { "out_component", nullptr, (EPropertyFlags)0x0010000000080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGFoliageRemovalSubsystem_eventGetLookAtFoliage_Parms, out_component), Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetLookAtFoliage_Statics::NewProp_out_component_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetLookAtFoliage_Statics::NewProp_out_component_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetLookAtFoliage_Statics::NewProp_foliageIdentifier = { "foliageIdentifier", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGFoliageRemovalSubsystem_eventGetLookAtFoliage_Parms, foliageIdentifier), Z_Construct_UClass_UFGFoliageIdentifier_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetLookAtFoliage_Statics::NewProp_endViewLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetLookAtFoliage_Statics::NewProp_endViewLocation = { "endViewLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGFoliageRemovalSubsystem_eventGetLookAtFoliage_Parms, endViewLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetLookAtFoliage_Statics::NewProp_endViewLocation_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetLookAtFoliage_Statics::NewProp_endViewLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetLookAtFoliage_Statics::NewProp_viewLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetLookAtFoliage_Statics::NewProp_viewLocation = { "viewLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGFoliageRemovalSubsystem_eventGetLookAtFoliage_Parms, viewLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetLookAtFoliage_Statics::NewProp_viewLocation_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetLookAtFoliage_Statics::NewProp_viewLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetLookAtFoliage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetLookAtFoliage_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetLookAtFoliage_Statics::NewProp_out_instanceLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetLookAtFoliage_Statics::NewProp_out_instanceId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetLookAtFoliage_Statics::NewProp_out_component,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetLookAtFoliage_Statics::NewProp_foliageIdentifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetLookAtFoliage_Statics::NewProp_endViewLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetLookAtFoliage_Statics::NewProp_viewLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetLookAtFoliage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Foliage" },
		{ "ModuleRelativePath", "FGFoliageRemovalSubsystem.h" },
		{ "ToolTip", "Tries to emulate looking at a location from a location, and get the closest actor you are looking at\n\n@network: Server and Client\n\n@param viewLocation - from where you are looking\n@param endViewLocation - end of look trace\n@param foliageIdentifier - find foliage that matches this tag\n@param out_component - the component we are looking at, only valid if we return true\n@param out_instanceId - id that we are looking at, only valid if we return true\n@param out_instanceLocation - the location of the instance, only valid if we return true\n@return true if we looked at any foliage" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetLookAtFoliage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGFoliageRemovalSubsystem, nullptr, "GetLookAtFoliage", sizeof(FGFoliageRemovalSubsystem_eventGetLookAtFoliage_Parms), Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetLookAtFoliage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetLookAtFoliage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetLookAtFoliage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetLookAtFoliage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetLookAtFoliage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetLookAtFoliage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGFoliageRemovalSubsystem_HasIdentifier_Statics
	{
		struct FGFoliageRemovalSubsystem_eventHasIdentifier_Parms
		{
			const UHierarchicalInstancedStaticMeshComponent* component;
			TSubclassOf<UFGFoliageIdentifier>  foliageIdentifier;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_foliageIdentifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_component;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGFoliageRemovalSubsystem_HasIdentifier_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGFoliageRemovalSubsystem_eventHasIdentifier_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGFoliageRemovalSubsystem_HasIdentifier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGFoliageRemovalSubsystem_eventHasIdentifier_Parms), &Z_Construct_UFunction_AFGFoliageRemovalSubsystem_HasIdentifier_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGFoliageRemovalSubsystem_HasIdentifier_Statics::NewProp_foliageIdentifier = { "foliageIdentifier", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGFoliageRemovalSubsystem_eventHasIdentifier_Parms, foliageIdentifier), Z_Construct_UClass_UFGFoliageIdentifier_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGFoliageRemovalSubsystem_HasIdentifier_Statics::NewProp_component_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGFoliageRemovalSubsystem_HasIdentifier_Statics::NewProp_component = { "component", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGFoliageRemovalSubsystem_eventHasIdentifier_Parms, component), Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFGFoliageRemovalSubsystem_HasIdentifier_Statics::NewProp_component_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGFoliageRemovalSubsystem_HasIdentifier_Statics::NewProp_component_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGFoliageRemovalSubsystem_HasIdentifier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGFoliageRemovalSubsystem_HasIdentifier_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGFoliageRemovalSubsystem_HasIdentifier_Statics::NewProp_foliageIdentifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGFoliageRemovalSubsystem_HasIdentifier_Statics::NewProp_component,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGFoliageRemovalSubsystem_HasIdentifier_Statics::Function_MetaDataParams[] = {
		{ "Category", "Foliage" },
		{ "ModuleRelativePath", "FGFoliageRemovalSubsystem.h" },
		{ "ToolTip", "@param component - UHierarchicalInstanctedStaticMeshComponent to check\n@param foliageIdentifier - find foliage that matches this tag\n@returns true if the UHierarchicalInstanctedStaticMeshComponent has the given foliageIdentifier." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGFoliageRemovalSubsystem_HasIdentifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGFoliageRemovalSubsystem, nullptr, "HasIdentifier", sizeof(FGFoliageRemovalSubsystem_eventHasIdentifier_Parms), Z_Construct_UFunction_AFGFoliageRemovalSubsystem_HasIdentifier_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGFoliageRemovalSubsystem_HasIdentifier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGFoliageRemovalSubsystem_HasIdentifier_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGFoliageRemovalSubsystem_HasIdentifier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGFoliageRemovalSubsystem_HasIdentifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGFoliageRemovalSubsystem_HasIdentifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGFoliageRemovalSubsystem_OnLevelAddedToWorld_Statics
	{
		struct FGFoliageRemovalSubsystem_eventOnLevelAddedToWorld_Parms
		{
			ULevel* inLevel;
			UWorld* inWorld;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inWorld;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inLevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGFoliageRemovalSubsystem_OnLevelAddedToWorld_Statics::NewProp_inWorld = { "inWorld", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGFoliageRemovalSubsystem_eventOnLevelAddedToWorld_Parms, inWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGFoliageRemovalSubsystem_OnLevelAddedToWorld_Statics::NewProp_inLevel = { "inLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGFoliageRemovalSubsystem_eventOnLevelAddedToWorld_Parms, inLevel), Z_Construct_UClass_ULevel_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGFoliageRemovalSubsystem_OnLevelAddedToWorld_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGFoliageRemovalSubsystem_OnLevelAddedToWorld_Statics::NewProp_inWorld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGFoliageRemovalSubsystem_OnLevelAddedToWorld_Statics::NewProp_inLevel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGFoliageRemovalSubsystem_OnLevelAddedToWorld_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGFoliageRemovalSubsystem.h" },
		{ "ToolTip", "Called whenever a level is added to the world, used to gather more potential components to get foliage from" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGFoliageRemovalSubsystem_OnLevelAddedToWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGFoliageRemovalSubsystem, nullptr, "OnLevelAddedToWorld", sizeof(FGFoliageRemovalSubsystem_eventOnLevelAddedToWorld_Parms), Z_Construct_UFunction_AFGFoliageRemovalSubsystem_OnLevelAddedToWorld_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGFoliageRemovalSubsystem_OnLevelAddedToWorld_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGFoliageRemovalSubsystem_OnLevelAddedToWorld_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGFoliageRemovalSubsystem_OnLevelAddedToWorld_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGFoliageRemovalSubsystem_OnLevelAddedToWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGFoliageRemovalSubsystem_OnLevelAddedToWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGFoliageRemovalSubsystem_OnLevelRemovedFromWorld_Statics
	{
		struct FGFoliageRemovalSubsystem_eventOnLevelRemovedFromWorld_Parms
		{
			ULevel* inLevel;
			UWorld* inWorld;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inWorld;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inLevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGFoliageRemovalSubsystem_OnLevelRemovedFromWorld_Statics::NewProp_inWorld = { "inWorld", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGFoliageRemovalSubsystem_eventOnLevelRemovedFromWorld_Parms, inWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGFoliageRemovalSubsystem_OnLevelRemovedFromWorld_Statics::NewProp_inLevel = { "inLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGFoliageRemovalSubsystem_eventOnLevelRemovedFromWorld_Parms, inLevel), Z_Construct_UClass_ULevel_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGFoliageRemovalSubsystem_OnLevelRemovedFromWorld_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGFoliageRemovalSubsystem_OnLevelRemovedFromWorld_Statics::NewProp_inWorld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGFoliageRemovalSubsystem_OnLevelRemovedFromWorld_Statics::NewProp_inLevel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGFoliageRemovalSubsystem_OnLevelRemovedFromWorld_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGFoliageRemovalSubsystem.h" },
		{ "ToolTip", "Called whenever a level is removed from the world, used to remove components that is no longer relevant for to be able to pickup" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGFoliageRemovalSubsystem_OnLevelRemovedFromWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGFoliageRemovalSubsystem, nullptr, "OnLevelRemovedFromWorld", sizeof(FGFoliageRemovalSubsystem_eventOnLevelRemovedFromWorld_Parms), Z_Construct_UFunction_AFGFoliageRemovalSubsystem_OnLevelRemovedFromWorld_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGFoliageRemovalSubsystem_OnLevelRemovedFromWorld_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGFoliageRemovalSubsystem_OnLevelRemovedFromWorld_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGFoliageRemovalSubsystem_OnLevelRemovedFromWorld_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGFoliageRemovalSubsystem_OnLevelRemovedFromWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGFoliageRemovalSubsystem_OnLevelRemovedFromWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGFoliageRemovalSubsystem_NoRegister()
	{
		return AFGFoliageRemovalSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_AFGFoliageRemovalSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGFoliageRemovalSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGFoliageRemovalSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliage, "GetClosestFoliage" }, // 1273311784
		{ &Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliageArrayForComponent, "GetClosestFoliageArrayForComponent" }, // 273966281
		{ &Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetClosestFoliageForComponent, "GetClosestFoliageForComponent" }, // 1861610130
		{ &Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetFoliageRemovalActor, "GetFoliageRemovalActor" }, // 712602108
		{ &Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetFoliageRemovalSubsystem, "GetFoliageRemovalSubsystem" }, // 1400529022
		{ &Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetFoliageWithinRadius, "GetFoliageWithinRadius" }, // 1163211186
		{ &Z_Construct_UFunction_AFGFoliageRemovalSubsystem_GetLookAtFoliage, "GetLookAtFoliage" }, // 742715161
		{ &Z_Construct_UFunction_AFGFoliageRemovalSubsystem_HasIdentifier, "HasIdentifier" }, // 4136602075
		{ &Z_Construct_UFunction_AFGFoliageRemovalSubsystem_OnLevelAddedToWorld, "OnLevelAddedToWorld" }, // 3879205544
		{ &Z_Construct_UFunction_AFGFoliageRemovalSubsystem_OnLevelRemovedFromWorld, "OnLevelRemovedFromWorld" }, // 1605884483
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGFoliageRemovalSubsystem_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Actor Input Rendering Actor Tick Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FGFoliageRemovalSubsystem.h" },
		{ "ModuleRelativePath", "FGFoliageRemovalSubsystem.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGFoliageRemovalSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGFoliageRemovalSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGFoliageRemovalSubsystem_Statics::ClassParams = {
		&AFGFoliageRemovalSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AFGFoliageRemovalSubsystem_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGFoliageRemovalSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGFoliageRemovalSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGFoliageRemovalSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGFoliageRemovalSubsystem, 1886564263);
	template<> FACTORYGAME_API UClass* StaticClass<AFGFoliageRemovalSubsystem>()
	{
		return AFGFoliageRemovalSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGFoliageRemovalSubsystem(Z_Construct_UClass_AFGFoliageRemovalSubsystem, &AFGFoliageRemovalSubsystem::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGFoliageRemovalSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGFoliageRemovalSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
