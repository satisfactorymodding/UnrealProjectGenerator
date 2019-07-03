// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGDriveablePawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGDriveablePawn() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGDriveablePawn_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGDriveablePawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGDriveablePawn_CanDriverEnter();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGCharacterPlayer_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGDriveablePawn_DriverEnter();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGDriveablePawn_DriverLeave();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGDriveablePawn_GetDriver();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGDriveablePawn_GetDriverExitOffset();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGDriveablePawn_GetDriverSeatAnimation();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGDriveablePawn_GetDriverSeatSocket();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGDriveablePawn_HasPendingDriver();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGDriveablePawn_IsDriverVisible();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGDriveablePawn_IsDriving();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGDriveablePawn_OnRep_IsDriving();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGDriveablePawn_PlaceExitingDriver();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGDriveablePawn_ReceiveOnDriverEnter();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGDriveablePawn_ReceiveOnDriverLeave();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGDriveablePawn_ShouldAttachDriver();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSaveInterface_NoRegister();
// End Cross Module References
	static FName NAME_AFGDriveablePawn_ReceiveOnDriverEnter = FName(TEXT("ReceiveOnDriverEnter"));
	void AFGDriveablePawn::ReceiveOnDriverEnter()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGDriveablePawn_ReceiveOnDriverEnter),NULL);
	}
	static FName NAME_AFGDriveablePawn_ReceiveOnDriverLeave = FName(TEXT("ReceiveOnDriverLeave"));
	void AFGDriveablePawn::ReceiveOnDriverLeave()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGDriveablePawn_ReceiveOnDriverLeave),NULL);
	}
	void AFGDriveablePawn::StaticRegisterNativesAFGDriveablePawn()
	{
		UClass* Class = AFGDriveablePawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanDriverEnter", &AFGDriveablePawn::execCanDriverEnter },
			{ "DriverEnter", &AFGDriveablePawn::execDriverEnter },
			{ "DriverLeave", &AFGDriveablePawn::execDriverLeave },
			{ "GetDriver", &AFGDriveablePawn::execGetDriver },
			{ "GetDriverExitOffset", &AFGDriveablePawn::execGetDriverExitOffset },
			{ "GetDriverSeatAnimation", &AFGDriveablePawn::execGetDriverSeatAnimation },
			{ "GetDriverSeatSocket", &AFGDriveablePawn::execGetDriverSeatSocket },
			{ "HasPendingDriver", &AFGDriveablePawn::execHasPendingDriver },
			{ "IsDriverVisible", &AFGDriveablePawn::execIsDriverVisible },
			{ "IsDriving", &AFGDriveablePawn::execIsDriving },
			{ "OnRep_IsDriving", &AFGDriveablePawn::execOnRep_IsDriving },
			{ "PlaceExitingDriver", &AFGDriveablePawn::execPlaceExitingDriver },
			{ "ShouldAttachDriver", &AFGDriveablePawn::execShouldAttachDriver },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGDriveablePawn_CanDriverEnter_Statics
	{
		struct FGDriveablePawn_eventCanDriverEnter_Parms
		{
			AFGCharacterPlayer* character;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGDriveablePawn_CanDriverEnter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGDriveablePawn_eventCanDriverEnter_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGDriveablePawn_CanDriverEnter_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGDriveablePawn_eventCanDriverEnter_Parms), &Z_Construct_UFunction_AFGDriveablePawn_CanDriverEnter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGDriveablePawn_CanDriverEnter_Statics::NewProp_character = { UE4CodeGen_Private::EPropertyClass::Object, "character", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGDriveablePawn_eventCanDriverEnter_Parms, character), Z_Construct_UClass_AFGCharacterPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGDriveablePawn_CanDriverEnter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGDriveablePawn_CanDriverEnter_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGDriveablePawn_CanDriverEnter_Statics::NewProp_character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGDriveablePawn_CanDriverEnter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Driveable" },
		{ "ModuleRelativePath", "FGDriveablePawn.h" },
		{ "ToolTip", "Can we drive this. (server and locally controlled client)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGDriveablePawn_CanDriverEnter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGDriveablePawn, "CanDriverEnter", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020400, sizeof(FGDriveablePawn_eventCanDriverEnter_Parms), Z_Construct_UFunction_AFGDriveablePawn_CanDriverEnter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGDriveablePawn_CanDriverEnter_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGDriveablePawn_CanDriverEnter_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGDriveablePawn_CanDriverEnter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGDriveablePawn_CanDriverEnter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGDriveablePawn_CanDriverEnter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGDriveablePawn_DriverEnter_Statics
	{
		struct FGDriveablePawn_eventDriverEnter_Parms
		{
			AFGCharacterPlayer* driver;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_driver;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGDriveablePawn_DriverEnter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGDriveablePawn_eventDriverEnter_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGDriveablePawn_DriverEnter_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGDriveablePawn_eventDriverEnter_Parms), &Z_Construct_UFunction_AFGDriveablePawn_DriverEnter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGDriveablePawn_DriverEnter_Statics::NewProp_driver = { UE4CodeGen_Private::EPropertyClass::Object, "driver", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGDriveablePawn_eventDriverEnter_Parms, driver), Z_Construct_UClass_AFGCharacterPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGDriveablePawn_DriverEnter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGDriveablePawn_DriverEnter_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGDriveablePawn_DriverEnter_Statics::NewProp_driver,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGDriveablePawn_DriverEnter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Driveable" },
		{ "ModuleRelativePath", "FGDriveablePawn.h" },
		{ "ToolTip", "Make player the new driver of this vehicle.\n@note Call this on server only." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGDriveablePawn_DriverEnter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGDriveablePawn, "DriverEnter", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020404, sizeof(FGDriveablePawn_eventDriverEnter_Parms), Z_Construct_UFunction_AFGDriveablePawn_DriverEnter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGDriveablePawn_DriverEnter_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGDriveablePawn_DriverEnter_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGDriveablePawn_DriverEnter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGDriveablePawn_DriverEnter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGDriveablePawn_DriverEnter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGDriveablePawn_DriverLeave_Statics
	{
		struct FGDriveablePawn_eventDriverLeave_Parms
		{
			bool keepDriving;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_keepDriving_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_keepDriving;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGDriveablePawn_DriverLeave_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGDriveablePawn_eventDriverLeave_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGDriveablePawn_DriverLeave_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGDriveablePawn_eventDriverLeave_Parms), &Z_Construct_UFunction_AFGDriveablePawn_DriverLeave_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFGDriveablePawn_DriverLeave_Statics::NewProp_keepDriving_SetBit(void* Obj)
	{
		((FGDriveablePawn_eventDriverLeave_Parms*)Obj)->keepDriving = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGDriveablePawn_DriverLeave_Statics::NewProp_keepDriving = { UE4CodeGen_Private::EPropertyClass::Bool, "keepDriving", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGDriveablePawn_eventDriverLeave_Parms), &Z_Construct_UFunction_AFGDriveablePawn_DriverLeave_Statics::NewProp_keepDriving_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGDriveablePawn_DriverLeave_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGDriveablePawn_DriverLeave_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGDriveablePawn_DriverLeave_Statics::NewProp_keepDriving,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGDriveablePawn_DriverLeave_Statics::Function_MetaDataParams[] = {
		{ "Category", "Driveable" },
		{ "CPP_Default_keepDriving", "false" },
		{ "ModuleRelativePath", "FGDriveablePawn.h" },
		{ "ToolTip", "Called when player wants to get out.\n@note Call this on server only.\n\n@param keepDriving    True if we want to leave the without setting IsDriving to false (turn off the vehicle)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGDriveablePawn_DriverLeave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGDriveablePawn, "DriverLeave", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020404, sizeof(FGDriveablePawn_eventDriverLeave_Parms), Z_Construct_UFunction_AFGDriveablePawn_DriverLeave_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGDriveablePawn_DriverLeave_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGDriveablePawn_DriverLeave_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGDriveablePawn_DriverLeave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGDriveablePawn_DriverLeave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGDriveablePawn_DriverLeave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGDriveablePawn_GetDriver_Statics
	{
		struct FGDriveablePawn_eventGetDriver_Parms
		{
			AFGCharacterPlayer* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGDriveablePawn_GetDriver_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGDriveablePawn_eventGetDriver_Parms, ReturnValue), Z_Construct_UClass_AFGCharacterPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGDriveablePawn_GetDriver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGDriveablePawn_GetDriver_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGDriveablePawn_GetDriver_Statics::Function_MetaDataParams[] = {
		{ "Category", "Driveable" },
		{ "ModuleRelativePath", "FGDriveablePawn.h" },
		{ "ToolTip", "Gets the driving pawn." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGDriveablePawn_GetDriver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGDriveablePawn, "GetDriver", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGDriveablePawn_eventGetDriver_Parms), Z_Construct_UFunction_AFGDriveablePawn_GetDriver_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGDriveablePawn_GetDriver_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGDriveablePawn_GetDriver_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGDriveablePawn_GetDriver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGDriveablePawn_GetDriver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGDriveablePawn_GetDriver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGDriveablePawn_GetDriverExitOffset_Statics
	{
		struct FGDriveablePawn_eventGetDriverExitOffset_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGDriveablePawn_GetDriverExitOffset_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGDriveablePawn_eventGetDriverExitOffset_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGDriveablePawn_GetDriverExitOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGDriveablePawn_GetDriverExitOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGDriveablePawn_GetDriverExitOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Driveable" },
		{ "ModuleRelativePath", "FGDriveablePawn.h" },
		{ "ToolTip", "@return exit offset to try to place the driver at (local space)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGDriveablePawn_GetDriverExitOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGDriveablePawn, "GetDriverExitOffset", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(FGDriveablePawn_eventGetDriverExitOffset_Parms), Z_Construct_UFunction_AFGDriveablePawn_GetDriverExitOffset_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGDriveablePawn_GetDriverExitOffset_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGDriveablePawn_GetDriverExitOffset_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGDriveablePawn_GetDriverExitOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGDriveablePawn_GetDriverExitOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGDriveablePawn_GetDriverExitOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGDriveablePawn_GetDriverSeatAnimation_Statics
	{
		struct FGDriveablePawn_eventGetDriverSeatAnimation_Parms
		{
			UAnimSequence* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGDriveablePawn_GetDriverSeatAnimation_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGDriveablePawn_eventGetDriverSeatAnimation_Parms, ReturnValue), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGDriveablePawn_GetDriverSeatAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGDriveablePawn_GetDriverSeatAnimation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGDriveablePawn_GetDriverSeatAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Driveable" },
		{ "ModuleRelativePath", "FGDriveablePawn.h" },
		{ "ToolTip", "@return animation to set on the driver; null if no animation set." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGDriveablePawn_GetDriverSeatAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGDriveablePawn, "GetDriverSeatAnimation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGDriveablePawn_eventGetDriverSeatAnimation_Parms), Z_Construct_UFunction_AFGDriveablePawn_GetDriverSeatAnimation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGDriveablePawn_GetDriverSeatAnimation_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGDriveablePawn_GetDriverSeatAnimation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGDriveablePawn_GetDriverSeatAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGDriveablePawn_GetDriverSeatAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGDriveablePawn_GetDriverSeatAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGDriveablePawn_GetDriverSeatSocket_Statics
	{
		struct FGDriveablePawn_eventGetDriverSeatSocket_Parms
		{
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AFGDriveablePawn_GetDriverSeatSocket_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Name, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGDriveablePawn_eventGetDriverSeatSocket_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGDriveablePawn_GetDriverSeatSocket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGDriveablePawn_GetDriverSeatSocket_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGDriveablePawn_GetDriverSeatSocket_Statics::Function_MetaDataParams[] = {
		{ "Category", "Driveable" },
		{ "ModuleRelativePath", "FGDriveablePawn.h" },
		{ "ToolTip", "@return socket to attach the driver to; none if no socket set." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGDriveablePawn_GetDriverSeatSocket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGDriveablePawn, "GetDriverSeatSocket", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGDriveablePawn_eventGetDriverSeatSocket_Parms), Z_Construct_UFunction_AFGDriveablePawn_GetDriverSeatSocket_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGDriveablePawn_GetDriverSeatSocket_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGDriveablePawn_GetDriverSeatSocket_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGDriveablePawn_GetDriverSeatSocket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGDriveablePawn_GetDriverSeatSocket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGDriveablePawn_GetDriverSeatSocket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGDriveablePawn_HasPendingDriver_Statics
	{
		struct FGDriveablePawn_eventHasPendingDriver_Parms
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
	void Z_Construct_UFunction_AFGDriveablePawn_HasPendingDriver_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGDriveablePawn_eventHasPendingDriver_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGDriveablePawn_HasPendingDriver_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGDriveablePawn_eventHasPendingDriver_Parms), &Z_Construct_UFunction_AFGDriveablePawn_HasPendingDriver_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGDriveablePawn_HasPendingDriver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGDriveablePawn_HasPendingDriver_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGDriveablePawn_HasPendingDriver_Statics::Function_MetaDataParams[] = {
		{ "Category", "Driveable" },
		{ "ModuleRelativePath", "FGDriveablePawn.h" },
		{ "ToolTip", "@return true if another driver is about to enter." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGDriveablePawn_HasPendingDriver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGDriveablePawn, "HasPendingDriver", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGDriveablePawn_eventHasPendingDriver_Parms), Z_Construct_UFunction_AFGDriveablePawn_HasPendingDriver_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGDriveablePawn_HasPendingDriver_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGDriveablePawn_HasPendingDriver_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGDriveablePawn_HasPendingDriver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGDriveablePawn_HasPendingDriver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGDriveablePawn_HasPendingDriver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGDriveablePawn_IsDriverVisible_Statics
	{
		struct FGDriveablePawn_eventIsDriverVisible_Parms
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
	void Z_Construct_UFunction_AFGDriveablePawn_IsDriverVisible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGDriveablePawn_eventIsDriverVisible_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGDriveablePawn_IsDriverVisible_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGDriveablePawn_eventIsDriverVisible_Parms), &Z_Construct_UFunction_AFGDriveablePawn_IsDriverVisible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGDriveablePawn_IsDriverVisible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGDriveablePawn_IsDriverVisible_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGDriveablePawn_IsDriverVisible_Statics::Function_MetaDataParams[] = {
		{ "Category", "Driveable" },
		{ "ModuleRelativePath", "FGDriveablePawn.h" },
		{ "ToolTip", "@return true if the driver should be visible." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGDriveablePawn_IsDriverVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGDriveablePawn, "IsDriverVisible", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGDriveablePawn_eventIsDriverVisible_Parms), Z_Construct_UFunction_AFGDriveablePawn_IsDriverVisible_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGDriveablePawn_IsDriverVisible_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGDriveablePawn_IsDriverVisible_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGDriveablePawn_IsDriverVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGDriveablePawn_IsDriverVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGDriveablePawn_IsDriverVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGDriveablePawn_IsDriving_Statics
	{
		struct FGDriveablePawn_eventIsDriving_Parms
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
	void Z_Construct_UFunction_AFGDriveablePawn_IsDriving_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGDriveablePawn_eventIsDriving_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGDriveablePawn_IsDriving_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGDriveablePawn_eventIsDriving_Parms), &Z_Construct_UFunction_AFGDriveablePawn_IsDriving_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGDriveablePawn_IsDriving_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGDriveablePawn_IsDriving_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGDriveablePawn_IsDriving_Statics::Function_MetaDataParams[] = {
		{ "Category", "Driveable" },
		{ "ModuleRelativePath", "FGDriveablePawn.h" },
		{ "ToolTip", "@return true if this vehicle is being driven." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGDriveablePawn_IsDriving_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGDriveablePawn, "IsDriving", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGDriveablePawn_eventIsDriving_Parms), Z_Construct_UFunction_AFGDriveablePawn_IsDriving_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGDriveablePawn_IsDriving_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGDriveablePawn_IsDriving_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGDriveablePawn_IsDriving_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGDriveablePawn_IsDriving()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGDriveablePawn_IsDriving_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGDriveablePawn_OnRep_IsDriving_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGDriveablePawn_OnRep_IsDriving_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGDriveablePawn.h" },
		{ "ToolTip", "Rep notifies" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGDriveablePawn_OnRep_IsDriving_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGDriveablePawn, "OnRep_IsDriving", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGDriveablePawn_OnRep_IsDriving_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGDriveablePawn_OnRep_IsDriving_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGDriveablePawn_OnRep_IsDriving()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGDriveablePawn_OnRep_IsDriving_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGDriveablePawn_PlaceExitingDriver_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGDriveablePawn_PlaceExitingDriver_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vehicle" },
		{ "ModuleRelativePath", "FGDriveablePawn.h" },
		{ "ToolTip", "Places the driver at a valid location when they leave the vehicle." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGDriveablePawn_PlaceExitingDriver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGDriveablePawn, "PlaceExitingDriver", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGDriveablePawn_PlaceExitingDriver_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGDriveablePawn_PlaceExitingDriver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGDriveablePawn_PlaceExitingDriver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGDriveablePawn_PlaceExitingDriver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGDriveablePawn_ReceiveOnDriverEnter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGDriveablePawn_ReceiveOnDriverEnter_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "OnDriverEnter" },
		{ "ModuleRelativePath", "FGDriveablePawn.h" },
		{ "ToolTip", "Called when the driver has entered (human or ai)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGDriveablePawn_ReceiveOnDriverEnter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGDriveablePawn, "ReceiveOnDriverEnter", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGDriveablePawn_ReceiveOnDriverEnter_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGDriveablePawn_ReceiveOnDriverEnter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGDriveablePawn_ReceiveOnDriverEnter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGDriveablePawn_ReceiveOnDriverEnter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGDriveablePawn_ReceiveOnDriverLeave_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGDriveablePawn_ReceiveOnDriverLeave_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "OnDriverLeave" },
		{ "ModuleRelativePath", "FGDriveablePawn.h" },
		{ "ToolTip", "Called when the driver is about to leave (human or ai)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGDriveablePawn_ReceiveOnDriverLeave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGDriveablePawn, "ReceiveOnDriverLeave", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGDriveablePawn_ReceiveOnDriverLeave_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGDriveablePawn_ReceiveOnDriverLeave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGDriveablePawn_ReceiveOnDriverLeave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGDriveablePawn_ReceiveOnDriverLeave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGDriveablePawn_ShouldAttachDriver_Statics
	{
		struct FGDriveablePawn_eventShouldAttachDriver_Parms
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
	void Z_Construct_UFunction_AFGDriveablePawn_ShouldAttachDriver_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGDriveablePawn_eventShouldAttachDriver_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGDriveablePawn_ShouldAttachDriver_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGDriveablePawn_eventShouldAttachDriver_Parms), &Z_Construct_UFunction_AFGDriveablePawn_ShouldAttachDriver_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGDriveablePawn_ShouldAttachDriver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGDriveablePawn_ShouldAttachDriver_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGDriveablePawn_ShouldAttachDriver_Statics::Function_MetaDataParams[] = {
		{ "Category", "Driveable" },
		{ "ModuleRelativePath", "FGDriveablePawn.h" },
		{ "ToolTip", "@return true if the driver should be attached." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGDriveablePawn_ShouldAttachDriver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGDriveablePawn, "ShouldAttachDriver", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGDriveablePawn_eventShouldAttachDriver_Parms), Z_Construct_UFunction_AFGDriveablePawn_ShouldAttachDriver_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGDriveablePawn_ShouldAttachDriver_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGDriveablePawn_ShouldAttachDriver_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGDriveablePawn_ShouldAttachDriver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGDriveablePawn_ShouldAttachDriver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGDriveablePawn_ShouldAttachDriver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGDriveablePawn_NoRegister()
	{
		return AFGDriveablePawn::StaticClass();
	}
	struct Z_Construct_UClass_AFGDriveablePawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mIsDriving_MetaData[];
#endif
		static void NewProp_mIsDriving_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mIsDriving;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDriver_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mDriver;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDriverExitOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mDriverExitOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDriverSeatAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mDriverSeatAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDriverSeatSocket_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_mDriverSeatSocket;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mIsDriverVisible_MetaData[];
#endif
		static void NewProp_mIsDriverVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mIsDriverVisible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mShouldAttachDriver_MetaData[];
#endif
		static void NewProp_mShouldAttachDriver_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mShouldAttachDriver;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGDriveablePawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGDriveablePawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGDriveablePawn_CanDriverEnter, "CanDriverEnter" }, // 2557464892
		{ &Z_Construct_UFunction_AFGDriveablePawn_DriverEnter, "DriverEnter" }, // 2998448450
		{ &Z_Construct_UFunction_AFGDriveablePawn_DriverLeave, "DriverLeave" }, // 2172192586
		{ &Z_Construct_UFunction_AFGDriveablePawn_GetDriver, "GetDriver" }, // 2742660953
		{ &Z_Construct_UFunction_AFGDriveablePawn_GetDriverExitOffset, "GetDriverExitOffset" }, // 298126460
		{ &Z_Construct_UFunction_AFGDriveablePawn_GetDriverSeatAnimation, "GetDriverSeatAnimation" }, // 322043948
		{ &Z_Construct_UFunction_AFGDriveablePawn_GetDriverSeatSocket, "GetDriverSeatSocket" }, // 805776988
		{ &Z_Construct_UFunction_AFGDriveablePawn_HasPendingDriver, "HasPendingDriver" }, // 2364032924
		{ &Z_Construct_UFunction_AFGDriveablePawn_IsDriverVisible, "IsDriverVisible" }, // 3127009897
		{ &Z_Construct_UFunction_AFGDriveablePawn_IsDriving, "IsDriving" }, // 3156876381
		{ &Z_Construct_UFunction_AFGDriveablePawn_OnRep_IsDriving, "OnRep_IsDriving" }, // 279527480
		{ &Z_Construct_UFunction_AFGDriveablePawn_PlaceExitingDriver, "PlaceExitingDriver" }, // 2040357924
		{ &Z_Construct_UFunction_AFGDriveablePawn_ReceiveOnDriverEnter, "ReceiveOnDriverEnter" }, // 3840198299
		{ &Z_Construct_UFunction_AFGDriveablePawn_ReceiveOnDriverLeave, "ReceiveOnDriverLeave" }, // 2370650361
		{ &Z_Construct_UFunction_AFGDriveablePawn_ShouldAttachDriver, "ShouldAttachDriver" }, // 2361955563
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGDriveablePawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "FGDriveablePawn.h" },
		{ "ModuleRelativePath", "FGDriveablePawn.h" },
		{ "ToolTip", "Base class for pawns that can be driven by a player character, this includes vehicles, remote drones and passenger seats." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGDriveablePawn_Statics::NewProp_mIsDriving_MetaData[] = {
		{ "ModuleRelativePath", "FGDriveablePawn.h" },
		{ "ToolTip", "Is this vehicle being driven." },
	};
#endif
	void Z_Construct_UClass_AFGDriveablePawn_Statics::NewProp_mIsDriving_SetBit(void* Obj)
	{
		((AFGDriveablePawn*)Obj)->mIsDriving = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGDriveablePawn_Statics::NewProp_mIsDriving = { UE4CodeGen_Private::EPropertyClass::Bool, "mIsDriving", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000100000020, 1, "OnRep_IsDriving", sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AFGDriveablePawn), &Z_Construct_UClass_AFGDriveablePawn_Statics::NewProp_mIsDriving_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGDriveablePawn_Statics::NewProp_mIsDriving_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGDriveablePawn_Statics::NewProp_mIsDriving_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGDriveablePawn_Statics::NewProp_mDriver_MetaData[] = {
		{ "ModuleRelativePath", "FGDriveablePawn.h" },
		{ "ToolTip", "The driver, not saved, pawns remember their last driven vehicle and enters it in begin play." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGDriveablePawn_Statics::NewProp_mDriver = { UE4CodeGen_Private::EPropertyClass::Object, "mDriver", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000020, 1, nullptr, STRUCT_OFFSET(AFGDriveablePawn, mDriver), Z_Construct_UClass_AFGCharacterPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGDriveablePawn_Statics::NewProp_mDriver_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGDriveablePawn_Statics::NewProp_mDriver_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGDriveablePawn_Statics::NewProp_mDriverExitOffset_MetaData[] = {
		{ "Category", "Driveable" },
		{ "ModuleRelativePath", "FGDriveablePawn.h" },
		{ "ToolTip", "Where to place the driver upon exiting (local space), set from FVehicleSeat" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGDriveablePawn_Statics::NewProp_mDriverExitOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "mDriverExitOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(AFGDriveablePawn, mDriverExitOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFGDriveablePawn_Statics::NewProp_mDriverExitOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGDriveablePawn_Statics::NewProp_mDriverExitOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGDriveablePawn_Statics::NewProp_mDriverSeatAnimation_MetaData[] = {
		{ "Category", "Driveable" },
		{ "ModuleRelativePath", "FGDriveablePawn.h" },
		{ "ToolTip", "Animation to play on the character player when in the driver seat, set from FVehicleSeat" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGDriveablePawn_Statics::NewProp_mDriverSeatAnimation = { UE4CodeGen_Private::EPropertyClass::Object, "mDriverSeatAnimation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(AFGDriveablePawn, mDriverSeatAnimation), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGDriveablePawn_Statics::NewProp_mDriverSeatAnimation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGDriveablePawn_Statics::NewProp_mDriverSeatAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGDriveablePawn_Statics::NewProp_mDriverSeatSocket_MetaData[] = {
		{ "Category", "Driveable" },
		{ "ModuleRelativePath", "FGDriveablePawn.h" },
		{ "ToolTip", "Socket to attach the driver to, if mShouldAttachDriver is true, set from FVehicleSeat" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AFGDriveablePawn_Statics::NewProp_mDriverSeatSocket = { UE4CodeGen_Private::EPropertyClass::Name, "mDriverSeatSocket", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(AFGDriveablePawn, mDriverSeatSocket), METADATA_PARAMS(Z_Construct_UClass_AFGDriveablePawn_Statics::NewProp_mDriverSeatSocket_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGDriveablePawn_Statics::NewProp_mDriverSeatSocket_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGDriveablePawn_Statics::NewProp_mIsDriverVisible_MetaData[] = {
		{ "Category", "Driveable" },
		{ "ModuleRelativePath", "FGDriveablePawn.h" },
		{ "ToolTip", "True if the driver should be visible, set from FVehicleSeat" },
	};
#endif
	void Z_Construct_UClass_AFGDriveablePawn_Statics::NewProp_mIsDriverVisible_SetBit(void* Obj)
	{
		((AFGDriveablePawn*)Obj)->mIsDriverVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGDriveablePawn_Statics::NewProp_mIsDriverVisible = { UE4CodeGen_Private::EPropertyClass::Bool, "mIsDriverVisible", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AFGDriveablePawn), &Z_Construct_UClass_AFGDriveablePawn_Statics::NewProp_mIsDriverVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGDriveablePawn_Statics::NewProp_mIsDriverVisible_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGDriveablePawn_Statics::NewProp_mIsDriverVisible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGDriveablePawn_Statics::NewProp_mShouldAttachDriver_MetaData[] = {
		{ "Category", "Driveable" },
		{ "ModuleRelativePath", "FGDriveablePawn.h" },
		{ "ToolTip", "True if the driver should be attached, false if this is a \"remote controlled\" pawn." },
	};
#endif
	void Z_Construct_UClass_AFGDriveablePawn_Statics::NewProp_mShouldAttachDriver_SetBit(void* Obj)
	{
		((AFGDriveablePawn*)Obj)->mShouldAttachDriver = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGDriveablePawn_Statics::NewProp_mShouldAttachDriver = { UE4CodeGen_Private::EPropertyClass::Bool, "mShouldAttachDriver", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AFGDriveablePawn), &Z_Construct_UClass_AFGDriveablePawn_Statics::NewProp_mShouldAttachDriver_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGDriveablePawn_Statics::NewProp_mShouldAttachDriver_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGDriveablePawn_Statics::NewProp_mShouldAttachDriver_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGDriveablePawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGDriveablePawn_Statics::NewProp_mIsDriving,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGDriveablePawn_Statics::NewProp_mDriver,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGDriveablePawn_Statics::NewProp_mDriverExitOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGDriveablePawn_Statics::NewProp_mDriverSeatAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGDriveablePawn_Statics::NewProp_mDriverSeatSocket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGDriveablePawn_Statics::NewProp_mIsDriverVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGDriveablePawn_Statics::NewProp_mShouldAttachDriver,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AFGDriveablePawn_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UFGSaveInterface_NoRegister, (int32)VTABLE_OFFSET(AFGDriveablePawn, IFGSaveInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGDriveablePawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGDriveablePawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGDriveablePawn_Statics::ClassParams = {
		&AFGDriveablePawn::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AFGDriveablePawn_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFGDriveablePawn_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		InterfaceParams, ARRAY_COUNT(InterfaceParams),
		METADATA_PARAMS(Z_Construct_UClass_AFGDriveablePawn_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGDriveablePawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGDriveablePawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGDriveablePawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGDriveablePawn, 1521946407);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGDriveablePawn(Z_Construct_UClass_AFGDriveablePawn, &AFGDriveablePawn::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGDriveablePawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGDriveablePawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
