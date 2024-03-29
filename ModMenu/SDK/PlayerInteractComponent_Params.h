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
	 * Function PlayerInteractComponent.PlayerInteractComponent_C.ForceRemoveInteractible
	 */
	struct UPlayerInteractComponent_C_ForceRemoveInteractible_Params
	{
	public:
		class AActor*                                              InteractibleObject;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerInteractComponent.PlayerInteractComponent_C.CancelCurrentClosest
	 */
	struct UPlayerInteractComponent_C_CancelCurrentClosest_Params
	{	};

	/**
	 * Function PlayerInteractComponent.PlayerInteractComponent_C.CancelInteraction
	 */
	struct UPlayerInteractComponent_C_CancelInteraction_Params
	{
	public:
		class UObject*                                             Object;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerInteractComponent.PlayerInteractComponent_C.ResetInteractible
	 */
	struct UPlayerInteractComponent_C_ResetInteractible_Params
	{	};

	/**
	 * Function PlayerInteractComponent.PlayerInteractComponent_C.ResetInteractibleHUD
	 */
	struct UPlayerInteractComponent_C_ResetInteractibleHUD_Params
	{
	public:
		class UObject*                                             Interactible;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerInteractComponent.PlayerInteractComponent_C.ChangeInteractible
	 */
	struct UPlayerInteractComponent_C_ChangeInteractible_Params
	{
	public:
		class UObject*                                             Interactible;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerInteractComponent.PlayerInteractComponent_C.DetermineClosestInteractible
	 */
	struct UPlayerInteractComponent_C_DetermineClosestInteractible_Params
	{	};

	/**
	 * Function PlayerInteractComponent.PlayerInteractComponent_C.ReceiveBeginPlay
	 */
	struct UPlayerInteractComponent_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function PlayerInteractComponent.PlayerInteractComponent_C.On Owner Begin Overlap
	 */
	struct UPlayerInteractComponent_C_OnOwnerBeginOverlap_Params
	{
	public:
		class AActor*                                              OverlappedActor;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerInteractComponent.PlayerInteractComponent_C.On Owner End Overlap
	 */
	struct UPlayerInteractComponent_C_OnOwnerEndOverlap_Params
	{
	public:
		class AActor*                                              OverlappedActor;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerInteractComponent.PlayerInteractComponent_C.ReceiveTick
	 */
	struct UPlayerInteractComponent_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerInteractComponent.PlayerInteractComponent_C.Attempt Interact
	 */
	struct UPlayerInteractComponent_C_AttemptInteract_Params
	{	};

	/**
	 * Function PlayerInteractComponent.PlayerInteractComponent_C.Cancel Current Interact
	 */
	struct UPlayerInteractComponent_C_CancelCurrentInteract_Params
	{	};

	/**
	 * Function PlayerInteractComponent.PlayerInteractComponent_C.Set Interact Enable
	 */
	struct UPlayerInteractComponent_C_SetInteractEnable_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerInteractComponent.PlayerInteractComponent_C.AttemptMaintenanceInteract
	 */
	struct UPlayerInteractComponent_C_AttemptMaintenanceInteract_Params
	{	};

	/**
	 * Function PlayerInteractComponent.PlayerInteractComponent_C.ExecuteUbergraph_PlayerInteractComponent
	 */
	struct UPlayerInteractComponent_C_ExecuteUbergraph_PlayerInteractComponent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3ORZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PlayerInteractComponent.PlayerInteractComponent_C.OnInteractibleChanged__DelegateSignature
	 */
	struct UPlayerInteractComponent_C_OnInteractibleChanged__DelegateSignature_Params
	{
	public:
		class UObject*                                             Interactible;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
