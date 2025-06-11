// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Composite/IEnemigo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIEnemigo() {}

// Begin Cross Module References
COMPOSITE_API UClass* Z_Construct_UClass_UIEnemigo();
COMPOSITE_API UClass* Z_Construct_UClass_UIEnemigo_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_Composite();
// End Cross Module References

// Begin Interface UIEnemigo
void UIEnemigo::StaticRegisterNativesUIEnemigo()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIEnemigo);
UClass* Z_Construct_UClass_UIEnemigo_NoRegister()
{
	return UIEnemigo::StaticClass();
}
struct Z_Construct_UClass_UIEnemigo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "IEnemigo.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIEnemigo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIEnemigo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Composite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIEnemigo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIEnemigo_Statics::ClassParams = {
	&UIEnemigo::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIEnemigo_Statics::Class_MetaDataParams), Z_Construct_UClass_UIEnemigo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIEnemigo()
{
	if (!Z_Registration_Info_UClass_UIEnemigo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIEnemigo.OuterSingleton, Z_Construct_UClass_UIEnemigo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIEnemigo.OuterSingleton;
}
template<> COMPOSITE_API UClass* StaticClass<UIEnemigo>()
{
	return UIEnemigo::StaticClass();
}
UIEnemigo::UIEnemigo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIEnemigo);
UIEnemigo::~UIEnemigo() {}
// End Interface UIEnemigo

// Begin Registration
struct Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_Composite_Source_Composite_IEnemigo_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIEnemigo, UIEnemigo::StaticClass, TEXT("UIEnemigo"), &Z_Registration_Info_UClass_UIEnemigo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIEnemigo), 3170062454U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_Composite_Source_Composite_IEnemigo_h_2182361412(TEXT("/Script/Composite"),
	Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_Composite_Source_Composite_IEnemigo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Descargas_Unreal_Projects_Composite_Source_Composite_IEnemigo_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
