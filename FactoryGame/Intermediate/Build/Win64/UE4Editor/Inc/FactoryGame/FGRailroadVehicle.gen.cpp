// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGRailroadVehicle.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGRailroadVehicle() {}
// Cross Module References
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_ERailroadVehicleCoupler();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGRailroadVehicle_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGRailroadVehicle();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGVehicle();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGRailroadVehicle_GetCoupledVehicleAt();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGRailroadVehicle_GetLength();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGRailroadVehicle_GetRailroadVehicleMovementComponent();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGRailroadVehicleMovementComponent_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGRailroadVehicle_GetTrackGraphID();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGRailroadVehicle_GetTrackPosition();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FRailroadTrackPosition();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGRailroadVehicle_GetTrain();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGTrain_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGRailroadVehicle_IsCoupledAt();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGRailroadVehicle_IsOrientationReversed();
// End Cross Module References
	static UEnum* ERailroadVehicleCoupler_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FactoryGame_ERailroadVehicleCoupler, Z_Construct_UPackage__Script_FactoryGame(), TEXT("ERailroadVehicleCoupler"));
		}
		return Singleton;
	}
	template<> FACTORYGAME_API UEnum* StaticEnum<ERailroadVehicleCoupler>()
	{
		return ERailroadVehicleCoupler_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERailroadVehicleCoupler(ERailroadVehicleCoupler_StaticEnum, TEXT("/Script/FactoryGame"), TEXT("ERailroadVehicleCoupler"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FactoryGame_ERailroadVehicleCoupler_Hash() { return 3925195273U; }
	UEnum* Z_Construct_UEnum_FactoryGame_ERailroadVehicleCoupler()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERailroadVehicleCoupler"), 0, Get_Z_Construct_UEnum_FactoryGame_ERailroadVehicleCoupler_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERailroadVehicleCoupler::RVC_FRONT", (int64)ERailroadVehicleCoupler::RVC_FRONT },
				{ "ERailroadVehicleCoupler::RVC_BACK", (int64)ERailroadVehicleCoupler::RVC_BACK },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/FGRailroadVehicle.h" },
				{ "RVC_BACK.DisplayName", "Back" },
				{ "RVC_FRONT.DisplayName", "Front" },
				{ "ToolTip", "Type of connections in the game." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FactoryGame,
				nullptr,
				"ERailroadVehicleCoupler",
				"ERailroadVehicleCoupler",
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
	void AFGRailroadVehicle::StaticRegisterNativesAFGRailroadVehicle()
	{
		UClass* Class = AFGRailroadVehicle::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCoupledVehicleAt", &AFGRailroadVehicle::execGetCoupledVehicleAt },
			{ "GetLength", &AFGRailroadVehicle::execGetLength },
			{ "GetRailroadVehicleMovementComponent", &AFGRailroadVehicle::execGetRailroadVehicleMovementComponent },
			{ "GetTrackGraphID", &AFGRailroadVehicle::execGetTrackGraphID },
			{ "GetTrackPosition", &AFGRailroadVehicle::execGetTrackPosition },
			{ "GetTrain", &AFGRailroadVehicle::execGetTrain },
			{ "IsCoupledAt", &AFGRailroadVehicle::execIsCoupledAt },
			{ "IsOrientationReversed", &AFGRailroadVehicle::execIsOrientationReversed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGRailroadVehicle_GetCoupledVehicleAt_Statics
	{
		struct FGRailroadVehicle_eventGetCoupledVehicleAt_Parms
		{
			ERailroadVehicleCoupler coupler;
			AFGRailroadVehicle* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_coupler;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_coupler_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGRailroadVehicle_GetCoupledVehicleAt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGRailroadVehicle_eventGetCoupledVehicleAt_Parms, ReturnValue), Z_Construct_UClass_AFGRailroadVehicle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFGRailroadVehicle_GetCoupledVehicleAt_Statics::NewProp_coupler = { "coupler", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGRailroadVehicle_eventGetCoupledVehicleAt_Parms, coupler), Z_Construct_UEnum_FactoryGame_ERailroadVehicleCoupler, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFGRailroadVehicle_GetCoupledVehicleAt_Statics::NewProp_coupler_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGRailroadVehicle_GetCoupledVehicleAt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGRailroadVehicle_GetCoupledVehicleAt_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGRailroadVehicle_GetCoupledVehicleAt_Statics::NewProp_coupler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGRailroadVehicle_GetCoupledVehicleAt_Statics::NewProp_coupler_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGRailroadVehicle_GetCoupledVehicleAt_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Railroad|Vehicle" },
		{ "ModuleRelativePath", "Public/FGRailroadVehicle.h" },
		{ "ToolTip", "@param at Coupler, valid values are 0 (front) and 1 (back).\n@return the vehicle coupled at index." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGRailroadVehicle_GetCoupledVehicleAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGRailroadVehicle, nullptr, "GetCoupledVehicleAt", sizeof(FGRailroadVehicle_eventGetCoupledVehicleAt_Parms), Z_Construct_UFunction_AFGRailroadVehicle_GetCoupledVehicleAt_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGRailroadVehicle_GetCoupledVehicleAt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGRailroadVehicle_GetCoupledVehicleAt_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGRailroadVehicle_GetCoupledVehicleAt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGRailroadVehicle_GetCoupledVehicleAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGRailroadVehicle_GetCoupledVehicleAt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGRailroadVehicle_GetLength_Statics
	{
		struct FGRailroadVehicle_eventGetLength_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGRailroadVehicle_GetLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGRailroadVehicle_eventGetLength_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGRailroadVehicle_GetLength_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGRailroadVehicle_GetLength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGRailroadVehicle_GetLength_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Railroad|Vehicle" },
		{ "ModuleRelativePath", "Public/FGRailroadVehicle.h" },
		{ "ToolTip", "@return The length of this vehicle." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGRailroadVehicle_GetLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGRailroadVehicle, nullptr, "GetLength", sizeof(FGRailroadVehicle_eventGetLength_Parms), Z_Construct_UFunction_AFGRailroadVehicle_GetLength_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGRailroadVehicle_GetLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGRailroadVehicle_GetLength_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGRailroadVehicle_GetLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGRailroadVehicle_GetLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGRailroadVehicle_GetLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGRailroadVehicle_GetRailroadVehicleMovementComponent_Statics
	{
		struct FGRailroadVehicle_eventGetRailroadVehicleMovementComponent_Parms
		{
			UFGRailroadVehicleMovementComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGRailroadVehicle_GetRailroadVehicleMovementComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGRailroadVehicle_GetRailroadVehicleMovementComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGRailroadVehicle_eventGetRailroadVehicleMovementComponent_Parms, ReturnValue), Z_Construct_UClass_UFGRailroadVehicleMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFGRailroadVehicle_GetRailroadVehicleMovementComponent_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGRailroadVehicle_GetRailroadVehicleMovementComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGRailroadVehicle_GetRailroadVehicleMovementComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGRailroadVehicle_GetRailroadVehicleMovementComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGRailroadVehicle_GetRailroadVehicleMovementComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Railroad|Vehicle" },
		{ "ModuleRelativePath", "Public/FGRailroadVehicle.h" },
		{ "ToolTip", "Get the railroad movement for this vehicle." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGRailroadVehicle_GetRailroadVehicleMovementComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGRailroadVehicle, nullptr, "GetRailroadVehicleMovementComponent", sizeof(FGRailroadVehicle_eventGetRailroadVehicleMovementComponent_Parms), Z_Construct_UFunction_AFGRailroadVehicle_GetRailroadVehicleMovementComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGRailroadVehicle_GetRailroadVehicleMovementComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGRailroadVehicle_GetRailroadVehicleMovementComponent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGRailroadVehicle_GetRailroadVehicleMovementComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGRailroadVehicle_GetRailroadVehicleMovementComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGRailroadVehicle_GetRailroadVehicleMovementComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGRailroadVehicle_GetTrackGraphID_Statics
	{
		struct FGRailroadVehicle_eventGetTrackGraphID_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGRailroadVehicle_GetTrackGraphID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGRailroadVehicle_eventGetTrackGraphID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGRailroadVehicle_GetTrackGraphID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGRailroadVehicle_GetTrackGraphID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGRailroadVehicle_GetTrackGraphID_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Railroad|Vehicle" },
		{ "ModuleRelativePath", "Public/FGRailroadVehicle.h" },
		{ "ToolTip", "Get the track id this vehicle is on; -1 if the track is invalid." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGRailroadVehicle_GetTrackGraphID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGRailroadVehicle, nullptr, "GetTrackGraphID", sizeof(FGRailroadVehicle_eventGetTrackGraphID_Parms), Z_Construct_UFunction_AFGRailroadVehicle_GetTrackGraphID_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGRailroadVehicle_GetTrackGraphID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGRailroadVehicle_GetTrackGraphID_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGRailroadVehicle_GetTrackGraphID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGRailroadVehicle_GetTrackGraphID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGRailroadVehicle_GetTrackGraphID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGRailroadVehicle_GetTrackPosition_Statics
	{
		struct FGRailroadVehicle_eventGetTrackPosition_Parms
		{
			FRailroadTrackPosition ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGRailroadVehicle_GetTrackPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGRailroadVehicle_eventGetTrackPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FRailroadTrackPosition, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGRailroadVehicle_GetTrackPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGRailroadVehicle_GetTrackPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGRailroadVehicle_GetTrackPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Railroad|Vehicle" },
		{ "ModuleRelativePath", "Public/FGRailroadVehicle.h" },
		{ "ToolTip", "Get the track position for this vehicle." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGRailroadVehicle_GetTrackPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGRailroadVehicle, nullptr, "GetTrackPosition", sizeof(FGRailroadVehicle_eventGetTrackPosition_Parms), Z_Construct_UFunction_AFGRailroadVehicle_GetTrackPosition_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGRailroadVehicle_GetTrackPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGRailroadVehicle_GetTrackPosition_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGRailroadVehicle_GetTrackPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGRailroadVehicle_GetTrackPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGRailroadVehicle_GetTrackPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGRailroadVehicle_GetTrain_Statics
	{
		struct FGRailroadVehicle_eventGetTrain_Parms
		{
			AFGTrain* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGRailroadVehicle_GetTrain_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGRailroadVehicle_eventGetTrain_Parms, ReturnValue), Z_Construct_UClass_AFGTrain_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGRailroadVehicle_GetTrain_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGRailroadVehicle_GetTrain_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGRailroadVehicle_GetTrain_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Railroad|Vehicle" },
		{ "ModuleRelativePath", "Public/FGRailroadVehicle.h" },
		{ "ToolTip", "Get the train this vehicle is part of." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGRailroadVehicle_GetTrain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGRailroadVehicle, nullptr, "GetTrain", sizeof(FGRailroadVehicle_eventGetTrain_Parms), Z_Construct_UFunction_AFGRailroadVehicle_GetTrain_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGRailroadVehicle_GetTrain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGRailroadVehicle_GetTrain_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGRailroadVehicle_GetTrain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGRailroadVehicle_GetTrain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGRailroadVehicle_GetTrain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGRailroadVehicle_IsCoupledAt_Statics
	{
		struct FGRailroadVehicle_eventIsCoupledAt_Parms
		{
			ERailroadVehicleCoupler coupler;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_coupler;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_coupler_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGRailroadVehicle_IsCoupledAt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGRailroadVehicle_eventIsCoupledAt_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGRailroadVehicle_IsCoupledAt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGRailroadVehicle_eventIsCoupledAt_Parms), &Z_Construct_UFunction_AFGRailroadVehicle_IsCoupledAt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFGRailroadVehicle_IsCoupledAt_Statics::NewProp_coupler = { "coupler", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGRailroadVehicle_eventIsCoupledAt_Parms, coupler), Z_Construct_UEnum_FactoryGame_ERailroadVehicleCoupler, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFGRailroadVehicle_IsCoupledAt_Statics::NewProp_coupler_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGRailroadVehicle_IsCoupledAt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGRailroadVehicle_IsCoupledAt_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGRailroadVehicle_IsCoupledAt_Statics::NewProp_coupler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGRailroadVehicle_IsCoupledAt_Statics::NewProp_coupler_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGRailroadVehicle_IsCoupledAt_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Railroad|Vehicle" },
		{ "ModuleRelativePath", "Public/FGRailroadVehicle.h" },
		{ "ToolTip", "@param at Coupler, valid values are 0 (front) and 1 (back).\n@return the vehicle coupled at index." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGRailroadVehicle_IsCoupledAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGRailroadVehicle, nullptr, "IsCoupledAt", sizeof(FGRailroadVehicle_eventIsCoupledAt_Parms), Z_Construct_UFunction_AFGRailroadVehicle_IsCoupledAt_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGRailroadVehicle_IsCoupledAt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGRailroadVehicle_IsCoupledAt_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGRailroadVehicle_IsCoupledAt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGRailroadVehicle_IsCoupledAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGRailroadVehicle_IsCoupledAt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGRailroadVehicle_IsOrientationReversed_Statics
	{
		struct FGRailroadVehicle_eventIsOrientationReversed_Parms
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
	void Z_Construct_UFunction_AFGRailroadVehicle_IsOrientationReversed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGRailroadVehicle_eventIsOrientationReversed_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGRailroadVehicle_IsOrientationReversed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGRailroadVehicle_eventIsOrientationReversed_Parms), &Z_Construct_UFunction_AFGRailroadVehicle_IsOrientationReversed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGRailroadVehicle_IsOrientationReversed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGRailroadVehicle_IsOrientationReversed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGRailroadVehicle_IsOrientationReversed_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Railroad|Vehicle" },
		{ "ModuleRelativePath", "Public/FGRailroadVehicle.h" },
		{ "ToolTip", "If this vehicles orientation is reversed in the train formation.\n@return true if forward for this vehicle is not the same as the trains forward." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGRailroadVehicle_IsOrientationReversed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGRailroadVehicle, nullptr, "IsOrientationReversed", sizeof(FGRailroadVehicle_eventIsOrientationReversed_Parms), Z_Construct_UFunction_AFGRailroadVehicle_IsOrientationReversed_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGRailroadVehicle_IsOrientationReversed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGRailroadVehicle_IsOrientationReversed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGRailroadVehicle_IsOrientationReversed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGRailroadVehicle_IsOrientationReversed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGRailroadVehicle_IsOrientationReversed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGRailroadVehicle_NoRegister()
	{
		return AFGRailroadVehicle::StaticClass();
	}
	struct Z_Construct_UClass_AFGRailroadVehicle_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mTrackPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mTrackPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mIsOrientationReversed_MetaData[];
#endif
		static void NewProp_mIsOrientationReversed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mIsOrientationReversed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mTrain_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mTrain;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGRailroadVehicle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGVehicle,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGRailroadVehicle_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGRailroadVehicle_GetCoupledVehicleAt, "GetCoupledVehicleAt" }, // 4181282665
		{ &Z_Construct_UFunction_AFGRailroadVehicle_GetLength, "GetLength" }, // 184510164
		{ &Z_Construct_UFunction_AFGRailroadVehicle_GetRailroadVehicleMovementComponent, "GetRailroadVehicleMovementComponent" }, // 328639205
		{ &Z_Construct_UFunction_AFGRailroadVehicle_GetTrackGraphID, "GetTrackGraphID" }, // 3187092542
		{ &Z_Construct_UFunction_AFGRailroadVehicle_GetTrackPosition, "GetTrackPosition" }, // 3395673106
		{ &Z_Construct_UFunction_AFGRailroadVehicle_GetTrain, "GetTrain" }, // 3104113911
		{ &Z_Construct_UFunction_AFGRailroadVehicle_IsCoupledAt, "IsCoupledAt" }, // 488284482
		{ &Z_Construct_UFunction_AFGRailroadVehicle_IsOrientationReversed, "IsOrientationReversed" }, // 3577336012
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGRailroadVehicle_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "FGRailroadVehicle.h" },
		{ "ModuleRelativePath", "Public/FGRailroadVehicle.h" },
		{ "SerializeToFArchive", "" },
		{ "ToolTip", "Base vehicle for all railroad vehicles. E.g. locomotives, wagons etc." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGRailroadVehicle_Statics::NewProp_mTrackPosition_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGRailroadVehicle.h" },
		{ "ToolTip", "Where along the track is the train." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGRailroadVehicle_Statics::NewProp_mTrackPosition = { "mTrackPosition", nullptr, (EPropertyFlags)0x0040000001000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGRailroadVehicle, mTrackPosition), Z_Construct_UScriptStruct_FRailroadTrackPosition, METADATA_PARAMS(Z_Construct_UClass_AFGRailroadVehicle_Statics::NewProp_mTrackPosition_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGRailroadVehicle_Statics::NewProp_mTrackPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGRailroadVehicle_Statics::NewProp_mIsOrientationReversed_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGRailroadVehicle.h" },
		{ "ToolTip", "If this vehicle is reversed in the train formation." },
	};
#endif
	void Z_Construct_UClass_AFGRailroadVehicle_Statics::NewProp_mIsOrientationReversed_SetBit(void* Obj)
	{
		((AFGRailroadVehicle*)Obj)->mIsOrientationReversed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGRailroadVehicle_Statics::NewProp_mIsOrientationReversed = { "mIsOrientationReversed", nullptr, (EPropertyFlags)0x0040000001000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFGRailroadVehicle), &Z_Construct_UClass_AFGRailroadVehicle_Statics::NewProp_mIsOrientationReversed_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGRailroadVehicle_Statics::NewProp_mIsOrientationReversed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGRailroadVehicle_Statics::NewProp_mIsOrientationReversed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGRailroadVehicle_Statics::NewProp_mLength_MetaData[] = {
		{ "Category", "Vehicle" },
		{ "ModuleRelativePath", "Public/FGRailroadVehicle.h" },
		{ "ToolTip", "How long is this vehicle." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGRailroadVehicle_Statics::NewProp_mLength = { "mLength", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGRailroadVehicle, mLength), METADATA_PARAMS(Z_Construct_UClass_AFGRailroadVehicle_Statics::NewProp_mLength_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGRailroadVehicle_Statics::NewProp_mLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGRailroadVehicle_Statics::NewProp_mTrain_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGRailroadVehicle.h" },
		{ "ToolTip", "The train this vehicle is part of, updated from the railroad subsystem" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGRailroadVehicle_Statics::NewProp_mTrain = { "mTrain", nullptr, (EPropertyFlags)0x0020080000000020, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGRailroadVehicle, mTrain), Z_Construct_UClass_AFGTrain_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGRailroadVehicle_Statics::NewProp_mTrain_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGRailroadVehicle_Statics::NewProp_mTrain_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGRailroadVehicle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGRailroadVehicle_Statics::NewProp_mTrackPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGRailroadVehicle_Statics::NewProp_mIsOrientationReversed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGRailroadVehicle_Statics::NewProp_mLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGRailroadVehicle_Statics::NewProp_mTrain,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGRailroadVehicle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGRailroadVehicle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGRailroadVehicle_Statics::ClassParams = {
		&AFGRailroadVehicle::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFGRailroadVehicle_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AFGRailroadVehicle_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AFGRailroadVehicle_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGRailroadVehicle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGRailroadVehicle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGRailroadVehicle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGRailroadVehicle, 2691045640);
	template<> FACTORYGAME_API UClass* StaticClass<AFGRailroadVehicle>()
	{
		return AFGRailroadVehicle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGRailroadVehicle(Z_Construct_UClass_AFGRailroadVehicle, &AFGRailroadVehicle::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGRailroadVehicle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGRailroadVehicle);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(AFGRailroadVehicle)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
