/**
 * Name: FNAFSB
 * Version: 1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MusicTriggerVolumeByMission.BP_MusicTriggerVolumeByMission_C.CheckForActiveMissions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               MissionActive                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_MusicTriggerVolumeByMission_C::CheckForActiveMissions(bool* MissionActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MusicTriggerVolumeByMission.BP_MusicTriggerVolumeByMission_C.CheckForActiveMissions");
		
		ABP_MusicTriggerVolumeByMission_C_CheckForActiveMissions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MissionActive != nullptr)
			*MissionActive = params.MissionActive;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MusicTriggerVolumeByMission.BP_MusicTriggerVolumeByMission_C.OnTriggered
	 * 		Flags  -> ()
	 */
	void ABP_MusicTriggerVolumeByMission_C::OnTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MusicTriggerVolumeByMission.BP_MusicTriggerVolumeByMission_C.OnTriggered");
		
		ABP_MusicTriggerVolumeByMission_C_OnTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MusicTriggerVolumeByMission.BP_MusicTriggerVolumeByMission_C.ActivateMusic
	 * 		Flags  -> ()
	 */
	void ABP_MusicTriggerVolumeByMission_C::ActivateMusic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MusicTriggerVolumeByMission.BP_MusicTriggerVolumeByMission_C.ActivateMusic");
		
		ABP_MusicTriggerVolumeByMission_C_ActivateMusic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MusicTriggerVolumeByMission.BP_MusicTriggerVolumeByMission_C.DeactivateMusic
	 * 		Flags  -> ()
	 */
	void ABP_MusicTriggerVolumeByMission_C::DeactivateMusic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MusicTriggerVolumeByMission.BP_MusicTriggerVolumeByMission_C.DeactivateMusic");
		
		ABP_MusicTriggerVolumeByMission_C_DeactivateMusic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MusicTriggerVolumeByMission.BP_MusicTriggerVolumeByMission_C.OnActiveMissionUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        MissionName                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FFNAFMissionState                           MissionState                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FFNAFMissionInfo                            MissionInfo                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ABP_MusicTriggerVolumeByMission_C::OnActiveMissionUpdated(const class FName& MissionName, const struct FFNAFMissionState& MissionState, const struct FFNAFMissionInfo& MissionInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MusicTriggerVolumeByMission.BP_MusicTriggerVolumeByMission_C.OnActiveMissionUpdated");
		
		ABP_MusicTriggerVolumeByMission_C_OnActiveMissionUpdated_Params params {};
		params.MissionName = MissionName;
		params.MissionState = MissionState;
		params.MissionInfo = MissionInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MusicTriggerVolumeByMission.BP_MusicTriggerVolumeByMission_C.BndEvt__TriggerComponent_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MusicTriggerVolumeByMission_C::BndEvt__TriggerComponent_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MusicTriggerVolumeByMission.BP_MusicTriggerVolumeByMission_C.BndEvt__TriggerComponent_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature");
		
		ABP_MusicTriggerVolumeByMission_C_BndEvt__TriggerComponent_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MusicTriggerVolumeByMission.BP_MusicTriggerVolumeByMission_C.ResetTrigger
	 * 		Flags  -> ()
	 */
	void ABP_MusicTriggerVolumeByMission_C::ResetTrigger()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MusicTriggerVolumeByMission.BP_MusicTriggerVolumeByMission_C.ResetTrigger");
		
		ABP_MusicTriggerVolumeByMission_C_ResetTrigger_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MusicTriggerVolumeByMission.BP_MusicTriggerVolumeByMission_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_MusicTriggerVolumeByMission_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MusicTriggerVolumeByMission.BP_MusicTriggerVolumeByMission_C.ReceiveBeginPlay");
		
		ABP_MusicTriggerVolumeByMission_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MusicTriggerVolumeByMission.BP_MusicTriggerVolumeByMission_C.ExecuteUbergraph_BP_MusicTriggerVolumeByMission
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MusicTriggerVolumeByMission_C::ExecuteUbergraph_BP_MusicTriggerVolumeByMission(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MusicTriggerVolumeByMission.BP_MusicTriggerVolumeByMission_C.ExecuteUbergraph_BP_MusicTriggerVolumeByMission");
		
		ABP_MusicTriggerVolumeByMission_C_ExecuteUbergraph_BP_MusicTriggerVolumeByMission_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_MusicTriggerVolumeByMission_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_MusicTriggerVolumeByMission_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_MusicTriggerVolumeByMission.BP_MusicTriggerVolumeByMission_C");
		return ptr;
	}

}


