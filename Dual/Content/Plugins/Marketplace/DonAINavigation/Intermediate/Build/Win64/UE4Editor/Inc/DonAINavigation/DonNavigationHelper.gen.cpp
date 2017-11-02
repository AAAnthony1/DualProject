// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/DonAINavigationPrivatePCH.h"
#include "Classes/DonNavigationHelper.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDonNavigationHelper() {}
// Cross Module References
	DONAINAVIGATION_API UFunction* Z_Construct_UFunction_UDonNavigationHelper_DonNavigationManager();
	DONAINAVIGATION_API UClass* Z_Construct_UClass_UDonNavigationHelper();
	DONAINAVIGATION_API UClass* Z_Construct_UClass_ADonNavigationManager_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	DONAINAVIGATION_API UFunction* Z_Construct_UFunction_UDonNavigationHelper_DonNavigationManagerForActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	DONAINAVIGATION_API UClass* Z_Construct_UClass_UDonNavigationHelper_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DonAINavigation();
// End Cross Module References
	void UDonNavigationHelper::StaticRegisterNativesUDonNavigationHelper()
	{
		UClass* Class = UDonNavigationHelper::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "DonNavigationManager", (Native)&UDonNavigationHelper::execDonNavigationManager },
			{ "DonNavigationManagerForActor", (Native)&UDonNavigationHelper::execDonNavigationManagerForActor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UDonNavigationHelper_DonNavigationManager()
	{
		struct DonNavigationHelper_eventDonNavigationManager_Parms
		{
			UObject* WorldContextObject;
			ADonNavigationManager* ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UDonNavigationHelper();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("DonNavigationManager"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14022401, 65535, sizeof(DonNavigationHelper_eventDonNavigationManager_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, DonNavigationHelper_eventDonNavigationManager_Parms), 0x0010000000000580, Z_Construct_UClass_ADonNavigationManager_NoRegister());
			UProperty* NewProp_WorldContextObject = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("WorldContextObject"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(WorldContextObject, DonNavigationHelper_eventDonNavigationManager_Parms), 0x0010000000000080, Z_Construct_UClass_UObject_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("DoN Navigation"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/DonNavigationHelper.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Returns the Voxel navigation builder used for building navigation volumes and performing pathfinding"));
			MetaData->SetValue(ReturnFunction, TEXT("WorldContext"), TEXT("WorldContextObject"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UDonNavigationHelper_DonNavigationManagerForActor()
	{
		struct DonNavigationHelper_eventDonNavigationManagerForActor_Parms
		{
			const AActor* Actor;
			ADonNavigationManager* ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UDonNavigationHelper();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("DonNavigationManagerForActor"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14022401, 65535, sizeof(DonNavigationHelper_eventDonNavigationManagerForActor_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, DonNavigationHelper_eventDonNavigationManagerForActor_Parms), 0x0010000000000580, Z_Construct_UClass_ADonNavigationManager_NoRegister());
			UProperty* NewProp_Actor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Actor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Actor, DonNavigationHelper_eventDonNavigationManagerForActor_Parms), 0x0010000000000082, Z_Construct_UClass_AActor_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("DoN Navigation"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/DonNavigationHelper.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Returns the Voxel navigation builder used for building navigation volumes and performing pathfinding for specified Actor"));
			MetaData->SetValue(NewProp_Actor, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDonNavigationHelper_NoRegister()
	{
		return UDonNavigationHelper::StaticClass();
	}
	UClass* Z_Construct_UClass_UDonNavigationHelper()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UBlueprintFunctionLibrary();
			Z_Construct_UPackage__Script_DonAINavigation();
			OuterClass = UDonNavigationHelper::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20100080u;

				OuterClass->LinkChild(Z_Construct_UFunction_UDonNavigationHelper_DonNavigationManager());
				OuterClass->LinkChild(Z_Construct_UFunction_UDonNavigationHelper_DonNavigationManagerForActor());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UDonNavigationHelper_DonNavigationManager(), "DonNavigationManager"); // 1245190426
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UDonNavigationHelper_DonNavigationManagerForActor(), "DonNavigationManagerForActor"); // 3662876237
				static TCppClassTypeInfo<TCppClassTypeTraits<UDonNavigationHelper> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("DonNavigationHelper.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/DonNavigationHelper.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDonNavigationHelper, 1655170066);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDonNavigationHelper(Z_Construct_UClass_UDonNavigationHelper, &UDonNavigationHelper::StaticClass, TEXT("/Script/DonAINavigation"), TEXT("UDonNavigationHelper"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDonNavigationHelper);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
