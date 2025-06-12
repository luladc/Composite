// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Enemigo1.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMPOSITE_Enemigo1_generated_h
#error "Enemigo1.generated.h already included, missing '#pragma once' in Enemigo1.h"
#endif
#define COMPOSITE_Enemigo1_generated_h

#define FID_Descargas_Unreal_Projects_Composite_Source_Composite_Enemigo1_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetPatrolRadius); \
	DECLARE_FUNCTION(execSetPatrolRadius); \
	DECLARE_FUNCTION(execGetMovementSpeed); \
	DECLARE_FUNCTION(execSetMovementSpeed); \
	DECLARE_FUNCTION(execStopPatrol); \
	DECLARE_FUNCTION(execStartPatrol);


#define FID_Descargas_Unreal_Projects_Composite_Source_Composite_Enemigo1_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemigo1(); \
	friend struct Z_Construct_UClass_AEnemigo1_Statics; \
public: \
	DECLARE_CLASS(AEnemigo1, AEnemigo, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Composite"), NO_API) \
	DECLARE_SERIALIZER(AEnemigo1)


#define FID_Descargas_Unreal_Projects_Composite_Source_Composite_Enemigo1_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AEnemigo1(AEnemigo1&&); \
	AEnemigo1(const AEnemigo1&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemigo1); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemigo1); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemigo1) \
	NO_API virtual ~AEnemigo1();


#define FID_Descargas_Unreal_Projects_Composite_Source_Composite_Enemigo1_h_12_PROLOG
#define FID_Descargas_Unreal_Projects_Composite_Source_Composite_Enemigo1_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Descargas_Unreal_Projects_Composite_Source_Composite_Enemigo1_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Descargas_Unreal_Projects_Composite_Source_Composite_Enemigo1_h_15_INCLASS_NO_PURE_DECLS \
	FID_Descargas_Unreal_Projects_Composite_Source_Composite_Enemigo1_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMPOSITE_API UClass* StaticClass<class AEnemigo1>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Descargas_Unreal_Projects_Composite_Source_Composite_Enemigo1_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
