// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComposite_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Composite;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Composite()
	{
		if (!Z_Registration_Info_UPackage__Script_Composite.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Composite",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x12DA38F8,
				0xA15A504D,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Composite.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Composite.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Composite(Z_Construct_UPackage__Script_Composite, TEXT("/Script/Composite"), Z_Registration_Info_UPackage__Script_Composite, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x12DA38F8, 0xA15A504D));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
