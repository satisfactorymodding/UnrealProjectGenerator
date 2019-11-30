// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/UI/Message/FGMessageSender.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGMessageSender() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGMessageSender_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGMessageSender();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGMessageSender_GetSenderDefaultObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	void UFGMessageSender::StaticRegisterNativesUFGMessageSender()
	{
		UClass* Class = UFGMessageSender::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSenderDefaultObject", &UFGMessageSender::execGetSenderDefaultObject },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGMessageSender_GetSenderDefaultObject_Statics
	{
		struct FGMessageSender_eventGetSenderDefaultObject_Parms
		{
			TSubclassOf<UFGMessageSender>  inClass;
			UObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGMessageSender_GetSenderDefaultObject_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGMessageSender_eventGetSenderDefaultObject_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGMessageSender_GetSenderDefaultObject_Statics::NewProp_inClass = { UE4CodeGen_Private::EPropertyClass::Class, "inClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGMessageSender_eventGetSenderDefaultObject_Parms, inClass), Z_Construct_UClass_UFGMessageSender_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGMessageSender_GetSenderDefaultObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGMessageSender_GetSenderDefaultObject_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGMessageSender_GetSenderDefaultObject_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGMessageSender_GetSenderDefaultObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sender|Utilities" },
		{ "DeterminesOutputType", "inClass" },
		{ "ModuleRelativePath", "Public/UI/Message/FGMessageSender.h" },
		{ "ToolTip", "Gets the default object so we can access stuff like the texture etc" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGMessageSender_GetSenderDefaultObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGMessageSender, "GetSenderDefaultObject", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(FGMessageSender_eventGetSenderDefaultObject_Parms), Z_Construct_UFunction_UFGMessageSender_GetSenderDefaultObject_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGMessageSender_GetSenderDefaultObject_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGMessageSender_GetSenderDefaultObject_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGMessageSender_GetSenderDefaultObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGMessageSender_GetSenderDefaultObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGMessageSender_GetSenderDefaultObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGMessageSender_NoRegister()
	{
		return UFGMessageSender::StaticClass();
	}
	struct Z_Construct_UClass_UFGMessageSender_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSenderMail_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_mSenderMail;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSenderName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_mSenderName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGMessageSender_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGMessageSender_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGMessageSender_GetSenderDefaultObject, "GetSenderDefaultObject" }, // 2235317652
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGMessageSender_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UI/Message/FGMessageSender.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI/Message/FGMessageSender.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGMessageSender_Statics::NewProp_mTexture_MetaData[] = {
		{ "Category", "Sender" },
		{ "ModuleRelativePath", "Public/UI/Message/FGMessageSender.h" },
		{ "ToolTip", "Image of the sender" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGMessageSender_Statics::NewProp_mTexture = { UE4CodeGen_Private::EPropertyClass::Object, "mTexture", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010015, 1, nullptr, STRUCT_OFFSET(UFGMessageSender, mTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGMessageSender_Statics::NewProp_mTexture_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGMessageSender_Statics::NewProp_mTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGMessageSender_Statics::NewProp_mSenderMail_MetaData[] = {
		{ "Category", "Sender" },
		{ "ModuleRelativePath", "Public/UI/Message/FGMessageSender.h" },
		{ "ToolTip", "Mail adress of the sender" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UFGMessageSender_Statics::NewProp_mSenderMail = { UE4CodeGen_Private::EPropertyClass::Text, "mSenderMail", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010015, 1, nullptr, STRUCT_OFFSET(UFGMessageSender, mSenderMail), METADATA_PARAMS(Z_Construct_UClass_UFGMessageSender_Statics::NewProp_mSenderMail_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGMessageSender_Statics::NewProp_mSenderMail_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGMessageSender_Statics::NewProp_mSenderName_MetaData[] = {
		{ "Category", "Sender" },
		{ "ModuleRelativePath", "Public/UI/Message/FGMessageSender.h" },
		{ "ToolTip", "Name of the sender" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UFGMessageSender_Statics::NewProp_mSenderName = { UE4CodeGen_Private::EPropertyClass::Text, "mSenderName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010015, 1, nullptr, STRUCT_OFFSET(UFGMessageSender, mSenderName), METADATA_PARAMS(Z_Construct_UClass_UFGMessageSender_Statics::NewProp_mSenderName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGMessageSender_Statics::NewProp_mSenderName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGMessageSender_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGMessageSender_Statics::NewProp_mTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGMessageSender_Statics::NewProp_mSenderMail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGMessageSender_Statics::NewProp_mSenderName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGMessageSender_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGMessageSender>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGMessageSender_Statics::ClassParams = {
		&UFGMessageSender::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UFGMessageSender_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UFGMessageSender_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFGMessageSender_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGMessageSender_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGMessageSender()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGMessageSender_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGMessageSender, 2961245968);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGMessageSender(Z_Construct_UClass_UFGMessageSender, &UFGMessageSender::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGMessageSender"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGMessageSender);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
