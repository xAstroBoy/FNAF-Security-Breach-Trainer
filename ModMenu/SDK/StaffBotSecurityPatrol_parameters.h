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

// Function StaffBotSecurityPatrol.StaffBotSecurityPatrol_C.GetPossibleSplinePaths
struct AStaffBotSecurityPatrol_C_GetPossibleSplinePaths_Params
{
	TArray<class ASplinePathway_C*>                    PossiblePaths;                                             // 0x0000(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
};

// Function StaffBotSecurityPatrol.StaffBotSecurityPatrol_C.GetSplineFollowerContext
struct AStaffBotSecurityPatrol_C_GetSplineFollowerContext_Params
{
	struct FSplineFollowerContext                      SplineFollowerContext;                                     // 0x0000(0x0018)  (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function StaffBotSecurityPatrol.StaffBotSecurityPatrol_C.DoorEntryNotAllowed
struct AStaffBotSecurityPatrol_C_DoorEntryNotAllowed_Params
{
	class UDoorComponent*                              DoorComponent;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function StaffBotSecurityPatrol.StaffBotSecurityPatrol_C.SetSplineFollowerContext
struct AStaffBotSecurityPatrol_C_SetSplineFollowerContext_Params
{
	struct FSplineFollowerContext                      SplineFollowerContext;                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function StaffBotSecurityPatrol.StaffBotSecurityPatrol_C.ReceiveBeginPlay
struct AStaffBotSecurityPatrol_C_ReceiveBeginPlay_Params
{
};

// Function StaffBotSecurityPatrol.StaffBotSecurityPatrol_C.ExecuteUbergraph_StaffBotSecurityPatrol
struct AStaffBotSecurityPatrol_C_ExecuteUbergraph_StaffBotSecurityPatrol_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
