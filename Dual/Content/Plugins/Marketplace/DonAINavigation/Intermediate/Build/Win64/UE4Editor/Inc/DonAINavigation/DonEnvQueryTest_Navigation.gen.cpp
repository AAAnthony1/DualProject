// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/DonAINavigationPrivatePCH.h"
#include "Public/EnvironmentQuery/DonEnvQueryTest_Navigation.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDonEnvQueryTest_Navigation() {}
// Cross Module References
	DONAINAVIGATION_API UClass* Z_Construct_UClass_UDonEnvQueryTest_Navigation_NoRegister();
	DONAINAVIGATION_API UClass* Z_Construct_UClass_UDonEnvQueryTest_Navigation();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest();
	UPackage* Z_Construct_UPackage__Script_DonAINavigation();
// End Cross Module References
	void UDonEnvQueryTest_Navigation::StaticRegisterNativesUDonEnvQueryTest_Navigation()
	{
	}
	UClass* Z_Construct_UClass_UDonEnvQueryTest_Navigation_NoRegister()
	{
		return UDonEnvQueryTest_Navigation::StaticClass();
	}
	UClass* Z_Construct_UClass_UDonEnvQueryTest_Navigation()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UEnvQueryTest();
			Z_Construct_UPackage__Script_DonAINavigation();
			OuterClass = UDonEnvQueryTest_Navigation::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;


				UProperty* NewProp_RandomLocationRadius = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("RandomLocationRadius"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(RandomLocationRadius, UDonEnvQueryTest_Navigation), 0x0010000000010001);
				UProperty* NewProp_RandomLocationMaxAttempts = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("RandomLocationMaxAttempts"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(RandomLocationMaxAttempts, UDonEnvQueryTest_Navigation), 0x0010000000010001);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bSearchRandomLocation, UDonEnvQueryTest_Navigation);
				UProperty* NewProp_bSearchRandomLocation = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bSearchRandomLocation"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bSearchRandomLocation, UDonEnvQueryTest_Navigation), 0x0010000000010001, CPP_BOOL_PROPERTY_BITMASK(bSearchRandomLocation, UDonEnvQueryTest_Navigation), sizeof(uint8), false);
				static TCppClassTypeInfo<TCppClassTypeTraits<UDonEnvQueryTest_Navigation> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("EnvironmentQuery/DonEnvQueryTest_Navigation.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/EnvironmentQuery/DonEnvQueryTest_Navigation.h"));
				MetaData->SetValue(OuterClass, TEXT("ObjectInitializerConstructorDeclared"), TEXT(""));
				MetaData->SetValue(NewProp_RandomLocationRadius, TEXT("Category"), TEXT("Test"));
				MetaData->SetValue(NewProp_RandomLocationRadius, TEXT("EditCondition"), TEXT("bSearchRandomLocation"));
				MetaData->SetValue(NewProp_RandomLocationRadius, TEXT("ModuleRelativePath"), TEXT("Public/EnvironmentQuery/DonEnvQueryTest_Navigation.h"));
				MetaData->SetValue(NewProp_RandomLocationRadius, TEXT("ToolTip"), TEXT("Find Random location radius"));
				MetaData->SetValue(NewProp_RandomLocationMaxAttempts, TEXT("Category"), TEXT("Test"));
				MetaData->SetValue(NewProp_RandomLocationMaxAttempts, TEXT("EditCondition"), TEXT("bSearchRandomLocation"));
				MetaData->SetValue(NewProp_RandomLocationMaxAttempts, TEXT("ModuleRelativePath"), TEXT("Public/EnvironmentQuery/DonEnvQueryTest_Navigation.h"));
				MetaData->SetValue(NewProp_RandomLocationMaxAttempts, TEXT("ToolTip"), TEXT("Number of Attempts to find random location nearby if Item's location is not valid"));
				MetaData->SetValue(NewProp_bSearchRandomLocation, TEXT("Category"), TEXT("Test"));
				MetaData->SetValue(NewProp_bSearchRandomLocation, TEXT("InlineEditConditionToggle"), TEXT(""));
				MetaData->SetValue(NewProp_bSearchRandomLocation, TEXT("ModuleRelativePath"), TEXT("Public/EnvironmentQuery/DonEnvQueryTest_Navigation.h"));
				MetaData->SetValue(NewProp_bSearchRandomLocation, TEXT("ToolTip"), TEXT("Search for random location nearby"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDonEnvQueryTest_Navigation, 3949287547);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDonEnvQueryTest_Navigation(Z_Construct_UClass_UDonEnvQueryTest_Navigation, &UDonEnvQueryTest_Navigation::StaticClass, TEXT("/Script/DonAINavigation"), TEXT("UDonEnvQueryTest_Navigation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDonEnvQueryTest_Navigation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
