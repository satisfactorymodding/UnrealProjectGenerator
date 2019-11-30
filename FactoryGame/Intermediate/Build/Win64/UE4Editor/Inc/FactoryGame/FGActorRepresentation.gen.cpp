// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGActorRepresentation.h"
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
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECompassViewDistance(ECompassViewDistance_StaticEnum, TEXT("/Script/FactoryGame"), TEXT("ECompassViewDistance"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FactoryGame_ECompassViewDistance_CRC() { return 3317992850U; }
	UEnum* Z_Construct_UEnum_FactoryGame_ECompassViewDistance()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECompassViewDistance"), 0, Get_Z_Construct_UEnum_FactoryGame_ECompassViewDistance_CRC(), false);
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
				{ "ModuleRelativePath", "Public/FGActorRepresentation.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FactoryGame,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ECompassViewDistance",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ECompassViewDistance",
				Enumerators,
				ARRAY_COUNT(Enumerators),
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
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFogOfWarRevealType(EFogOfWarRevealType_StaticEnum, TEXT("/Script/FactoryGame"), TEXT("EFogOfWarRevealType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FactoryGame_EFogOfWarRevealType_CRC() { return 2277169737U; }
	UEnum* Z_Construct_UEnum_FactoryGame_EFogOfWarRevealType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFogOfWarRevealType"), 0, Get_Z_Construct_UEnum_FactoryGame_EFogOfWarRevealType_CRC(), false);
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
				{ "ModuleRelativePath", "Public/FGActorRepresentation.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FactoryGame,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EFogOfWarRevealType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EFogOfWarRevealType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
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
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERepresentationType(ERepresentationType_StaticEnum, TEXT("/Script/FactoryGame"), TEXT("ERepresentationType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FactoryGame_ERepresentationType_CRC() { return 18233785U; }
	UEnum* Z_Construct_UEnum_FactoryGame_ERepresentationType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERepresentationType"), 0, Get_Z_Construct_UEnum_FactoryGame_ERepresentationType_CRC(), false);
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
				{ "ModuleRelativePath", "Public/FGActorRepresentation.h" },
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
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ERepresentationType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ERepresentationType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGActorRepresentation_GetActorLocation_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGActorRepresentation_eventGetActorLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGActorRepresentation_GetActorLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGActorRepresentation_GetActorLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGActorRepresentation_GetActorLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Representation" },
		{ "ModuleRelativePath", "Public/FGActorRepresentation.h" },
		{ "ToolTip", "Get the location of the represented actor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGActorRepresentation_GetActorLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGActorRepresentation, "GetActorLocation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(FGActorRepresentation_eventGetActorLocation_Parms), Z_Construct_UFunction_UFGActorRepresentation_GetActorLocation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGActorRepresentation_GetActorLocation_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGActorRepresentation_GetActorLocation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGActorRepresentation_GetActorLocation_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGActorRepresentation_GetActorRotation_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGActorRepresentation_eventGetActorRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGActorRepresentation_GetActorRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGActorRepresentation_GetActorRotation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGActorRepresentation_GetActorRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Representation" },
		{ "ModuleRelativePath", "Public/FGActorRepresentation.h" },
		{ "ToolTip", "Get the rotation of the represented actor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGActorRepresentation_GetActorRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGActorRepresentation, "GetActorRotation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(FGActorRepresentation_eventGetActorRotation_Parms), Z_Construct_UFunction_UFGActorRepresentation_GetActorRotation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGActorRepresentation_GetActorRotation_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGActorRepresentation_GetActorRotation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGActorRepresentation_GetActorRotation_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFGActorRepresentation_GetCompassViewDistance_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Enum, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGActorRepresentation_eventGetCompassViewDistance_Parms, ReturnValue), Z_Construct_UEnum_FactoryGame_ECompassViewDistance, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFGActorRepresentation_GetCompassViewDistance_Statics::NewProp_ReturnValue_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGActorRepresentation_GetCompassViewDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGActorRepresentation_GetCompassViewDistance_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGActorRepresentation_GetCompassViewDistance_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGActorRepresentation_GetCompassViewDistance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Representation" },
		{ "ModuleRelativePath", "Public/FGActorRepresentation.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGActorRepresentation_GetCompassViewDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGActorRepresentation, "GetCompassViewDistance", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGActorRepresentation_eventGetCompassViewDistance_Parms), Z_Construct_UFunction_UFGActorRepresentation_GetCompassViewDistance_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGActorRepresentation_GetCompassViewDistance_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGActorRepresentation_GetCompassViewDistance_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGActorRepresentation_GetCompassViewDistance_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGActorRepresentation_GetFogOfWarRevealRadius_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGActorRepresentation_eventGetFogOfWarRevealRadius_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGActorRepresentation_GetFogOfWarRevealRadius_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGActorRepresentation_GetFogOfWarRevealRadius_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGActorRepresentation_GetFogOfWarRevealRadius_Statics::Function_MetaDataParams[] = {
		{ "Category", "Representation" },
		{ "ModuleRelativePath", "Public/FGActorRepresentation.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGActorRepresentation_GetFogOfWarRevealRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGActorRepresentation, "GetFogOfWarRevealRadius", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGActorRepresentation_eventGetFogOfWarRevealRadius_Parms), Z_Construct_UFunction_UFGActorRepresentation_GetFogOfWarRevealRadius_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGActorRepresentation_GetFogOfWarRevealRadius_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGActorRepresentation_GetFogOfWarRevealRadius_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGActorRepresentation_GetFogOfWarRevealRadius_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFGActorRepresentation_GetFogOfWarRevealType_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Enum, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGActorRepresentation_eventGetFogOfWarRevealType_Parms, ReturnValue), Z_Construct_UEnum_FactoryGame_EFogOfWarRevealType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFGActorRepresentation_GetFogOfWarRevealType_Statics::NewProp_ReturnValue_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGActorRepresentation_GetFogOfWarRevealType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGActorRepresentation_GetFogOfWarRevealType_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGActorRepresentation_GetFogOfWarRevealType_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGActorRepresentation_GetFogOfWarRevealType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Representation" },
		{ "ModuleRelativePath", "Public/FGActorRepresentation.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGActorRepresentation_GetFogOfWarRevealType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGActorRepresentation, "GetFogOfWarRevealType", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGActorRepresentation_eventGetFogOfWarRevealType_Parms), Z_Construct_UFunction_UFGActorRepresentation_GetFogOfWarRevealType_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGActorRepresentation_GetFogOfWarRevealType_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGActorRepresentation_GetFogOfWarRevealType_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGActorRepresentation_GetFogOfWarRevealType_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGActorRepresentation_GetIsTemporary_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGActorRepresentation_eventGetIsTemporary_Parms), &Z_Construct_UFunction_UFGActorRepresentation_GetIsTemporary_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGActorRepresentation_GetIsTemporary_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGActorRepresentation_GetIsTemporary_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGActorRepresentation_GetIsTemporary_Statics::Function_MetaDataParams[] = {
		{ "Category", "Representation" },
		{ "ModuleRelativePath", "Public/FGActorRepresentation.h" },
		{ "ToolTip", "If this actor representation is temporary or not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGActorRepresentation_GetIsTemporary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGActorRepresentation, "GetIsTemporary", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGActorRepresentation_eventGetIsTemporary_Parms), Z_Construct_UFunction_UFGActorRepresentation_GetIsTemporary_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGActorRepresentation_GetIsTemporary_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGActorRepresentation_GetIsTemporary_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGActorRepresentation_GetIsTemporary_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGActorRepresentation_GetRealActor_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGActorRepresentation_eventGetRealActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGActorRepresentation_GetRealActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGActorRepresentation_GetRealActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGActorRepresentation_GetRealActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Representation" },
		{ "ModuleRelativePath", "Public/FGActorRepresentation.h" },
		{ "ToolTip", "Get the Real actor we represent, might not be relevant on client" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGActorRepresentation_GetRealActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGActorRepresentation, "GetRealActor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGActorRepresentation_eventGetRealActor_Parms), Z_Construct_UFunction_UFGActorRepresentation_GetRealActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGActorRepresentation_GetRealActor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGActorRepresentation_GetRealActor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGActorRepresentation_GetRealActor_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationColor_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGActorRepresentation_eventGetRepresentationColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Representation" },
		{ "ModuleRelativePath", "Public/FGActorRepresentation.h" },
		{ "ToolTip", "This is the color to render in the compass" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGActorRepresentation, "GetRepresentationColor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(FGActorRepresentation_eventGetRepresentationColor_Parms), Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationColor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationColor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationColor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationColor_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationText_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGActorRepresentation_eventGetRepresentationText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Representation" },
		{ "ModuleRelativePath", "Public/FGActorRepresentation.h" },
		{ "ToolTip", "This is the text to render in the compass" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGActorRepresentation, "GetRepresentationText", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGActorRepresentation_eventGetRepresentationText_Parms), Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationText_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationText_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationText_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationText_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationTexture_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGActorRepresentation_eventGetRepresentationTexture_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Representation" },
		{ "ModuleRelativePath", "Public/FGActorRepresentation.h" },
		{ "ToolTip", "This is the image to render in the compass" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGActorRepresentation, "GetRepresentationTexture", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGActorRepresentation_eventGetRepresentationTexture_Parms), Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationTexture_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationTexture_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationTexture_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationTexture_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationType_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Enum, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGActorRepresentation_eventGetRepresentationType_Parms, ReturnValue), Z_Construct_UEnum_FactoryGame_ERepresentationType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationType_Statics::NewProp_ReturnValue_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationType_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationType_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Representation" },
		{ "ModuleRelativePath", "Public/FGActorRepresentation.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGActorRepresentation, "GetRepresentationType", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGActorRepresentation_eventGetRepresentationType_Parms), Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationType_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationType_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationType_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationType_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGActorRepresentation_GetShouldShowInCompass_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGActorRepresentation_eventGetShouldShowInCompass_Parms), &Z_Construct_UFunction_UFGActorRepresentation_GetShouldShowInCompass_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGActorRepresentation_GetShouldShowInCompass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGActorRepresentation_GetShouldShowInCompass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGActorRepresentation_GetShouldShowInCompass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Representation" },
		{ "ModuleRelativePath", "Public/FGActorRepresentation.h" },
		{ "ToolTip", "If this should be shown in the compass or not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGActorRepresentation_GetShouldShowInCompass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGActorRepresentation, "GetShouldShowInCompass", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGActorRepresentation_eventGetShouldShowInCompass_Parms), Z_Construct_UFunction_UFGActorRepresentation_GetShouldShowInCompass_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGActorRepresentation_GetShouldShowInCompass_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGActorRepresentation_GetShouldShowInCompass_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGActorRepresentation_GetShouldShowInCompass_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGActorRepresentation_GetShouldShowOnMap_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGActorRepresentation_eventGetShouldShowOnMap_Parms), &Z_Construct_UFunction_UFGActorRepresentation_GetShouldShowOnMap_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGActorRepresentation_GetShouldShowOnMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGActorRepresentation_GetShouldShowOnMap_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGActorRepresentation_GetShouldShowOnMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "Representation" },
		{ "ModuleRelativePath", "Public/FGActorRepresentation.h" },
		{ "ToolTip", "If this should be shown on the map or not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGActorRepresentation_GetShouldShowOnMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGActorRepresentation, "GetShouldShowOnMap", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGActorRepresentation_eventGetShouldShowOnMap_Parms), Z_Construct_UFunction_UFGActorRepresentation_GetShouldShowOnMap_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGActorRepresentation_GetShouldShowOnMap_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGActorRepresentation_GetShouldShowOnMap_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGActorRepresentation_GetShouldShowOnMap_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGActorRepresentation_IsActorStatic_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGActorRepresentation_eventIsActorStatic_Parms), &Z_Construct_UFunction_UFGActorRepresentation_IsActorStatic_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGActorRepresentation_IsActorStatic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGActorRepresentation_IsActorStatic_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGActorRepresentation_IsActorStatic_Statics::Function_MetaDataParams[] = {
		{ "Category", "Representation" },
		{ "ModuleRelativePath", "Public/FGActorRepresentation.h" },
		{ "ToolTip", "Is this the represented actor static or not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGActorRepresentation_IsActorStatic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGActorRepresentation, "IsActorStatic", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGActorRepresentation_eventIsActorStatic_Parms), Z_Construct_UFunction_UFGActorRepresentation_IsActorStatic_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGActorRepresentation_IsActorStatic_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGActorRepresentation_IsActorStatic_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGActorRepresentation_IsActorStatic_Statics::Function_MetaDataParams)) };
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
		{ "ModuleRelativePath", "Public/FGActorRepresentation.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGActorRepresentation_OnRep_ActorRepresentationUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGActorRepresentation, "OnRep_ActorRepresentationUpdated", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGActorRepresentation_OnRep_ActorRepresentationUpdated_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGActorRepresentation_OnRep_ActorRepresentationUpdated_Statics::Function_MetaDataParams)) };
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
		{ "ModuleRelativePath", "Public/FGActorRepresentation.h" },
		{ "ToolTip", "Repnotifies" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGActorRepresentation_OnRep_ShouldShowInCompass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGActorRepresentation, "OnRep_ShouldShowInCompass", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGActorRepresentation_OnRep_ShouldShowInCompass_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGActorRepresentation_OnRep_ShouldShowInCompass_Statics::Function_MetaDataParams)) };
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
		{ "ModuleRelativePath", "Public/FGActorRepresentation.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGActorRepresentation_OnRep_ShouldShowOnMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGActorRepresentation, "OnRep_ShouldShowOnMap", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGActorRepresentation_OnRep_ShouldShowOnMap_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGActorRepresentation_OnRep_ShouldShowOnMap_Statics::Function_MetaDataParams)) };
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
		{ &Z_Construct_UFunction_UFGActorRepresentation_GetActorLocation, "GetActorLocation" }, // 2283899967
		{ &Z_Construct_UFunction_UFGActorRepresentation_GetActorRotation, "GetActorRotation" }, // 1702926039
		{ &Z_Construct_UFunction_UFGActorRepresentation_GetCompassViewDistance, "GetCompassViewDistance" }, // 2500443045
		{ &Z_Construct_UFunction_UFGActorRepresentation_GetFogOfWarRevealRadius, "GetFogOfWarRevealRadius" }, // 4024167981
		{ &Z_Construct_UFunction_UFGActorRepresentation_GetFogOfWarRevealType, "GetFogOfWarRevealType" }, // 2661404787
		{ &Z_Construct_UFunction_UFGActorRepresentation_GetIsTemporary, "GetIsTemporary" }, // 32721778
		{ &Z_Construct_UFunction_UFGActorRepresentation_GetRealActor, "GetRealActor" }, // 2554585107
		{ &Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationColor, "GetRepresentationColor" }, // 2272771230
		{ &Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationText, "GetRepresentationText" }, // 3755692993
		{ &Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationTexture, "GetRepresentationTexture" }, // 2157781288
		{ &Z_Construct_UFunction_UFGActorRepresentation_GetRepresentationType, "GetRepresentationType" }, // 227039877
		{ &Z_Construct_UFunction_UFGActorRepresentation_GetShouldShowInCompass, "GetShouldShowInCompass" }, // 2512547467
		{ &Z_Construct_UFunction_UFGActorRepresentation_GetShouldShowOnMap, "GetShouldShowOnMap" }, // 2362310243
		{ &Z_Construct_UFunction_UFGActorRepresentation_IsActorStatic, "IsActorStatic" }, // 572471517
		{ &Z_Construct_UFunction_UFGActorRepresentation_OnRep_ActorRepresentationUpdated, "OnRep_ActorRepresentationUpdated" }, // 3304968183
		{ &Z_Construct_UFunction_UFGActorRepresentation_OnRep_ShouldShowInCompass, "OnRep_ShouldShowInCompass" }, // 3739439165
		{ &Z_Construct_UFunction_UFGActorRepresentation_OnRep_ShouldShowOnMap, "OnRep_ShouldShowOnMap" }, // 599079687
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGActorRepresentation_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FGActorRepresentation.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FGActorRepresentation.h" },
		{ "ToolTip", "This object represents an actor in the world. Used in the compass and the minimap." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mCompassViewDistance_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGActorRepresentation.h" },
		{ "ToolTip", "How far away this representation should be shown in the compass" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mCompassViewDistance = { UE4CodeGen_Private::EPropertyClass::Enum, "mCompassViewDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000100000020, 1, "OnRep_ActorRepresentationUpdated", STRUCT_OFFSET(UFGActorRepresentation, mCompassViewDistance), Z_Construct_UEnum_FactoryGame_ECompassViewDistance, METADATA_PARAMS(Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mCompassViewDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mCompassViewDistance_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mCompassViewDistance_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mShouldShowOnMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGActorRepresentation.h" },
		{ "ToolTip", "If this should be shown on the map or not" },
	};
#endif
	void Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mShouldShowOnMap_SetBit(void* Obj)
	{
		((UFGActorRepresentation*)Obj)->mShouldShowOnMap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mShouldShowOnMap = { UE4CodeGen_Private::EPropertyClass::Bool, "mShouldShowOnMap", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000100000020, 1, "OnRep_ShouldShowOnMap", sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UFGActorRepresentation), &Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mShouldShowOnMap_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mShouldShowOnMap_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mShouldShowOnMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mShouldShowInCompass_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGActorRepresentation.h" },
		{ "ToolTip", "If this should be shown in the compass or not" },
	};
#endif
	void Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mShouldShowInCompass_SetBit(void* Obj)
	{
		((UFGActorRepresentation*)Obj)->mShouldShowInCompass = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mShouldShowInCompass = { UE4CodeGen_Private::EPropertyClass::Bool, "mShouldShowInCompass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000100000020, 1, "OnRep_ShouldShowInCompass", sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UFGActorRepresentation), &Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mShouldShowInCompass_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mShouldShowInCompass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mShouldShowInCompass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mFogOfWarRevealRadius_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGActorRepresentation.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mFogOfWarRevealRadius = { UE4CodeGen_Private::EPropertyClass::Float, "mFogOfWarRevealRadius", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000100000020, 1, "OnRep_ActorRepresentationUpdated", STRUCT_OFFSET(UFGActorRepresentation, mFogOfWarRevealRadius), METADATA_PARAMS(Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mFogOfWarRevealRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mFogOfWarRevealRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mFogOfWarRevealType_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGActorRepresentation.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mFogOfWarRevealType = { UE4CodeGen_Private::EPropertyClass::Enum, "mFogOfWarRevealType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000100000020, 1, "OnRep_ActorRepresentationUpdated", STRUCT_OFFSET(UFGActorRepresentation, mFogOfWarRevealType), Z_Construct_UEnum_FactoryGame_EFogOfWarRevealType, METADATA_PARAMS(Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mFogOfWarRevealType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mFogOfWarRevealType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mFogOfWarRevealType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mRepresentationType_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGActorRepresentation.h" },
		{ "ToolTip", "This helps define how this actor representation should be presented" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mRepresentationType = { UE4CodeGen_Private::EPropertyClass::Enum, "mRepresentationType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000020, 1, nullptr, STRUCT_OFFSET(UFGActorRepresentation, mRepresentationType), Z_Construct_UEnum_FactoryGame_ERepresentationType, METADATA_PARAMS(Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mRepresentationType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mRepresentationType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mRepresentationType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mRepresentationColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGActorRepresentation.h" },
		{ "ToolTip", "This is the color used for the representation of this actor" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mRepresentationColor = { UE4CodeGen_Private::EPropertyClass::Struct, "mRepresentationColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000100000020, 1, "OnRep_ActorRepresentationUpdated", STRUCT_OFFSET(UFGActorRepresentation, mRepresentationColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mRepresentationColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mRepresentationColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mRepresentationText_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGActorRepresentation.h" },
		{ "ToolTip", "This is the text to show for this actor representation" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mRepresentationText = { UE4CodeGen_Private::EPropertyClass::Text, "mRepresentationText", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000100000020, 1, "OnRep_ActorRepresentationUpdated", STRUCT_OFFSET(UFGActorRepresentation, mRepresentationText), METADATA_PARAMS(Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mRepresentationText_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mRepresentationText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mRepresentationTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGActorRepresentation.h" },
		{ "ToolTip", "This is the texture to show for this actor representation" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mRepresentationTexture = { UE4CodeGen_Private::EPropertyClass::Object, "mRepresentationTexture", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000100000020, 1, "OnRep_ActorRepresentationUpdated", STRUCT_OFFSET(UFGActorRepresentation, mRepresentationTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mRepresentationTexture_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mRepresentationTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mIsStatic_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGActorRepresentation.h" },
		{ "ToolTip", "If the actor is static or can be moved" },
	};
#endif
	void Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mIsStatic_SetBit(void* Obj)
	{
		((UFGActorRepresentation*)Obj)->mIsStatic = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mIsStatic = { UE4CodeGen_Private::EPropertyClass::Bool, "mIsStatic", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000020, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UFGActorRepresentation), &Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mIsStatic_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mIsStatic_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mIsStatic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mActorRotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGActorRepresentation.h" },
		{ "ToolTip", "This is the actor rotation" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mActorRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "mActorRotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000020, 1, nullptr, STRUCT_OFFSET(UFGActorRepresentation, mActorRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mActorRotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mActorRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mActorLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGActorRepresentation.h" },
		{ "ToolTip", "This is the actor location" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mActorLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "mActorLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000020, 1, nullptr, STRUCT_OFFSET(UFGActorRepresentation, mActorLocation), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mActorLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mActorLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mRealActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGActorRepresentation.h" },
		{ "ToolTip", "This is the real actor that this representation represents" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mRealActor = { UE4CodeGen_Private::EPropertyClass::Object, "mRealActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000020, 1, nullptr, STRUCT_OFFSET(UFGActorRepresentation, mRealActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mRealActor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGActorRepresentation_Statics::NewProp_mRealActor_MetaData)) };
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
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UFGActorRepresentation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UFGActorRepresentation_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
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
	IMPLEMENT_CLASS(UFGActorRepresentation, 107162705);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGActorRepresentation(Z_Construct_UClass_UFGActorRepresentation, &UFGActorRepresentation::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGActorRepresentation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGActorRepresentation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
