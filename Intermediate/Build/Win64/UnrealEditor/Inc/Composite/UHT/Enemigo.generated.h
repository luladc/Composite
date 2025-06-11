// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Enemigo.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMPOSITE_Enemigo_generated_h
#error "Enemigo.generated.h already included, missing '#pragma once' in Enemigo.h"
#endif
#define COMPOSITE_Enemigo_generated_h

#define FID_Descargas_Unreal_Projects_Composite_Source_Composite_Enemigo_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemigo(); \
	friend struct Z_Construct_UClass_AEnemigo_Statics; \
public: \
	DECLARE_CLASS(AEnemigo, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Composite"), NO_API) \
	DECLARE_SERIALIZER(AEnemigo) \
	virtual UObject* _getUObject() const override { return const_cast<AEnemigo*>(this); }


#define FID_Descargas_Unreal_Projects_Composite_Source_Composite_Enemigo_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AEnemigo(AEnemigo&&); \
	AEnemigo(const AEnemigo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemigo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemigo); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemigo) \
	NO_API virtual ~AEnemigo();


#define FID_Descargas_Unreal_Projects_Composite_Source_Composite_Enemigo_h_9_PROLOG
#define FID_Descargas_Unreal_Projects_Composite_Source_Composite_Enemigo_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Descargas_Unreal_Projects_Composite_Source_Composite_Enemigo_h_12_INCLASS_NO_PURE_DECLS \
	FID_Descargas_Unreal_Projects_Composite_Source_Composite_Enemigo_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMPOSITE_API UClass* StaticClass<class AEnemigo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Descargas_Unreal_Projects_Composite_Source_Composite_Enemigo_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
