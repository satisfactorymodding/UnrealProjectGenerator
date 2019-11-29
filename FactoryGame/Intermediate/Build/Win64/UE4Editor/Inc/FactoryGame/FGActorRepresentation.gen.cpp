// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGActorRepresentation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGActorRepresentation() {}
// Cross Module References
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_ECompassViewDistance();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_EFogOfWarRevealType();
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_ERepresentationType();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGActorRepresentation_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGActorRepresentation();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGActorRepresentation_GetActorLocation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGActorRepresentation_GetActorRotation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGActorRepresentation_GetCompassViewDistance();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGActorRepresentation_GetFogOfWarRevealRadius();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGActorRepresentation_GetFogOfWarRevealType();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGActorRepresentation_GetIsTemporary();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGActorRepresentation_GetRealActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationText();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationTexture();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationType();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGActorRepresentation_GetShouldShowInCompass();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGActorRepresentation_GetShouldShowOnMap();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGActorRepresentation_IsActorStatic();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGActorRepresentation_OnRep_ActorRepresentationUpdated();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGActorRepresentation_OnRep_ShouldShowInCompass();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGActorRepresentation_OnRep_ShouldShowOnMap();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize();
// End Cross Module References
	static UEnum* ECompassViewDistance_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FactoryGame_ECompassViewDistance, Z_Construct_UPackage__Script_FactoryGame(), TEXT("ECompassViewDistance"));
		}
		return Singleton;
	}
	template<> FACTORYGAME_API UEnum* StaticEnum<ECompassViewDistance>()
	{
		return ECompassViewDistance_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECompassViewDistance(ECompassViewDistance_StaticEnum, TEXT("/Script/FactoryGame"), TEXT("ECompassViewDistance"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FactoryGame_ECompassViewDistance_Hash() { return 2891115412U; }
	UEnum* Z_Construct_UEnum_FactoryGame_ECompassViewDistance()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECompassViewDistance"), 0, Get_Z_Construct_UEnum_FactoryGame_ECompassViewDistance_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECompassViewDistance::CVD_Off", (int64)ECompassViewDistance::CVD_Off },
				{ "ECompassViewDistance::CVD_Near", (int64)ECompassViewDistance::CVD_Near },
				{ "ECompassViewDistance::CVD_Mid", (int64)ECompassViewDistance::CVD_Mid },
				{ "ECompassViewDistance::CVD_Far", (int64)ECompassViewDistance::CVD_Far },
				{ "ECompassViewDistance::CVD_Always", (int64)ECompassViewDistance::CVD_Always },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CVD_Always.DisplayName", "Always" },
				{ "CVD_Far.DisplayName", "Far" },
				{ "CVD_Mid.DisplayName", "Mid" },
				{ "CVD_Near.DisplayName", "Near" },
				{ "CVD_Off.DisplayName", "Off" },
				{ "ModuleRelativePath", "FGActorRepresentation.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FactoryGame,
				nullptr,
				"ECompassViewDistance",
				"ECompassViewDistance",
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
	static UEnum* EFogOfWarRevealType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FactoryGame_EFogOfWarRevealType, Z_Construct_UPackage__Script_FactoryGame(), TEXT("EFogOfWarRevealType"));
		}
		return Singleton;
	}
	template<> FACTORYGAME_API UEnum* StaticEnum<EFogOfWarRevealType>()
	{
		return EFogOfWarRevealType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFogOfWarRevealType(EFogOfWarRevealType_StaticEnum, TEXT("/Script/FactoryGame"), TEXT("EFogOfWarRevealType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FactoryGame_EFogOfWarRevealType_Hash() { return 4052901499U; }
	UEnum* Z_Construct_UEnum_FactoryGame_EFogOfWarRevealType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFogOfWarRevealType"), 0, Get_Z_Construct_UEnum_FactoryGame_EFogOfWarRevealType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFogOfWarRevealType::FOWRT_None", (int64)EFogOfWarRevealType::FOWRT_None },
				{ "EFogOfWarRevealType::FOWRT_Static", (int64)EFogOfWarRevealType::FOWRT_Static },
				{ "EFogOfWarRevealType::FOWRT_Intermittent", (int64)EFogOfWarRevealType::FOWRT_Intermittent },
				{ "EFogOfWarRevealType::FOWRT_Dynamic", (int64)EFogOfWarRevealType::FOWRT_Dynamic },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "FOWRT_Dynamic.DisplayName", "Dynamic" },
				{ "FOWRT_Intermittent.DisplayName", "Intermittent" },
				{ "FOWRT_None.DisplayName", "None" },
				{ "FOWRT_Static.DisplayName", "Static" },
				{ "ModuleRelativePath", "FGActorRepresentation.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FactoryGame,
				nullptr,
				"EFogOfWarRevealType",
				"EFogOfWarRevealType",
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
	static UEnum* ERepresentationType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FactoryGame_ERepresentationType, Z_Construct_UPackage__Script_FactoryGame(), TEXT("ERepresentationType"));
		}
		return Singleton;
	}
	template<> FACTORYGAME_API UEnum* StaticEnum<ERepresentationType>()
	{
		return ERepresentationType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERepresentationType(ERepresentationType_StaticEnum, TEXT("/Script/FactoryGame"), TEXT("ERepresentationType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FactoryGame_ERepresentationType_Hash() { return 2495308741U; }
	UEnum* Z_Construct_UEnum_FactoryGame_ERepresentationType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERepresentationType"), 0, Get_Z_Construct_UEnum_FactoryGame_ERepresentationType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERepresentationType::RT_Default", (int64)ERepresentationType::RT_Default },
				{ "ERepresentationType::RT_Beacon", (int64)ERepresentationType::RT_Beacon },
				{ "ERepresentationType::RT_Crate", (int64)ERepresentationType::RT_Crate },
				{ "ERepresentationType::RT_Hub", (int64)ERepresentationType::RT_Hub },
				{ "ERepresentationType::RT_Ping", (int64)ERepresentationType::RT_Ping },
				{ "ERepresentationType::RT_Player", (int64)ERepresentationType::RT_Player },
				{ "ERepresentationType::RT_RadarTower", (int64)ERepresentationType::RT_RadarTower },
				{ "ERepresentationType::RT_Resource", (int64)ERepresentationType::RT_Resource },
				{ "ERepresentationType::RT_SpaceElevator", (int64)ERepresentationType::RT_SpaceElevator },
				{ "ERepresentationType::RT_StartingPod", (int64)ERepresentationType::RT_StartingPod },
				{ "ERepresentationType::RT_Train", (int64)ERepresentationType::RT_Train },
				{ "ERepresentationType::RT_TrainStation", (int64)ERepresentationType::RT_TrainStation },
				{ "ERepresentationType::RT_Vehicle", (int64)ERepresentationType::RT_Vehicle },
				{ "ERepresentationType::RT_VehicleDockingStation", (int64)ERepresentationType::RT_VehicleDockingStation },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "FGActorRepresentation.h" },
				{ "RT_Beacon.DisplayName", "Beacon" },
				{ "RT_Crate.DisplayName", "Crate" },
				{ "RT_Default.DisplayName", "Default" },
				{ "RT_Hub.DisplayName", "Hub" },
				{ "RT_Ping.DisplayName", "Ping" },
				{ "RT_Player.DisplayName", "Player" },
				{ "RT_RadarTower.DisplayName", "RadarTower" },
				{ "RT_Resource.DisplayName", "Resource" },
				{ "RT_SpaceElevator.DisplayName", "SpaceElevator" },
				{ "RT_StartingPod.DisplayName", "StartingPod" },
				{ "RT_Train.DisplayName", "Train" },
				{ "RT_TrainStation.DisplayName", "TrainStation" },
				{ "RT_Vehicle.DisplayName", "Vehicle" },
				{ "RT_VehicleDockingStation.DisplayName", "VehicleDockingStation" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FactoryGame,
				nullptr,
				"ERepresentationType",
				"ERepresentationType",
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
	void UFGActorRepresentation::StaticRegisterNativesUFGActorRepresentation()
	{
		UClass* Class = UFGActorRepresentation::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetActorLocation", &UFGActorRepresentation::execGetActorLocation },
			{ "GetActorRotation", &UFGActorRepresentation::execGetActorRotation },
			{ "GetCompassViewDistance", &UFGActorRepresentation::execGetCompassViewDistance },
			{ "GetFogOfWarRevealRadius", &UFGActorRepresentation::execGetFogOfWarRevealRadius },
			{ "GetFogOfWarRevealType", &UFGActorRepresentation::execGetFogOfWarRevealType },
			{ "GetIsTemporary", &UFGActorRepresentation::execGetIsTemporary },
			{ "GetRealActor", &UFGActorRepresentation::execGetRealActor },
			{ "GetRepresentationColor", &UFGActorRepresentation::execGetRepresentationColor },
			{ "GetRepresentationText", &UFGActorRepresentation::execGetRepresentationText },
			{ "GetRepresentationTexture", &UFGActorRepresentation::execGetRepresentationTexture },
			{ "GetRepresentationType", &UFGActorRepresentation::execGetRepresentationType },
			{ "GetShouldShowInCompass", &UFGActorRepresentation::execGetShouldShowInCompass },
			{ "GetShouldShowOnMap", &UFGActorRepresentation::execGetShouldShowOnMap },
			{ "IsActorStatic", &UFGActorRepresentation::execIsActorStatic },
			{ "OnRep_ActorRepresentationUpdated", &UFGActorRepresentation::execOnRep_ActorRepresentationUpdated },
			{ "OnRep_ShouldShowInCompass", &UFGActorRepresentation::execOnRep_ShouldShowInCompass },
			{ "OnRep_ShouldShowOnMap", &UFGActorRepresentation::execOnRep_ShouldShowOnMap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGActorRepresentation_GetActorLocation_Statics
	{
		struct FGActorRepresentation_eventGetActorLocation_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGActorRepresentation_GetActorLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGActorRepresentation_eventGetActorLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGActorRepresentation_GetActorLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGActorRepresentation_GetActorLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGActorRepresentation_GetActorLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Representation" },
		{ "ModuleRelativePath", "FGActorRepresentation.h" },
		{ "ToolTip", "Get the location of the represented actor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGActorRepresentation_GetActorLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGActorRepresentation, nullptr, "GetActorLocation", sizeof(FGActorRepresentation_eventGetActorLocation_Parms), Z_Construct_UFunction_UFGActorRepresentation_GetActorLocation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGActorRepresentation_GetActorLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGActorRepresentation_GetActorLocation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGActorRepresentation_GetActorLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGActorRepresentation_GetActorLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGActorRepresentation_GetActorLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGActorRepresentation_GetActorRotation_Statics
	{
		struct FGActorRepresentation_eventGetActorRotation_Parms
		{
			FRotator ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGActorRepresentation_GetActorRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGActorRepresentation_eventGetActorRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGActorRepresentation_GetActorRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGActorRepresentation_GetActorRotation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGActorRepresentation_GetActorRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Representation" },
		{ "ModuleRelativePath", "FGActorRepresentation.h" },
		{ "ToolTip", "Get the rotation of the represented actor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGActorRepresentation_GetActorRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGActorRepresentation, nullptr, "GetActorRotation", sizeof(FGActorRepresentation_eventGetActorRotation_Parms), Z_Construct_UFunction_UFGActorRepresentation_GetActorRotation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGActorRepresentation_GetActorRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGActorRepresentation_GetActorRotation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGActorRepresentation_GetActorRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGActorRepresentation_GetActorRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGActorRepresentation_GetActorRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGActorRepresentation_GetCompassViewDistance_Statics
	{
		struct FGActorRepresentation_eventGetCompassViewDistance_Parms
		{
			ECompassViewDistance ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFGActorRepresentation_GetCompassViewDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGActorRepresentation_eventGetCompassViewDistance_Parms, ReturnValue), Z_Construct_UEnum_FactoryGame_ECompassViewDistance, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFGActorRepresentation_GetCompassViewDistance_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGActorRepresentation_GetCompassViewDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGActorRepresentation_GetCompassViewDistance_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGActorRepresentation_GetCompassViewDistance_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGActorRepresentation_GetCompassViewDistance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Representation" },
		{ "ModuleRelativePath", "FGActorRepresentation.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGActorRepresentation_GetCompassViewDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGActorRepresentation, nullptr, "GetCompassViewDistance", sizeof(FGActorRepresentation_eventGetCompassViewDistance_Parms), Z_Construct_UFunction_UFGActorRepresentation_GetCompassViewDistance_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGActorRepresentation_GetCompassViewDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGActorRepresentation_GetCompassViewDistance_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGActorRepresentation_GetCompassViewDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGActorRepresentation_GetCompassViewDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGActorRepresentation_GetCompassViewDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGActorRepresentation_GetFogOfWarRevealRadius_Statics
	{
		struct FGActorRepresentation_eventGetFogOfWarRevealRadius_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGActorRepresentation_GetFogOfWarRevealRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGActorRepresentation_eventGetFogOfWarRevealRadius_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGActorRepresentation_GetFogOfWarRevealRadius_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGActorRepresentation_GetFogOfWarRevealRadius_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGActorRepresentation_GetFogOfWarRevealRadius_Statics::Function_MetaDataParams[] = {
		{ "Category", "Representation" },
		{ "ModuleRelativePath", "FGActorRepresentation.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGActorRepresentation_GetFogOfWarRevealRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGActorRepresentation, nullptr, "GetFogOfWarRevealRadius", sizeof(FGActorRepresentation_eventGetFogOfWarRevealRadius_Parms), Z_Construct_UFunction_UFGActorRepresentation_GetFogOfWarRevealRadius_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGActorRepresentation_GetFogOfWarRevealRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGActorRepresentation_GetFogOfWarRevealRadius_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGActorRepresentation_GetFogOfWarRevealRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGActorRepresentation_GetFogOfWarRevealRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGActorRepresentation_GetFogOfWarRevealRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGActorRepresentation_GetFogOfWarRevealType_Statics
	{
		struct FGActorRepresentation_eventGetFogOfWarRevealType_Parms
		{
			EFogOfWarRevealType ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFGActorRepresentation_GetFogOfWarRevealType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGActorRepresentation_eventGetFogOfWarRevealType_Parms, ReturnValue), Z_Construct_UEnum_FactoryGame_EFogOfWarRevealType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFGActorRepresentation_GetFogOfWarRevealType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGActorRepresentation_GetFogOfWarRevealType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGActorRepresentation_GetFogOfWarRevealType_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGActorRepresentation_GetFogOfWarRevealType_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGActorRepresentation_GetFogOfWarRevealType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Representation" },
		{ "ModuleRelativePath", "FGActorRepresentation.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGActorRepresentation_GetFogOfWarRevealType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGActorRepresentation, nullptr, "GetFogOfWarRevealType", sizeof(FGActorRepresentation_eventGetFogOfWarRevealType_Parms), Z_Construct_UFunction_UFGActorRepresentation_GetFogOfWarRevealType_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGActorRepresentation_GetFogOfWarRevealType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGActorRepresentation_GetFogOfWarRevealType_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGActorRepresentation_GetFogOfWarRevealType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGActorRepresentation_GetFogOfWarRevealType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGActorRepresentation_GetFogOfWarRevealType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGActorRepresentation_GetIsTemporary_Statics
	{
		struct FGActorRepresentation_eventGetIsTemporary_Parms
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
	void Z_Construct_UFunction_UFGActorRepresentation_GetIsTemporary_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGActorRepresentation_eventGetIsTemporary_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGActorRepresentation_GetIsTemporary_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGActorRepresentation_eventGetIsTemporary_Parms), &Z_Construct_UFunction_UFGActorRepresentation_GetIsTemporary_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGActorRepresentation_GetIsTemporary_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGActorRepresentation_GetIsTemporary_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGActorRepresentation_GetIsTemporary_Statics::Function_MetaDataParams[] = {
		{ "Category", "Representation" },
		{ "ModuleRelativePath", "FGActorRepresentation.h" },
		{ "ToolTip", "If this actor representation is temporary or not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGActorRepresentation_GetIsTemporary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGActorRepresentation, nullptr, "GetIsTemporary", sizeof(FGActorRepresentation_eventGetIsTemporary_Parms), Z_Construct_UFunction_UFGActorRepresentation_GetIsTemporary_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGActorRepresentation_GetIsTemporary_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGActorRepresentation_GetIsTemporary_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGActorRepresentation_GetIsTemporary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGActorRepresentation_GetIsTemporary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGActorRepresentation_GetIsTemporary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGActorRepresentation_GetRealActor_Statics
	{
		struct FGActorRepresentation_eventGetRealActor_Parms
		{
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGActorRepresentation_GetRealActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGActorRepresentation_eventGetRealActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGActorRepresentation_GetRealActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGActorRepresentation_GetRealActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGActorRepresentation_GetRealActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Representation" },
		{ "ModuleRelativePath", "FGActorRepresentation.h" },
		{ "ToolTip", "Get the Real actor we represent, might not be relevant on client" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGActorRepresentation_GetRealActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGActorRepresentation, nullptr, "GetRealActor", sizeof(FGActorRepresentation_eventGetRealActor_Parms), Z_Construct_UFunction_UFGActorRepresentation_GetRealActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGActorRepresentation_GetRealActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGActorRepresentation_GetRealActor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGActorRepresentation_GetRealActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGActorRepresentation_GetRealActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGActorRepresentation_GetRealActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationColor_Statics
	{
		struct FGActorRepresentation_eventGetRepresentationColor_Parms
		{
			FLinearColor ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGActorRepresentation_eventGetRepresentationColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Representation" },
		{ "ModuleRelativePath", "FGActorRepresentation.h" },
		{ "ToolTip", "This is the color to render in the compass" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGActorRepresentation, nullptr, "GetRepresentationColor", sizeof(FGActorRepresentation_eventGetRepresentationColor_Parms), Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationColor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationColor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationText_Statics
	{
		struct FGActorRepresentation_eventGetRepresentationText_Parms
		{
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGActorRepresentation_eventGetRepresentationText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Representation" },
		{ "ModuleRelativePath", "FGActorRepresentation.h" },
		{ "ToolTip", "This is the text to render in the compass" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGActorRepresentation, nullptr, "GetRepresentationText", sizeof(FGActorRepresentation_eventGetRepresentationText_Parms), Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationText_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationText_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationTexture_Statics
	{
		struct FGActorRepresentation_eventGetRepresentationTexture_Parms
		{
			UTexture2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGActorRepresentation_eventGetRepresentationTexture_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Representation" },
		{ "ModuleRelativePath", "FGActorRepresentation.h" },
		{ "ToolTip", "This is the image to render in the compass" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGActorRepresentation, nullptr, "GetRepresentationTexture", sizeof(FGActorRepresentation_eventGetRepresentationTexture_Parms), Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationTexture_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationTexture_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationType_Statics
	{
		struct FGActorRepresentation_eventGetRepresentationType_Parms
		{
			ERepresentationType ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGActorRepresentation_eventGetRepresentationType_Parms, ReturnValue), Z_Construct_UEnum_FactoryGame_ERepresentationType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationType_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationType_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Representation" },
		{ "ModuleRelativePath", "FGActorRepresentation.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGActorRepresentation, nullptr, "GetRepresentationType", sizeof(FGActorRepresentation_eventGetRepresentationType_Parms), Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationType_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationType_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGActorRepresentation_GetShouldShowInCompass_Statics
	{
		struct FGActorRepresentation_eventGetShouldShowInCompass_Parms
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
	void Z_Construct_UFunction_UFGActorRepresentation_GetShouldShowInCompass_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGActorRepresentation_eventGetShouldShowInCompass_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGActorRepresentation_GetShouldShowInCompass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGActorRepresentation_eventGetShouldShowInCompass_Parms), &Z_Construct_UFunction_UFGActorRepresentation_GetShouldShowInCompass_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGActorRepresentation_GetShouldShowInCompass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGActorRepresentation_GetShouldShowInCompass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGActorRepresentation_GetShouldShowInCompass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Representation" },
		{ "ModuleRelativePath", "FGActorRepresentation.h" },
		{ "ToolTip", "If this should be shown in the compass or not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGActorRepresentation_GetShouldShowInCompass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGActorRepresentation, nullptr, "GetShouldShowInCompass", sizeof(FGActorRepresentation_eventGetShouldShowInCompass_Parms), Z_Construct_UFunction_UFGActorRepresentation_GetShouldShowInCompass_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGActorRepresentation_GetShouldShowInCompass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGActorRepresentation_GetShouldShowInCompass_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGActorRepresentation_GetShouldShowInCompass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGActorRepresentation_GetShouldShowInCompass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGActorRepresentation_GetShouldShowInCompass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGActorRepresentation_GetShouldShowOnMap_Statics
	{
		struct FGActorRepresentation_eventGetShouldShowOnMap_Parms
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
	void Z_Construct_UFunction_UFGActorRepresentation_GetShouldShowOnMap_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGActorRepresentation_eventGetShouldShowOnMap_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGActorRepresentation_GetShouldShowOnMap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGActorRepresentation_eventGetShouldShowOnMap_Parms), &Z_Construct_UFunction_UFGActorRepresentation_GetShouldShowOnMap_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGActorRepresentation_GetShouldShowOnMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGActorRepresentation_GetShouldShowOnMap_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGActorRepresentation_GetShouldShowOnMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "Representation" },
		{ "ModuleRelativePath", "FGActorRepresentation.h" },
		{ "ToolTip", "If this should be shown on the map or not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGActorRepresentation_GetShouldShowOnMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGActorRepresentation, nullptr, "GetShouldShowOnMap", sizeof(FGActorRepresentation_eventGetShouldShowOnMap_Parms), Z_Construct_UFunction_UFGActorRepresentation_GetShouldShowOnMap_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGActorRepresentation_GetShouldShowOnMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGActorRepresentation_GetShouldShowOnMap_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGActorRepresentation_GetShouldShowOnMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGActorRepresentation_GetShouldShowOnMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGActorRepresentation_GetShouldShowOnMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGActorRepresentation_IsActorStatic_Statics
	{
		struct FGActorRepresentation_eventIsActorStatic_Parms
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
	void Z_Construct_UFunction_UFGActorRepresentation_IsActorStatic_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGActorRepresentation_eventIsActorStatic_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGActorRepresentation_IsActorStatic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGActorRepresentation_eventIsActorStatic_Parms), &Z_Construct_UFunction_UFGActorRepresentation_IsActorStatic_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGActorRepresentation_IsActorStatic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGActorRepresentation_IsActorStatic_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGActorRepresentation_IsActorStatic_Statics::Function_MetaDataParams[] = {
		{ "Category", "Representation" },
		{ "ModuleRelativePath", "FGActorRepresentation.h" },
		{ "ToolTip", "Is this the represented actor static or not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGActorRepresentation_IsActorStatic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGActorRepresentation, nullptr, "IsActorStatic", sizeof(FGActorRepresentation_eventIsActorStatic_Parms), Z_Construct_UFunction_UFGActorRepresentation_IsActorStatic_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGActorRepresentation_IsActorStatic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGActorRepresentation_IsActorStatic_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGActorRepresentation_IsActorStatic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGActorRepresentation_IsActorStatic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGActorRepresentation_IsActorStatic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGActorRepresentation_OnRep_ActorRepresentationUpdated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGActorRepresentation_OnRep_ActorRepresentationUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGActorRepresentation.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGActorRepresentation_OnRep_ActorRepresentationUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGActorRepresentation, nullptr, "OnRep_ActorRepresentationUpdated", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGActorRepresentation_OnRep_ActorRepresentationUpdated_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGActorRepresentation_OnRep_ActorRepresentationUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGActorRepresentation_OnRep_ActorRepresentationUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGActorRepresentation_OnRep_ActorRepresentationUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGActorRepresentation_OnRep_ShouldShowInCompass_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGActorRepresentation_OnRep_ShouldShowInCompass_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGActorRepresentation.h" },
		{ "ToolTip", "Repnotifies" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGActorRepresentation_OnRep_ShouldShowInCompass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGActorRepresentation, nullptr, "OnRep_ShouldShowInCompass", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGActorRepresentation_OnRep_ShouldShowInCompass_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGActorRepresentation_OnRep_ShouldShowInCompass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGActorRepresentation_OnRep_ShouldShowInCompass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGActorRepresentation_OnRep_ShouldShowInCompass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGActorRepresentation_OnRep_ShouldShowOnMap_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGActorRepresentation_OnRep_ShouldShowOnMap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGActorRepresentation.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGActorRepresentation_OnRep_ShouldShowOnMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGActorRepresentation, nullptr, "OnRep_ShouldShowOnMap", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGActorRepresentation_OnRep_ShouldShowOnMap_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGActorRepresentation_OnRep_ShouldShowOnMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGActorRepresentation_OnRep_ShouldShowOnMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGActorRepresentation_OnRep_ShouldShowOnMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGActorRepresentation_NoRegister()
	{
		return UFGActorRepresentation::StaticClass();
	}
	struct Z_Construct_UClass_UFGActorRepresentation_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCompassViewDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_mCompassViewDistance;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_mCompassViewDistance_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mShouldShowOnMap_MetaData[];
#endif
		static void NewProp_mShouldShowOnMap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mShouldShowOnMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mShouldShowInCompass_MetaData[];
#endif
		static void NewProp_mShouldShowInCompass_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mShouldShowInCompass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mFogOfWarRevealRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mFogOfWarRevealRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mFogOfWarRevealType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_mFogOfWarRevealType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_mFogOfWarRevealType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mRepresentationType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_mRepresentationType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_mRepresentationType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mRepresentationColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mRepresentationColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mRepresentationText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_mRepresentationText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mRepresentationTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mRepresentationTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mIsStatic_MetaData[];
#endif
		static void NewProp_mIsStatic_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mIsStatic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mActorRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mActorRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mActorLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mActorLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mRealActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mRealActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGActorRepresentation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGActorRepresentation_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGActorRepresentation_GetActorLocation, "GetActorLocation" }, // 875397806
		{ &Z_Construct_UFunction_UFGActorRepresentation_GetActorRotation, "GetActorRotation" }, // 62052916
		{ &Z_Construct_UFunction_UFGActorRepresentation_GetCompassViewDistance, "GetCompassViewDistance" }, // 3028716227
		{ &Z_Construct_UFunction_UFGActorRepresentation_GetFogOfWarRevealRadius, "GetFogOfWarRevealRadius" }, // 3611544963
		{ &Z_Construct_UFunction_UFGActorRepresentation_GetFogOfWarRevealType, "GetFogOfWarRevealType" }, // 656948652
		{ &Z_Construct_UFunction_UFGActorRepresentation_GetIsTemporary, "GetIsTemporary" }, // 2673709286
		{ &Z_Construct_UFunction_UFGActorRepresentation_GetRealActor, "GetRealActor" }, // 2533719915
		{ &Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationColor, "GetRepresentationColor" }, // 1914708683
		{ &Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationText, "GetRepresentationText" }, // 1561798526
		{ &Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationTexture, "GetRepresentationTexture" }, // 2738436004
		{ &Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationType, "GetRepresentationType" }, // 1881462266
		{ &Z_Construct_UFunction_UFGActorRepresentation_GetShouldShowInCompass, "GetShouldShowInCompass" }, // 3637676978
		{ &Z_Construct_UFunction_UFGActorRepresentation_GetShouldShowOnMap, "GetShouldShowOnMap" }, // 916581049
		{ &Z_Construct_UFunction_UFGActorRepresentation_IsActorStatic, "IsActorStatic" }, // 1585732670
		{ &Z_Construct_UFunction_UFGActorRepresentation_OnRep_ActorRepresentationUpdated, "OnRep_ActorRepresentationUpdated" }, // 1589422162
		{ &Z_Construct_UFunction_UFGActorRepresentation_OnRep_ShouldShowInCompass, "OnRep_ShouldShowInCompass" }, // 2769818968
		{ &Z_Construct_UFunction_UFGActorRepresentation_OnRep_ShouldShowOnMap, "OnRep_ShouldShowOnMap" }, // 2106894295
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGActorRepresentation_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FGActorRepresentation.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "FGActorRepresentation.h" },
		{ "ToolTip", "This object represents an actor in the world. Used in the compass and the minimap." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mCompassViewDistance_MetaData[] = {
		{ "ModuleRelativePath", "FGActorRepresentation.h" },
		{ "ToolTip", "How far away this representation should be shown in the compass" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mCompassViewDistance = { "mCompassViewDistance", "OnRep_ActorRepresentationUpdated", (EPropertyFlags)0x0040000100000020, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGActorRepresentation, mCompassViewDistance), Z_Construct_UEnum_FactoryGame_ECompassViewDistance, METADATA_PARAMS(Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mCompassViewDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mCompassViewDistance_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mCompassViewDistance_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mShouldShowOnMap_MetaData[] = {
		{ "ModuleRelativePath", "FGActorRepresentation.h" },
		{ "ToolTip", "If this should be shown on the map or not" },
	};
#endif
	void Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mShouldShowOnMap_SetBit(void* Obj)
	{
		((UFGActorRepresentation*)Obj)->mShouldShowOnMap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mShouldShowOnMap = { "mShouldShowOnMap", "OnRep_ShouldShowOnMap", (EPropertyFlags)0x0040000100000020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFGActorRepresentation), &Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mShouldShowOnMap_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mShouldShowOnMap_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mShouldShowOnMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mShouldShowInCompass_MetaData[] = {
		{ "ModuleRelativePath", "FGActorRepresentation.h" },
		{ "ToolTip", "If this should be shown in the compass or not" },
	};
#endif
	void Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mShouldShowInCompass_SetBit(void* Obj)
	{
		((UFGActorRepresentation*)Obj)->mShouldShowInCompass = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mShouldShowInCompass = { "mShouldShowInCompass", "OnRep_ShouldShowInCompass", (EPropertyFlags)0x0040000100000020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFGActorRepresentation), &Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mShouldShowInCompass_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mShouldShowInCompass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mShouldShowInCompass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mFogOfWarRevealRadius_MetaData[] = {
		{ "ModuleRelativePath", "FGActorRepresentation.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mFogOfWarRevealRadius = { "mFogOfWarRevealRadius", "OnRep_ActorRepresentationUpdated", (EPropertyFlags)0x0040000100000020, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGActorRepresentation, mFogOfWarRevealRadius), METADATA_PARAMS(Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mFogOfWarRevealRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mFogOfWarRevealRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mFogOfWarRevealType_MetaData[] = {
		{ "ModuleRelativePath", "FGActorRepresentation.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mFogOfWarRevealType = { "mFogOfWarRevealType", "OnRep_ActorRepresentationUpdated", (EPropertyFlags)0x0040000100000020, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGActorRepresentation, mFogOfWarRevealType), Z_Construct_UEnum_FactoryGame_EFogOfWarRevealType, METADATA_PARAMS(Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mFogOfWarRevealType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mFogOfWarRevealType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mFogOfWarRevealType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mRepresentationType_MetaData[] = {
		{ "ModuleRelativePath", "FGActorRepresentation.h" },
		{ "ToolTip", "This helps define how this actor representation should be presented" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mRepresentationType = { "mRepresentationType", nullptr, (EPropertyFlags)0x0040000000000020, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGActorRepresentation, mRepresentationType), Z_Construct_UEnum_FactoryGame_ERepresentationType, METADATA_PARAMS(Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mRepresentationType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mRepresentationType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mRepresentationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mRepresentationColor_MetaData[] = {
		{ "ModuleRelativePath", "FGActorRepresentation.h" },
		{ "ToolTip", "This is the color used for the representation of this actor" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mRepresentationColor = { "mRepresentationColor", "OnRep_ActorRepresentationUpdated", (EPropertyFlags)0x0040000100000020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGActorRepresentation, mRepresentationColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mRepresentationColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mRepresentationColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mRepresentationText_MetaData[] = {
		{ "ModuleRelativePath", "FGActorRepresentation.h" },
		{ "ToolTip", "This is the text to show for this actor representation" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mRepresentationText = { "mRepresentationText", "OnRep_ActorRepresentationUpdated", (EPropertyFlags)0x0040000100000020, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGActorRepresentation, mRepresentationText), METADATA_PARAMS(Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mRepresentationText_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mRepresentationText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mRepresentationTexture_MetaData[] = {
		{ "ModuleRelativePath", "FGActorRepresentation.h" },
		{ "ToolTip", "This is the texture to show for this actor representation" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mRepresentationTexture = { "mRepresentationTexture", "OnRep_ActorRepresentationUpdated", (EPropertyFlags)0x0040000100000020, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGActorRepresentation, mRepresentationTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mRepresentationTexture_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mRepresentationTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mIsStatic_MetaData[] = {
		{ "ModuleRelativePath", "FGActorRepresentation.h" },
		{ "ToolTip", "If the actor is static or can be moved" },
	};
#endif
	void Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mIsStatic_SetBit(void* Obj)
	{
		((UFGActorRepresentation*)Obj)->mIsStatic = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mIsStatic = { "mIsStatic", nullptr, (EPropertyFlags)0x0040000000000020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFGActorRepresentation), &Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mIsStatic_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mIsStatic_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mIsStatic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mActorRotation_MetaData[] = {
		{ "ModuleRelativePath", "FGActorRepresentation.h" },
		{ "ToolTip", "This is the actor rotation" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mActorRotation = { "mActorRotation", nullptr, (EPropertyFlags)0x0040000000000020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGActorRepresentation, mActorRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mActorRotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mActorRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mActorLocation_MetaData[] = {
		{ "ModuleRelativePath", "FGActorRepresentation.h" },
		{ "ToolTip", "This is the actor location" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mActorLocation = { "mActorLocation", nullptr, (EPropertyFlags)0x0040000000000020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGActorRepresentation, mActorLocation), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mActorLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mActorLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mRealActor_MetaData[] = {
		{ "ModuleRelativePath", "FGActorRepresentation.h" },
		{ "ToolTip", "This is the real actor that this representation represents" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mRealActor = { "mRealActor", nullptr, (EPropertyFlags)0x0040000000000020, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGActorRepresentation, mRealActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mRealActor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mRealActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGActorRepresentation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mCompassViewDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mCompassViewDistance_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mShouldShowOnMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mShouldShowInCompass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mFogOfWarRevealRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mFogOfWarRevealType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mFogOfWarRevealType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mRepresentationType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mRepresentationType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mRepresentationColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mRepresentationText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mRepresentationTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mIsStatic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mActorRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mActorLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mRealActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGActorRepresentation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGActorRepresentation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGActorRepresentation_Statics::ClassParams = {
		&UFGActorRepresentation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFGActorRepresentation_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UFGActorRepresentation_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFGActorRepresentation_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGActorRepresentation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGActorRepresentation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGActorRepresentation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGActorRepresentation, 791754851);
	template<> FACTORYGAME_API UClass* StaticClass<UFGActorRepresentation>()
	{
		return UFGActorRepresentation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGActorRepresentation(Z_Construct_UClass_UFGActorRepresentation, &UFGActorRepresentation::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGActorRepresentation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGActorRepresentation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
