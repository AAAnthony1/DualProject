// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/DonAINavigationPrivatePCH.h"
#include "Classes/DonNavigationManagerUnbound.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDonNavigationManagerUnbound() {}
// Cross Module References
	DONAINAVIGATION_API UClass* Z_Construct_UClass_ADonNavigationManagerUnbound_NoRegister();
	DONAINAVIGATION_API UClass* Z_Construct_UClass_ADonNavigationManagerUnbound();
	DONAINAVIGATION_API UClass* Z_Construct_UClass_ADonNavigationManager();
	UPackage* Z_Construct_UPackage__Script_DonAINavigation();
// End Cross Module References
	void ADonNavigationManagerUnbound::StaticRegisterNativesADonNavigationManagerUnbound()
	{
	}
	UClass* Z_Construct_UClass_ADonNavigationManagerUnbound_NoRegister()
	{
		return ADonNavigationManagerUnbound::StaticClass();
	}
	UClass* Z_Construct_UClass_ADonNavigationManagerUnbound()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ADonNavigationManager();
			Z_Construct_UPackage__Script_DonAINavigation();
			OuterClass = ADonNavigationManagerUnbound::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;


				static TCppClassTypeInfo<TCppClassTypeTraits<ADonNavigationManagerUnbound> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("DonNavigationManagerUnbound.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/DonNavigationManagerUnbound.h"));
				MetaData->SetValue(OuterClass, TEXT("ObjectInitializerConstructorDeclared"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("* Infinite Worlds! This is the unbound version of the Navigation Manager.\n* Supports unlimited map sizes. Nothing is cached, everything is looked up on-demand and for procedural games it fully eliminates the burden of having to manage dynamic collision updates.\n* It is obviously slower than the Finite World equivalent but will benefit projects with huge maps or highly dynamic/frequently changing/procedural collision geometry."));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADonNavigationManagerUnbound, 1434952249);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADonNavigationManagerUnbound(Z_Construct_UClass_ADonNavigationManagerUnbound, &ADonNavigationManagerUnbound::StaticClass, TEXT("/Script/DonAINavigation"), TEXT("ADonNavigationManagerUnbound"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADonNavigationManagerUnbound);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
