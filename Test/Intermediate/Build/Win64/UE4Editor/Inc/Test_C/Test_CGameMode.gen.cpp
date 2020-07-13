// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Test_C/Test_CGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTest_CGameMode() {}
// Cross Module References
	TEST_C_API UClass* Z_Construct_UClass_ATest_CGameMode_NoRegister();
	TEST_C_API UClass* Z_Construct_UClass_ATest_CGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Test_C();
// End Cross Module References
	void ATest_CGameMode::StaticRegisterNativesATest_CGameMode()
	{
	}
	UClass* Z_Construct_UClass_ATest_CGameMode_NoRegister()
	{
		return ATest_CGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATest_CGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATest_CGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Test_C,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATest_CGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Test_CGameMode.h" },
		{ "ModuleRelativePath", "Test_CGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATest_CGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATest_CGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATest_CGameMode_Statics::ClassParams = {
		&ATest_CGameMode::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008802A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ATest_CGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATest_CGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATest_CGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATest_CGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATest_CGameMode, 3634559519);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATest_CGameMode(Z_Construct_UClass_ATest_CGameMode, &ATest_CGameMode::StaticClass, TEXT("/Script/Test_C"), TEXT("ATest_CGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATest_CGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
