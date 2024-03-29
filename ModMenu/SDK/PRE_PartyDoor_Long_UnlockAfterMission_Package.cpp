﻿/**
 * Name: FNAFSB
 * Version: 1
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRE_PartyDoor_Long_UnlockAfterMission.PRE_PartyDoor_Long_UnlockAfterMission_C.BndEvt__MissionStateHandler_K2Node_ComponentBoundEvent_0_OnMissionStateHit__DelegateSignature
	 * 		Flags  -> ()
	 */
	void APRE_PartyDoor_Long_UnlockAfterMission_C::BndEvt__MissionStateHandler_K2Node_ComponentBoundEvent_0_OnMissionStateHit__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_PartyDoor_Long_UnlockAfterMission.PRE_PartyDoor_Long_UnlockAfterMission_C.BndEvt__MissionStateHandler_K2Node_ComponentBoundEvent_0_OnMissionStateHit__DelegateSignature");
		
		APRE_PartyDoor_Long_UnlockAfterMission_C_BndEvt__MissionStateHandler_K2Node_ComponentBoundEvent_0_OnMissionStateHit__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRE_PartyDoor_Long_UnlockAfterMission.PRE_PartyDoor_Long_UnlockAfterMission_C.BndEvt__MissionStateHandler_K2Node_ComponentBoundEvent_1_OnMissionStateAleadyHit__DelegateSignature
	 * 		Flags  -> ()
	 */
	void APRE_PartyDoor_Long_UnlockAfterMission_C::BndEvt__MissionStateHandler_K2Node_ComponentBoundEvent_1_OnMissionStateAleadyHit__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_PartyDoor_Long_UnlockAfterMission.PRE_PartyDoor_Long_UnlockAfterMission_C.BndEvt__MissionStateHandler_K2Node_ComponentBoundEvent_1_OnMissionStateAleadyHit__DelegateSignature");
		
		APRE_PartyDoor_Long_UnlockAfterMission_C_BndEvt__MissionStateHandler_K2Node_ComponentBoundEvent_1_OnMissionStateAleadyHit__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRE_PartyDoor_Long_UnlockAfterMission.PRE_PartyDoor_Long_UnlockAfterMission_C.ExecuteUbergraph_PRE_PartyDoor_Long_UnlockAfterMission
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APRE_PartyDoor_Long_UnlockAfterMission_C::ExecuteUbergraph_PRE_PartyDoor_Long_UnlockAfterMission(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_PartyDoor_Long_UnlockAfterMission.PRE_PartyDoor_Long_UnlockAfterMission_C.ExecuteUbergraph_PRE_PartyDoor_Long_UnlockAfterMission");
		
		APRE_PartyDoor_Long_UnlockAfterMission_C_ExecuteUbergraph_PRE_PartyDoor_Long_UnlockAfterMission_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APRE_PartyDoor_Long_UnlockAfterMission_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APRE_PartyDoor_Long_UnlockAfterMission_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PRE_PartyDoor_Long_UnlockAfterMission.PRE_PartyDoor_Long_UnlockAfterMission_C");
		return ptr;
	}

}


