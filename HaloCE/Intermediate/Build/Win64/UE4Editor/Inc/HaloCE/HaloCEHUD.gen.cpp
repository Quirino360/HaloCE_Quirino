// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HaloCE/HaloCEHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHaloCEHUD() {}
// Cross Module References
	HALOCE_API UClass* Z_Construct_UClass_AHaloCEHUD_NoRegister();
	HALOCE_API UClass* Z_Construct_UClass_AHaloCEHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_HaloCE();
// End Cross Module References
	void AHaloCEHUD::StaticRegisterNativesAHaloCEHUD()
	{
	}
	UClass* Z_Construct_UClass_AHaloCEHUD_NoRegister()
	{
		return AHaloCEHUD::StaticClass();
	}
	struct Z_Construct_UClass_AHaloCEHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHaloCEHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_HaloCE,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHaloCEHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "HaloCEHUD.h" },
		{ "ModuleRelativePath", "HaloCEHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHaloCEHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHaloCEHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHaloCEHUD_Statics::ClassParams = {
		&AHaloCEHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AHaloCEHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHaloCEHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHaloCEHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHaloCEHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHaloCEHUD, 1494566846);
	template<> HALOCE_API UClass* StaticClass<AHaloCEHUD>()
	{
		return AHaloCEHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHaloCEHUD(Z_Construct_UClass_AHaloCEHUD, &AHaloCEHUD::StaticClass, TEXT("/Script/HaloCE"), TEXT("AHaloCEHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHaloCEHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
