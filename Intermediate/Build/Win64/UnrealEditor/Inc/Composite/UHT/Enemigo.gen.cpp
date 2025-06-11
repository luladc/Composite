// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Composite/Enemigo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigo() {}

// Begin Cross Module References
COMPOSITE_API UClass* Z_Construct_UClass_AEnemigo();
COMPOSITE_API UClass* Z_Construct_UClass_AEnemigo_NoRegister();
COMPOSITE_API UClass* Z_Construct_UClass_UIEnemigo_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
UPackage* Z_Construct_UPackage__Script_Composite();
// End Cross Module References

// Begin Class AEnemigo
void AEnemigo::StaticRegisterNativesAEnemigo()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemigo);
UClass* Z_Construct_UClass_AEnemigo_NoRegister()
{
	return AEnemigo::StaticClass();
}
struct Z_Construct_UClass_AEnemigo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Enemigo.h" },
		{ "ModuleRelativePath", "Enemigo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RangoDeteccion_MetaData[] = {
		{ "Category", "IA" },
		{ "ModuleRelativePath", "Enemigo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PuntosPatrulla_MetaData[] = {
		{ "Category", "IA" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Distancia a la que detecta al jugador\n" },
#endif
		{ "ModuleRelativePath", "Enemigo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Distancia a la que detecta al jugador" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RangoDeteccion;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PuntosPatrulla_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PuntosPatrulla;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemigo_Statics::NewProp_RangoDeteccion = { "RangoDeteccion", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemigo, RangoDeteccion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RangoDeteccion_MetaData), NewProp_RangoDeteccion_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEnemigo_Statics::NewProp_PuntosPatrulla_Inner = { "PuntosPatrulla", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AEnemigo_Statics::NewProp_PuntosPatrulla = { "PuntosPatrulla", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemigo, PuntosPatrulla), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PuntosPatrulla_MetaData), NewProp_PuntosPatrulla_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemigo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigo_Statics::NewProp_RangoDeteccion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigo_Statics::NewProp_PuntosPatrulla_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigo_Statics::NewProp_PuntosPatrulla,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigo_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AEnemigo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Composite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEnemigo_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UIEnemigo_NoRegister, (int32)VTABLE_OFFSET(AEnemigo, IIEnemigo), false },  // 3170062454
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemigo_Statics::ClassParams = {
	&AEnemigo::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AEnemigo_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigo_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigo_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemigo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemigo()
{
	if (!Z_Registration_Info_UClass_AEnemigo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemigo.OuterSingleton, Z_Construct_UClass_AEnemigo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemigo.OuterSingleton;
}
template<> COMPOSITE_API UClass* StaticClass<AEnemigo>()
{
	return AEnemigo::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigo);
AEnemigo::~AEnemigo() {}
// End Class AEnemigo

// Begin Registration
struct Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_Composite_Source_Composite_Enemigo_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemigo, AEnemigo::StaticClass, TEXT("AEnemigo"), &Z_Registration_Info_UClass_AEnemigo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemigo), 2555149858U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_Composite_Source_Composite_Enemigo_h_3409343720(TEXT("/Script/Composite"),
	Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_Composite_Source_Composite_Enemigo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_Composite_Source_Composite_Enemigo_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
