// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/DonAINavigationPrivatePCH.h"
#include "Classes/BehaviorTree/BTTask_FlyTo.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_FlyTo() {}
// Cross Module References
	DONAINAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FBT_FlyToTarget_DebugParams();
	UPackage* Z_Construct_UPackage__Script_DonAINavigation();
	DONAINAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FDoNNavigationDebugParams();
	DONAINAVIGATION_API UFunction* Z_Construct_UFunction_UBTTask_FlyTo_Pathfinding_OnDynamicCollisionAlert();
	DONAINAVIGATION_API UClass* Z_Construct_UClass_UBTTask_FlyTo();
	DONAINAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionPayload();
	DONAINAVIGATION_API UFunction* Z_Construct_UFunction_UBTTask_FlyTo_Pathfinding_OnFinish();
	DONAINAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FDoNNavigationQueryData();
	DONAINAVIGATION_API UClass* Z_Construct_UClass_UBTTask_FlyTo_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	DONAINAVIGATION_API UClass* Z_Construct_UClass_ADonNavigationManager_NoRegister();
	DONAINAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FDoNNavigationQueryParams();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
// End Cross Module References
class UScriptStruct* FBT_FlyToTarget_DebugParams::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DONAINAVIGATION_API uint32 Get_Z_Construct_UScriptStruct_FBT_FlyToTarget_DebugParams_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBT_FlyToTarget_DebugParams, Z_Construct_UPackage__Script_DonAINavigation(), TEXT("BT_FlyToTarget_DebugParams"), sizeof(FBT_FlyToTarget_DebugParams), Get_Z_Construct_UScriptStruct_FBT_FlyToTarget_DebugParams_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBT_FlyToTarget_DebugParams(FBT_FlyToTarget_DebugParams::StaticStruct, TEXT("/Script/DonAINavigation"), TEXT("BT_FlyToTarget_DebugParams"), false, nullptr, nullptr);
static struct FScriptStruct_DonAINavigation_StaticRegisterNativesFBT_FlyToTarget_DebugParams
{
	FScriptStruct_DonAINavigation_StaticRegisterNativesFBT_FlyToTarget_DebugParams()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BT_FlyToTarget_DebugParams")),new UScriptStruct::TCppStructOps<FBT_FlyToTarget_DebugParams>);
	}
} ScriptStruct_DonAINavigation_StaticRegisterNativesFBT_FlyToTarget_DebugParams;
	UScriptStruct* Z_Construct_UScriptStruct_FBT_FlyToTarget_DebugParams()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_DonAINavigation();
		extern uint32 Get_Z_Construct_UScriptStruct_FBT_FlyToTarget_DebugParams_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BT_FlyToTarget_DebugParams"), sizeof(FBT_FlyToTarget_DebugParams), Get_Z_Construct_UScriptStruct_FBT_FlyToTarget_DebugParams_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("BT_FlyToTarget_DebugParams"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), Z_Construct_UScriptStruct_FDoNNavigationDebugParams(), new UScriptStruct::TCppStructOps<FBT_FlyToTarget_DebugParams>, EStructFlags(0x00000001));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bVisualizePawnAsVoxels, FBT_FlyToTarget_DebugParams);
			UProperty* NewProp_bVisualizePawnAsVoxels = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bVisualizePawnAsVoxels"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bVisualizePawnAsVoxels, FBT_FlyToTarget_DebugParams), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bVisualizePawnAsVoxels, FBT_FlyToTarget_DebugParams), sizeof(bool), true);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Classes/BehaviorTree/BTTask_FlyTo.h"));
			MetaData->SetValue(NewProp_bVisualizePawnAsVoxels, TEXT("Category"), TEXT("DoN Navigation"));
			MetaData->SetValue(NewProp_bVisualizePawnAsVoxels, TEXT("ModuleRelativePath"), TEXT("Classes/BehaviorTree/BTTask_FlyTo.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBT_FlyToTarget_DebugParams_CRC() { return 1452976983U; }
	void UBTTask_FlyTo::StaticRegisterNativesUBTTask_FlyTo()
	{
		UClass* Class = UBTTask_FlyTo::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "Pathfinding_OnDynamicCollisionAlert", (Native)&UBTTask_FlyTo::execPathfinding_OnDynamicCollisionAlert },
			{ "Pathfinding_OnFinish", (Native)&UBTTask_FlyTo::execPathfinding_OnFinish },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UBTTask_FlyTo_Pathfinding_OnDynamicCollisionAlert()
	{
		struct BTTask_FlyTo_eventPathfinding_OnDynamicCollisionAlert_Parms
		{
			FDonNavigationDynamicCollisionPayload Data;
		};
		UObject* Outer = Z_Construct_UClass_UBTTask_FlyTo();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Pathfinding_OnDynamicCollisionAlert"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04420401, 65535, sizeof(BTTask_FlyTo_eventPathfinding_OnDynamicCollisionAlert_Parms));
			UProperty* NewProp_Data = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Data"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Data, BTTask_FlyTo_eventPathfinding_OnDynamicCollisionAlert_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionPayload());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("DoN Navigation"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/BehaviorTree/BTTask_FlyTo.h"));
			MetaData->SetValue(NewProp_Data, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBTTask_FlyTo_Pathfinding_OnFinish()
	{
		struct BTTask_FlyTo_eventPathfinding_OnFinish_Parms
		{
			FDoNNavigationQueryData Data;
		};
		UObject* Outer = Z_Construct_UClass_UBTTask_FlyTo();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Pathfinding_OnFinish"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04420401, 65535, sizeof(BTTask_FlyTo_eventPathfinding_OnFinish_Parms));
			UProperty* NewProp_Data = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Data"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Data, BTTask_FlyTo_eventPathfinding_OnFinish_Parms), 0x0010008008000182, Z_Construct_UScriptStruct_FDoNNavigationQueryData());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("DoN Navigation"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/BehaviorTree/BTTask_FlyTo.h"));
			MetaData->SetValue(NewProp_Data, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBTTask_FlyTo_NoRegister()
	{
		return UBTTask_FlyTo::StaticClass();
	}
	UClass* Z_Construct_UClass_UBTTask_FlyTo()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UBTTaskNode();
			Z_Construct_UPackage__Script_DonAINavigation();
			OuterClass = UBTTask_FlyTo::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20000080u;

				OuterClass->LinkChild(Z_Construct_UFunction_UBTTask_FlyTo_Pathfinding_OnDynamicCollisionAlert());
				OuterClass->LinkChild(Z_Construct_UFunction_UBTTask_FlyTo_Pathfinding_OnFinish());

				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bTeleportToDestinationUponFailure, UBTTask_FlyTo);
				UProperty* NewProp_bTeleportToDestinationUponFailure = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bTeleportToDestinationUponFailure"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bTeleportToDestinationUponFailure, UBTTask_FlyTo), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bTeleportToDestinationUponFailure, UBTTask_FlyTo), sizeof(bool), true);
				UProperty* NewProp_NavigationManager = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("NavigationManager"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(NavigationManager, UBTTask_FlyTo), 0x0010000000000014, Z_Construct_UClass_ADonNavigationManager_NoRegister());
				UProperty* NewProp_DebugParams = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DebugParams"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(DebugParams, UBTTask_FlyTo), 0x0010000000000005, Z_Construct_UScriptStruct_FBT_FlyToTarget_DebugParams());
				UProperty* NewProp_QueryParams = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("QueryParams"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(QueryParams, UBTTask_FlyTo), 0x0010000000000005, Z_Construct_UScriptStruct_FDoNNavigationQueryParams());
				UProperty* NewProp_RecalculatePathTolerance = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("RecalculatePathTolerance"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(RecalculatePathTolerance, UBTTask_FlyTo), 0x0010000000000015);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bRecalcPathOnDestinationChanged, UBTTask_FlyTo);
				UProperty* NewProp_bRecalcPathOnDestinationChanged = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bRecalcPathOnDestinationChanged"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bRecalcPathOnDestinationChanged, UBTTask_FlyTo), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bRecalcPathOnDestinationChanged, UBTTask_FlyTo), sizeof(uint8), false);
				UProperty* NewProp_MinimumProximityRequired = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MinimumProximityRequired"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(MinimumProximityRequired, UBTTask_FlyTo), 0x0010000000000005);
				UProperty* NewProp_KeyToFlipFlopWhenTaskExits = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("KeyToFlipFlopWhenTaskExits"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(KeyToFlipFlopWhenTaskExits, UBTTask_FlyTo), 0x0010000000000005, Z_Construct_UScriptStruct_FBlackboardKeySelector());
				UProperty* NewProp_FlightResultKey = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FlightResultKey"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(FlightResultKey, UBTTask_FlyTo), 0x0010000000000005, Z_Construct_UScriptStruct_FBlackboardKeySelector());
				UProperty* NewProp_FlightLocationKey = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FlightLocationKey"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(FlightLocationKey, UBTTask_FlyTo), 0x0010000000000005, Z_Construct_UScriptStruct_FBlackboardKeySelector());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UBTTask_FlyTo_Pathfinding_OnDynamicCollisionAlert(), "Pathfinding_OnDynamicCollisionAlert"); // 1641690117
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UBTTask_FlyTo_Pathfinding_OnFinish(), "Pathfinding_OnFinish"); // 3161821049
				static TCppClassTypeInfo<TCppClassTypeTraits<UBTTask_FlyTo> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("BehaviorTree/BTTask_FlyTo.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/BehaviorTree/BTTask_FlyTo.h"));
				MetaData->SetValue(OuterClass, TEXT("ObjectInitializerConstructorDeclared"), TEXT(""));
				MetaData->SetValue(NewProp_bTeleportToDestinationUponFailure, TEXT("Category"), TEXT("DoN Navigation"));
				MetaData->SetValue(NewProp_bTeleportToDestinationUponFailure, TEXT("ModuleRelativePath"), TEXT("Classes/BehaviorTree/BTTask_FlyTo.h"));
				MetaData->SetValue(NewProp_bTeleportToDestinationUponFailure, TEXT("ToolTip"), TEXT("In some scenarios, it may be desirable to allow the A.I. to teleport to its intended destination  if pathfinding failed for some reason\n  Set this flag to true to if you want this behavior"));
				MetaData->SetValue(NewProp_NavigationManager, TEXT("Category"), TEXT("DoN Navigation"));
				MetaData->SetValue(NewProp_NavigationManager, TEXT("ModuleRelativePath"), TEXT("Classes/BehaviorTree/BTTask_FlyTo.h"));
				MetaData->SetValue(NewProp_DebugParams, TEXT("Category"), TEXT("DoN Navigation"));
				MetaData->SetValue(NewProp_DebugParams, TEXT("ModuleRelativePath"), TEXT("Classes/BehaviorTree/BTTask_FlyTo.h"));
				MetaData->SetValue(NewProp_QueryParams, TEXT("Category"), TEXT("DoN Navigation"));
				MetaData->SetValue(NewProp_QueryParams, TEXT("ModuleRelativePath"), TEXT("Classes/BehaviorTree/BTTask_FlyTo.h"));
				MetaData->SetValue(NewProp_RecalculatePathTolerance, TEXT("Category"), TEXT("DoN Navigation"));
				MetaData->SetValue(NewProp_RecalculatePathTolerance, TEXT("EditCondition"), TEXT("bRecalcPathOnDestinationChanged"));
				MetaData->SetValue(NewProp_RecalculatePathTolerance, TEXT("ModuleRelativePath"), TEXT("Classes/BehaviorTree/BTTask_FlyTo.h"));
				MetaData->SetValue(NewProp_RecalculatePathTolerance, TEXT("ToolTip"), TEXT("Recalculate path if FlightLocation value changed."));
				MetaData->SetValue(NewProp_bRecalcPathOnDestinationChanged, TEXT("Category"), TEXT("DoN Navigation"));
				MetaData->SetValue(NewProp_bRecalcPathOnDestinationChanged, TEXT("InlineEditConditionToggle"), TEXT(""));
				MetaData->SetValue(NewProp_bRecalcPathOnDestinationChanged, TEXT("ModuleRelativePath"), TEXT("Classes/BehaviorTree/BTTask_FlyTo.h"));
				MetaData->SetValue(NewProp_bRecalcPathOnDestinationChanged, TEXT("ToolTip"), TEXT("Recalculate path enable"));
				MetaData->SetValue(NewProp_MinimumProximityRequired, TEXT("Category"), TEXT("DoN Navigation"));
				MetaData->SetValue(NewProp_MinimumProximityRequired, TEXT("ModuleRelativePath"), TEXT("Classes/BehaviorTree/BTTask_FlyTo.h"));
				MetaData->SetValue(NewProp_KeyToFlipFlopWhenTaskExits, TEXT("Category"), TEXT("DoN Navigation"));
				MetaData->SetValue(NewProp_KeyToFlipFlopWhenTaskExits, TEXT("ModuleRelativePath"), TEXT("Classes/BehaviorTree/BTTask_FlyTo.h"));
				MetaData->SetValue(NewProp_KeyToFlipFlopWhenTaskExits, TEXT("ToolTip"), TEXT("Optional: This boolean will be flip-flopped at the end of this task (regardless of success or failure). This can be useful for certain types of behavior tree setups"));
				MetaData->SetValue(NewProp_FlightResultKey, TEXT("Category"), TEXT("DoN Navigation"));
				MetaData->SetValue(NewProp_FlightResultKey, TEXT("ModuleRelativePath"), TEXT("Classes/BehaviorTree/BTTask_FlyTo.h"));
				MetaData->SetValue(NewProp_FlightResultKey, TEXT("ToolTip"), TEXT("Optional: Useful in somecases where you want failure or success of a task to automatically update a particular blackboard key"));
				MetaData->SetValue(NewProp_FlightLocationKey, TEXT("Category"), TEXT("DoN Navigation"));
				MetaData->SetValue(NewProp_FlightLocationKey, TEXT("ModuleRelativePath"), TEXT("Classes/BehaviorTree/BTTask_FlyTo.h"));
				MetaData->SetValue(NewProp_FlightLocationKey, TEXT("ToolTip"), TEXT("Behavior Tree Input:"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTTask_FlyTo, 656322519);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTTask_FlyTo(Z_Construct_UClass_UBTTask_FlyTo, &UBTTask_FlyTo::StaticClass, TEXT("/Script/DonAINavigation"), TEXT("UBTTask_FlyTo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_FlyTo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
