// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HaloCE/HaloCEGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHaloCEGameMode() {}
// Cross Module References
	HALOCE_API UClass* Z_Construct_UClass_AHaloCEGameMode_NoRegister();
	HALOCE_API UClass* Z_Construct_UClass_AHaloCEGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_HaloCE();
// End Cross Module References
	void AHaloCEGameMode::StaticRegisterNativesAHaloCEGameMode()
	{
	}
	UClass* Z_Construct_UClass_AHaloCEGameMode_NoRegister()
	{
		return AHaloCEGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AHaloCEGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHaloCEGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_HaloCE,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHaloCEGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "HaloCEGameMode.h" },
		{ "ModuleRelativePath", "HaloCEGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHaloCEGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHaloCEGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHaloCEGameMode_Statics::ClassParams = {
		&AHaloCEGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AHaloCEGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHaloCEGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHaloCEGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHaloCEGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHaloCEGameMode, 799589554);
	template<> HALOCE_API UClass* StaticClass<AHaloCEGameMode>()
	{
		return AHaloCEGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHaloCEGameMode(Z_Construct_UClass_AHaloCEGameMode, &AHaloCEGameMode::StaticClass, TEXT("/Script/HaloCE"), TEXT("AHaloCEGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHaloCEGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
