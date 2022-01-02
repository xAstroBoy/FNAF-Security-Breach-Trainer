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

// Function CautionBot.CautionBot_C.DoorEntryNotAllowed
struct ACautionBot_C_DoorEntryNotAllowed_Params
{
	class UDoorComponent*                              DoorComponent;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function CautionBot.CautionBot_C.GetStartTurnTowardsEvent
struct ACautionBot_C_GetStartTurnTowardsEvent_Params
{
	class UAkAudioEvent*                               StartTurnTowards;                                          // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CautionBot.CautionBot_C.GetEndTurnTowardsEvent
struct ACautionBot_C_GetEndTurnTowardsEvent_Params
{
	class UAkAudioEvent*                               EndTurnTowards;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CautionBot.CautionBot_C.GetAlertInfo
struct ACautionBot_C_GetAlertInfo_Params
{
	TArray<fnaf9_EFNAFAISpawnType>                     TypesToAlert;                                              // 0x0000(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
	int                                                NumberOfAlerts;                                            // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CautionBot.CautionBot_C.IsWarningFinished
struct ACautionBot_C_IsWarningFinished_Params
{
	bool                                               Finished;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function CautionBot.CautionBot_C.SetAlertInfo
struct ACautionBot_C_SetAlertInfo_Params
{
	TArray<fnaf9_EFNAFAISpawnType>                     TypesToAlert;                                              // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	int                                                NumberOfAlerts;                                            // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CautionBot.CautionBot_C.ForceKill
struct ACautionBot_C_ForceKill_Params
{
	bool                                               Animate_;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function CautionBot.CautionBot_C.GameStart
struct ACautionBot_C_GameStart_Params
{
};

// Function CautionBot.CautionBot_C.GameEnd
struct ACautionBot_C_GameEnd_Params
{
};

// Function CautionBot.CautionBot_C.GameExit
struct ACautionBot_C_GameExit_Params
{
};

// Function CautionBot.CautionBot_C.PlayerHit
struct ACautionBot_C_PlayerHit_Params
{
	struct FHitResult                                  Hit;                                                       // 0x0000(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function CautionBot.CautionBot_C.ReceiveBeginPlay
struct ACautionBot_C_ReceiveBeginPlay_Params
{
};

// Function CautionBot.CautionBot_C.ReceiveEndPlay
struct ACautionBot_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CautionBot.CautionBot_C.LaserHit
struct ACautionBot_C_LaserHit_Params
{
	class AEQ_LaserGun_C*                              Gun;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  HitResult;                                                 // 0x0008(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function CautionBot.CautionBot_C.Start Alert
struct ACautionBot_C_Start_Alert_Params
{
	struct FName                                       Alert;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CautionBot.CautionBot_C.Start Movement
struct ACautionBot_C_Start_Movement_Params
{
};

// Function CautionBot.CautionBot_C.Stop Warning
struct ACautionBot_C_Stop_Warning_Params
{
};

// Function CautionBot.CautionBot_C.End Movement
struct ACautionBot_C_End_Movement_Params
{
};

// Function CautionBot.CautionBot_C.Start Head Movement
struct ACautionBot_C_Start_Head_Movement_Params
{
};

// Function CautionBot.CautionBot_C.Start Warning
struct ACautionBot_C_Start_Warning_Params
{
	int                                                WarningCount;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CautionBot.CautionBot_C.End Head Movement
struct ACautionBot_C_End_Head_Movement_Params
{
};

// Function CautionBot.CautionBot_C.Stop Alert
struct ACautionBot_C_Stop_Alert_Params
{
	struct FName                                       Alert;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CautionBot.CautionBot_C.Start Arm Movement
struct ACautionBot_C_Start_Arm_Movement_Params
{
};

// Function CautionBot.CautionBot_C.End Arm Movement
struct ACautionBot_C_End_Arm_Movement_Params
{
};

// Function CautionBot.CautionBot_C.ReceiveTick
struct ACautionBot_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CautionBot.CautionBot_C.OnOverlappedDoor
struct ACautionBot_C_OnOverlappedDoor_Params
{
	bool                                               bCanEnterDoor;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	fnaf9_EConditionFailReason                         CantEnterReason;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDoorComponent*                              DoorComponent;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CautionBot.CautionBot_C.OnEndOverlapDoor
struct ACautionBot_C_OnEndOverlapDoor_Params
{
};

// Function CautionBot.CautionBot_C.ExecuteUbergraph_CautionBot
struct ACautionBot_C_ExecuteUbergraph_CautionBot_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
