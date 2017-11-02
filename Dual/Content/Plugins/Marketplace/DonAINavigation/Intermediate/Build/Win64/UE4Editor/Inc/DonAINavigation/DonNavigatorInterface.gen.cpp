// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/DonAINavigationPrivatePCH.h"
#include "Classes/DonNavigatorInterface.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDonNavigatorInterface() {}
// Cross Module References
	DONAINAVIGATION_API UFunction* Z_Construct_UFunction_UDonNavigator_AddMovementInputCustom();
	DONAINAVIGATION_API UClass* Z_Construct_UClass_UDonNavigator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	DONAINAVIGATION_API UFunction* Z_Construct_UFunction_UDonNavigator_OnLocomotionAbort();
	DONAINAVIGATION_API UFunction* Z_Construct_UFunction_UDonNavigator_OnLocomotionBegin();
	DONAINAVIGATION_API UFunction* Z_Construct_UFunction_UDonNavigator_OnLocomotionEnd();
	DONAINAVIGATION_API UFunction* Z_Construct_UFunction_UDonNavigator_OnNextSegment();
	DONAINAVIGATION_API UClass* Z_Construct_UClass_UDonNavigator_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DonAINavigation();
// End Cross Module References
	void IDonNavigator::AddMovementInputCustom(FVector WorldDirection, float ScaleValue)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_AddMovementInputCustom instead.");
	}
	void IDonNavigator::OnLocomotionAbort()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnLocomotionAbort instead.");
	}
	void IDonNavigator::OnLocomotionBegin()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnLocomotionBegin instead.");
	}
	void IDonNavigator::OnLocomotionEnd()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnLocomotionEnd instead.");
	}
	void IDonNavigator::OnNextSegment(FVector NextPoint)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnNextSegment instead.");
	}
	void UDonNavigator::StaticRegisterNativesUDonNavigator()
	{
		UClass* Class = UDonNavigator::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "AddMovementInputCustom", (Native)&IDonNavigator::execAddMovementInputCustom },
			{ "OnLocomotionAbort", (Native)&IDonNavigator::execOnLocomotionAbort },
			{ "OnLocomotionBegin", (Native)&IDonNavigator::execOnLocomotionBegin },
			{ "OnLocomotionEnd", (Native)&IDonNavigator::execOnLocomotionEnd },
			{ "OnNextSegment", (Native)&IDonNavigator::execOnNextSegment },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UDonNavigator_AddMovementInputCustom()
	{
		UObject* Outer = Z_Construct_UClass_UDonNavigator();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("AddMovementInputCustom"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x0C820C00, 65535, sizeof(DonNavigator_eventAddMovementInputCustom_Parms));
			UProperty* NewProp_ScaleValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ScaleValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ScaleValue, DonNavigator_eventAddMovementInputCustom_Parms), 0x0010000000000080);
			UProperty* NewProp_WorldDirection = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("WorldDirection"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(WorldDirection, DonNavigator_eventAddMovementInputCustom_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Don Navigation"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/DonNavigatorInterface.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Optional custom movement input. If not provided, default AddMovementInput behavior will be called on the pawn or character"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UDonNavigator_OnLocomotionAbort()
	{
		UObject* Outer = Z_Construct_UClass_UDonNavigator();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnLocomotionAbort"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x0C020C00, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Don Navigation"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/DonNavigatorInterface.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UDonNavigator_OnLocomotionBegin()
	{
		UObject* Outer = Z_Construct_UClass_UDonNavigator();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnLocomotionBegin"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x0C020C00, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Don Navigation"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/DonNavigatorInterface.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UDonNavigator_OnLocomotionEnd()
	{
		UObject* Outer = Z_Construct_UClass_UDonNavigator();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnLocomotionEnd"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x0C020C00, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Don Navigation"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/DonNavigatorInterface.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UDonNavigator_OnNextSegment()
	{
		UObject* Outer = Z_Construct_UClass_UDonNavigator();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnNextSegment"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x0C820C00, 65535, sizeof(DonNavigator_eventOnNextSegment_Parms));
			UProperty* NewProp_NextPoint = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NextPoint"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(NextPoint, DonNavigator_eventOnNextSegment_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Don Navigation"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/DonNavigatorInterface.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDonNavigator_NoRegister()
	{
		return UDonNavigator::StaticClass();
	}
	UClass* Z_Construct_UClass_UDonNavigator()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UInterface();
			Z_Construct_UPackage__Script_DonAINavigation();
			OuterClass = UDonNavigator::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20104081u;

				OuterClass->LinkChild(Z_Construct_UFunction_UDonNavigator_AddMovementInputCustom());
				OuterClass->LinkChild(Z_Construct_UFunction_UDonNavigator_OnLocomotionAbort());
				OuterClass->LinkChild(Z_Construct_UFunction_UDonNavigator_OnLocomotionBegin());
				OuterClass->LinkChild(Z_Construct_UFunction_UDonNavigator_OnLocomotionEnd());
				OuterClass->LinkChild(Z_Construct_UFunction_UDonNavigator_OnNextSegment());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UDonNavigator_AddMovementInputCustom(), "AddMovementInputCustom"); // 106806777
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UDonNavigator_OnLocomotionAbort(), "OnLocomotionAbort"); // 4015335910
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UDonNavigator_OnLocomotionBegin(), "OnLocomotionBegin"); // 633237888
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UDonNavigator_OnLocomotionEnd(), "OnLocomotionEnd"); // 2800350608
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UDonNavigator_OnNextSegment(), "OnNextSegment"); // 2301728975
				static TCppClassTypeInfo<TCppClassTypeTraits<IDonNavigator> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/DonNavigatorInterface.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDonNavigator, 1086006565);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDonNavigator(Z_Construct_UClass_UDonNavigator, &UDonNavigator::StaticClass, TEXT("/Script/DonAINavigation"), TEXT("UDonNavigator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDonNavigator);
	static FName NAME_UDonNavigator_AddMovementInputCustom = FName(TEXT("AddMovementInputCustom"));
	void IDonNavigator::Execute_AddMovementInputCustom(UObject* O, FVector WorldDirection, float ScaleValue)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UDonNavigator::StaticClass()));
		DonNavigator_eventAddMovementInputCustom_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UDonNavigator_AddMovementInputCustom);
		if (Func)
		{
			Parms.WorldDirection=WorldDirection;
			Parms.ScaleValue=ScaleValue;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IDonNavigator*)(O->GetNativeInterfaceAddress(UDonNavigator::StaticClass())))
		{
			I->AddMovementInputCustom_Implementation(WorldDirection,ScaleValue);
		}
	}
	static FName NAME_UDonNavigator_OnLocomotionAbort = FName(TEXT("OnLocomotionAbort"));
	void IDonNavigator::Execute_OnLocomotionAbort(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UDonNavigator::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UDonNavigator_OnLocomotionAbort);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IDonNavigator*)(O->GetNativeInterfaceAddress(UDonNavigator::StaticClass())))
		{
			I->OnLocomotionAbort_Implementation();
		}
	}
	static FName NAME_UDonNavigator_OnLocomotionBegin = FName(TEXT("OnLocomotionBegin"));
	void IDonNavigator::Execute_OnLocomotionBegin(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UDonNavigator::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UDonNavigator_OnLocomotionBegin);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IDonNavigator*)(O->GetNativeInterfaceAddress(UDonNavigator::StaticClass())))
		{
			I->OnLocomotionBegin_Implementation();
		}
	}
	static FName NAME_UDonNavigator_OnLocomotionEnd = FName(TEXT("OnLocomotionEnd"));
	void IDonNavigator::Execute_OnLocomotionEnd(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UDonNavigator::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UDonNavigator_OnLocomotionEnd);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IDonNavigator*)(O->GetNativeInterfaceAddress(UDonNavigator::StaticClass())))
		{
			I->OnLocomotionEnd_Implementation();
		}
	}
	static FName NAME_UDonNavigator_OnNextSegment = FName(TEXT("OnNextSegment"));
	void IDonNavigator::Execute_OnNextSegment(UObject* O, FVector NextPoint)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UDonNavigator::StaticClass()));
		DonNavigator_eventOnNextSegment_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UDonNavigator_OnNextSegment);
		if (Func)
		{
			Parms.NextPoint=NextPoint;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IDonNavigator*)(O->GetNativeInterfaceAddress(UDonNavigator::StaticClass())))
		{
			I->OnNextSegment_Implementation(NextPoint);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
