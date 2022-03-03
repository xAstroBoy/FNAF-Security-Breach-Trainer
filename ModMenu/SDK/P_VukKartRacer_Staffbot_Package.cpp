/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function P_VukKartRacer_Staffbot.P_VukKartRacer_Staffbot_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AP_VukKartRacer_Staffbot_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P_VukKartRacer_Staffbot.P_VukKartRacer_Staffbot_C.ReceiveBeginPlay");
		
		AP_VukKartRacer_Staffbot_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function P_VukKartRacer_Staffbot.P_VukKartRacer_Staffbot_C.ReceiveActorBeginOverlap
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AP_VukKartRacer_Staffbot_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P_VukKartRacer_Staffbot.P_VukKartRacer_Staffbot_C.ReceiveActorBeginOverlap");
		
		AP_VukKartRacer_Staffbot_C_ReceiveActorBeginOverlap_Params params {};
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function P_VukKartRacer_Staffbot.P_VukKartRacer_Staffbot_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AP_VukKartRacer_Staffbot_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P_VukKartRacer_Staffbot.P_VukKartRacer_Staffbot_C.ReceiveTick");
		
		AP_VukKartRacer_Staffbot_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function P_VukKartRacer_Staffbot.P_VukKartRacer_Staffbot_C.ReceivePossessed
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AController*                                 NewController                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AP_VukKartRacer_Staffbot_C::ReceivePossessed(class AController* NewController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P_VukKartRacer_Staffbot.P_VukKartRacer_Staffbot_C.ReceivePossessed");
		
		AP_VukKartRacer_Staffbot_C_ReceivePossessed_Params params {};
		params.NewController = NewController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function P_VukKartRacer_Staffbot.P_VukKartRacer_Staffbot_C.Force Interact
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AP_VukKartRacer_Staffbot_C::Force_Interact()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P_VukKartRacer_Staffbot.P_VukKartRacer_Staffbot_C.Force Interact");
		
		AP_VukKartRacer_Staffbot_C_Force_Interact_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function P_VukKartRacer_Staffbot.P_VukKartRacer_Staffbot_C.BndEvt__MissionStateHandler_K2Node_ComponentBoundEvent_0_OnMissionStateHit__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AP_VukKartRacer_Staffbot_C::BndEvt__MissionStateHandler_K2Node_ComponentBoundEvent_0_OnMissionStateHit__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P_VukKartRacer_Staffbot.P_VukKartRacer_Staffbot_C.BndEvt__MissionStateHandler_K2Node_ComponentBoundEvent_0_OnMissionStateHit__DelegateSignature");
		
		AP_VukKartRacer_Staffbot_C_BndEvt__MissionStateHandler_K2Node_ComponentBoundEvent_0_OnMissionStateHit__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function P_VukKartRacer_Staffbot.P_VukKartRacer_Staffbot_C.BndEvt__MissionStateHandler_K2Node_ComponentBoundEvent_1_OnMissionStateAleadyHit__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AP_VukKartRacer_Staffbot_C::BndEvt__MissionStateHandler_K2Node_ComponentBoundEvent_1_OnMissionStateAleadyHit__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P_VukKartRacer_Staffbot.P_VukKartRacer_Staffbot_C.BndEvt__MissionStateHandler_K2Node_ComponentBoundEvent_1_OnMissionStateAleadyHit__DelegateSignature");
		
		AP_VukKartRacer_Staffbot_C_BndEvt__MissionStateHandler_K2Node_ComponentBoundEvent_1_OnMissionStateAleadyHit__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function P_VukKartRacer_Staffbot.P_VukKartRacer_Staffbot_C.BndEvt__MissionStateHandler1_K2Node_ComponentBoundEvent_4_OnMissionStateHit__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AP_VukKartRacer_Staffbot_C::BndEvt__MissionStateHandler1_K2Node_ComponentBoundEvent_4_OnMissionStateHit__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P_VukKartRacer_Staffbot.P_VukKartRacer_Staffbot_C.BndEvt__MissionStateHandler1_K2Node_ComponentBoundEvent_4_OnMissionStateHit__DelegateSignature");
		
		AP_VukKartRacer_Staffbot_C_BndEvt__MissionStateHandler1_K2Node_ComponentBoundEvent_4_OnMissionStateHit__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function P_VukKartRacer_Staffbot.P_VukKartRacer_Staffbot_C.BndEvt__MissionStateHandler1_K2Node_ComponentBoundEvent_5_OnMissionStateAleadyHit__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AP_VukKartRacer_Staffbot_C::BndEvt__MissionStateHandler1_K2Node_ComponentBoundEvent_5_OnMissionStateAleadyHit__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P_VukKartRacer_Staffbot.P_VukKartRacer_Staffbot_C.BndEvt__MissionStateHandler1_K2Node_ComponentBoundEvent_5_OnMissionStateAleadyHit__DelegateSignature");
		
		AP_VukKartRacer_Staffbot_C_BndEvt__MissionStateHandler1_K2Node_ComponentBoundEvent_5_OnMissionStateAleadyHit__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function P_VukKartRacer_Staffbot.P_VukKartRacer_Staffbot_C.ExecuteUbergraph_P_VukKartRacer_Staffbot
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AP_VukKartRacer_Staffbot_C::ExecuteUbergraph_P_VukKartRacer_Staffbot(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P_VukKartRacer_Staffbot.P_VukKartRacer_Staffbot_C.ExecuteUbergraph_P_VukKartRacer_Staffbot");
		
		AP_VukKartRacer_Staffbot_C_ExecuteUbergraph_P_VukKartRacer_Staffbot_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AP_VukKartRacer_Staffbot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AP_VukKartRacer_Staffbot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass P_VukKartRacer_Staffbot.P_VukKartRacer_Staffbot_C");
		return ptr;
	}

}


