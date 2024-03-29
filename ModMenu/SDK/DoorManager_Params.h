﻿#pragma once

/**
 * Name: FNAFSB
 * Version: 1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function DoorManager.DoorManager_C.CanDeactivate
	 */
	struct ADoorManager_C_CanDeactivate_Params
	{
	public:
		bool                                                       CanDeactivate;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DoorManager.DoorManager_C.GetActivatableState
	 */
	struct ADoorManager_C_GetActivatableState_Params
	{
	public:
		class AActor*                                              Activator;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EActivatableState                                          CurrentState;                                            // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DoorManager.DoorManager_C.CanActivate
	 */
	struct ADoorManager_C_CanActivate_Params
	{
	public:
		class AActor*                                              Activator;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CanActivate;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EConditionFailReason                                       CantReason;                                              // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DoorManager.DoorManager_C.HasDoorInitialized
	 */
	struct ADoorManager_C_HasDoorInitialized_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DoorManager.DoorManager_C.IsDoorLockedForPlayer
	 */
	struct ADoorManager_C_IsDoorLockedForPlayer_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DoorManager.DoorManager_C.IsDoorOpen
	 */
	struct ADoorManager_C_IsDoorOpen_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DoorManager.DoorManager_C.IsDoorLockedForAI
	 */
	struct ADoorManager_C_IsDoorLockedForAI_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DoorManager.DoorManager_C.ReceiveTick
	 */
	struct ADoorManager_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZAHR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DoorManager.DoorManager_C.PrintLockChange
	 */
	struct ADoorManager_C_PrintLockChange_Params
	{
	public:
		bool                                                       Index;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DoorManager.DoorManager_C.BindLoadingEvents
	 */
	struct ADoorManager_C_BindLoadingEvents_Params
	{
	public:
		unsigned char                                              UnknownData_COCJ[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FScriptDelegate                                      OnDoorLoadedEvent;                                       // 0x0028(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
		unsigned char                                              UnknownData_56YQ[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DoorManager.DoorManager_C.OnActivatorDone
	 */
	struct ADoorManager_C_OnActivatorDone_Params
	{
	public:
		class AActor*                                              Activator;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DoorManager.DoorManager_C.SetActivated
	 */
	struct ADoorManager_C_SetActivated_Params
	{	};

	/**
	 * Function DoorManager.DoorManager_C.DeactivateObject
	 */
	struct ADoorManager_C_DeactivateObject_Params
	{
	public:
		class AActor*                                              Deactivator;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DoorManager.DoorManager_C.SetDeactivated
	 */
	struct ADoorManager_C_SetDeactivated_Params
	{	};

	/**
	 * Function DoorManager.DoorManager_C.ForceDoorOpen
	 */
	struct ADoorManager_C_ForceDoorOpen_Params
	{	};

	/**
	 * Function DoorManager.DoorManager_C.ForceDoorClose
	 */
	struct ADoorManager_C_ForceDoorClose_Params
	{	};

	/**
	 * Function DoorManager.DoorManager_C.Lock Door On Loaded
	 */
	struct ADoorManager_C_LockDoorOnLoaded_Params
	{
	public:
		class AActor*                                              LoadedActor;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DoorManager.DoorManager_C.Unlock Door On Loaded
	 */
	struct ADoorManager_C_UnlockDoorOnLoaded_Params
	{
	public:
		class AActor*                                              LoadedActor;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DoorManager.DoorManager_C.Open Door On Loaded
	 */
	struct ADoorManager_C_OpenDoorOnLoaded_Params
	{
	public:
		class AActor*                                              LoadedActor;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DoorManager.DoorManager_C.Close Door On Loaded
	 */
	struct ADoorManager_C_CloseDoorOnLoaded_Params
	{
	public:
		class AActor*                                              LoadedActor;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DoorManager.DoorManager_C.SetDoorLockPlayer
	 */
	struct ADoorManager_C_SetDoorLockPlayer_Params
	{
	public:
		bool                                                       Lock;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DoorManager.DoorManager_C.SetSecurityLevel
	 */
	struct ADoorManager_C_SetSecurityLevel_Params
	{
	public:
		int32_t                                                    NewSecurityLevel;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DoorManager.DoorManager_C.SetDoorRequiredItem
	 */
	struct ADoorManager_C_SetDoorRequiredItem_Params
	{
	public:
		class FName                                                ItemName;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DoorManager.DoorManager_C.Set Security On Loaded
	 */
	struct ADoorManager_C_SetSecurityOnLoaded_Params
	{
	public:
		class AActor*                                              LoadedActor;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DoorManager.DoorManager_C.Set Item On Loaded
	 */
	struct ADoorManager_C_SetItemOnLoaded_Params
	{
	public:
		class AActor*                                              LoadedActor;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DoorManager.DoorManager_C.ActivateObject
	 */
	struct ADoorManager_C_ActivateObject_Params
	{
	public:
		class AActor*                                              Activator;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DoorManager.DoorManager_C.ReceiveBeginPlay
	 */
	struct ADoorManager_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function DoorManager.DoorManager_C.Door Destroy Setup
	 */
	struct ADoorManager_C_DoorDestroySetup_Params
	{
	public:
		class AActor*                                              LoadedActor;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DoorManager.DoorManager_C.On Door Destroyed
	 */
	struct ADoorManager_C_OnDoorDestroyed_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EEndPlayReason                                             EndPlayReason;                                           // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DoorManager.DoorManager_C.SetDoorLockAI
	 */
	struct ADoorManager_C_SetDoorLockAI_Params
	{
	public:
		bool                                                       Lock;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DoorManager.DoorManager_C.ExecuteUbergraph_DoorManager
	 */
	struct ADoorManager_C_ExecuteUbergraph_DoorManager_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DoorManager.DoorManager_C.OnDoorsOpened__DelegateSignature
	 */
	struct ADoorManager_C_OnDoorsOpened__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
