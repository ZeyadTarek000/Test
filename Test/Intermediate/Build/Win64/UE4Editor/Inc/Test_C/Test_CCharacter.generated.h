// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEST_C_Test_CCharacter_generated_h
#error "Test_CCharacter.generated.h already included, missing '#pragma once' in Test_CCharacter.h"
#endif
#define TEST_C_Test_CCharacter_generated_h

#define Test_Source_Test_C_Test_CCharacter_h_12_RPC_WRAPPERS
#define Test_Source_Test_C_Test_CCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Test_Source_Test_C_Test_CCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATest_CCharacter(); \
	friend struct Z_Construct_UClass_ATest_CCharacter_Statics; \
public: \
	DECLARE_CLASS(ATest_CCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Test_C"), NO_API) \
	DECLARE_SERIALIZER(ATest_CCharacter)


#define Test_Source_Test_C_Test_CCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATest_CCharacter(); \
	friend struct Z_Construct_UClass_ATest_CCharacter_Statics; \
public: \
	DECLARE_CLASS(ATest_CCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Test_C"), NO_API) \
	DECLARE_SERIALIZER(ATest_CCharacter)


#define Test_Source_Test_C_Test_CCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATest_CCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATest_CCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATest_CCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATest_CCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATest_CCharacter(ATest_CCharacter&&); \
	NO_API ATest_CCharacter(const ATest_CCharacter&); \
public:


#define Test_Source_Test_C_Test_CCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATest_CCharacter(ATest_CCharacter&&); \
	NO_API ATest_CCharacter(const ATest_CCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATest_CCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATest_CCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATest_CCharacter)


#define Test_Source_Test_C_Test_CCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ATest_CCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ATest_CCharacter, FollowCamera); }


#define Test_Source_Test_C_Test_CCharacter_h_9_PROLOG
#define Test_Source_Test_C_Test_CCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_Source_Test_C_Test_CCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Test_Source_Test_C_Test_CCharacter_h_12_RPC_WRAPPERS \
	Test_Source_Test_C_Test_CCharacter_h_12_INCLASS \
	Test_Source_Test_C_Test_CCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Test_Source_Test_C_Test_CCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_Source_Test_C_Test_CCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Test_Source_Test_C_Test_CCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Test_Source_Test_C_Test_CCharacter_h_12_INCLASS_NO_PURE_DECLS \
	Test_Source_Test_C_Test_CCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Source_Test_C_Test_CCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
