// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGExplosiveDestroyableInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGExplosiveDestroyableInterface() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGExplosiveDestroyableInterface_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGExplosiveDestroyableInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGExplosiveDestroyableInterface_GetDestroyEffect();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGExplosiveDestroyableInterface_NotifyExploded();
// End Cross Module References
	UParticleSystem* IFGExplosiveDestroyableInterface::GetDestroyEffect()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetDestroyEffect instead.");
		FGExplosiveDestroyableInterface_eventGetDestroyEffect_Parms Parms;
		return Parms.ReturnValue;
	}
	bool IFGExplosiveDestroyableInterface::NotifyExploded()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_NotifyExploded instead.");
		FGExplosiveDestroyableInterface_eventNotifyExploded_Parms Parms;
		return Parms.ReturnValue;
	}
	void UFGExplosiveDestroyableInterface::StaticRegisterNativesUFGExplosiveDestroyableInterface()
	{
		UClass* Class = UFGExplosiveDestroyableInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDestroyEffect", &IFGExplosiveDestroyableInterface::execGetDestroyEffect },
			{ "NotifyExploded", &IFGExplosiveDestroyableInterface::execNotifyExploded },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGExplosiveDestroyableInterface_GetDestroyEffect_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGExplosiveDestroyableInterface_GetDestroyEffect_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGExplosiveDestroyableInterface_eventGetDestroyEffect_Parms, ReturnValue), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGExplosiveDestroyableInterface_GetDestroyEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGExplosiveDestroyableInterface_GetDestroyEffect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGExplosiveDestroyableInterface_GetDestroyEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Explosive Destroy Interface" },
		{ "ModuleRelativePath", "Public/FGExplosiveDestroyableInterface.h" },
		{ "ToolTip", "Particle System to be played when destroyed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGExplosiveDestroyableInterface_GetDestroyEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGExplosiveDestroyableInterface, "GetDestroyEffect", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, sizeof(FGExplosiveDestroyableInterface_eventGetDestroyEffect_Parms), Z_Construct_UFunction_UFGExplosiveDestroyableInterface_GetDestroyEffect_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGExplosiveDestroyableInterface_GetDestroyEffect_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGExplosiveDestroyableInterface_GetDestroyEffect_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGExplosiveDestroyableInterface_GetDestroyEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGExplosiveDestroyableInterface_GetDestroyEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGExplosiveDestroyableInterface_GetDestroyEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGExplosiveDestroyableInterface_NotifyExploded_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFGExplosiveDestroyableInterface_NotifyExploded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGExplosiveDestroyableInterface_eventNotifyExploded_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGExplosiveDestroyableInterface_NotifyExploded_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGExplosiveDestroyableInterface_eventNotifyExploded_Parms), &Z_Construct_UFunction_UFGExplosiveDestroyableInterface_NotifyExploded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGExplosiveDestroyableInterface_NotifyExploded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGExplosiveDestroyableInterface_NotifyExploded_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGExplosiveDestroyableInterface_NotifyExploded_Statics::Function_MetaDataParams[] = {
		{ "Category", "Explosive Destroy Interface" },
		{ "ModuleRelativePath", "Public/FGExplosiveDestroyableInterface.h" },
		{ "ToolTip", "Blueprint event for modifying BP objects when they are exploded" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGExplosiveDestroyableInterface_NotifyExploded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGExplosiveDestroyableInterface, "NotifyExploded", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, sizeof(FGExplosiveDestroyableInterface_eventNotifyExploded_Parms), Z_Construct_UFunction_UFGExplosiveDestroyableInterface_NotifyExploded_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGExplosiveDestroyableInterface_NotifyExploded_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGExplosiveDestroyableInterface_NotifyExploded_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGExplosiveDestroyableInterface_NotifyExploded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGExplosiveDestroyableInterface_NotifyExploded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGExplosiveDestroyableInterface_NotifyExploded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGExplosiveDestroyableInterface_NoRegister()
	{
		return UFGExplosiveDestroyableInterface::StaticClass();
	}
	struct Z_Construct_UClass_UFGExplosiveDestroyableInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGExplosiveDestroyableInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGExplosiveDestroyableInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGExplosiveDestroyableInterface_GetDestroyEffect, "GetDestroyEffect" }, // 2306609308
		{ &Z_Construct_UFunction_UFGExplosiveDestroyableInterface_NotifyExploded, "NotifyExploded" }, // 1347485733
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGExplosiveDestroyableInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FGExplosiveDestroyableInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGExplosiveDestroyableInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IFGExplosiveDestroyableInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGExplosiveDestroyableInterface_Statics::ClassParams = {
		&UFGExplosiveDestroyableInterface::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001040A1u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFGExplosiveDestroyableInterface_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGExplosiveDestroyableInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGExplosiveDestroyableInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGExplosiveDestroyableInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGExplosiveDestroyableInterface, 3796152437);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGExplosiveDestroyableInterface(Z_Construct_UClass_UFGExplosiveDestroyableInterface, &UFGExplosiveDestroyableInterface::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGExplosiveDestroyableInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGExplosiveDestroyableInterface);
	static FName NAME_UFGExplosiveDestroyableInterface_GetDestroyEffect = FName(TEXT("GetDestroyEffect"));
	UParticleSystem* IFGExplosiveDestroyableInterface::Execute_GetDestroyEffect(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFGExplosiveDestroyableInterface::StaticClass()));
		FGExplosiveDestroyableInterface_eventGetDestroyEffect_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UFGExplosiveDestroyableInterface_GetDestroyEffect);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IFGExplosiveDestroyableInterface*)(O->GetNativeInterfaceAddress(UFGExplosiveDestroyableInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetDestroyEffect_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UFGExplosiveDestroyableInterface_NotifyExploded = FName(TEXT("NotifyExploded"));
	bool IFGExplosiveDestroyableInterface::Execute_NotifyExploded(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFGExplosiveDestroyableInterface::StaticClass()));
		FGExplosiveDestroyableInterface_eventNotifyExploded_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UFGExplosiveDestroyableInterface_NotifyExploded);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IFGExplosiveDestroyableInterface*)(O->GetNativeInterfaceAddress(UFGExplosiveDestroyableInterface::StaticClass())))
		{
			Parms.ReturnValue = I->NotifyExploded_Implementation();
		}
		return Parms.ReturnValue;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
