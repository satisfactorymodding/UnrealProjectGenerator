// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGErrorMessage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGErrorMessage() {}
// Cross Module References
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_EErrorResponse();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGErrorMessage_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGErrorMessage();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGErrorMessage_GetErrorMessage();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGErrorMessage_GetErrorResponse();
// End Cross Module References
	static UEnum* EErrorResponse_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FactoryGame_EErrorResponse, Z_Construct_UPackage__Script_FactoryGame(), TEXT("EErrorResponse"));
		}
		return Singleton;
	}
	template<> FACTORYGAME_API UEnum* StaticEnum<EErrorResponse>()
	{
		return EErrorResponse_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EErrorResponse(EErrorResponse_StaticEnum, TEXT("/Script/FactoryGame"), TEXT("EErrorResponse"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FactoryGame_EErrorResponse_Hash() { return 1983649693U; }
	UEnum* Z_Construct_UEnum_FactoryGame_EErrorResponse()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EErrorResponse"), 0, Get_Z_Construct_UEnum_FactoryGame_EErrorResponse_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ER_NonIntrusivePopup", (int64)ER_NonIntrusivePopup },
				{ "ER_SendToMainMenu", (int64)ER_SendToMainMenu },
				{ "ER_Quit", (int64)ER_Quit },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ER_NonIntrusivePopup.DisplayName", "NonIntrusivePopup" },
				{ "ER_Quit.DisplayName", "Quit" },
				{ "ER_Quit.ToolTip", "Sends the user to main menu and then shows a error message" },
				{ "ER_SendToMainMenu.DisplayName", "SendToMainMenu" },
				{ "ER_SendToMainMenu.ToolTip", "Shows a popup ingame or a popup in the main menu" },
				{ "ModuleRelativePath", "Public/FGErrorMessage.h" },
				{ "ToolTip", "Enum describing how the error should be handled by the system" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FactoryGame,
				nullptr,
				"EErrorResponse",
				"EErrorResponse",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UFGErrorMessage::StaticRegisterNativesUFGErrorMessage()
	{
		UClass* Class = UFGErrorMessage::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetErrorMessage", &UFGErrorMessage::execGetErrorMessage },
			{ "GetErrorResponse", &UFGErrorMessage::execGetErrorResponse },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGErrorMessage_GetErrorMessage_Statics
	{
		struct FGErrorMessage_eventGetErrorMessage_Parms
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
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UFGErrorMessage_GetErrorMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGErrorMessage_eventGetErrorMessage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGErrorMessage_GetErrorMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGErrorMessage_GetErrorMessage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGErrorMessage_GetErrorMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Error" },
		{ "ModuleRelativePath", "Public/FGErrorMessage.h" },
		{ "ToolTip", "Get a localized error message" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGErrorMessage_GetErrorMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGErrorMessage, nullptr, "GetErrorMessage", sizeof(FGErrorMessage_eventGetErrorMessage_Parms), Z_Construct_UFunction_UFGErrorMessage_GetErrorMessage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGErrorMessage_GetErrorMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGErrorMessage_GetErrorMessage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGErrorMessage_GetErrorMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGErrorMessage_GetErrorMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGErrorMessage_GetErrorMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGErrorMessage_GetErrorResponse_Statics
	{
		struct FGErrorMessage_eventGetErrorResponse_Parms
		{
			TEnumAsByte<EErrorResponse> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFGErrorMessage_GetErrorResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGErrorMessage_eventGetErrorResponse_Parms, ReturnValue), Z_Construct_UEnum_FactoryGame_EErrorResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGErrorMessage_GetErrorResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGErrorMessage_GetErrorResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGErrorMessage_GetErrorResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "Error" },
		{ "ModuleRelativePath", "Public/FGErrorMessage.h" },
		{ "ToolTip", "Get if the error sends the user to main menu" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGErrorMessage_GetErrorResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGErrorMessage, nullptr, "GetErrorResponse", sizeof(FGErrorMessage_eventGetErrorResponse_Parms), Z_Construct_UFunction_UFGErrorMessage_GetErrorResponse_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGErrorMessage_GetErrorResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGErrorMessage_GetErrorResponse_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGErrorMessage_GetErrorResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGErrorMessage_GetErrorResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGErrorMessage_GetErrorResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGErrorMessage_NoRegister()
	{
		return UFGErrorMessage::StaticClass();
	}
	struct Z_Construct_UClass_UFGErrorMessage_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mErrorResponse_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_mErrorResponse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mErrorMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_mErrorMessage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGErrorMessage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGErrorMessage_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGErrorMessage_GetErrorMessage, "GetErrorMessage" }, // 1329863546
		{ &Z_Construct_UFunction_UFGErrorMessage_GetErrorResponse, "GetErrorResponse" }, // 2557317803
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGErrorMessage_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FGErrorMessage.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FGErrorMessage.h" },
		{ "ToolTip", "@todo: Should we rename UFGErrorMessage to something else (like: UFGUIMessage and have a subclass that UFGErrorMessage,\n                      then we could implement messages about autosave and other in the same system)\n@todo: Move UFGErrorMesssage to another file" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGErrorMessage_Statics::NewProp_mErrorResponse_MetaData[] = {
		{ "Category", "Error" },
		{ "ModuleRelativePath", "Public/FGErrorMessage.h" },
		{ "ToolTip", "Shows how this error should be handled" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFGErrorMessage_Statics::NewProp_mErrorResponse = { "mErrorResponse", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGErrorMessage, mErrorResponse), Z_Construct_UEnum_FactoryGame_EErrorResponse, METADATA_PARAMS(Z_Construct_UClass_UFGErrorMessage_Statics::NewProp_mErrorResponse_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGErrorMessage_Statics::NewProp_mErrorResponse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGErrorMessage_Statics::NewProp_mErrorMessage_MetaData[] = {
		{ "Category", "Error" },
		{ "ModuleRelativePath", "Public/FGErrorMessage.h" },
		{ "ToolTip", "Localized error message that we can push" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UFGErrorMessage_Statics::NewProp_mErrorMessage = { "mErrorMessage", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGErrorMessage, mErrorMessage), METADATA_PARAMS(Z_Construct_UClass_UFGErrorMessage_Statics::NewProp_mErrorMessage_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGErrorMessage_Statics::NewProp_mErrorMessage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGErrorMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGErrorMessage_Statics::NewProp_mErrorResponse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGErrorMessage_Statics::NewProp_mErrorMessage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGErrorMessage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGErrorMessage>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGErrorMessage_Statics::ClassParams = {
		&UFGErrorMessage::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFGErrorMessage_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UFGErrorMessage_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UFGErrorMessage_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGErrorMessage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGErrorMessage()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGErrorMessage_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGErrorMessage, 2073093435);
	template<> FACTORYGAME_API UClass* StaticClass<UFGErrorMessage>()
	{
		return UFGErrorMessage::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGErrorMessage(Z_Construct_UClass_UFGErrorMessage, &UFGErrorMessage::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGErrorMessage"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGErrorMessage);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
