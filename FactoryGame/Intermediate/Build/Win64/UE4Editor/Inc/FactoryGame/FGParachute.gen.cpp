// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Equipment/FGParachute.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGParachute() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGParachuteCameraShake_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGParachuteCameraShake();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShake();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGParachute_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGParachute();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGEquipment();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGParachute_IsDeployed();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGParachute_ModifyVelocity();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGParachute_OnDeployed();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGParachute_OnDeployStop();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGParachuteAttachment_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGParachuteAttachment();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGEquipmentAttachment();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGParachuteAttachment_OnDeployed();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGParachuteAttachment_OnDeployStop();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGParachuteAttachment_OnRep_IsDeployed();
// End Cross Module References
	void UFGParachuteCameraShake::StaticRegisterNativesUFGParachuteCameraShake()
	{
	}
	UClass* Z_Construct_UClass_UFGParachuteCameraShake_NoRegister()
	{
		return UFGParachuteCameraShake::StaticClass();
	}
	struct Z_Construct_UClass_UFGParachuteCameraShake_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGParachuteCameraShake_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCameraShake,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGParachuteCameraShake_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Equipment/FGParachute.h" },
		{ "ModuleRelativePath", "Equipment/FGParachute.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGParachuteCameraShake_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGParachuteCameraShake>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGParachuteCameraShake_Statics::ClassParams = {
		&UFGParachuteCameraShake::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001010A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFGParachuteCameraShake_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGParachuteCameraShake_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGParachuteCameraShake()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGParachuteCameraShake_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGParachuteCameraShake, 1273794306);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGParachuteCameraShake(Z_Construct_UClass_UFGParachuteCameraShake, &UFGParachuteCameraShake::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGParachuteCameraShake"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGParachuteCameraShake);
	static FName NAME_AFGParachute_ModifyVelocity = FName(TEXT("ModifyVelocity"));
	FVector AFGParachute::ModifyVelocity(float deltaTime, FVector const& oldVelocity)
	{
		FGParachute_eventModifyVelocity_Parms Parms;
		Parms.deltaTime=deltaTime;
		Parms.oldVelocity=oldVelocity;
		ProcessEvent(FindFunctionChecked(NAME_AFGParachute_ModifyVelocity),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AFGParachute_OnDeployed = FName(TEXT("OnDeployed"));
	void AFGParachute::OnDeployed()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGParachute_OnDeployed),NULL);
	}
	static FName NAME_AFGParachute_OnDeployStop = FName(TEXT("OnDeployStop"));
	void AFGParachute::OnDeployStop()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGParachute_OnDeployStop),NULL);
	}
	void AFGParachute::StaticRegisterNativesAFGParachute()
	{
		UClass* Class = AFGParachute::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsDeployed", &AFGParachute::execIsDeployed },
			{ "ModifyVelocity", &AFGParachute::execModifyVelocity },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGParachute_IsDeployed_Statics
	{
		struct FGParachute_eventIsDeployed_Parms
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
	void Z_Construct_UFunction_AFGParachute_IsDeployed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGParachute_eventIsDeployed_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGParachute_IsDeployed_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGParachute_eventIsDeployed_Parms), &Z_Construct_UFunction_AFGParachute_IsDeployed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGParachute_IsDeployed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGParachute_IsDeployed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGParachute_IsDeployed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Equipment/FGParachute.h" },
		{ "ToolTip", "Is the parachute deployed or not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGParachute_IsDeployed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGParachute, "IsDeployed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGParachute_eventIsDeployed_Parms), Z_Construct_UFunction_AFGParachute_IsDeployed_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGParachute_IsDeployed_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGParachute_IsDeployed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGParachute_IsDeployed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGParachute_IsDeployed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGParachute_IsDeployed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGParachute_ModifyVelocity_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_oldVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_oldVelocity;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_deltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGParachute_ModifyVelocity_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGParachute_eventModifyVelocity_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGParachute_ModifyVelocity_Statics::NewProp_oldVelocity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGParachute_ModifyVelocity_Statics::NewProp_oldVelocity = { UE4CodeGen_Private::EPropertyClass::Struct, "oldVelocity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(FGParachute_eventModifyVelocity_Parms, oldVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AFGParachute_ModifyVelocity_Statics::NewProp_oldVelocity_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGParachute_ModifyVelocity_Statics::NewProp_oldVelocity_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGParachute_ModifyVelocity_Statics::NewProp_deltaTime = { UE4CodeGen_Private::EPropertyClass::Float, "deltaTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGParachute_eventModifyVelocity_Parms, deltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGParachute_ModifyVelocity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGParachute_ModifyVelocity_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGParachute_ModifyVelocity_Statics::NewProp_oldVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGParachute_ModifyVelocity_Statics::NewProp_deltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGParachute_ModifyVelocity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Equipment/FGParachute.h" },
		{ "ToolTip", "This function calculates our new velocity when we are deployed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGParachute_ModifyVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGParachute, "ModifyVelocity", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08C20C00, sizeof(FGParachute_eventModifyVelocity_Parms), Z_Construct_UFunction_AFGParachute_ModifyVelocity_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGParachute_ModifyVelocity_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGParachute_ModifyVelocity_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGParachute_ModifyVelocity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGParachute_ModifyVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGParachute_ModifyVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGParachute_OnDeployed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGParachute_OnDeployed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Equipment/FGParachute.h" },
		{ "ToolTip", "Called when we start deploying" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGParachute_OnDeployed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGParachute, "OnDeployed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGParachute_OnDeployed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGParachute_OnDeployed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGParachute_OnDeployed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGParachute_OnDeployed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGParachute_OnDeployStop_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGParachute_OnDeployStop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Equipment/FGParachute.h" },
		{ "ToolTip", "Called when we stop deploying" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGParachute_OnDeployStop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGParachute, "OnDeployStop", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGParachute_OnDeployStop_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGParachute_OnDeployStop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGParachute_OnDeployStop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGParachute_OnDeployStop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGParachute_NoRegister()
	{
		return AFGParachute::StaticClass();
	}
	struct Z_Construct_UClass_AFGParachute_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mTerminalVelocityZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mTerminalVelocityZ;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGParachute_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGEquipment,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGParachute_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGParachute_IsDeployed, "IsDeployed" }, // 465096695
		{ &Z_Construct_UFunction_AFGParachute_ModifyVelocity, "ModifyVelocity" }, // 2552378138
		{ &Z_Construct_UFunction_AFGParachute_OnDeployed, "OnDeployed" }, // 2816129638
		{ &Z_Construct_UFunction_AFGParachute_OnDeployStop, "OnDeployStop" }, // 847764908
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGParachute_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Equipment/FGParachute.h" },
		{ "ModuleRelativePath", "Equipment/FGParachute.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGParachute_Statics::NewProp_mTerminalVelocityZ_MetaData[] = {
		{ "Category", "Parachute" },
		{ "ModuleRelativePath", "Equipment/FGParachute.h" },
		{ "ToolTip", "The velocity we fall at using the parachute." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGParachute_Statics::NewProp_mTerminalVelocityZ = { UE4CodeGen_Private::EPropertyClass::Float, "mTerminalVelocityZ", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(AFGParachute, mTerminalVelocityZ), METADATA_PARAMS(Z_Construct_UClass_AFGParachute_Statics::NewProp_mTerminalVelocityZ_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGParachute_Statics::NewProp_mTerminalVelocityZ_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGParachute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGParachute_Statics::NewProp_mTerminalVelocityZ,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGParachute_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGParachute>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGParachute_Statics::ClassParams = {
		&AFGParachute::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AFGParachute_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFGParachute_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AFGParachute_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGParachute_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGParachute()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGParachute_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGParachute, 1748566984);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGParachute(Z_Construct_UClass_AFGParachute, &AFGParachute::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGParachute"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGParachute);
	static FName NAME_AFGParachuteAttachment_OnDeployed = FName(TEXT("OnDeployed"));
	void AFGParachuteAttachment::OnDeployed()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGParachuteAttachment_OnDeployed),NULL);
	}
	static FName NAME_AFGParachuteAttachment_OnDeployStop = FName(TEXT("OnDeployStop"));
	void AFGParachuteAttachment::OnDeployStop()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGParachuteAttachment_OnDeployStop),NULL);
	}
	void AFGParachuteAttachment::StaticRegisterNativesAFGParachuteAttachment()
	{
		UClass* Class = AFGParachuteAttachment::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_IsDeployed", &AFGParachuteAttachment::execOnRep_IsDeployed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGParachuteAttachment_OnDeployed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGParachuteAttachment_OnDeployed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Equipment/FGParachute.h" },
		{ "ToolTip", "Called when we start thrusting" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGParachuteAttachment_OnDeployed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGParachuteAttachment, "OnDeployed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGParachuteAttachment_OnDeployed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGParachuteAttachment_OnDeployed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGParachuteAttachment_OnDeployed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGParachuteAttachment_OnDeployed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGParachuteAttachment_OnDeployStop_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGParachuteAttachment_OnDeployStop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Equipment/FGParachute.h" },
		{ "ToolTip", "Called when we start thrusting" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGParachuteAttachment_OnDeployStop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGParachuteAttachment, "OnDeployStop", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGParachuteAttachment_OnDeployStop_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGParachuteAttachment_OnDeployStop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGParachuteAttachment_OnDeployStop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGParachuteAttachment_OnDeployStop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGParachuteAttachment_OnRep_IsDeployed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGParachuteAttachment_OnRep_IsDeployed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Equipment/FGParachute.h" },
		{ "ToolTip", "Called when mIsDeployed is replicated" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGParachuteAttachment_OnRep_IsDeployed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGParachuteAttachment, "OnRep_IsDeployed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGParachuteAttachment_OnRep_IsDeployed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGParachuteAttachment_OnRep_IsDeployed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGParachuteAttachment_OnRep_IsDeployed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGParachuteAttachment_OnRep_IsDeployed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGParachuteAttachment_NoRegister()
	{
		return AFGParachuteAttachment::StaticClass();
	}
	struct Z_Construct_UClass_AFGParachuteAttachment_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mIsDeployed_MetaData[];
#endif
		static void NewProp_mIsDeployed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mIsDeployed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGParachuteAttachment_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGEquipmentAttachment,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGParachuteAttachment_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGParachuteAttachment_OnDeployed, "OnDeployed" }, // 2405947511
		{ &Z_Construct_UFunction_AFGParachuteAttachment_OnDeployStop, "OnDeployStop" }, // 899848828
		{ &Z_Construct_UFunction_AFGParachuteAttachment_OnRep_IsDeployed, "OnRep_IsDeployed" }, // 3831751690
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGParachuteAttachment_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Equipment/FGParachute.h" },
		{ "ModuleRelativePath", "Equipment/FGParachute.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGParachuteAttachment_Statics::NewProp_mIsDeployed_MetaData[] = {
		{ "ModuleRelativePath", "Equipment/FGParachute.h" },
	};
#endif
	void Z_Construct_UClass_AFGParachuteAttachment_Statics::NewProp_mIsDeployed_SetBit(void* Obj)
	{
		((AFGParachuteAttachment*)Obj)->mIsDeployed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGParachuteAttachment_Statics::NewProp_mIsDeployed = { UE4CodeGen_Private::EPropertyClass::Bool, "mIsDeployed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000100000020, 1, "OnRep_IsDeployed", sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AFGParachuteAttachment), &Z_Construct_UClass_AFGParachuteAttachment_Statics::NewProp_mIsDeployed_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGParachuteAttachment_Statics::NewProp_mIsDeployed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGParachuteAttachment_Statics::NewProp_mIsDeployed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGParachuteAttachment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGParachuteAttachment_Statics::NewProp_mIsDeployed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGParachuteAttachment_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGParachuteAttachment>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGParachuteAttachment_Statics::ClassParams = {
		&AFGParachuteAttachment::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AFGParachuteAttachment_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFGParachuteAttachment_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AFGParachuteAttachment_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGParachuteAttachment_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGParachuteAttachment()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGParachuteAttachment_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGParachuteAttachment, 2582766948);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGParachuteAttachment(Z_Construct_UClass_AFGParachuteAttachment, &AFGParachuteAttachment::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGParachuteAttachment"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGParachuteAttachment);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
