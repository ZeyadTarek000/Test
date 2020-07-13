// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef TEST_C_Main_Char_generated_h
#error "Main_Char.generated.h already included, missing '#pragma once' in Main_Char.h"
#endif
#define TEST_C_Main_Char_generated_h

#define Test_Source_Test_C_Main_Char_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnBeginOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnBeginOverlap(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define Test_Source_Test_C_Main_Char_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnBeginOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnBeginOverlap(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define Test_Source_Test_C_Main_Char_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMain_Char(); \
	friend struct Z_Construct_UClass_AMain_Char_Statics; \
public: \
	DECLARE_CLASS(AMain_Char, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Test_C"), NO_API) \
	DECLARE_SERIALIZER(AMain_Char)


#define Test_Source_Test_C_Main_Char_h_24_INCLASS \
private: \
	static void StaticRegisterNativesAMain_Char(); \
	friend struct Z_Construct_UClass_AMain_Char_Statics; \
public: \
	DECLARE_CLASS(AMain_Char, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Test_C"), NO_API) \
	DECLARE_SERIALIZER(AMain_Char)


#define Test_Source_Test_C_Main_Char_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMain_Char(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMain_Char) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMain_Char); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMain_Char); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMain_Char(AMain_Char&&); \
	NO_API AMain_Char(const AMain_Char&); \
public:


#define Test_Source_Test_C_Main_Char_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMain_Char(AMain_Char&&); \
	NO_API AMain_Char(const AMain_Char&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMain_Char); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMain_Char); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMain_Char)


#define Test_Source_Test_C_Main_Char_h_24_PRIVATE_PROPERTY_OFFSET
#define Test_Source_Test_C_Main_Char_h_21_PROLOG
#define Test_Source_Test_C_Main_Char_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_Source_Test_C_Main_Char_h_24_PRIVATE_PROPERTY_OFFSET \
	Test_Source_Test_C_Main_Char_h_24_RPC_WRAPPERS \
	Test_Source_Test_C_Main_Char_h_24_INCLASS \
	Test_Source_Test_C_Main_Char_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Test_Source_Test_C_Main_Char_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_Source_Test_C_Main_Char_h_24_PRIVATE_PROPERTY_OFFSET \
	Test_Source_Test_C_Main_Char_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	Test_Source_Test_C_Main_Char_h_24_INCLASS_NO_PURE_DECLS \
	Test_Source_Test_C_Main_Char_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Source_Test_C_Main_Char_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
