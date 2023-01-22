// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GEA_GEACharacter_generated_h
#error "GEACharacter.generated.h already included, missing '#pragma once' in GEACharacter.h"
#endif
#define GEA_GEACharacter_generated_h

#define FID_GEA_Source_GEA_GEACharacter_h_12_SPARSE_DATA
#define FID_GEA_Source_GEA_GEACharacter_h_12_RPC_WRAPPERS
#define FID_GEA_Source_GEA_GEACharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_GEA_Source_GEA_GEACharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGEACharacter(); \
	friend struct Z_Construct_UClass_AGEACharacter_Statics; \
public: \
	DECLARE_CLASS(AGEACharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GEA"), NO_API) \
	DECLARE_SERIALIZER(AGEACharacter)


#define FID_GEA_Source_GEA_GEACharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAGEACharacter(); \
	friend struct Z_Construct_UClass_AGEACharacter_Statics; \
public: \
	DECLARE_CLASS(AGEACharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GEA"), NO_API) \
	DECLARE_SERIALIZER(AGEACharacter)


#define FID_GEA_Source_GEA_GEACharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGEACharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGEACharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGEACharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGEACharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGEACharacter(AGEACharacter&&); \
	NO_API AGEACharacter(const AGEACharacter&); \
public:


#define FID_GEA_Source_GEA_GEACharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGEACharacter(AGEACharacter&&); \
	NO_API AGEACharacter(const AGEACharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGEACharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGEACharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGEACharacter)


#define FID_GEA_Source_GEA_GEACharacter_h_9_PROLOG
#define FID_GEA_Source_GEA_GEACharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GEA_Source_GEA_GEACharacter_h_12_SPARSE_DATA \
	FID_GEA_Source_GEA_GEACharacter_h_12_RPC_WRAPPERS \
	FID_GEA_Source_GEA_GEACharacter_h_12_INCLASS \
	FID_GEA_Source_GEA_GEACharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_GEA_Source_GEA_GEACharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GEA_Source_GEA_GEACharacter_h_12_SPARSE_DATA \
	FID_GEA_Source_GEA_GEACharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GEA_Source_GEA_GEACharacter_h_12_INCLASS_NO_PURE_DECLS \
	FID_GEA_Source_GEA_GEACharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEA_API UClass* StaticClass<class AGEACharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GEA_Source_GEA_GEACharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
