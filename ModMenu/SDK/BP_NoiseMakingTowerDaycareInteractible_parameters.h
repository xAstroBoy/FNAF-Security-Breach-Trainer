#pragma once

// Name: FNAF Security Breach, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_NoiseMakingTowerDaycareInteractible.BP_NoiseMakingTowerDaycareInteractible_C.UpdateUIOnTick
struct ABP_NoiseMakingTowerDaycareInteractible_C_UpdateUIOnTick_Params
{
	bool                                               Output;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_NoiseMakingTowerDaycareInteractible.BP_NoiseMakingTowerDaycareInteractible_C.CanPlayerInteract
struct ABP_NoiseMakingTowerDaycareInteractible_C_CanPlayerInteract_Params
{
	bool                                               CanInteract;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	fnaf9_EConditionFailReason                         CantReason;                                                // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NoiseMakingTowerDaycareInteractible.BP_NoiseMakingTowerDaycareInteractible_C.UserConstructionScript
struct ABP_NoiseMakingTowerDaycareInteractible_C_UserConstructionScript_Params
{
};

// Function BP_NoiseMakingTowerDaycareInteractible.BP_NoiseMakingTowerDaycareInteractible_C.On Triggered
struct ABP_NoiseMakingTowerDaycareInteractible_C_On_Triggered_Params
{
	class AActor*                                      Other_Actor;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NoiseMakingTowerDaycareInteractible.BP_NoiseMakingTowerDaycareInteractible_C.Reset
struct ABP_NoiseMakingTowerDaycareInteractible_C_Reset_Params
{
};

// Function BP_NoiseMakingTowerDaycareInteractible.BP_NoiseMakingTowerDaycareInteractible_C.Reset01Anim
struct ABP_NoiseMakingTowerDaycareInteractible_C_Reset01Anim_Params
{
};

// Function BP_NoiseMakingTowerDaycareInteractible.BP_NoiseMakingTowerDaycareInteractible_C.Reset02Anim
struct ABP_NoiseMakingTowerDaycareInteractible_C_Reset02Anim_Params
{
};

// Function BP_NoiseMakingTowerDaycareInteractible.BP_NoiseMakingTowerDaycareInteractible_C.Reset03Anim
struct ABP_NoiseMakingTowerDaycareInteractible_C_Reset03Anim_Params
{
};

// Function BP_NoiseMakingTowerDaycareInteractible.BP_NoiseMakingTowerDaycareInteractible_C.ExecuteUbergraph_BP_NoiseMakingTowerDaycareInteractible
struct ABP_NoiseMakingTowerDaycareInteractible_C_ExecuteUbergraph_BP_NoiseMakingTowerDaycareInteractible_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
