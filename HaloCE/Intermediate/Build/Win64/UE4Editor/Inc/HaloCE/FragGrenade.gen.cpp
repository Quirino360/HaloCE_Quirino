// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HaloCE/FragGrenade.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFragGrenade() {}
// Cross Module References
	HALOCE_API UClass* Z_Construct_UClass_AFragGrenade_NoRegister();
	HALOCE_API UClass* Z_Construct_UClass_AFragGrenade();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_HaloCE();
// End Cross Module References
	void AFragGrenade::StaticRegisterNativesAFragGrenade()
	{
	}
	UClass* Z_Construct_UClass_AFragGrenade_NoRegister()
	{
		return AFragGrenade::StaticClass();
	}
	struct Z_Construct_UClass_AFragGrenade_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFragGrenade_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_HaloCE,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFragGrenade_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FragGrenade.h" },
		{ "ModuleRelativePath", "FragGrenade.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFragGrenade_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFragGrenade>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFragGrenade_Statics::ClassParams = {
		&AFragGrenade::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFragGrenade_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFragGrenade_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFragGrenade()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFragGrenade_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFragGrenade, 3760057072);
	template<> HALOCE_API UClass* StaticClass<AFragGrenade>()
	{
		return AFragGrenade::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFragGrenade(Z_Construct_UClass_AFragGrenade, &AFragGrenade::StaticClass, TEXT("/Script/HaloCE"), TEXT("AFragGrenade"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFragGrenade);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
