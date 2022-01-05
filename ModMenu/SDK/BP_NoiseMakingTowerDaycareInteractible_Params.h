#pragma once

/**
 * Name: FNAF Security Breach
 * Version: 2
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
	 * Function BP_NoiseMakingTowerDaycareInteractible.BP_NoiseMakingTowerDaycareInteractible_C.UpdateUIOnTick
	 */
	struct ABP_NoiseMakingTowerDaycareInteractible_C_UpdateUIOnTick_Params
	{
	public:
		bool                                                       Output;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_NoiseMakingTowerDaycareInteractible.BP_NoiseMakingTowerDaycareInteractible_C.CanPlayerInteract
	 */
	struct ABP_NoiseMakingTowerDaycareInteractible_C_CanPlayerInteract_Params
	{
	public:
		bool                                                       CanInteract;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		fnaf9_EConditionFailReason                                 CantReason;                                              // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_NoiseMakingTowerDaycareInteractible.BP_NoiseMakingTowerDaycareInteractible_C.UserConstructionScript
	 */
	struct ABP_NoiseMakingTowerDaycareInteractible_C_UserConstructionScript_Params
	{
	};

	/**
	 * Function BP_NoiseMakingTowerDaycareInteractible.BP_NoiseMakingTowerDaycareInteractible_C.On Triggered
	 */
	struct ABP_NoiseMakingTowerDaycareInteractible_C_On_Triggered_Params
	{
	public:
		class AActor*                                              Other_Actor;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_NoiseMakingTowerDaycareInteractible.BP_NoiseMakingTowerDaycareInteractible_C.Reset
	 */
	struct ABP_NoiseMakingTowerDaycareInteractible_C_Reset_Params
	{
	};

	/**
	 * Function BP_NoiseMakingTowerDaycareInteractible.BP_NoiseMakingTowerDaycareInteractible_C.Reset01Anim
	 */
	struct ABP_NoiseMakingTowerDaycareInteractible_C_Reset01Anim_Params
	{
	};

	/**
	 * Function BP_NoiseMakingTowerDaycareInteractible.BP_NoiseMakingTowerDaycareInteractible_C.Reset02Anim
	 */
	struct ABP_NoiseMakingTowerDaycareInteractible_C_Reset02Anim_Params
	{
	};

	/**
	 * Function BP_NoiseMakingTowerDaycareInteractible.BP_NoiseMakingTowerDaycareInteractible_C.Reset03Anim
	 */
	struct ABP_NoiseMakingTowerDaycareInteractible_C_Reset03Anim_Params
	{
	};

	/**
	 * Function BP_NoiseMakingTowerDaycareInteractible.BP_NoiseMakingTowerDaycareInteractible_C.ExecuteUbergraph_BP_NoiseMakingTowerDaycareInteractible
	 */
	struct ABP_NoiseMakingTowerDaycareInteractible_C_ExecuteUbergraph_BP_NoiseMakingTowerDaycareInteractible_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
