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
	 * Function BPI_Player.BPI_Player_C.IsPlayerCurrentlyMoving
	 */
	struct UBPI_Player_C_IsPlayerCurrentlyMoving_Params
	{
	public:
		bool                                                       IsPlayerMoving;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_Player.BPI_Player_C.UpdateIcons
	 */
	struct UBPI_Player_C_UpdateIcons_Params
	{	};

	/**
	 * Function BPI_Player.BPI_Player_C.GetFlashlightActor
	 */
	struct UBPI_Player_C_GetFlashlightActor_Params
	{
	public:
		class AActor*                                              FlashlightActor;                                         // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_Player.BPI_Player_C.IsPlayerUsingFazwatch
	 */
	struct UBPI_Player_C_IsPlayerUsingFazwatch_Params
	{
	public:
		bool                                                       IsUsingFazwatch;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_Player.BPI_Player_C.LethalJumpscareBPI
	 */
	struct UBPI_Player_C_LethalJumpscareBPI_Params
	{
	public:
		class USceneComponent*                                     AttachmentComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UAkAudioEvent*                                       JumpscareAudio;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CanEscape;                                               // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RLW7[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      CamShakeScale;                                           // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              ActorPerfomingScare;                                     // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_Player.BPI_Player_C.NonLethalJumpscareBPI
	 */
	struct UBPI_Player_C_NonLethalJumpscareBPI_Params
	{
	public:
		float                                                      CamShakeScale;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VD0B[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USceneComponent*                                     AttachmentComponent;                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              ActorPerformingScare;                                    // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_Player.BPI_Player_C.LastItemCollected
	 */
	struct UBPI_Player_C_LastItemCollected_Params
	{
	public:
		struct FFNAFInventoryTableStruct                           ItemInfo;                                                // 0x0000(0x0058)  (Parm, OutParm)
	};

	/**
	 * Function BPI_Player.BPI_Player_C.ForcePlayerCrouch
	 */
	struct UBPI_Player_C_ForcePlayerCrouch_Params
	{
	public:
		bool                                                       Crouch;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       AllowCrouchToggle;                                       // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_Player.BPI_Player_C.IsPlayerFlashlightActive
	 */
	struct UBPI_Player_C_IsPlayerFlashlightActive_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_Player.BPI_Player_C.ForceFlashlightState
	 */
	struct UBPI_Player_C_ForceFlashlightState_Params
	{
	public:
		bool                                                       On;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       AllowPlayerToggle;                                       // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_Player.BPI_Player_C.RaiseArms
	 */
	struct UBPI_Player_C_RaiseArms_Params
	{	};

	/**
	 * Function BPI_Player.BPI_Player_C.LowerArms
	 */
	struct UBPI_Player_C_LowerArms_Params
	{	};

	/**
	 * Function BPI_Player.BPI_Player_C.Disable Jump Land Audio
	 */
	struct UBPI_Player_C_DisableJumpLandAudio_Params
	{
	public:
		bool                                                       Disable;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_Player.BPI_Player_C.VisualChangeItem
	 */
	struct UBPI_Player_C_VisualChangeItem_Params
	{	};

	/**
	 * Function BPI_Player.BPI_Player_C.IsSwitchingItems
	 */
	struct UBPI_Player_C_IsSwitchingItems_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_Player.BPI_Player_C.IsInAir
	 */
	struct UBPI_Player_C_IsInAir_Params
	{
	public:
		bool                                                       InAir;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_Player.BPI_Player_C.PlayerEnteringExitingFreddy
	 */
	struct UBPI_Player_C_PlayerEnteringExitingFreddy_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
