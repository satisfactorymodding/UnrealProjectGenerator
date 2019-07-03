// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Buildables/FGBuildableRailroadStation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGBuildableRailroadStation() {}
// Cross Module References
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_EStationDockingStatus();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableRailroadStation_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableRailroadStation();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableTrainPlatform();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableRailroadStation_GetStationIdentifier();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGTrainStationIdentifier_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableRailroadStation_OnDockingColliderBeginOverlap();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableRailroadStation_OnDockingColliderEndOverlap();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableRailroadStation_OnLocomotiveDocked();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableRailroadStation_OnNameChanged();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableRailroadStation_PerformIsDockedCheck();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FRailroadTrackPosition();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGLocomotive_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGRailroadVehicle_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableTrainPlatform_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGRailroadInterface_NoRegister();
// End Cross Module References
	static UEnum* EStationDockingStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FactoryGame_EStationDockingStatus, Z_Construct_UPackage__Script_FactoryGame(), TEXT("EStationDockingStatus"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EStationDockingStatus(EStationDockingStatus_StaticEnum, TEXT("/Script/FactoryGame"), TEXT("EStationDockingStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FactoryGame_EStationDockingStatus_CRC() { return 2917726638U; }
	UEnum* Z_Construct_UEnum_FactoryGame_EStationDockingStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EStationDockingStatus"), 0, Get_Z_Construct_UEnum_FactoryGame_EStationDockingStatus_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EStationDockingStatus::ESDS_NotDocked", (int64)EStationDockingStatus::ESDS_NotDocked },
				{ "EStationDockingStatus::ESDS_DockInProcess", (int64)EStationDockingStatus::ESDS_DockInProcess },
				{ "EStationDockingStatus::ESDS_DockComplete", (int64)EStationDockingStatus::ESDS_DockComplete },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Buildables/FGBuildableRailroadStation.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FactoryGame,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EStationDockingStatus",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EStationDockingStatus",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static FName NAME_AFGBuildableRailroadStation_OnLocomotiveDocked = FName(TEXT("OnLocomotiveDocked"));
	void AFGBuildableRailroadStation::OnLocomotiveDocked()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGBuildableRailroadStation_OnLocomotiveDocked),NULL);
	}
	static FName NAME_AFGBuildableRailroadStation_OnNameChanged = FName(TEXT("OnNameChanged"));
	void AFGBuildableRailroadStation::OnNameChanged()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGBuildableRailroadStation_OnNameChanged),NULL);
	}
	void AFGBuildableRailroadStation::StaticRegisterNativesAFGBuildableRailroadStation()
	{
		UClass* Class = AFGBuildableRailroadStation::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetStationIdentifier", &AFGBuildableRailroadStation::execGetStationIdentifier },
			{ "OnDockingColliderBeginOverlap", &AFGBuildableRailroadStation::execOnDockingColliderBeginOverlap },
			{ "OnDockingColliderEndOverlap", &AFGBuildableRailroadStation::execOnDockingColliderEndOverlap },
			{ "OnLocomotiveDocked", &AFGBuildableRailroadStation::execOnLocomotiveDocked },
			{ "PerformIsDockedCheck", &AFGBuildableRailroadStation::execPerformIsDockedCheck },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGBuildableRailroadStation_GetStationIdentifier_Statics
	{
		struct FGBuildableRailroadStation_eventGetStationIdentifier_Parms
		{
			AFGTrainStationIdentifier* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGBuildableRailroadStation_GetStationIdentifier_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGBuildableRailroadStation_eventGetStationIdentifier_Parms, ReturnValue), Z_Construct_UClass_AFGTrainStationIdentifier_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableRailroadStation_GetStationIdentifier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableRailroadStation_GetStationIdentifier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableRailroadStation_GetStationIdentifier_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Railroad|Station" },
		{ "ModuleRelativePath", "Buildables/FGBuildableRailroadStation.h" },
		{ "ToolTip", "Get the station identifier for this station. Shared between server, client and used in time tables." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableRailroadStation_GetStationIdentifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableRailroadStation, "GetStationIdentifier", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGBuildableRailroadStation_eventGetStationIdentifier_Parms), Z_Construct_UFunction_AFGBuildableRailroadStation_GetStationIdentifier_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableRailroadStation_GetStationIdentifier_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableRailroadStation_GetStationIdentifier_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableRailroadStation_GetStationIdentifier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableRailroadStation_GetStationIdentifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableRailroadStation_GetStationIdentifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableRailroadStation_OnDockingColliderBeginOverlap_Statics
	{
		struct FGBuildableRailroadStation_eventOnDockingColliderBeginOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableRailroadStation_OnDockingColliderBeginOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGBuildableRailroadStation_OnDockingColliderBeginOverlap_Statics::NewProp_SweepResult = { UE4CodeGen_Private::EPropertyClass::Struct, "SweepResult", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008008000182, 1, nullptr, STRUCT_OFFSET(FGBuildableRailroadStation_eventOnDockingColliderBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableRailroadStation_OnDockingColliderBeginOverlap_Statics::NewProp_SweepResult_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableRailroadStation_OnDockingColliderBeginOverlap_Statics::NewProp_SweepResult_MetaData)) };
	void Z_Construct_UFunction_AFGBuildableRailroadStation_OnDockingColliderBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((FGBuildableRailroadStation_eventOnDockingColliderBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGBuildableRailroadStation_OnDockingColliderBeginOverlap_Statics::NewProp_bFromSweep = { UE4CodeGen_Private::EPropertyClass::Bool, "bFromSweep", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGBuildableRailroadStation_eventOnDockingColliderBeginOverlap_Parms), &Z_Construct_UFunction_AFGBuildableRailroadStation_OnDockingColliderBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGBuildableRailroadStation_OnDockingColliderBeginOverlap_Statics::NewProp_OtherBodyIndex = { UE4CodeGen_Private::EPropertyClass::Int, "OtherBodyIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGBuildableRailroadStation_eventOnDockingColliderBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableRailroadStation_OnDockingColliderBeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGBuildableRailroadStation_OnDockingColliderBeginOverlap_Statics::NewProp_OtherComp = { UE4CodeGen_Private::EPropertyClass::Object, "OtherComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(FGBuildableRailroadStation_eventOnDockingColliderBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableRailroadStation_OnDockingColliderBeginOverlap_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableRailroadStation_OnDockingColliderBeginOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGBuildableRailroadStation_OnDockingColliderBeginOverlap_Statics::NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGBuildableRailroadStation_eventOnDockingColliderBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableRailroadStation_OnDockingColliderBeginOverlap_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGBuildableRailroadStation_OnDockingColliderBeginOverlap_Statics::NewProp_OverlappedComp = { UE4CodeGen_Private::EPropertyClass::Object, "OverlappedComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(FGBuildableRailroadStation_eventOnDockingColliderBeginOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableRailroadStation_OnDockingColliderBeginOverlap_Statics::NewProp_OverlappedComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableRailroadStation_OnDockingColliderBeginOverlap_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableRailroadStation_OnDockingColliderBeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableRailroadStation_OnDockingColliderBeginOverlap_Statics::NewProp_SweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableRailroadStation_OnDockingColliderBeginOverlap_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableRailroadStation_OnDockingColliderBeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableRailroadStation_OnDockingColliderBeginOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableRailroadStation_OnDockingColliderBeginOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableRailroadStation_OnDockingColliderBeginOverlap_Statics::NewProp_OverlappedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableRailroadStation_OnDockingColliderBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Buildables/FGBuildableRailroadStation.h" },
		{ "ToolTip", "Temp: Function called when collider is overlaped to test for docking" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableRailroadStation_OnDockingColliderBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableRailroadStation, "OnDockingColliderBeginOverlap", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00440401, sizeof(FGBuildableRailroadStation_eventOnDockingColliderBeginOverlap_Parms), Z_Construct_UFunction_AFGBuildableRailroadStation_OnDockingColliderBeginOverlap_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableRailroadStation_OnDockingColliderBeginOverlap_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableRailroadStation_OnDockingColliderBeginOverlap_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableRailroadStation_OnDockingColliderBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableRailroadStation_OnDockingColliderBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableRailroadStation_OnDockingColliderBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableRailroadStation_OnDockingColliderEndOverlap_Statics
	{
		struct FGBuildableRailroadStation_eventOnDockingColliderEndOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGBuildableRailroadStation_OnDockingColliderEndOverlap_Statics::NewProp_OtherBodyIndex = { UE4CodeGen_Private::EPropertyClass::Int, "OtherBodyIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGBuildableRailroadStation_eventOnDockingColliderEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableRailroadStation_OnDockingColliderEndOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGBuildableRailroadStation_OnDockingColliderEndOverlap_Statics::NewProp_OtherComp = { UE4CodeGen_Private::EPropertyClass::Object, "OtherComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(FGBuildableRailroadStation_eventOnDockingColliderEndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableRailroadStation_OnDockingColliderEndOverlap_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableRailroadStation_OnDockingColliderEndOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGBuildableRailroadStation_OnDockingColliderEndOverlap_Statics::NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGBuildableRailroadStation_eventOnDockingColliderEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableRailroadStation_OnDockingColliderEndOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGBuildableRailroadStation_OnDockingColliderEndOverlap_Statics::NewProp_OverlappedComponent = { UE4CodeGen_Private::EPropertyClass::Object, "OverlappedComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(FGBuildableRailroadStation_eventOnDockingColliderEndOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableRailroadStation_OnDockingColliderEndOverlap_Statics::NewProp_OverlappedComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableRailroadStation_OnDockingColliderEndOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableRailroadStation_OnDockingColliderEndOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableRailroadStation_OnDockingColliderEndOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableRailroadStation_OnDockingColliderEndOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableRailroadStation_OnDockingColliderEndOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableRailroadStation_OnDockingColliderEndOverlap_Statics::NewProp_OverlappedComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableRailroadStation_OnDockingColliderEndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Buildables/FGBuildableRailroadStation.h" },
		{ "ToolTip", "Temp: Function called when collider is unoverlapped to stop testing for docking" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableRailroadStation_OnDockingColliderEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableRailroadStation, "OnDockingColliderEndOverlap", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, sizeof(FGBuildableRailroadStation_eventOnDockingColliderEndOverlap_Parms), Z_Construct_UFunction_AFGBuildableRailroadStation_OnDockingColliderEndOverlap_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableRailroadStation_OnDockingColliderEndOverlap_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableRailroadStation_OnDockingColliderEndOverlap_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableRailroadStation_OnDockingColliderEndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableRailroadStation_OnDockingColliderEndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableRailroadStation_OnDockingColliderEndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableRailroadStation_OnLocomotiveDocked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableRailroadStation_OnLocomotiveDocked_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Railroad|Station" },
		{ "ModuleRelativePath", "Buildables/FGBuildableRailroadStation.h" },
		{ "ToolTip", "Notify of begin docking procedure" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableRailroadStation_OnLocomotiveDocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableRailroadStation, "OnLocomotiveDocked", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableRailroadStation_OnLocomotiveDocked_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableRailroadStation_OnLocomotiveDocked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableRailroadStation_OnLocomotiveDocked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableRailroadStation_OnLocomotiveDocked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableRailroadStation_OnNameChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableRailroadStation_OnNameChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Railroad|Station" },
		{ "ModuleRelativePath", "Buildables/FGBuildableRailroadStation.h" },
		{ "ToolTip", "Called when the name of the station has changed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableRailroadStation_OnNameChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableRailroadStation, "OnNameChanged", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableRailroadStation_OnNameChanged_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableRailroadStation_OnNameChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableRailroadStation_OnNameChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableRailroadStation_OnNameChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableRailroadStation_PerformIsDockedCheck_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableRailroadStation_PerformIsDockedCheck_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Buildables/FGBuildableRailroadStation.h" },
		{ "ToolTip", "Called by a timer to check if a train has docked" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableRailroadStation_PerformIsDockedCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableRailroadStation, "PerformIsDockedCheck", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableRailroadStation_PerformIsDockedCheck_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableRailroadStation_PerformIsDockedCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableRailroadStation_PerformIsDockedCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableRailroadStation_PerformIsDockedCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGBuildableRailroadStation_NoRegister()
	{
		return AFGBuildableRailroadStation::StaticClass();
	}
	struct Z_Construct_UClass_AFGBuildableRailroadStation_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMaxDockDistanceFromCenter_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mMaxDockDistanceFromCenter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMaxDockSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mMaxDockSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDockingLocomotive_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mDockingLocomotive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mUpdateDockingStatusTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mUpdateDockingStatusTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mStationDockCollider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mStationDockCollider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mRelevantDockedVehicles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mRelevantDockedVehicles;
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_mRelevantDockedVehicles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDockedPlatformList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mDockedPlatformList;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mDockedPlatformList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mStationDockingStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_mStationDockingStatus;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_mStationDockingStatus_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mStationIdentifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mStationIdentifier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGBuildableRailroadStation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGBuildableTrainPlatform,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGBuildableRailroadStation_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGBuildableRailroadStation_GetStationIdentifier, "GetStationIdentifier" }, // 1484249346
		{ &Z_Construct_UFunction_AFGBuildableRailroadStation_OnDockingColliderBeginOverlap, "OnDockingColliderBeginOverlap" }, // 1503498231
		{ &Z_Construct_UFunction_AFGBuildableRailroadStation_OnDockingColliderEndOverlap, "OnDockingColliderEndOverlap" }, // 4275107457
		{ &Z_Construct_UFunction_AFGBuildableRailroadStation_OnLocomotiveDocked, "OnLocomotiveDocked" }, // 1076498644
		{ &Z_Construct_UFunction_AFGBuildableRailroadStation_OnNameChanged, "OnNameChanged" }, // 2854491456
		{ &Z_Construct_UFunction_AFGBuildableRailroadStation_PerformIsDockedCheck, "PerformIsDockedCheck" }, // 4187198994
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableRailroadStation_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Buildables/FGBuildableRailroadStation.h" },
		{ "ModuleRelativePath", "Buildables/FGBuildableRailroadStation.h" },
		{ "ToolTip", "Base class for rail road stations. Not to be confused railroad docking stations." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableRailroadStation_Statics::NewProp_mTrackPosition_MetaData[] = {
		{ "ModuleRelativePath", "Buildables/FGBuildableRailroadStation.h" },
		{ "NoAutoJson", "TRUE" },
		{ "ToolTip", "Where on the track is this station located." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGBuildableRailroadStation_Statics::NewProp_mTrackPosition = { UE4CodeGen_Private::EPropertyClass::Struct, "mTrackPosition", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000001000000, 1, nullptr, STRUCT_OFFSET(AFGBuildableRailroadStation, mTrackPosition), Z_Construct_UScriptStruct_FRailroadTrackPosition, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableRailroadStation_Statics::NewProp_mTrackPosition_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableRailroadStation_Statics::NewProp_mTrackPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableRailroadStation_Statics::NewProp_mMaxDockDistanceFromCenter_MetaData[] = {
		{ "Category", "FactoryGame|Railroad|Station" },
		{ "ModuleRelativePath", "Buildables/FGBuildableRailroadStation.h" },
		{ "ToolTip", "Max offset from track center to allow a locomotive to be considered docked" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGBuildableRailroadStation_Statics::NewProp_mMaxDockDistanceFromCenter = { UE4CodeGen_Private::EPropertyClass::Float, "mMaxDockDistanceFromCenter", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000010001, 1, nullptr, STRUCT_OFFSET(AFGBuildableRailroadStation, mMaxDockDistanceFromCenter), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableRailroadStation_Statics::NewProp_mMaxDockDistanceFromCenter_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableRailroadStation_Statics::NewProp_mMaxDockDistanceFromCenter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableRailroadStation_Statics::NewProp_mMaxDockSpeed_MetaData[] = {
		{ "Category", "FactoryGame|Railroad|Station" },
		{ "ModuleRelativePath", "Buildables/FGBuildableRailroadStation.h" },
		{ "ToolTip", "Max speed to consider locomotive docked (if traveling faster than this then locos cannot dock)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGBuildableRailroadStation_Statics::NewProp_mMaxDockSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "mMaxDockSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000010001, 1, nullptr, STRUCT_OFFSET(AFGBuildableRailroadStation, mMaxDockSpeed), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableRailroadStation_Statics::NewProp_mMaxDockSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableRailroadStation_Statics::NewProp_mMaxDockSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableRailroadStation_Statics::NewProp_mDockingLocomotive_MetaData[] = {
		{ "ModuleRelativePath", "Buildables/FGBuildableRailroadStation.h" },
		{ "ToolTip", "Locomotive Docking Reference, presently set by a collider overlap" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableRailroadStation_Statics::NewProp_mDockingLocomotive = { UE4CodeGen_Private::EPropertyClass::Object, "mDockingLocomotive", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000001000000, 1, nullptr, STRUCT_OFFSET(AFGBuildableRailroadStation, mDockingLocomotive), Z_Construct_UClass_AFGLocomotive_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableRailroadStation_Statics::NewProp_mDockingLocomotive_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableRailroadStation_Statics::NewProp_mDockingLocomotive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableRailroadStation_Statics::NewProp_mUpdateDockingStatusTimer_MetaData[] = {
		{ "ModuleRelativePath", "Buildables/FGBuildableRailroadStation.h" },
		{ "ToolTip", "TimerHandle for checking the status of a docking sequence and updating it" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGBuildableRailroadStation_Statics::NewProp_mUpdateDockingStatusTimer = { UE4CodeGen_Private::EPropertyClass::Struct, "mUpdateDockingStatusTimer", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(AFGBuildableRailroadStation, mUpdateDockingStatusTimer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableRailroadStation_Statics::NewProp_mUpdateDockingStatusTimer_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableRailroadStation_Statics::NewProp_mUpdateDockingStatusTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableRailroadStation_Statics::NewProp_mStationDockCollider_MetaData[] = {
		{ "Category", "FGBuildableRailroadStation" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Buildables/FGBuildableRailroadStation.h" },
		{ "ToolTip", "Collider, TEMP I hope, used for detecting overlap with train locomotives for docking" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableRailroadStation_Statics::NewProp_mStationDockCollider = { UE4CodeGen_Private::EPropertyClass::Object, "mStationDockCollider", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000080009, 1, nullptr, STRUCT_OFFSET(AFGBuildableRailroadStation, mStationDockCollider), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableRailroadStation_Statics::NewProp_mStationDockCollider_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableRailroadStation_Statics::NewProp_mStationDockCollider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableRailroadStation_Statics::NewProp_mRelevantDockedVehicles_MetaData[] = {
		{ "ModuleRelativePath", "Buildables/FGBuildableRailroadStation.h" },
		{ "ToolTip", "When docked, a TTrainIterator is used to find all trailing (relevant) train carts matching the direction of this station on the track" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGBuildableRailroadStation_Statics::NewProp_mRelevantDockedVehicles = { UE4CodeGen_Private::EPropertyClass::Array, "mRelevantDockedVehicles", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000000000, 1, nullptr, STRUCT_OFFSET(AFGBuildableRailroadStation, mRelevantDockedVehicles), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableRailroadStation_Statics::NewProp_mRelevantDockedVehicles_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableRailroadStation_Statics::NewProp_mRelevantDockedVehicles_MetaData)) };
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_AFGBuildableRailroadStation_Statics::NewProp_mRelevantDockedVehicles_Inner = { UE4CodeGen_Private::EPropertyClass::WeakObject, "mRelevantDockedVehicles", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_AFGRailroadVehicle_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableRailroadStation_Statics::NewProp_mDockedPlatformList_MetaData[] = {
		{ "ModuleRelativePath", "Buildables/FGBuildableRailroadStation.h" },
		{ "ToolTip", "When docked, this station will fill this array with every potential platform in its tail. 1 for each train segment" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGBuildableRailroadStation_Statics::NewProp_mDockedPlatformList = { UE4CodeGen_Private::EPropertyClass::Array, "mDockedPlatformList", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080001000000, 1, nullptr, STRUCT_OFFSET(AFGBuildableRailroadStation, mDockedPlatformList), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableRailroadStation_Statics::NewProp_mDockedPlatformList_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableRailroadStation_Statics::NewProp_mDockedPlatformList_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableRailroadStation_Statics::NewProp_mDockedPlatformList_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "mDockedPlatformList", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AFGBuildableTrainPlatform_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableRailroadStation_Statics::NewProp_mStationDockingStatus_MetaData[] = {
		{ "Category", "FactoryGame|Railroad|Station" },
		{ "ModuleRelativePath", "Buildables/FGBuildableRailroadStation.h" },
		{ "ToolTip", "Enum tracking the status of a docking sequence" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AFGBuildableRailroadStation_Statics::NewProp_mStationDockingStatus = { UE4CodeGen_Private::EPropertyClass::Enum, "mStationDockingStatus", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080001000034, 1, nullptr, STRUCT_OFFSET(AFGBuildableRailroadStation, mStationDockingStatus), Z_Construct_UEnum_FactoryGame_EStationDockingStatus, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableRailroadStation_Statics::NewProp_mStationDockingStatus_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableRailroadStation_Statics::NewProp_mStationDockingStatus_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AFGBuildableRailroadStation_Statics::NewProp_mStationDockingStatus_Underlying = { UE4CodeGen_Private::EPropertyClass::Int, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableRailroadStation_Statics::NewProp_mStationIdentifier_MetaData[] = {
		{ "ModuleRelativePath", "Buildables/FGBuildableRailroadStation.h" },
		{ "ToolTip", "Light weight representation about this station, the railroad subsystem is responsible for this." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableRailroadStation_Statics::NewProp_mStationIdentifier = { UE4CodeGen_Private::EPropertyClass::Object, "mStationIdentifier", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000020, 1, nullptr, STRUCT_OFFSET(AFGBuildableRailroadStation, mStationIdentifier), Z_Construct_UClass_AFGTrainStationIdentifier_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableRailroadStation_Statics::NewProp_mStationIdentifier_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableRailroadStation_Statics::NewProp_mStationIdentifier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGBuildableRailroadStation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableRailroadStation_Statics::NewProp_mTrackPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableRailroadStation_Statics::NewProp_mMaxDockDistanceFromCenter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableRailroadStation_Statics::NewProp_mMaxDockSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableRailroadStation_Statics::NewProp_mDockingLocomotive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableRailroadStation_Statics::NewProp_mUpdateDockingStatusTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableRailroadStation_Statics::NewProp_mStationDockCollider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableRailroadStation_Statics::NewProp_mRelevantDockedVehicles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableRailroadStation_Statics::NewProp_mRelevantDockedVehicles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableRailroadStation_Statics::NewProp_mDockedPlatformList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableRailroadStation_Statics::NewProp_mDockedPlatformList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableRailroadStation_Statics::NewProp_mStationDockingStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableRailroadStation_Statics::NewProp_mStationDockingStatus_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableRailroadStation_Statics::NewProp_mStationIdentifier,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AFGBuildableRailroadStation_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UFGRailroadInterface_NoRegister, (int32)VTABLE_OFFSET(AFGBuildableRailroadStation, IFGRailroadInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGBuildableRailroadStation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGBuildableRailroadStation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGBuildableRailroadStation_Statics::ClassParams = {
		&AFGBuildableRailroadStation::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A4u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AFGBuildableRailroadStation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableRailroadStation_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		InterfaceParams, ARRAY_COUNT(InterfaceParams),
		METADATA_PARAMS(Z_Construct_UClass_AFGBuildableRailroadStation_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableRailroadStation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGBuildableRailroadStation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGBuildableRailroadStation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGBuildableRailroadStation, 245660854);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGBuildableRailroadStation(Z_Construct_UClass_AFGBuildableRailroadStation, &AFGBuildableRailroadStation::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGBuildableRailroadStation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGBuildableRailroadStation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
