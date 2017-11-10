// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDoNNavigationQueryData;
struct FDonNavigationDynamicCollisionPayload;
struct FVector;
struct FDoNNavigationDebugParams;
struct FColor;
class UPrimitiveComponent;
class AActor;
struct FHitResult;
struct FDoNNavigationQueryParams;
#ifdef DONAINAVIGATION_DonNavigationManager_generated_h
#error "DonNavigationManager.generated.h already included, missing '#pragma once' in DonNavigationManager.h"
#endif
#define DONAINAVIGATION_DonNavigationManager_generated_h

#define HostProject_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationManager_h_565_GENERATED_BODY \
	friend DONAINAVIGATION_API class UScriptStruct* Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionTask(); \
	DONAINAVIGATION_API static class UScriptStruct* StaticStruct(); \
	typedef FDonNavigationTask Super;


#define HostProject_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationManager_h_470_GENERATED_BODY \
	friend DONAINAVIGATION_API class UScriptStruct* Z_Construct_UScriptStruct_FDonNavigationQueryTask(); \
	DONAINAVIGATION_API static class UScriptStruct* StaticStruct(); \
	typedef FDonNavigationTask Super;


#define HostProject_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationManager_h_459_GENERATED_BODY \
	friend DONAINAVIGATION_API class UScriptStruct* Z_Construct_UScriptStruct_FDonNavigationTask(); \
	DONAINAVIGATION_API static class UScriptStruct* StaticStruct();


#define HostProject_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationManager_h_355_GENERATED_BODY \
	friend DONAINAVIGATION_API class UScriptStruct* Z_Construct_UScriptStruct_FDoNNavigationQueryData(); \
	DONAINAVIGATION_API static class UScriptStruct* StaticStruct();


#define HostProject_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationManager_h_291_GENERATED_BODY \
	friend DONAINAVIGATION_API class UScriptStruct* Z_Construct_UScriptStruct_FDoNNavigationDebugParams(); \
	DONAINAVIGATION_API static class UScriptStruct* StaticStruct();


#define HostProject_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationManager_h_221_GENERATED_BODY \
	friend DONAINAVIGATION_API class UScriptStruct* Z_Construct_UScriptStruct_FDoNNavigationQueryParams(); \
	DONAINAVIGATION_API static class UScriptStruct* StaticStruct();


#define HostProject_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationManager_h_187_GENERATED_BODY \
	friend DONAINAVIGATION_API class UScriptStruct* Z_Construct_UScriptStruct_FDonNavVoxelXYZ(); \
	DONAINAVIGATION_API static class UScriptStruct* StaticStruct();


#define HostProject_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationManager_h_169_GENERATED_BODY \
	friend DONAINAVIGATION_API class UScriptStruct* Z_Construct_UScriptStruct_FDonNavVoxelX(); \
	DONAINAVIGATION_API static class UScriptStruct* StaticStruct();


#define HostProject_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationManager_h_151_GENERATED_BODY \
	friend DONAINAVIGATION_API class UScriptStruct* Z_Construct_UScriptStruct_FDonNavVoxelY(); \
	DONAINAVIGATION_API static class UScriptStruct* StaticStruct();


#define HostProject_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationManager_h_126_GENERATED_BODY \
	friend DONAINAVIGATION_API class UScriptStruct* Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionNotifyee(); \
	DONAINAVIGATION_API static class UScriptStruct* StaticStruct();


#define HostProject_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationManager_h_109_GENERATED_BODY \
	friend DONAINAVIGATION_API class UScriptStruct* Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionPayload(); \
	DONAINAVIGATION_API static class UScriptStruct* StaticStruct();


#define HostProject_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationManager_h_89_GENERATED_BODY \
	friend DONAINAVIGATION_API class UScriptStruct* Z_Construct_UScriptStruct_FDonVoxelCollisionProfile(); \
	DONAINAVIGATION_API static class UScriptStruct* StaticStruct();


#define HostProject_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationManager_h_48_GENERATED_BODY \
	friend DONAINAVIGATION_API class UScriptStruct* Z_Construct_UScriptStruct_FDonNavigationVoxel(); \
	DONAINAVIGATION_API static class UScriptStruct* StaticStruct();


