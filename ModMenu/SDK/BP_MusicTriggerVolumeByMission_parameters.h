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

// Function BP_MusicTriggerVolumeByMission.BP_MusicTriggerVolumeByMission_C.CheckForActiveMissions
struct ABP_MusicTriggerVolumeByMission_C_CheckForActiveMissions_Params
{
	bool                                               MissionActive;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MusicTriggerVolumeByMission.BP_MusicTriggerVolumeByMission_C.OnTriggered
struct ABP_MusicTriggerVolumeByMission_C_OnTriggered_Params
{
};

// Function BP_MusicTriggerVolumeByMission.BP_MusicTriggerVolumeByMission_C.ActivateMusic
struct ABP_MusicTriggerVolumeByMission_C_ActivateMusic_Params
{
};

// Function BP_MusicTriggerVolumeByMission.BP_MusicTriggerVolumeByMission_C.DeactivateMusic
struct ABP_MusicTriggerVolumeByMission_C_DeactivateMusic_Params
{
};

// Function BP_MusicTriggerVolumeByMission.BP_MusicTriggerVolumeByMission_C.OnActiveMissionUpdated
struct ABP_MusicTriggerVolumeByMission_C_OnActiveMissionUpdated_Params
{
	struct FName                                       MissionName;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFNAFMissionState                           MissionState;                                              // 0x0008(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FFNAFMissionInfo                            MissionInfo;                                               // 0x0028(0x0048)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_MusicTriggerVolumeByMission.BP_MusicTriggerVolumeByMission_C.BndEvt__TriggerComponent_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature
struct ABP_MusicTriggerVolumeByMission_C_BndEvt__TriggerComponent_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MusicTriggerVolumeByMission.BP_MusicTriggerVolumeByMission_C.ResetTrigger
struct ABP_MusicTriggerVolumeByMission_C_ResetTrigger_Params
{
};

// Function BP_MusicTriggerVolumeByMission.BP_MusicTriggerVolumeByMission_C.ReceiveBeginPlay
struct ABP_MusicTriggerVolumeByMission_C_ReceiveBeginPlay_Params
{
};

// Function BP_MusicTriggerVolumeByMission.BP_MusicTriggerVolumeByMission_C.ExecuteUbergraph_BP_MusicTriggerVolumeByMission
struct ABP_MusicTriggerVolumeByMission_C_ExecuteUbergraph_BP_MusicTriggerVolumeByMission_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
