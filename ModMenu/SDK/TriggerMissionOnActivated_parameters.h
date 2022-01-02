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

// Function TriggerMissionOnActivated.TriggerMissionOnActivated_C.CanDeactivate
struct UTriggerMissionOnActivated_C_CanDeactivate_Params
{
	bool                                               CanDeactivate;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TriggerMissionOnActivated.TriggerMissionOnActivated_C.GetActivatableState
struct UTriggerMissionOnActivated_C_GetActivatableState_Params
{
	class AActor*                                      Activator;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<ActivatableState_EActivatableState>    CurrentState;                                              // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TriggerMissionOnActivated.TriggerMissionOnActivated_C.CanActivate
struct UTriggerMissionOnActivated_C_CanActivate_Params
{
	class AActor*                                      Activator;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CanActivate;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	fnaf9_EConditionFailReason                         CantReason;                                                // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TriggerMissionOnActivated.TriggerMissionOnActivated_C.DeactivateObject
struct UTriggerMissionOnActivated_C_DeactivateObject_Params
{
	class AActor*                                      Deactivator;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TriggerMissionOnActivated.TriggerMissionOnActivated_C.SetDeactivated
struct UTriggerMissionOnActivated_C_SetDeactivated_Params
{
};

// Function TriggerMissionOnActivated.TriggerMissionOnActivated_C.ActivateObject
struct UTriggerMissionOnActivated_C_ActivateObject_Params
{
	class AActor*                                      Activator;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TriggerMissionOnActivated.TriggerMissionOnActivated_C.ReceiveBeginPlay
struct UTriggerMissionOnActivated_C_ReceiveBeginPlay_Params
{
};

// Function TriggerMissionOnActivated.TriggerMissionOnActivated_C.ReceiveEndPlay
struct UTriggerMissionOnActivated_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TriggerMissionOnActivated.TriggerMissionOnActivated_C.SetActivated
struct UTriggerMissionOnActivated_C_SetActivated_Params
{
};

// Function TriggerMissionOnActivated.TriggerMissionOnActivated_C.OnActivatorDone
struct UTriggerMissionOnActivated_C_OnActivatorDone_Params
{
	class AActor*                                      Activator;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TriggerMissionOnActivated.TriggerMissionOnActivated_C.ExecuteUbergraph_TriggerMissionOnActivated
struct UTriggerMissionOnActivated_C_ExecuteUbergraph_TriggerMissionOnActivated_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