#define HostProject_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationManager_h_511_DELEGATE \
struct _Script_DonAINavigation_eventDonCollisionSamplerCallback_Parms \
{ \
	bool bTaskSuccessful; \
}; \
static inline void FDonCollisionSamplerCallback_DelegateWrapper(const FScriptDelegate& DonCollisionSamplerCallback, bool bTaskSuccessful) \
{ \
	_Script_DonAINavigation_eventDonCollisionSamplerCallback_Parms Parms; \
	Parms.bTaskSuccessful=bTaskSuccessful ? true : false; \
	DonCollisionSamplerCallback.ProcessDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationManager_h_454_DELEGATE \
struct _Script_DonAINavigation_eventDoNNavigationResultHandler_Parms \
{ \
	FDoNNavigationQueryData Data; \
}; \
static inline void FDoNNavigationResultHandler_DelegateWrapper(const FScriptDelegate& DoNNavigationResultHandler, FDoNNavigationQueryData const& Data) \
{ \
	_Script_DonAINavigation_eventDoNNavigationResultHandler_Parms Parms; \
	Parms.Data=Data; \
	DoNNavigationResultHandler.ProcessDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationManager_h_120_DELEGATE \
struct _Script_DonAINavigation_eventDonNavigationDynamicCollisionDelegate_Parms \
{ \
	FDonNavigationDynamicCollisionPayload Data; \
}; \
static inline void FDonNavigationDynamicCollisionDelegate_DelegateWrapper(const FScriptDelegate& DonNavigationDynamicCollisionDelegate, FDonNavigationDynamicCollisionPayload const& Data) \
{ \
	_Script_DonAINavigation_eventDonNavigationDynamicCollisionDelegate_Parms Parms; \
	Parms.Data=Data; \
	DonNavigationDynamicCollisionDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationManager_h_652_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCanNavigate) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->CanNavigate(Z_Param_Location); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVisualizeDynamicCollisionListeners) \
	{ \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_Listener); \
		P_GET_STRUCT_REF(FDoNNavigationQueryData,Z_Param_Out_QueryData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->VisualizeDynamicCollisionListeners(FDonNavigationDynamicCollisionDelegate(Z_Param_Listener),Z_Param_Out_QueryData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVisualizeNAVResult) \
	{ \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_PathSolution); \
		P_GET_STRUCT(FVector,Z_Param_Source); \
		P_GET_STRUCT(FVector,Z_Param_Destination); \
		P_GET_UBOOL(Z_Param_Reset); \
		P_GET_STRUCT_REF(FDoNNavigationDebugParams,Z_Param_Out_DebugParams); \
		P_GET_STRUCT_REF(FColor,Z_Param_Out_LineColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->VisualizeNAVResult(Z_Param_Out_PathSolution,Z_Param_Source,Z_Param_Destination,Z_Param_Reset,Z_Param_Out_DebugParams,Z_Param_Out_LineColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsMeshBoundsWithinNavigableWorld) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Mesh); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BoundsScaleFactor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsMeshBoundsWithinNavigableWorld(Z_Param_Mesh,Z_Param_BoundsScaleFactor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsLocationBeneathLandscape) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_LineTraceHeight); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsLocationBeneathLandscape(Z_Param_Location,Z_Param_LineTraceHeight); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindRandomPointAroundOriginInNavWorld) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_NavigationActor); \
		P_GET_STRUCT(FVector,Z_Param_Origin); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Distance); \
		P_GET_UBOOL_REF(Z_Param_Out_bFoundValidResult); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxDesiredAltitude); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxZAngularDispacement); \
		P_GET_PROPERTY(UIntProperty,Z_Param_MaxAttempts); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->FindRandomPointAroundOriginInNavWorld(Z_Param_NavigationActor,Z_Param_Origin,Z_Param_Distance,Z_Param_Out_bFoundValidResult,Z_Param_MaxDesiredAltitude,Z_Param_MaxZAngularDispacement,Z_Param_MaxAttempts); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindRandomPointFromActorInNavWorld) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Distance); \
		P_GET_UBOOL_REF(Z_Param_Out_bFoundValidResult); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxDesiredAltitude); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxZAngularDispacement); \
		P_GET_PROPERTY(UIntProperty,Z_Param_MaxAttempts); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->FindRandomPointFromActorInNavWorld(Z_Param_Actor,Z_Param_Distance,Z_Param_Out_bFoundValidResult,Z_Param_MaxDesiredAltitude,Z_Param_MaxZAngularDispacement,Z_Param_MaxAttempts); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsDirectPathLineSweep) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_CollisionComponent); \
		P_GET_STRUCT(FVector,Z_Param_Start); \
		P_GET_STRUCT(FVector,Z_Param_End); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit); \
		P_GET_UBOOL(Z_Param_bFindInitialOverlaps); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_CollisionShapeInflation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsDirectPathLineSweep(Z_Param_CollisionComponent,Z_Param_Start,Z_Param_End,Z_Param_Out_OutHit,Z_Param_bFindInitialOverlaps,Z_Param_CollisionShapeInflation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsDirectPathLineTrace) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_start); \
		P_GET_STRUCT(FVector,Z_Param_end); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_UBOOL(Z_Param_bFindInitialOverlaps); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsDirectPathLineTrace(Z_Param_start,Z_Param_end,Z_Param_Out_OutHit,Z_Param_Out_ActorsToIgnore,Z_Param_bFindInitialOverlaps); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsDirectPathSweep) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_CollisionComponent); \
		P_GET_STRUCT(FVector,Z_Param_Start); \
		P_GET_STRUCT(FVector,Z_Param_End); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit); \
		P_GET_UBOOL(Z_Param_bFindInitialOverlaps); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_CollisionShapeInflation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsDirectPathSweep(Z_Param_CollisionComponent,Z_Param_Start,Z_Param_End,Z_Param_Out_OutHit,Z_Param_bFindInitialOverlaps,Z_Param_CollisionShapeInflation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindPathSolution_StressTesting) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_STRUCT(FVector,Z_Param_Destination); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_PathSolutionRaw); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_PathSolutionOptimized); \
		P_GET_STRUCT_REF(FDoNNavigationQueryParams,Z_Param_Out_QueryParams); \
		P_GET_STRUCT_REF(FDoNNavigationDebugParams,Z_Param_Out_DebugParams); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->FindPathSolution_StressTesting(Z_Param_Actor,Z_Param_Destination,Z_Param_Out_PathSolutionRaw,Z_Param_Out_PathSolutionOptimized,Z_Param_Out_QueryParams,Z_Param_Out_DebugParams); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopListeningToDynamicCollisionsForPathIndex) \
	{ \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_ListenerToClear); \
		P_GET_STRUCT_REF(FDoNNavigationQueryData,Z_Param_Out_QueryData); \
		P_GET_PROPERTY(UIntProperty,Z_Param_VolumeIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StopListeningToDynamicCollisionsForPathIndex(FDonNavigationDynamicCollisionDelegate(Z_Param_ListenerToClear),Z_Param_Out_QueryData,Z_Param_VolumeIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopListeningToDynamicCollisionsForPath) \
	{ \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_ListenerToClear); \
		P_GET_STRUCT_REF(FDoNNavigationQueryData,Z_Param_Out_QueryData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StopListeningToDynamicCollisionsForPath(FDonNavigationDynamicCollisionDelegate(Z_Param_ListenerToClear),Z_Param_Out_QueryData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execScheduleDynamicCollisionUpdate) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Mesh); \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_ResultHandler); \
		P_GET_PROPERTY(UNameProperty,Z_Param_CustomCacheIdentifier); \
		P_GET_UBOOL(Z_Param_bReplaceExistingTask); \
		P_GET_UBOOL(Z_Param_bDisableCacheUsage); \
		P_GET_UBOOL(Z_Param_bReloadCollisionCache); \
		P_GET_UBOOL(Z_Param_bUseCheapBoundsCollision); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BoundsScaleFactor); \
		P_GET_UBOOL(Z_Param_bForceSynchronousExecution); \
		P_GET_UBOOL(Z_Param_bDrawDebug); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->ScheduleDynamicCollisionUpdate(Z_Param_Mesh,FDonCollisionSamplerCallback(Z_Param_ResultHandler),Z_Param_CustomCacheIdentifier,Z_Param_bReplaceExistingTask,Z_Param_bDisableCacheUsage,Z_Param_bReloadCollisionCache,Z_Param_bUseCheapBoundsCollision,Z_Param_BoundsScaleFactor,Z_Param_bForceSynchronousExecution,Z_Param_bDrawDebug); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasTask) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->HasTask(Z_Param_Actor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAbortPathfindingTask) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AbortPathfindingTask(Z_Param_Actor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSchedulePathfindingTask) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_STRUCT(FVector,Z_Param_Destination); \
		P_GET_STRUCT_REF(FDoNNavigationQueryParams,Z_Param_Out_QueryParams); \
		P_GET_STRUCT_REF(FDoNNavigationDebugParams,Z_Param_Out_DebugParams); \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_ResultHandlerDelegate); \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_DynamicCollisionListener); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->SchedulePathfindingTask(Z_Param_Actor,Z_Param_Destination,Z_Param_Out_QueryParams,Z_Param_Out_DebugParams,FDoNNavigationResultHandler(Z_Param_ResultHandlerDelegate),FDonNavigationDynamicCollisionDelegate(Z_Param_DynamicCollisionListener)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsLocationWithinNavigableWorld) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_DesiredLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsLocationWithinNavigableWorld(Z_Param_DesiredLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClampLocationToNavigableWorld) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_DesiredLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->ClampLocationToNavigableWorld(Z_Param_DesiredLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDebug_ClearAllVolumes) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Debug_ClearAllVolumes(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDebug_DrawVoxelCollisionProfile) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_MeshOrPrimitive); \
		P_GET_UBOOL(Z_Param_bDrawPersistent); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Debug_DrawVoxelCollisionProfile(Z_Param_MeshOrPrimitive,Z_Param_bDrawPersistent,Z_Param_Duration); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDebug_DrawVolumesAroundPoint) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_PROPERTY(UIntProperty,Z_Param_CubeSize); \
		P_GET_UBOOL(Z_Param_DrawPersistentLines); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_LineThickness); \
		P_GET_UBOOL(Z_Param_bAutoInitializeVolumes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Debug_DrawVolumesAroundPoint(Z_Param_Location,Z_Param_CubeSize,Z_Param_DrawPersistentLines,Z_Param_Duration,Z_Param_LineThickness,Z_Param_bAutoInitializeVolumes); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDebug_DrawAllVolumes) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_LineThickness); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Debug_DrawAllVolumes(Z_Param_LineThickness); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDebug_ToggleWorldBoundaryInGame) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Debug_ToggleWorldBoundaryInGame(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConstructBuilder) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ConstructBuilder(); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationManager_h_652_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCanNavigate) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->CanNavigate(Z_Param_Location); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVisualizeDynamicCollisionListeners) \
	{ \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_Listener); \
		P_GET_STRUCT_REF(FDoNNavigationQueryData,Z_Param_Out_QueryData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->VisualizeDynamicCollisionListeners(FDonNavigationDynamicCollisionDelegate(Z_Param_Listener),Z_Param_Out_QueryData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVisualizeNAVResult) \
	{ \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_PathSolution); \
		P_GET_STRUCT(FVector,Z_Param_Source); \
		P_GET_STRUCT(FVector,Z_Param_Destination); \
		P_GET_UBOOL(Z_Param_Reset); \
		P_GET_STRUCT_REF(FDoNNavigationDebugParams,Z_Param_Out_DebugParams); \
		P_GET_STRUCT_REF(FColor,Z_Param_Out_LineColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->VisualizeNAVResult(Z_Param_Out_PathSolution,Z_Param_Source,Z_Param_Destination,Z_Param_Reset,Z_Param_Out_DebugParams,Z_Param_Out_LineColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsMeshBoundsWithinNavigableWorld) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Mesh); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BoundsScaleFactor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsMeshBoundsWithinNavigableWorld(Z_Param_Mesh,Z_Param_BoundsScaleFactor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsLocationBeneathLandscape) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_LineTraceHeight); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsLocationBeneathLandscape(Z_Param_Location,Z_Param_LineTraceHeight); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindRandomPointAroundOriginInNavWorld) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_NavigationActor); \
		P_GET_STRUCT(FVector,Z_Param_Origin); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Distance); \
		P_GET_UBOOL_REF(Z_Param_Out_bFoundValidResult); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxDesiredAltitude); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxZAngularDispacement); \
		P_GET_PROPERTY(UIntProperty,Z_Param_MaxAttempts); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->FindRandomPointAroundOriginInNavWorld(Z_Param_NavigationActor,Z_Param_Origin,Z_Param_Distance,Z_Param_Out_bFoundValidResult,Z_Param_MaxDesiredAltitude,Z_Param_MaxZAngularDispacement,Z_Param_MaxAttempts); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindRandomPointFromActorInNavWorld) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Distance); \
		P_GET_UBOOL_REF(Z_Param_Out_bFoundValidResult); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxDesiredAltitude); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxZAngularDispacement); \
		P_GET_PROPERTY(UIntProperty,Z_Param_MaxAttempts); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->FindRandomPointFromActorInNavWorld(Z_Param_Actor,Z_Param_Distance,Z_Param_Out_bFoundValidResult,Z_Param_MaxDesiredAltitude,Z_Param_MaxZAngularDispacement,Z_Param_MaxAttempts); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsDirectPathLineSweep) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_CollisionComponent); \
		P_GET_STRUCT(FVector,Z_Param_Start); \
		P_GET_STRUCT(FVector,Z_Param_End); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit); \
		P_GET_UBOOL(Z_Param_bFindInitialOverlaps); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_CollisionShapeInflation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsDirectPathLineSweep(Z_Param_CollisionComponent,Z_Param_Start,Z_Param_End,Z_Param_Out_OutHit,Z_Param_bFindInitialOverlaps,Z_Param_CollisionShapeInflation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsDirectPathLineTrace) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_start); \
		P_GET_STRUCT(FVector,Z_Param_end); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_UBOOL(Z_Param_bFindInitialOverlaps); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsDirectPathLineTrace(Z_Param_start,Z_Param_end,Z_Param_Out_OutHit,Z_Param_Out_ActorsToIgnore,Z_Param_bFindInitialOverlaps); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsDirectPathSweep) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_CollisionComponent); \
		P_GET_STRUCT(FVector,Z_Param_Start); \
		P_GET_STRUCT(FVector,Z_Param_End); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit); \
		P_GET_UBOOL(Z_Param_bFindInitialOverlaps); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_CollisionShapeInflation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsDirectPathSweep(Z_Param_CollisionComponent,Z_Param_Start,Z_Param_End,Z_Param_Out_OutHit,Z_Param_bFindInitialOverlaps,Z_Param_CollisionShapeInflation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindPathSolution_StressTesting) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_STRUCT(FVector,Z_Param_Destination); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_PathSolutionRaw); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_PathSolutionOptimized); \
		P_GET_STRUCT_REF(FDoNNavigationQueryParams,Z_Param_Out_QueryParams); \
		P_GET_STRUCT_REF(FDoNNavigationDebugParams,Z_Param_Out_DebugParams); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->FindPathSolution_StressTesting(Z_Param_Actor,Z_Param_Destination,Z_Param_Out_PathSolutionRaw,Z_Param_Out_PathSolutionOptimized,Z_Param_Out_QueryParams,Z_Param_Out_DebugParams); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopListeningToDynamicCollisionsForPathIndex) \
	{ \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_ListenerToClear); \
		P_GET_STRUCT_REF(FDoNNavigationQueryData,Z_Param_Out_QueryData); \
		P_GET_PROPERTY(UIntProperty,Z_Param_VolumeIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StopListeningToDynamicCollisionsForPathIndex(FDonNavigationDynamicCollisionDelegate(Z_Param_ListenerToClear),Z_Param_Out_QueryData,Z_Param_VolumeIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopListeningToDynamicCollisionsForPath) \
	{ \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_ListenerToClear); \
		P_GET_STRUCT_REF(FDoNNavigationQueryData,Z_Param_Out_QueryData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StopListeningToDynamicCollisionsForPath(FDonNavigationDynamicCollisionDelegate(Z_Param_ListenerToClear),Z_Param_Out_QueryData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execScheduleDynamicCollisionUpdate) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Mesh); \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_ResultHandler); \
		P_GET_PROPERTY(UNameProperty,Z_Param_CustomCacheIdentifier); \
		P_GET_UBOOL(Z_Param_bReplaceExistingTask); \
		P_GET_UBOOL(Z_Param_bDisableCacheUsage); \
		P_GET_UBOOL(Z_Param_bReloadCollisionCache); \
		P_GET_UBOOL(Z_Param_bUseCheapBoundsCollision); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BoundsScaleFactor); \
		P_GET_UBOOL(Z_Param_bForceSynchronousExecution); \
		P_GET_UBOOL(Z_Param_bDrawDebug); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->ScheduleDynamicCollisionUpdate(Z_Param_Mesh,FDonCollisionSamplerCallback(Z_Param_ResultHandler),Z_Param_CustomCacheIdentifier,Z_Param_bReplaceExistingTask,Z_Param_bDisableCacheUsage,Z_Param_bReloadCollisionCache,Z_Param_bUseCheapBoundsCollision,Z_Param_BoundsScaleFactor,Z_Param_bForceSynchronousExecution,Z_Param_bDrawDebug); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasTask) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->HasTask(Z_Param_Actor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAbortPathfindingTask) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AbortPathfindingTask(Z_Param_Actor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSchedulePathfindingTask) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_STRUCT(FVector,Z_Param_Destination); \
		P_GET_STRUCT_REF(FDoNNavigationQueryParams,Z_Param_Out_QueryParams); \
		P_GET_STRUCT_REF(FDoNNavigationDebugParams,Z_Param_Out_DebugParams); \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_ResultHandlerDelegate); \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_DynamicCollisionListener); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->SchedulePathfindingTask(Z_Param_Actor,Z_Param_Destination,Z_Param_Out_QueryParams,Z_Param_Out_DebugParams,FDoNNavigationResultHandler(Z_Param_ResultHandlerDelegate),FDonNavigationDynamicCollisionDelegate(Z_Param_DynamicCollisionListener)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsLocationWithinNavigableWorld) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_DesiredLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsLocationWithinNavigableWorld(Z_Param_DesiredLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClampLocationToNavigableWorld) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_DesiredLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->ClampLocationToNavigableWorld(Z_Param_DesiredLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDebug_ClearAllVolumes) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Debug_ClearAllVolumes(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDebug_DrawVoxelCollisionProfile) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_MeshOrPrimitive); \
		P_GET_UBOOL(Z_Param_bDrawPersistent); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Debug_DrawVoxelCollisionProfile(Z_Param_MeshOrPrimitive,Z_Param_bDrawPersistent,Z_Param_Duration); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDebug_DrawVolumesAroundPoint) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_PROPERTY(UIntProperty,Z_Param_CubeSize); \
		P_GET_UBOOL(Z_Param_DrawPersistentLines); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_LineThickness); \
		P_GET_UBOOL(Z_Param_bAutoInitializeVolumes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Debug_DrawVolumesAroundPoint(Z_Param_Location,Z_Param_CubeSize,Z_Param_DrawPersistentLines,Z_Param_Duration,Z_Param_LineThickness,Z_Param_bAutoInitializeVolumes); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDebug_DrawAllVolumes) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_LineThickness); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Debug_DrawAllVolumes(Z_Param_LineThickness); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDebug_ToggleWorldBoundaryInGame) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Debug_ToggleWorldBoundaryInGame(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConstructBuilder) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ConstructBuilder(); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationManager_h_652_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADonNavigationManager(); \
	friend DONAINAVIGATION_API class UClass* Z_Construct_UClass_ADonNavigationManager(); \
