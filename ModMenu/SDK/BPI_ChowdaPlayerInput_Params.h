#pragma once

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
	 * Function BPI_ChowdaPlayerInput.BPI_ChowdaPlayerInput_C.ReturnPlayerWalk
	 */
	struct UBPI_ChowdaPlayerInput_C_ReturnPlayerWalk_Params
	{	};

	/**
	 * Function BPI_ChowdaPlayerInput.BPI_ChowdaPlayerInput_C.SlowPlayerWalk
	 */
	struct UBPI_ChowdaPlayerInput_C_SlowPlayerWalk_Params
	{	};

	/**
	 * Function BPI_ChowdaPlayerInput.BPI_ChowdaPlayerInput_C.GetWalkieTalkieRef
	 */
	struct UBPI_ChowdaPlayerInput_C_GetWalkieTalkieRef_Params
	{
	public:
		class AActor*                                              WalkieTalkie;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_ChowdaPlayerInput.BPI_ChowdaPlayerInput_C.ToggleWalkieTalkie
	 */
	struct UBPI_ChowdaPlayerInput_C_ToggleWalkieTalkie_Params
	{
	public:
		bool                                                       BringOutWalkie;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_ChowdaPlayerInput.BPI_ChowdaPlayerInput_C.GetMaintenanceToolRef
	 */
	struct UBPI_ChowdaPlayerInput_C_GetMaintenanceToolRef_Params
	{
	public:
		class AActor*                                              MaintenanceTool;                                         // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_ChowdaPlayerInput.BPI_ChowdaPlayerInput_C.IsMaintenanceToolReadyToGo
	 */
	struct UBPI_ChowdaPlayerInput_C_IsMaintenanceToolReadyToGo_Params
	{
	public:
		bool                                                       OutAndReady;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_ChowdaPlayerInput.BPI_ChowdaPlayerInput_C.ToggleMaintenanceTool
	 */
	struct UBPI_ChowdaPlayerInput_C_ToggleMaintenanceTool_Params
	{
	public:
		bool                                                       BringOutTool;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_ChowdaPlayerInput.BPI_ChowdaPlayerInput_C.GetTeleportCounterpartTransform
	 */
	struct UBPI_ChowdaPlayerInput_C_GetTeleportCounterpartTransform_Params
	{
	public:
		struct FTransform                                          CounterpartTransform;                                    // 0x0000(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_ChowdaPlayerInput.BPI_ChowdaPlayerInput_C.UpdateItemCollected
	 */
	struct UBPI_ChowdaPlayerInput_C_UpdateItemCollected_Params
	{
	public:
		struct FFNAFInventoryTableStruct                           Item;                                                    // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPI_ChowdaPlayerInput.BPI_ChowdaPlayerInput_C.GetTeleportCounterpart
	 */
	struct UBPI_ChowdaPlayerInput_C_GetTeleportCounterpart_Params
	{
	public:
		class UChildActorComponent*                                TeleportCounterpart;                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_ChowdaPlayerInput.BPI_ChowdaPlayerInput_C.IsChowdaSwitchingItems
	 */
	struct UBPI_ChowdaPlayerInput_C_IsChowdaSwitchingItems_Params
	{
	public:
		bool                                                       IsSwitching;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_ChowdaPlayerInput.BPI_ChowdaPlayerInput_C.OnForceFlashlightState
	 */
	struct UBPI_ChowdaPlayerInput_C_OnForceFlashlightState_Params
	{
	public:
		bool                                                       ForceOn;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       AllowPlayerToggle;                                       // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_ChowdaPlayerInput.BPI_ChowdaPlayerInput_C.SetCanSwitchItem
	 */
	struct UBPI_ChowdaPlayerInput_C_SetCanSwitchItem_Params
	{
	public:
		bool                                                       CanSwitch;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_ChowdaPlayerInput.BPI_ChowdaPlayerInput_C.IsMaintenanceToolEquipped
	 */
	struct UBPI_ChowdaPlayerInput_C_IsMaintenanceToolEquipped_Params
	{
	public:
		bool                                                       Equipped;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_ChowdaPlayerInput.BPI_ChowdaPlayerInput_C.IsWalkieTalkieEquipped
	 */
	struct UBPI_ChowdaPlayerInput_C_IsWalkieTalkieEquipped_Params
	{
	public:
		bool                                                       Equipped;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_ChowdaPlayerInput.BPI_ChowdaPlayerInput_C.SecondaryActionCheck
	 */
	struct UBPI_ChowdaPlayerInput_C_SecondaryActionCheck_Params
	{
	public:
		bool                                                       Equipped;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WMNS[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                ItemName;                                                // 0x0004(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_ChowdaPlayerInput.BPI_ChowdaPlayerInput_C.OnSwitchItem
	 */
	struct UBPI_ChowdaPlayerInput_C_OnSwitchItem_Params
	{	};

	/**
	 * Function BPI_ChowdaPlayerInput.BPI_ChowdaPlayerInput_C.OnToggleFlashlight
	 */
	struct UBPI_ChowdaPlayerInput_C_OnToggleFlashlight_Params
	{	};

	/**
	 * Function BPI_ChowdaPlayerInput.BPI_ChowdaPlayerInput_C.OnMaintenanceInteract
	 */
	struct UBPI_ChowdaPlayerInput_C_OnMaintenanceInteract_Params
	{	};

	/**
	 * Function BPI_ChowdaPlayerInput.BPI_ChowdaPlayerInput_C.OnTeleportTriggered
	 */
	struct UBPI_ChowdaPlayerInput_C_OnTeleportTriggered_Params
	{	};

	/**
	 * Function BPI_ChowdaPlayerInput.BPI_ChowdaPlayerInput_C.CalloutReleased
	 */
	struct UBPI_ChowdaPlayerInput_C_CalloutReleased_Params
	{	};

	/**
	 * Function BPI_ChowdaPlayerInput.BPI_ChowdaPlayerInput_C.CalloutPressed
	 */
	struct UBPI_ChowdaPlayerInput_C_CalloutPressed_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
