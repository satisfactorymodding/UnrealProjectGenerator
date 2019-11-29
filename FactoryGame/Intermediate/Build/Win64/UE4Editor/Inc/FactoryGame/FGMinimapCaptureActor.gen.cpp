// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGMinimapCaptureActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGMinimapCaptureActor() {}
// Cross Module References
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_EHeightDataType();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FFGHeightData();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGHeightWaterUserData_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGHeightWaterUserData();
	ENGINE_API UClass* Z_Construct_UClass_UAssetUserData();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGHeightFoliageUserData_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGHeightFoliageUserData();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGHeightHideUserData_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGHeightHideUserData();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGMinimapCaptureActor_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGMinimapCaptureActor();
	ENGINE_API UClass* Z_Construct_UClass_ASceneCapture2D();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGMinimapCaptureActor_ExportHeightData();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGMinimapCaptureActor_GetMapAreaTexture();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGMapAreaTexture_NoRegister();
// End Cross Module References
	static UEnum* EHeightDataType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FactoryGame_EHeightDataType, Z_Construct_UPackage__Script_FactoryGame(), TEXT("EHeightDataType"));
		}
		return Singleton;
	}
	template<> FACTORYGAME_API UEnum* StaticEnum<EHeightDataType>()
	{
		return EHeightDataType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHeightDataType(EHeightDataType_StaticEnum, TEXT("/Script/FactoryGame"), TEXT("EHeightDataType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FactoryGame_EHeightDataType_Hash() { return 505351227U; }
	UEnum* Z_Construct_UEnum_FactoryGame_EHeightDataType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHeightDataType"), 0, Get_Z_Construct_UEnum_FactoryGame_EHeightDataType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHeightDataType::HDT_NONE", (int64)EHeightDataType::HDT_NONE },
				{ "EHeightDataType::HDT_TERRAIN", (int64)EHeightDataType::HDT_TERRAIN },
				{ "EHeightDataType::HDT_WATER", (int64)EHeightDataType::HDT_WATER },
				{ "EHeightDataType::HDT_FOLIAGE", (int64)EHeightDataType::HDT_FOLIAGE },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "FGMinimapCaptureActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FactoryGame,
				nullptr,
				"EHeightDataType",
				"EHeightDataType",
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
class UScriptStruct* FFGHeightData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FFGHeightData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFGHeightData, Z_Construct_UPackage__Script_FactoryGame(), TEXT("FGHeightData"), sizeof(FFGHeightData), Get_Z_Construct_UScriptStruct_FFGHeightData_Hash());
	}
	return Singleton;
}
template<> FACTORYGAME_API UScriptStruct* StaticStruct<FFGHeightData>()
{
	return FFGHeightData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFGHeightData(FFGHeightData::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("FGHeightData"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFFGHeightData
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFFGHeightData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FGHeightData")),new UScriptStruct::TCppStructOps<FFGHeightData>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFFGHeightData;
	struct Z_Construct_UScriptStruct_FFGHeightData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFGHeightData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGMinimapCaptureActor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFGHeightData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFGHeightData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFGHeightData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"FGHeightData",
		sizeof(FFGHeightData),
		alignof(FFGHeightData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFGHeightData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FFGHeightData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFGHeightData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFGHeightData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FGHeightData"), sizeof(FFGHeightData), Get_Z_Construct_UScriptStruct_FFGHeightData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFGHeightData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFGHeightData_Hash() { return 4162813077U; }
	void UFGHeightWaterUserData::StaticRegisterNativesUFGHeightWaterUserData()
	{
	}
	UClass* Z_Construct_UClass_UFGHeightWaterUserData_NoRegister()
	{
		return UFGHeightWaterUserData::StaticClass();
	}
	struct Z_Construct_UClass_UFGHeightWaterUserData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGHeightWaterUserData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetUserData,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGHeightWaterUserData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FGMinimapCaptureActor.h" },
		{ "ModuleRelativePath", "FGMinimapCaptureActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGHeightWaterUserData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGHeightWaterUserData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGHeightWaterUserData_Statics::ClassParams = {
		&UFGHeightWaterUserData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFGHeightWaterUserData_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGHeightWaterUserData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGHeightWaterUserData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGHeightWaterUserData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGHeightWaterUserData, 4215418165);
	template<> FACTORYGAME_API UClass* StaticClass<UFGHeightWaterUserData>()
	{
		return UFGHeightWaterUserData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGHeightWaterUserData(Z_Construct_UClass_UFGHeightWaterUserData, &UFGHeightWaterUserData::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGHeightWaterUserData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGHeightWaterUserData);
	void UFGHeightFoliageUserData::StaticRegisterNativesUFGHeightFoliageUserData()
	{
	}
	UClass* Z_Construct_UClass_UFGHeightFoliageUserData_NoRegister()
	{
		return UFGHeightFoliageUserData::StaticClass();
	}
	struct Z_Construct_UClass_UFGHeightFoliageUserData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGHeightFoliageUserData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetUserData,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGHeightFoliageUserData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FGMinimapCaptureActor.h" },
		{ "ModuleRelativePath", "FGMinimapCaptureActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGHeightFoliageUserData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGHeightFoliageUserData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGHeightFoliageUserData_Statics::ClassParams = {
		&UFGHeightFoliageUserData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFGHeightFoliageUserData_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGHeightFoliageUserData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGHeightFoliageUserData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGHeightFoliageUserData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGHeightFoliageUserData, 2427549649);
	template<> FACTORYGAME_API UClass* StaticClass<UFGHeightFoliageUserData>()
	{
		return UFGHeightFoliageUserData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGHeightFoliageUserData(Z_Construct_UClass_UFGHeightFoliageUserData, &UFGHeightFoliageUserData::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGHeightFoliageUserData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGHeightFoliageUserData);
	void UFGHeightHideUserData::StaticRegisterNativesUFGHeightHideUserData()
	{
	}
	UClass* Z_Construct_UClass_UFGHeightHideUserData_NoRegister()
	{
		return UFGHeightHideUserData::StaticClass();
	}
	struct Z_Construct_UClass_UFGHeightHideUserData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGHeightHideUserData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetUserData,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGHeightHideUserData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FGMinimapCaptureActor.h" },
		{ "ModuleRelativePath", "FGMinimapCaptureActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGHeightHideUserData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGHeightHideUserData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGHeightHideUserData_Statics::ClassParams = {
		&UFGHeightHideUserData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFGHeightHideUserData_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGHeightHideUserData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGHeightHideUserData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGHeightHideUserData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGHeightHideUserData, 2925137596);
	template<> FACTORYGAME_API UClass* StaticClass<UFGHeightHideUserData>()
	{
		return UFGHeightHideUserData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGHeightHideUserData(Z_Construct_UClass_UFGHeightHideUserData, &UFGHeightHideUserData::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGHeightHideUserData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGHeightHideUserData);
	void AFGMinimapCaptureActor::StaticRegisterNativesAFGMinimapCaptureActor()
	{
		UClass* Class = AFGMinimapCaptureActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
#if WITH_EDITOR
			{ "ExportHeightData", &AFGMinimapCaptureActor::execExportHeightData },
#endif // WITH_EDITOR
			{ "GetMapAreaTexture", &AFGMinimapCaptureActor::execGetMapAreaTexture },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_AFGMinimapCaptureActor_ExportHeightData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGMinimapCaptureActor_ExportHeightData_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Minimap Height" },
		{ "ModuleRelativePath", "FGMinimapCaptureActor.h" },
		{ "ToolTip", "This function traces all over the level to find height info that can be used when we draw the minimap" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGMinimapCaptureActor_ExportHeightData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGMinimapCaptureActor, nullptr, "ExportHeightData", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGMinimapCaptureActor_ExportHeightData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGMinimapCaptureActor_ExportHeightData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGMinimapCaptureActor_ExportHeightData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGMinimapCaptureActor_ExportHeightData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	struct Z_Construct_UFunction_AFGMinimapCaptureActor_GetMapAreaTexture_Statics
	{
		struct FGMinimapCaptureActor_eventGetMapAreaTexture_Parms
		{
			UFGMapAreaTexture* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGMinimapCaptureActor_GetMapAreaTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGMinimapCaptureActor_eventGetMapAreaTexture_Parms, ReturnValue), Z_Construct_UClass_UFGMapAreaTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGMinimapCaptureActor_GetMapAreaTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGMinimapCaptureActor_GetMapAreaTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGMinimapCaptureActor_GetMapAreaTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "ModuleRelativePath", "FGMinimapCaptureActor.h" },
		{ "ToolTip", "Returns the map area texture that has been specified on this capture actor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGMinimapCaptureActor_GetMapAreaTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGMinimapCaptureActor, nullptr, "GetMapAreaTexture", sizeof(FGMinimapCaptureActor_eventGetMapAreaTexture_Parms), Z_Construct_UFunction_AFGMinimapCaptureActor_GetMapAreaTexture_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGMinimapCaptureActor_GetMapAreaTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGMinimapCaptureActor_GetMapAreaTexture_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGMinimapCaptureActor_GetMapAreaTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGMinimapCaptureActor_GetMapAreaTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGMinimapCaptureActor_GetMapAreaTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGMinimapCaptureActor_NoRegister()
	{
		return AFGMinimapCaptureActor::StaticClass();
	}
	struct Z_Construct_UClass_AFGMinimapCaptureActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMapAreaTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mMapAreaTexture;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mHeightDataResolution_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mHeightDataResolution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mWaterDepthBufferMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mWaterDepthBufferMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mWaterMaxDepth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mWaterMaxDepth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mShowDepthOnWaterMap_MetaData[];
#endif
		static void NewProp_mShowDepthOnWaterMap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mShowDepthOnWaterMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mLayersForTerrain_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mLayersForTerrain;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mIgnoreUserData_MetaData[];
#endif
		static void NewProp_mIgnoreUserData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mIgnoreUserData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mIncludeFoliage_MetaData[];
#endif
		static void NewProp_mIncludeFoliage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mIncludeFoliage;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGMinimapCaptureActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASceneCapture2D,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGMinimapCaptureActor_Statics::FuncInfo[] = {
#if WITH_EDITOR
		{ &Z_Construct_UFunction_AFGMinimapCaptureActor_ExportHeightData, "ExportHeightData" }, // 2744642997
#endif //WITH_EDITOR
		{ &Z_Construct_UFunction_AFGMinimapCaptureActor_GetMapAreaTexture, "GetMapAreaTexture" }, // 2686294710
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGMinimapCaptureActor_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Material Attachment Actor Collision Attachment Actor" },
		{ "IncludePath", "FGMinimapCaptureActor.h" },
		{ "ModuleRelativePath", "FGMinimapCaptureActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGMinimapCaptureActor_Statics::NewProp_mMapAreaTexture_MetaData[] = {
		{ "Category", "Minimap" },
		{ "ModuleRelativePath", "FGMinimapCaptureActor.h" },
		{ "ToolTip", "The areas defined as by this texture" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGMinimapCaptureActor_Statics::NewProp_mMapAreaTexture = { "mMapAreaTexture", nullptr, (EPropertyFlags)0x0020080000000801, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGMinimapCaptureActor, mMapAreaTexture), Z_Construct_UClass_UFGMapAreaTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGMinimapCaptureActor_Statics::NewProp_mMapAreaTexture_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGMinimapCaptureActor_Statics::NewProp_mMapAreaTexture_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGMinimapCaptureActor_Statics::NewProp_mHeightDataResolution_MetaData[] = {
		{ "Category", "Minimap Height" },
		{ "ModuleRelativePath", "FGMinimapCaptureActor.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFGMinimapCaptureActor_Statics::NewProp_mHeightDataResolution = { "mHeightDataResolution", nullptr, (EPropertyFlags)0x0010000800000801, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGMinimapCaptureActor, mHeightDataResolution), METADATA_PARAMS(Z_Construct_UClass_AFGMinimapCaptureActor_Statics::NewProp_mHeightDataResolution_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGMinimapCaptureActor_Statics::NewProp_mHeightDataResolution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGMinimapCaptureActor_Statics::NewProp_mWaterDepthBufferMultiplier_MetaData[] = {
		{ "Category", "Minimap Height" },
		{ "ModuleRelativePath", "FGMinimapCaptureActor.h" },
		{ "ToolTip", "Decides how big the buffer between \"no water\"-areas and the deepest water-area is" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGMinimapCaptureActor_Statics::NewProp_mWaterDepthBufferMultiplier = { "mWaterDepthBufferMultiplier", nullptr, (EPropertyFlags)0x0010000800000801, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGMinimapCaptureActor, mWaterDepthBufferMultiplier), METADATA_PARAMS(Z_Construct_UClass_AFGMinimapCaptureActor_Statics::NewProp_mWaterDepthBufferMultiplier_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGMinimapCaptureActor_Statics::NewProp_mWaterDepthBufferMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGMinimapCaptureActor_Statics::NewProp_mWaterMaxDepth_MetaData[] = {
		{ "Category", "Minimap Height" },
		{ "ModuleRelativePath", "FGMinimapCaptureActor.h" },
		{ "ToolTip", "The max water depth considered, everything deeper than this will be clamped to this value" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGMinimapCaptureActor_Statics::NewProp_mWaterMaxDepth = { "mWaterMaxDepth", nullptr, (EPropertyFlags)0x0010000800000801, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGMinimapCaptureActor, mWaterMaxDepth), METADATA_PARAMS(Z_Construct_UClass_AFGMinimapCaptureActor_Statics::NewProp_mWaterMaxDepth_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGMinimapCaptureActor_Statics::NewProp_mWaterMaxDepth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGMinimapCaptureActor_Statics::NewProp_mShowDepthOnWaterMap_MetaData[] = {
		{ "Category", "Minimap Height" },
		{ "ModuleRelativePath", "FGMinimapCaptureActor.h" },
		{ "ToolTip", "Show depth on the water map" },
	};
#endif
	void Z_Construct_UClass_AFGMinimapCaptureActor_Statics::NewProp_mShowDepthOnWaterMap_SetBit(void* Obj)
	{
		((AFGMinimapCaptureActor*)Obj)->mShowDepthOnWaterMap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGMinimapCaptureActor_Statics::NewProp_mShowDepthOnWaterMap = { "mShowDepthOnWaterMap", nullptr, (EPropertyFlags)0x0010000800000801, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFGMinimapCaptureActor), &Z_Construct_UClass_AFGMinimapCaptureActor_Statics::NewProp_mShowDepthOnWaterMap_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGMinimapCaptureActor_Statics::NewProp_mShowDepthOnWaterMap_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGMinimapCaptureActor_Statics::NewProp_mShowDepthOnWaterMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGMinimapCaptureActor_Statics::NewProp_mLayersForTerrain_MetaData[] = {
		{ "Category", "Minimap Height" },
		{ "ModuleRelativePath", "FGMinimapCaptureActor.h" },
		{ "ToolTip", "Divides the terrain height map into the given amount of layers" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFGMinimapCaptureActor_Statics::NewProp_mLayersForTerrain = { "mLayersForTerrain", nullptr, (EPropertyFlags)0x0010000800000801, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGMinimapCaptureActor, mLayersForTerrain), METADATA_PARAMS(Z_Construct_UClass_AFGMinimapCaptureActor_Statics::NewProp_mLayersForTerrain_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGMinimapCaptureActor_Statics::NewProp_mLayersForTerrain_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGMinimapCaptureActor_Statics::NewProp_mIgnoreUserData_MetaData[] = {
		{ "Category", "Minimap Height" },
		{ "ModuleRelativePath", "FGMinimapCaptureActor.h" },
		{ "ToolTip", "Should we ignore the userdata set on static meshes, all static meshes will be considered for the height data" },
	};
#endif
	void Z_Construct_UClass_AFGMinimapCaptureActor_Statics::NewProp_mIgnoreUserData_SetBit(void* Obj)
	{
		((AFGMinimapCaptureActor*)Obj)->mIgnoreUserData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGMinimapCaptureActor_Statics::NewProp_mIgnoreUserData = { "mIgnoreUserData", nullptr, (EPropertyFlags)0x0010000800000801, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFGMinimapCaptureActor), &Z_Construct_UClass_AFGMinimapCaptureActor_Statics::NewProp_mIgnoreUserData_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGMinimapCaptureActor_Statics::NewProp_mIgnoreUserData_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGMinimapCaptureActor_Statics::NewProp_mIgnoreUserData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGMinimapCaptureActor_Statics::NewProp_mIncludeFoliage_MetaData[] = {
		{ "Category", "Minimap Height" },
		{ "ModuleRelativePath", "FGMinimapCaptureActor.h" },
		{ "ToolTip", "Do we want the foliage to be considered for the height data generation?" },
	};
#endif
	void Z_Construct_UClass_AFGMinimapCaptureActor_Statics::NewProp_mIncludeFoliage_SetBit(void* Obj)
	{
		((AFGMinimapCaptureActor*)Obj)->mIncludeFoliage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGMinimapCaptureActor_Statics::NewProp_mIncludeFoliage = { "mIncludeFoliage", nullptr, (EPropertyFlags)0x0010000800000801, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFGMinimapCaptureActor), &Z_Construct_UClass_AFGMinimapCaptureActor_Statics::NewProp_mIncludeFoliage_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGMinimapCaptureActor_Statics::NewProp_mIncludeFoliage_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGMinimapCaptureActor_Statics::NewProp_mIncludeFoliage_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGMinimapCaptureActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGMinimapCaptureActor_Statics::NewProp_mMapAreaTexture,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGMinimapCaptureActor_Statics::NewProp_mHeightDataResolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGMinimapCaptureActor_Statics::NewProp_mWaterDepthBufferMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGMinimapCaptureActor_Statics::NewProp_mWaterMaxDepth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGMinimapCaptureActor_Statics::NewProp_mShowDepthOnWaterMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGMinimapCaptureActor_Statics::NewProp_mLayersForTerrain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGMinimapCaptureActor_Statics::NewProp_mIgnoreUserData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGMinimapCaptureActor_Statics::NewProp_mIncludeFoliage,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGMinimapCaptureActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGMinimapCaptureActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGMinimapCaptureActor_Statics::ClassParams = {
		&AFGMinimapCaptureActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFGMinimapCaptureActor_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AFGMinimapCaptureActor_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AFGMinimapCaptureActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGMinimapCaptureActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGMinimapCaptureActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGMinimapCaptureActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGMinimapCaptureActor, 3851284785);
	template<> FACTORYGAME_API UClass* StaticClass<AFGMinimapCaptureActor>()
	{
		return AFGMinimapCaptureActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGMinimapCaptureActor(Z_Construct_UClass_AFGMinimapCaptureActor, &AFGMinimapCaptureActor::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGMinimapCaptureActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGMinimapCaptureActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
