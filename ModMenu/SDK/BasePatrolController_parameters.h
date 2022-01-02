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

// Function BasePatrolController.BasePatrolController_C.CompleteSenses
struct ABasePatrolController_C_CompleteSenses_Params
{
	TArray<struct FAIStimulus>                         Array;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// Function BasePatrolController.BasePatrolController_C.ReceiveBeginPlay
struct ABasePatrolController_C_ReceiveBeginPlay_Params
{
};

// Function BasePatrolController.BasePatrolController_C.BndEvt__AIPerception_K2Node_ComponentBoundEvent_1_PerceptionUpdatedDelegate__DelegateSignature
struct ABasePatrolController_C_BndEvt__AIPerception_K2Node_ComponentBoundEvent_1_PerceptionUpdatedDelegate__DelegateSignature_Params
{
	TArray<class AActor*>                              UpdatedActors;                                             // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// Function BasePatrolController.BasePatrolController_C.SecurityCameraAlert
struct ABasePatrolController_C_SecurityCameraAlert_Params
{
	class ASecurityCamera*                             SecurityCamera;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BasePatrolController.BasePatrolController_C.ExecuteUbergraph_BasePatrolController
struct ABasePatrolController_C_ExecuteUbergraph_BasePatrolController_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