public: \
	DECLARE_CLASS(ADonNavigationManager, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/DonAINavigation"), NO_API) \
	DECLARE_SERIALIZER(ADonNavigationManager) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HostProject_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationManager_h_652_INCLASS \
private: \
	static void StaticRegisterNativesADonNavigationManager(); \
	friend DONAINAVIGATION_API class UClass* Z_Construct_UClass_ADonNavigationManager(); \
public: \
	DECLARE_CLASS(ADonNavigationManager, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/DonAINavigation"), NO_API) \
	DECLARE_SERIALIZER(ADonNavigationManager) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HostProject_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationManager_h_652_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADonNavigationManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADonNavigationManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADonNavigationManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADonNavigationManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADonNavigationManager(ADonNavigationManager&&); \
	NO_API ADonNavigationManager(const ADonNavigationManager&); \
public:


#define HostProject_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationManager_h_652_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADonNavigationManager(ADonNavigationManager&&); \
	NO_API ADonNavigationManager(const ADonNavigationManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADonNavigationManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADonNavigationManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADonNavigationManager)


#define HostProject_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationManager_h_652_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ActiveNavigationTaskOwners() { return STRUCT_OFFSET(ADonNavigationManager, ActiveNavigationTaskOwners); } \
	FORCEINLINE static uint32 __PPO__ActiveCollisionTaskOwners() { return STRUCT_OFFSET(ADonNavigationManager, ActiveCollisionTaskOwners); }


#define HostProject_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationManager_h_649_PROLOG
#define HostProject_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationManager_h_652_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationManager_h_652_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationManager_h_652_RPC_WRAPPERS \
	HostProject_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationManager_h_652_INCLASS \
	HostProject_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationManager_h_652_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationManager_h_652_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationManager_h_652_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationManager_h_652_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationManager_h_652_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationManager_h_652_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationManager_h


#define FOREACH_ENUM_EDONNAVIGATIONQUERYSTATUS(op) \
	op(EDonNavigationQueryStatus::Unscheduled) \
	op(EDonNavigationQueryStatus::InProgress) \
	op(EDonNavigationQueryStatus::Success) \
	op(EDonNavigationQueryStatus::Failure) \
	op(EDonNavigationQueryStatus::QueryHasNoSolution) \
	op(EDonNavigationQueryStatus::TimedOut) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS