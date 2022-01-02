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

// Function StaffbotManager.StaffbotManager_C.CheckForPatrol
struct AStaffbotManager_C_CheckForPatrol_Params
{
	bool                                               MeetsCondition;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function StaffbotManager.StaffbotManager_C.CheckForSpawn
struct AStaffbotManager_C_CheckForSpawn_Params
{
	bool                                               MeetsCondition;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function StaffbotManager.StaffbotManager_C.ReceiveBeginPlay
struct AStaffbotManager_C_ReceiveBeginPlay_Params
{
};

// Function StaffbotManager.StaffbotManager_C.ReceiveTick
struct AStaffbotManager_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StaffbotManager.StaffbotManager_C.BndEvt__ConditionalCheck_K2Node_ComponentBoundEvent_0_OnConditionalCheckUpdated__DelegateSignature
struct AStaffbotManager_C_BndEvt__ConditionalCheck_K2Node_ComponentBoundEvent_0_OnConditionalCheckUpdated__DelegateSignature_Params
{
	class UConditionalCheckComponent*                  ConditionCheckComponent;                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bNewResult;                                                // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function StaffbotManager.StaffbotManager_C.ExecuteUbergraph_StaffbotManager
struct AStaffbotManager_C_ExecuteUbergraph_StaffbotManager_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StaffbotManager.StaffbotManager_C.NewEventDispatcher_0__DelegateSignature
struct AStaffbotManager_C_NewEventDispatcher_0__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
