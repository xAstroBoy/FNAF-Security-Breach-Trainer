﻿#pragma once

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

// Function PRE_PartyDoor_Locked_Activatable.PRE_PartyDoor_Locked_Activatable_C.GetActivatableState
struct APRE_PartyDoor_Locked_Activatable_C_GetActivatableState_Params
{
	class AActor*                                      Activator;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<ActivatableState_EActivatableState>    CurrentState;                                              // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PRE_PartyDoor_Locked_Activatable.PRE_PartyDoor_Locked_Activatable_C.CanActivate
struct APRE_PartyDoor_Locked_Activatable_C_CanActivate_Params
{
	class AActor*                                      Activator;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CanActivate;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	fnaf9_EConditionFailReason                         CantReason;                                                // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PRE_PartyDoor_Locked_Activatable.PRE_PartyDoor_Locked_Activatable_C.CanPlayerInteract
struct APRE_PartyDoor_Locked_Activatable_C_CanPlayerInteract_Params
{
	bool                                               CanInteract;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	fnaf9_EConditionFailReason                         CantReason;                                                // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PRE_PartyDoor_Locked_Activatable.PRE_PartyDoor_Locked_Activatable_C.ActivateObject
struct APRE_PartyDoor_Locked_Activatable_C_ActivateObject_Params
{
	class AActor*                                      Activator;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PRE_PartyDoor_Locked_Activatable.PRE_PartyDoor_Locked_Activatable_C.SetActivated
struct APRE_PartyDoor_Locked_Activatable_C_SetActivated_Params
{
};

// Function PRE_PartyDoor_Locked_Activatable.PRE_PartyDoor_Locked_Activatable_C.OnPlayerInteract_2
struct APRE_PartyDoor_Locked_Activatable_C_OnPlayerInteract_2_Params
{
	class APawn*                                       PlayerPawn;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                           PlayerController;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PRE_PartyDoor_Locked_Activatable.PRE_PartyDoor_Locked_Activatable_C.ExecuteUbergraph_PRE_PartyDoor_Locked_Activatable
struct APRE_PartyDoor_Locked_Activatable_C_ExecuteUbergraph_PRE_PartyDoor_Locked_Activatable_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif