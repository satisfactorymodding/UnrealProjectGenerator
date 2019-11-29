// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGVersionFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGVersionFunctionLibrary() {}
// Cross Module References
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_EGameVersion();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGVersionFunctionLibrary_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGVersionFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGVersionFunctionLibrary_GetGameVersion();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGVersionFunctionLibrary_GetVersionString();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGVersionFunctionLibrary_IsPublicBuild();
// End Cross Module References
	static UEnum* EGameVersion_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FactoryGame_EGameVersion, Z_Construct_UPackage__Script_FactoryGame(), TEXT("EGameVersion"));
		}
		return Singleton;
	}
	template<> FACTORYGAME_API UEnum* StaticEnum<EGameVersion>()
	{
		return EGameVersion_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGameVersion(EGameVersion_StaticEnum, TEXT("/Script/FactoryGame"), TEXT("EGameVersion"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FactoryGame_EGameVersion_Hash() { return 2923479397U; }
	UEnum* Z_Construct_UEnum_FactoryGame_EGameVersion()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGameVersion"), 0, Get_Z_Construct_UEnum_FactoryGame_EGameVersion_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGameVersion::GV_Main", (int64)EGameVersion::GV_Main },
				{ "EGameVersion::GV_Experimental", (int64)EGameVersion::GV_Experimental },
				{ "EGameVersion::GV_Other", (int64)EGameVersion::GV_Other },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "GV_Experimental.DisplayName", "Experimental" },
				{ "GV_Main.DisplayName", "Main" },
				{ "GV_Other.DisplayName", "Other" },
				{ "ModuleRelativePath", "FGVersionFunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FactoryGame,
				nullptr,
				"EGameVersion",
				"EGameVersion",
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
	void UFGVersionFunctionLibrary::StaticRegisterNativesUFGVersionFunctionLibrary()
	{
		UClass* Class = UFGVersionFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGameVersion", &UFGVersionFunctionLibrary::execGetGameVersion },
			{ "GetVersionString", &UFGVersionFunctionLibrary::execGetVersionString },
			{ "IsPublicBuild", &UFGVersionFunctionLibrary::execIsPublicBuild },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGVersionFunctionLibrary_GetGameVersion_Statics
	{
		struct FGVersionFunctionLibrary_eventGetGameVersion_Parms
		{
			EGameVersion ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFGVersionFunctionLibrary_GetGameVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGVersionFunctionLibrary_eventGetGameVersion_Parms, ReturnValue), Z_Construct_UEnum_FactoryGame_EGameVersion, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFGVersionFunctionLibrary_GetGameVersion_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGVersionFunctionLibrary_GetGameVersion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGVersionFunctionLibrary_GetGameVersion_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGVersionFunctionLibrary_GetGameVersion_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGVersionFunctionLibrary_GetGameVersion_Statics::Function_MetaDataParams[] = {
		{ "Category", "Development" },
		{ "ModuleRelativePath", "FGVersionFunctionLibrary.h" },
		{ "ToolTip", "Get what version of the game we are running" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGVersionFunctionLibrary_GetGameVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGVersionFunctionLibrary, nullptr, "GetGameVersion", sizeof(FGVersionFunctionLibrary_eventGetGameVersion_Parms), Z_Construct_UFunction_UFGVersionFunctionLibrary_GetGameVersion_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGVersionFunctionLibrary_GetGameVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGVersionFunctionLibrary_GetGameVersion_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGVersionFunctionLibrary_GetGameVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGVersionFunctionLibrary_GetGameVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGVersionFunctionLibrary_GetGameVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGVersionFunctionLibrary_GetVersionString_Statics
	{
		struct FGVersionFunctionLibrary_eventGetVersionString_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFGVersionFunctionLibrary_GetVersionString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGVersionFunctionLibrary_eventGetVersionString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGVersionFunctionLibrary_GetVersionString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGVersionFunctionLibrary_GetVersionString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGVersionFunctionLibrary_GetVersionString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Version" },
		{ "ModuleRelativePath", "FGVersionFunctionLibrary.h" },
		{ "ToolTip", "Get a version string to show to the user" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGVersionFunctionLibrary_GetVersionString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGVersionFunctionLibrary, nullptr, "GetVersionString", sizeof(FGVersionFunctionLibrary_eventGetVersionString_Parms), Z_Construct_UFunction_UFGVersionFunctionLibrary_GetVersionString_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGVersionFunctionLibrary_GetVersionString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGVersionFunctionLibrary_GetVersionString_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGVersionFunctionLibrary_GetVersionString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGVersionFunctionLibrary_GetVersionString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGVersionFunctionLibrary_GetVersionString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGVersionFunctionLibrary_IsPublicBuild_Statics
	{
		struct FGVersionFunctionLibrary_eventIsPublicBuild_Parms
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
	void Z_Construct_UFunction_UFGVersionFunctionLibrary_IsPublicBuild_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGVersionFunctionLibrary_eventIsPublicBuild_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGVersionFunctionLibrary_IsPublicBuild_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGVersionFunctionLibrary_eventIsPublicBuild_Parms), &Z_Construct_UFunction_UFGVersionFunctionLibrary_IsPublicBuild_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGVersionFunctionLibrary_IsPublicBuild_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGVersionFunctionLibrary_IsPublicBuild_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGVersionFunctionLibrary_IsPublicBuild_Statics::Function_MetaDataParams[] = {
		{ "Category", "Version" },
		{ "ModuleRelativePath", "FGVersionFunctionLibrary.h" },
		{ "ToolTip", "Returns true if this build is a public build (ie, consumable for the public)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGVersionFunctionLibrary_IsPublicBuild_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGVersionFunctionLibrary, nullptr, "IsPublicBuild", sizeof(FGVersionFunctionLibrary_eventIsPublicBuild_Parms), Z_Construct_UFunction_UFGVersionFunctionLibrary_IsPublicBuild_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGVersionFunctionLibrary_IsPublicBuild_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGVersionFunctionLibrary_IsPublicBuild_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGVersionFunctionLibrary_IsPublicBuild_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGVersionFunctionLibrary_IsPublicBuild()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGVersionFunctionLibrary_IsPublicBuild_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGVersionFunctionLibrary_NoRegister()
	{
		return UFGVersionFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UFGVersionFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGVersionFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGVersionFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGVersionFunctionLibrary_GetGameVersion, "GetGameVersion" }, // 1009863348
		{ &Z_Construct_UFunction_UFGVersionFunctionLibrary_GetVersionString, "GetVersionString" }, // 2282497911
		{ &Z_Construct_UFunction_UFGVersionFunctionLibrary_IsPublicBuild, "IsPublicBuild" }, // 2658119146
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGVersionFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FGVersionFunctionLibrary.h" },
		{ "ModuleRelativePath", "FGVersionFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGVersionFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGVersionFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGVersionFunctionLibrary_Statics::ClassParams = {
		&UFGVersionFunctionLibrary::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFGVersionFunctionLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGVersionFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGVersionFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGVersionFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGVersionFunctionLibrary, 2922513289);
	template<> FACTORYGAME_API UClass* StaticClass<UFGVersionFunctionLibrary>()
	{
		return UFGVersionFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGVersionFunctionLibrary(Z_Construct_UClass_UFGVersionFunctionLibrary, &UFGVersionFunctionLibrary::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGVersionFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGVersionFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
