// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HaloCE/RocketLauncher.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRocketLauncher() {}
// Cross Module References
	HALOCE_API UClass* Z_Construct_UClass_URocketLauncher_NoRegister();
	HALOCE_API UClass* Z_Construct_UClass_URocketLauncher();
	HALOCE_API UClass* Z_Construct_UClass_UWeapon();
	UPackage* Z_Construct_UPackage__Script_HaloCE();
// End Cross Module References
	void URocketLauncher::StaticRegisterNativesURocketLauncher()
	{
	}
	UClass* Z_Construct_UClass_URocketLauncher_NoRegister()
	{
		return URocketLauncher::StaticClass();
	}
	struct Z_Construct_UClass_URocketLauncher_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URocketLauncher_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWeapon,
		(UObject* (*)())Z_Construct_UPackage__Script_HaloCE,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URocketLauncher_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "RocketLauncher.h" },
		{ "ModuleRelativePath", "RocketLauncher.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URocketLauncher_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URocketLauncher>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URocketLauncher_Statics::ClassParams = {
		&URocketLauncher::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_URocketLauncher_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URocketLauncher_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URocketLauncher()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URocketLauncher_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URocketLauncher, 2832325762);
	template<> HALOCE_API UClass* StaticClass<URocketLauncher>()
	{
		return URocketLauncher::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URocketLauncher(Z_Construct_UClass_URocketLauncher, &URocketLauncher::StaticClass, TEXT("/Script/HaloCE"), TEXT("URocketLauncher"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URocketLauncher);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
