// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDonNavigationDynamicCollisionPayload;
struct FDoNNavigationQueryData;
#ifdef DONAINAVIGATION_BTTask_FlyTo_generated_h
#error "BTTask_FlyTo.generated.h already included, missing '#pragma once' in BTTask_FlyTo.h"
#endif
#define DONAINAVIGATION_BTTask_FlyTo_generated_h

#define HostProject_Plugins_DonAINavigation_Source_DonAINavigation_Classes_BehaviorTree_BTTask_FlyTo_h_26_GENERATED_BODY \
	friend DONAINAVIGATION_API class UScriptStruct* Z_Construct_UScriptStruct_FBT_FlyToTarget_DebugParams(); \
	DONAINAVIGATION_API static class UScriptStruct* StaticStruct(); \
	typedef FDoNNavigationDebugParams Super;


#define HostProject_Plugins_DonAINavigation_Source_DonAINavigation_Classes_BehaviorTree_BTTask_FlyTo_h_85_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPathfinding_OnDynamicCollisionAlert) \
	{ \
		P_GET_STRUCT_REF(FDonNavigationDynamicCollisionPayload,Z_Param_Out_Data); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Pathfinding_OnDynamicCollisionAlert(Z_Param_Out_Data); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPathfinding_OnFinish) \
	{ \
		P_GET_STRUCT_REF(FDoNNavigationQueryData,Z_Param_Out_Data); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Pathfinding_OnFinish(Z_Param_Out_Data); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_DonAINavigation_Source_DonAINavigation_Classes_BehaviorTree_BTTask_FlyTo_h_85_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPathfinding_OnDynamicCollisionAlert) \
	{ \
		P_GET_STRUCT_REF(FDonNavigationDynamicCollisionPayload,Z_Param_Out_Data); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Pathfinding_OnDynamicCollisionAlert(Z_Param_Out_Data); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPathfinding_OnFinish) \
	{ \
		P_GET_STRUCT_REF(FDoNNavigationQueryData,Z_Param_Out_Data); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Pathfinding_OnFinish(Z_Param_Out_Data); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_DonAINavigation_Source_DonAINavigation_Classes_BehaviorTree_BTTask_FlyTo_h_85_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBTTask_FlyTo(); \
	friend DONAINAVIGATION_API class UClass* Z_Construct_UClass_UBTTask_FlyTo(); \
public: \
	DECLARE_CLASS(UBTTask_FlyTo, UBTTaskNode, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/DonAINavigation"), NO_API) \
	DECLARE_SERIALIZER(UBTTask_FlyTo) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HostProject_Plugins_DonAINavigation_Source_DonAINavigation_Classes_BehaviorTree_BTTask_FlyTo_h_85_INCLASS \
private: \
	static void StaticRegisterNativesUBTTask_FlyTo(); \
	friend DONAINAVIGATION_API class UClass* Z_Construct_UClass_UBTTask_FlyTo(); \
public: \
	DECLARE_CLASS(UBTTask_FlyTo, UBTTaskNode, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/DonAINavigation"), NO_API) \
	DECLARE_SERIALIZER(UBTTask_FlyTo) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HostProject_Plugins_DonAINavigation_Source_DonAINavigation_Classes_BehaviorTree_BTTask_FlyTo_h_85_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBTTask_FlyTo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTTask_FlyTo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBTTask_FlyTo); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTTask_FlyTo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBTTask_FlyTo(UBTTask_FlyTo&&); \
	NO_API UBTTask_FlyTo(const UBTTask_FlyTo&); \
public:


#define HostProject_Plugins_DonAINavigation_Source_DonAINavigation_Classes_BehaviorTree_BTTask_FlyTo_h_85_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBTTask_FlyTo(UBTTask_FlyTo&&); \
	NO_API UBTTask_FlyTo(const UBTTask_FlyTo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBTTask_FlyTo); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTTask_FlyTo); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTTask_FlyTo)


#define HostProject_Plugins_DonAINavigation_Source_DonAINavigation_Classes_BehaviorTree_BTTask_FlyTo_h_85_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_DonAINavigation_Source_DonAINavigation_Classes_BehaviorTree_BTTask_FlyTo_h_82_PROLOG
#define HostProject_Plugins_DonAINavigation_Source_DonAINavigation_Classes_BehaviorTree_BTTask_FlyTo_h_85_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_DonAINavigation_Source_DonAINavigation_Classes_BehaviorTree_BTTask_FlyTo_h_85_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_DonAINavigation_Source_DonAINavigation_Classes_BehaviorTree_BTTask_FlyTo_h_85_RPC_WRAPPERS \
	HostProject_Plugins_DonAINavigation_Source_DonAINavigation_Classes_BehaviorTree_BTTask_FlyTo_h_85_INCLASS \
	HostProject_Plugins_DonAINavigation_Source_DonAINavigation_Classes_BehaviorTree_BTTask_FlyTo_h_85_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_DonAINavigation_Source_DonAINavigation_Classes_BehaviorTree_BTTask_FlyTo_h_85_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_DonAINavigation_Source_DonAINavigation_Classes_BehaviorTree_BTTask_FlyTo_h_85_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_DonAINavigation_Source_DonAINavigation_Classes_BehaviorTree_BTTask_FlyTo_h_85_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_DonAINavigation_Source_DonAINavigation_Classes_BehaviorTree_BTTask_FlyTo_h_85_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_DonAINavigation_Source_DonAINavigation_Classes_BehaviorTree_BTTask_FlyTo_h_85_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_DonAINavigation_Source_DonAINavigation_Classes_BehaviorTree_BTTask_FlyTo_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
