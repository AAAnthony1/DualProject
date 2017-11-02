// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/DonAINavigationPrivatePCH.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDonAINavigation_init() {}
	DONAINAVIGATION_API UFunction* Z_Construct_UDelegateFunction_DonAINavigation_DonNavigationDynamicCollisionDelegate__DelegateSignature();
	DONAINAVIGATION_API UFunction* Z_Construct_UDelegateFunction_DonAINavigation_DoNNavigationResultHandler__DelegateSignature();
	DONAINAVIGATION_API UFunction* Z_Construct_UDelegateFunction_DonAINavigation_DonCollisionSamplerCallback__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_DonAINavigation()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/DonAINavigation")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0x2F21EED2;
			Guid.B = 0x62D75E10;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

			Z_Construct_UDelegateFunction_DonAINavigation_DonNavigationDynamicCollisionDelegate__DelegateSignature();
			Z_Construct_UDelegateFunction_DonAINavigation_DoNNavigationResultHandler__DelegateSignature();
			Z_Construct_UDelegateFunction_DonAINavigation_DonCollisionSamplerCallback__DelegateSignature();
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
