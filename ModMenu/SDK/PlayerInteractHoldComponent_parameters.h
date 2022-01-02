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

// Function PlayerInteractHoldComponent.PlayerInteractHoldComponent_C.IsHolding
struct UPlayerInteractHoldComponent_C_IsHolding_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function PlayerInteractHoldComponent.PlayerInteractHoldComponent_C.GetPlayerHUD
struct UPlayerInteractHoldComponent_C_GetPlayerHUD_Params
{
	class UPlayerHUD_C*                                PlayerHUD;                                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PlayerInteractHoldComponent.PlayerInteractHoldComponent_C.Stop Hold Timer
struct UPlayerInteractHoldComponent_C_Stop_Hold_Timer_Params
{
};

// Function PlayerInteractHoldComponent.PlayerInteractHoldComponent_C.ReceiveTick
struct UPlayerInteractHoldComponent_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PlayerInteractHoldComponent.PlayerInteractHoldComponent_C.Start Hold Timer
struct UPlayerInteractHoldComponent_C_Start_Hold_Timer_Params
{
};

// Function PlayerInteractHoldComponent.PlayerInteractHoldComponent_C.ExecuteUbergraph_PlayerInteractHoldComponent
struct UPlayerInteractHoldComponent_C_ExecuteUbergraph_PlayerInteractHoldComponent_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PlayerInteractHoldComponent.PlayerInteractHoldComponent_C.OnHoldCompleted__DelegateSignature
struct UPlayerInteractHoldComponent_C_OnHoldCompleted__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
