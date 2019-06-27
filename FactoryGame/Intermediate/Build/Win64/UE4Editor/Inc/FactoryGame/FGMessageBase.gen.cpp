// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/UI/Message/FGMessageBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGMessageBase() {}
// Cross Module References
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_EMessageType();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGMessageBase_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGMessageBase();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGMessageBase_GetMessageDefaultObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGMessageSender_NoRegister();
// End Cross Module References
	static UEnum* EMessageType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FactoryGame_EMessageType, Z_Construct_UPackage__Script_FactoryGame(), TEXT("EMessageType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMessageType(EMessageType_StaticEnum, TEXT("/Script/FactoryGame"), TEXT("EMessageType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FactoryGame_EMessageType_CRC() { return 625593413U; }
	UEnum* Z_Construct_UEnum_FactoryGame_EMessageType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMessageType"), 0, Get_Z_Construct_UEnum_FactoryGame_EMessageType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMessageType::MT_PIMARY", (int64)EMessageType::MT_PIMARY },
				{ "EMessageType::MT_TUTORIAL", (int64)EMessageType::MT_TUTORIAL },
				{ "EMessageType::MT_SPAM", (int64)EMessageType::MT_SPAM },
				{ "EMessageType::MT_UNDEFINED", (int64)EMessageType::MT_UNDEFINED },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "UI/Message/FGMessageBase.h" },
				{ "MT_PIMARY.DisplayName", "Inbox" },
				{ "MT_SPAM.DisplayName", "Spam" },
				{ "MT_TUTORIAL.DisplayName", "Tutorial" },
				{ "MT_UNDEFINED.DisplayName", "All" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FactoryGame,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EMessageType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EMessageType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UFGMessageBase::StaticRegisterNativesUFGMessageBase()
	{
		UClass* Class = UFGMessageBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMessageDefaultObject", &UFGMessageBase::execGetMessageDefaultObject },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGMessageBase_GetMessageDefaultObject_Statics
	{
		struct FGMessageBase_eventGetMessageDefaultObject_Parms
		{
			TSubclassOf<UFGMessageBase>  inClass;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGMessageBase_GetMessageDefaultObject_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGMessageBase_eventGetMessageDefaultObject_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGMessageBase_GetMessageDefaultObject_Statics::NewProp_inClass = { UE4CodeGen_Private::EPropertyClass::Class, "inClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGMessageBase_eventGetMessageDefaultObject_Parms, inClass), Z_Construct_UClass_UFGMessageBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGMessageBase_GetMessageDefaultObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGMessageBase_GetMessageDefaultObject_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGMessageBase_GetMessageDefaultObject_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGMessageBase_GetMessageDefaultObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Message|Utilities" },
		{ "DeterminesOutputType", "inClass" },
		{ "ModuleRelativePath", "UI/Message/FGMessageBase.h" },
		{ "ToolTip", "Gets the default object of the message class" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGMessageBase_GetMessageDefaultObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGMessageBase, "GetMessageDefaultObject", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(FGMessageBase_eventGetMessageDefaultObject_Parms), Z_Construct_UFunction_UFGMessageBase_GetMessageDefaultObject_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGMessageBase_GetMessageDefaultObject_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGMessageBase_GetMessageDefaultObject_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGMessageBase_GetMessageDefaultObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGMessageBase_GetMessageDefaultObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGMessageBase_GetMessageDefaultObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGMessageBase_NoRegister()
	{
		return UFGMessageBase::StaticClass();
	}
	struct Z_Construct_UClass_UFGMessageBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mImages_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mImages;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mImages_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_mType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_mType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSenderClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mSenderClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mIsPopup_MetaData[];
#endif
		static void NewProp_mIsPopup_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mIsPopup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPreviewText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_mPreviewText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mTitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_mTitle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGMessageBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGMessageBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGMessageBase_GetMessageDefaultObject, "GetMessageDefaultObject" }, // 3165159667
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGMessageBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UI/Message/FGMessageBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "UI/Message/FGMessageBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGMessageBase_Statics::NewProp_mImages_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "UI/Message/FGMessageBase.h" },
		{ "ToolTip", "Images to display in the codex" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGMessageBase_Statics::NewProp_mImages = { UE4CodeGen_Private::EPropertyClass::Array, "mImages", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010015, 1, nullptr, STRUCT_OFFSET(UFGMessageBase, mImages), METADATA_PARAMS(Z_Construct_UClass_UFGMessageBase_Statics::NewProp_mImages_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGMessageBase_Statics::NewProp_mImages_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGMessageBase_Statics::NewProp_mImages_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "mImages", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGMessageBase_Statics::NewProp_mType_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "UI/Message/FGMessageBase.h" },
		{ "ToolTip", "What type is it" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFGMessageBase_Statics::NewProp_mType = { UE4CodeGen_Private::EPropertyClass::Enum, "mType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010015, 1, nullptr, STRUCT_OFFSET(UFGMessageBase, mType), Z_Construct_UEnum_FactoryGame_EMessageType, METADATA_PARAMS(Z_Construct_UClass_UFGMessageBase_Statics::NewProp_mType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGMessageBase_Statics::NewProp_mType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFGMessageBase_Statics::NewProp_mType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGMessageBase_Statics::NewProp_mSenderClass_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "UI/Message/FGMessageBase.h" },
		{ "ToolTip", "Who sent the message" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFGMessageBase_Statics::NewProp_mSenderClass = { UE4CodeGen_Private::EPropertyClass::Class, "mSenderClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000010015, 1, nullptr, STRUCT_OFFSET(UFGMessageBase, mSenderClass), Z_Construct_UClass_UFGMessageSender_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UFGMessageBase_Statics::NewProp_mSenderClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGMessageBase_Statics::NewProp_mSenderClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGMessageBase_Statics::NewProp_mIsPopup_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "UI/Message/FGMessageBase.h" },
		{ "ToolTip", "Should the message be displayed in a popup?" },
	};
#endif
	void Z_Construct_UClass_UFGMessageBase_Statics::NewProp_mIsPopup_SetBit(void* Obj)
	{
		((UFGMessageBase*)Obj)->mIsPopup = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGMessageBase_Statics::NewProp_mIsPopup = { UE4CodeGen_Private::EPropertyClass::Bool, "mIsPopup", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UFGMessageBase), &Z_Construct_UClass_UFGMessageBase_Statics::NewProp_mIsPopup_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGMessageBase_Statics::NewProp_mIsPopup_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGMessageBase_Statics::NewProp_mIsPopup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGMessageBase_Statics::NewProp_mPreviewText_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "UI/Message/FGMessageBase.h" },
		{ "ToolTip", "Preview text when a message is added" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UFGMessageBase_Statics::NewProp_mPreviewText = { UE4CodeGen_Private::EPropertyClass::Text, "mPreviewText", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010015, 1, nullptr, STRUCT_OFFSET(UFGMessageBase, mPreviewText), METADATA_PARAMS(Z_Construct_UClass_UFGMessageBase_Statics::NewProp_mPreviewText_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGMessageBase_Statics::NewProp_mPreviewText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGMessageBase_Statics::NewProp_mTitle_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "UI/Message/FGMessageBase.h" },
		{ "ToolTip", "I think this may be the title" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UFGMessageBase_Statics::NewProp_mTitle = { UE4CodeGen_Private::EPropertyClass::Text, "mTitle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010015, 1, nullptr, STRUCT_OFFSET(UFGMessageBase, mTitle), METADATA_PARAMS(Z_Construct_UClass_UFGMessageBase_Statics::NewProp_mTitle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGMessageBase_Statics::NewProp_mTitle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGMessageBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGMessageBase_Statics::NewProp_mImages,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGMessageBase_Statics::NewProp_mImages_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGMessageBase_Statics::NewProp_mType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGMessageBase_Statics::NewProp_mType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGMessageBase_Statics::NewProp_mSenderClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGMessageBase_Statics::NewProp_mIsPopup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGMessageBase_Statics::NewProp_mPreviewText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGMessageBase_Statics::NewProp_mTitle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGMessageBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGMessageBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGMessageBase_Statics::ClassParams = {
		&UFGMessageBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B010A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UFGMessageBase_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UFGMessageBase_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFGMessageBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGMessageBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGMessageBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGMessageBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGMessageBase, 2770830266);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGMessageBase(Z_Construct_UClass_UFGMessageBase, &UFGMessageBase::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGMessageBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGMessageBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
