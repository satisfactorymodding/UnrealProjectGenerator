// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGVehicleDestroyableInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGVehicleDestroyableInterface() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGVehicleDestroyableInterface_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGVehicleDestroyableInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGVehicleDestroyableInterface_GetDestroyAudioEvent();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGVehicleDestroyableInterface_GetDestroyEffect();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGVehicleDestroyableInterface_GetForceThreshold();
// End Cross Module References
	UAkAudioEvent* IFGVehicleDestroyableInterface::GetDestroyAudioEvent()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetDestroyAudioEvent instead.");
		FGVehicleDestroyableInterface_eventGetDestroyAudioEvent_Parms Parms;
		return Parms.ReturnValue;
	}
	UParticleSystem* IFGVehicleDestroyableInterface::GetDestroyEffect()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetDestroyEffect instead.");
		FGVehicleDestroyableInterface_eventGetDestroyEffect_Parms Parms;
		return Parms.ReturnValue;
	}
	float IFGVehicleDestroyableInterface::GetForceThreshold()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetForceThreshold instead.");
		FGVehicleDestroyableInterface_eventGetForceThreshold_Parms Parms;
		return Parms.ReturnValue;
	}
	void UFGVehicleDestroyableInterface::StaticRegisterNativesUFGVehicleDestroyableInterface()
	{
		UClass* Class = UFGVehicleDestroyableInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDestroyAudioEvent", &IFGVehicleDestroyableInterface::execGetDestroyAudioEvent },
			{ "GetDestroyEffect", &IFGVehicleDestroyableInterface::execGetDestroyEffect },
			{ "GetForceThreshold", &IFGVehicleDestroyableInterface::execGetForceThreshold },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGVehicleDestroyableInterface_GetDestroyAudioEvent_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGVehicleDestroyableInterface_GetDestroyAudioEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGVehicleDestroyableInterface_eventGetDestroyAudioEvent_Parms, ReturnValue), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGVehicleDestroyableInterface_GetDestroyAudioEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGVehicleDestroyableInterface_GetDestroyAudioEvent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGVehicleDestroyableInterface_GetDestroyAudioEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vehicle Destroy Interface" },
		{ "ModuleRelativePath", "FGVehicleDestroyableInterface.h" },
		{ "ToolTip", "Audio event to be posted when destroyed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGVehicleDestroyableInterface_GetDestroyAudioEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGVehicleDestroyableInterface, nullptr, "GetDestroyAudioEvent", sizeof(FGVehicleDestroyableInterface_eventGetDestroyAudioEvent_Parms), Z_Construct_UFunction_UFGVehicleDestroyableInterface_GetDestroyAudioEvent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGVehicleDestroyableInterface_GetDestroyAudioEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGVehicleDestroyableInterface_GetDestroyAudioEvent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGVehicleDestroyableInterface_GetDestroyAudioEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGVehicleDestroyableInterface_GetDestroyAudioEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGVehicleDestroyableInterface_GetDestroyAudioEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGVehicleDestroyableInterface_GetDestroyEffect_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGVehicleDestroyableInterface_GetDestroyEffect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGVehicleDestroyableInterface_eventGetDestroyEffect_Parms, ReturnValue), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGVehicleDestroyableInterface_GetDestroyEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGVehicleDestroyableInterface_GetDestroyEffect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGVehicleDestroyableInterface_GetDestroyEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vehicle Destroy Interface" },
		{ "ModuleRelativePath", "FGVehicleDestroyableInterface.h" },
		{ "ToolTip", "Particle System to be played when destroyed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGVehicleDestroyableInterface_GetDestroyEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGVehicleDestroyableInterface, nullptr, "GetDestroyEffect", sizeof(FGVehicleDestroyableInterface_eventGetDestroyEffect_Parms), Z_Construct_UFunction_UFGVehicleDestroyableInterface_GetDestroyEffect_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGVehicleDestroyableInterface_GetDestroyEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGVehicleDestroyableInterface_GetDestroyEffect_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGVehicleDestroyableInterface_GetDestroyEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGVehicleDestroyableInterface_GetDestroyEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGVehicleDestroyableInterface_GetDestroyEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGVehicleDestroyableInterface_GetForceThreshold_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGVehicleDestroyableInterface_GetForceThreshold_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGVehicleDestroyableInterface_eventGetForceThreshold_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGVehicleDestroyableInterface_GetForceThreshold_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGVehicleDestroyableInterface_GetForceThreshold_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGVehicleDestroyableInterface_GetForceThreshold_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vehicle Destroy Interface" },
		{ "ModuleRelativePath", "FGVehicleDestroyableInterface.h" },
		{ "ToolTip", "@returns the force required (if any) to destroy this object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGVehicleDestroyableInterface_GetForceThreshold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGVehicleDestroyableInterface, nullptr, "GetForceThreshold", sizeof(FGVehicleDestroyableInterface_eventGetForceThreshold_Parms), Z_Construct_UFunction_UFGVehicleDestroyableInterface_GetForceThreshold_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGVehicleDestroyableInterface_GetForceThreshold_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGVehicleDestroyableInterface_GetForceThreshold_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGVehicleDestroyableInterface_GetForceThreshold_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGVehicleDestroyableInterface_GetForceThreshold()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGVehicleDestroyableInterface_GetForceThreshold_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGVehicleDestroyableInterface_NoRegister()
	{
		return UFGVehicleDestroyableInterface::StaticClass();
	}
	struct Z_Construct_UClass_UFGVehicleDestroyableInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGVehicleDestroyableInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGVehicleDestroyableInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGVehicleDestroyableInterface_GetDestroyAudioEvent, "GetDestroyAudioEvent" }, // 1241213341
		{ &Z_Construct_UFunction_UFGVehicleDestroyableInterface_GetDestroyEffect, "GetDestroyEffect" }, // 2292255239
		{ &Z_Construct_UFunction_UFGVehicleDestroyableInterface_GetForceThreshold, "GetForceThreshold" }, // 84251254
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGVehicleDestroyableInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "FGVehicleDestroyableInterface.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGVehicleDestroyableInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IFGVehicleDestroyableInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGVehicleDestroyableInterface_Statics::ClassParams = {
		&UFGVehicleDestroyableInterface::StaticClass,
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
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UFGVehicleDestroyableInterface_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGVehicleDestroyableInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGVehicleDestroyableInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGVehicleDestroyableInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGVehicleDestroyableInterface, 1253567551);
	template<> FACTORYGAME_API UClass* StaticClass<UFGVehicleDestroyableInterface>()
	{
		return UFGVehicleDestroyableInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGVehicleDestroyableInterface(Z_Construct_UClass_UFGVehicleDestroyableInterface, &UFGVehicleDestroyableInterface::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGVehicleDestroyableInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGVehicleDestroyableInterface);
	static FName NAME_UFGVehicleDestroyableInterface_GetDestroyAudioEvent = FName(TEXT("GetDestroyAudioEvent"));
	UAkAudioEvent* IFGVehicleDestroyableInterface::Execute_GetDestroyAudioEvent(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFGVehicleDestroyableInterface::StaticClass()));
		FGVehicleDestroyableInterface_eventGetDestroyAudioEvent_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UFGVehicleDestroyableInterface_GetDestroyAudioEvent);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IFGVehicleDestroyableInterface*)(O->GetNativeInterfaceAddress(UFGVehicleDestroyableInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetDestroyAudioEvent_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UFGVehicleDestroyableInterface_GetDestroyEffect = FName(TEXT("GetDestroyEffect"));
	UParticleSystem* IFGVehicleDestroyableInterface::Execute_GetDestroyEffect(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFGVehicleDestroyableInterface::StaticClass()));
		FGVehicleDestroyableInterface_eventGetDestroyEffect_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UFGVehicleDestroyableInterface_GetDestroyEffect);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IFGVehicleDestroyableInterface*)(O->GetNativeInterfaceAddress(UFGVehicleDestroyableInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetDestroyEffect_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UFGVehicleDestroyableInterface_GetForceThreshold = FName(TEXT("GetForceThreshold"));
	float IFGVehicleDestroyableInterface::Execute_GetForceThreshold(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFGVehicleDestroyableInterface::StaticClass()));
		FGVehicleDestroyableInterface_eventGetForceThreshold_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UFGVehicleDestroyableInterface_GetForceThreshold);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IFGVehicleDestroyableInterface*)(O->GetNativeInterfaceAddress(UFGVehicleDestroyableInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetForceThreshold_Implementation();
		}
		return Parms.ReturnValue;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
