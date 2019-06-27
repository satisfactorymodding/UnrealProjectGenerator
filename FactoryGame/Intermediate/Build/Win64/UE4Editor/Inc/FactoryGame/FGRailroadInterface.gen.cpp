// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGRailroadInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGRailroadInterface() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGRailroadInterface_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGRailroadInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGRailroadInterface_GetTrackPosition();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FRailroadTrackPosition();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGRailroadInterface_RegisteredOnTrack();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGRailroadInterface_UnregisteredFromTrack();
// End Cross Module References
	FRailroadTrackPosition IFGRailroadInterface::GetTrackPosition() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetTrackPosition instead.");
		FGRailroadInterface_eventGetTrackPosition_Parms Parms;
		return Parms.ReturnValue;
	}
	void IFGRailroadInterface::RegisteredOnTrack(FRailroadTrackPosition const& position)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_RegisteredOnTrack instead.");
	}
	void IFGRailroadInterface::UnregisteredFromTrack()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_UnregisteredFromTrack instead.");
	}
	void UFGRailroadInterface::StaticRegisterNativesUFGRailroadInterface()
	{
		UClass* Class = UFGRailroadInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTrackPosition", &IFGRailroadInterface::execGetTrackPosition },
			{ "RegisteredOnTrack", &IFGRailroadInterface::execRegisteredOnTrack },
			{ "UnregisteredFromTrack", &IFGRailroadInterface::execUnregisteredFromTrack },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGRailroadInterface_GetTrackPosition_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGRailroadInterface_GetTrackPosition_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGRailroadInterface_eventGetTrackPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FRailroadTrackPosition, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGRailroadInterface_GetTrackPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGRailroadInterface_GetTrackPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGRailroadInterface_GetTrackPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Railroad" },
		{ "ModuleRelativePath", "FGRailroadInterface.h" },
		{ "ToolTip", "Get the track location." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGRailroadInterface_GetTrackPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGRailroadInterface, "GetTrackPosition", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x5C020C00, sizeof(FGRailroadInterface_eventGetTrackPosition_Parms), Z_Construct_UFunction_UFGRailroadInterface_GetTrackPosition_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGRailroadInterface_GetTrackPosition_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGRailroadInterface_GetTrackPosition_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGRailroadInterface_GetTrackPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGRailroadInterface_GetTrackPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGRailroadInterface_GetTrackPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGRailroadInterface_RegisteredOnTrack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_position;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGRailroadInterface_RegisteredOnTrack_Statics::NewProp_position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGRailroadInterface_RegisteredOnTrack_Statics::NewProp_position = { UE4CodeGen_Private::EPropertyClass::Struct, "position", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(FGRailroadInterface_eventRegisteredOnTrack_Parms, position), Z_Construct_UScriptStruct_FRailroadTrackPosition, METADATA_PARAMS(Z_Construct_UFunction_UFGRailroadInterface_RegisteredOnTrack_Statics::NewProp_position_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGRailroadInterface_RegisteredOnTrack_Statics::NewProp_position_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGRailroadInterface_RegisteredOnTrack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGRailroadInterface_RegisteredOnTrack_Statics::NewProp_position,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGRailroadInterface_RegisteredOnTrack_Statics::Function_MetaDataParams[] = {
		{ "Category", "Railroad" },
		{ "ModuleRelativePath", "FGRailroadInterface.h" },
		{ "ToolTip", "When this is registered on a track." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGRailroadInterface_RegisteredOnTrack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGRailroadInterface, "RegisteredOnTrack", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08420C00, sizeof(FGRailroadInterface_eventRegisteredOnTrack_Parms), Z_Construct_UFunction_UFGRailroadInterface_RegisteredOnTrack_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGRailroadInterface_RegisteredOnTrack_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGRailroadInterface_RegisteredOnTrack_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGRailroadInterface_RegisteredOnTrack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGRailroadInterface_RegisteredOnTrack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGRailroadInterface_RegisteredOnTrack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGRailroadInterface_UnregisteredFromTrack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGRailroadInterface_UnregisteredFromTrack_Statics::Function_MetaDataParams[] = {
		{ "Category", "Railroad" },
		{ "ModuleRelativePath", "FGRailroadInterface.h" },
		{ "ToolTip", "When this is unregistered from a track, e.g. the track is dismantled." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGRailroadInterface_UnregisteredFromTrack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGRailroadInterface, "UnregisteredFromTrack", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGRailroadInterface_UnregisteredFromTrack_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGRailroadInterface_UnregisteredFromTrack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGRailroadInterface_UnregisteredFromTrack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGRailroadInterface_UnregisteredFromTrack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGRailroadInterface_NoRegister()
	{
		return UFGRailroadInterface::StaticClass();
	}
	struct Z_Construct_UClass_UFGRailroadInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGRailroadInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGRailroadInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGRailroadInterface_GetTrackPosition, "GetTrackPosition" }, // 3474987950
		{ &Z_Construct_UFunction_UFGRailroadInterface_RegisteredOnTrack, "RegisteredOnTrack" }, // 920767127
		{ &Z_Construct_UFunction_UFGRailroadInterface_UnregisteredFromTrack, "UnregisteredFromTrack" }, // 2352640359
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGRailroadInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "FGRailroadInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGRailroadInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IFGRailroadInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGRailroadInterface_Statics::ClassParams = {
		&UFGRailroadInterface::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000040A1u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFGRailroadInterface_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGRailroadInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGRailroadInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGRailroadInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGRailroadInterface, 1810887761);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGRailroadInterface(Z_Construct_UClass_UFGRailroadInterface, &UFGRailroadInterface::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGRailroadInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGRailroadInterface);
	static FName NAME_UFGRailroadInterface_GetTrackPosition = FName(TEXT("GetTrackPosition"));
	FRailroadTrackPosition IFGRailroadInterface::Execute_GetTrackPosition(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFGRailroadInterface::StaticClass()));
		FGRailroadInterface_eventGetTrackPosition_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UFGRailroadInterface_GetTrackPosition);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IFGRailroadInterface*)(O->GetNativeInterfaceAddress(UFGRailroadInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetTrackPosition_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UFGRailroadInterface_RegisteredOnTrack = FName(TEXT("RegisteredOnTrack"));
	void IFGRailroadInterface::Execute_RegisteredOnTrack(UObject* O, FRailroadTrackPosition const& position)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFGRailroadInterface::StaticClass()));
		FGRailroadInterface_eventRegisteredOnTrack_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UFGRailroadInterface_RegisteredOnTrack);
		if (Func)
		{
			Parms.position=position;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IFGRailroadInterface*)(O->GetNativeInterfaceAddress(UFGRailroadInterface::StaticClass())))
		{
			I->RegisteredOnTrack_Implementation(position);
		}
	}
	static FName NAME_UFGRailroadInterface_UnregisteredFromTrack = FName(TEXT("UnregisteredFromTrack"));
	void IFGRailroadInterface::Execute_UnregisteredFromTrack(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFGRailroadInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UFGRailroadInterface_UnregisteredFromTrack);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IFGRailroadInterface*)(O->GetNativeInterfaceAddress(UFGRailroadInterface::StaticClass())))
		{
			I->UnregisteredFromTrack_Implementation();
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
