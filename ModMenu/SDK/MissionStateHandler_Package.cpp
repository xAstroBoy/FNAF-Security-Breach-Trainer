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
	 * 		Name   -> Function MissionStateHandler.MissionStateHandler_C.HasMetConditions
	 * 		Flags  -> ()
	 */
	bool UMissionStateHandler_C::HasMetConditions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionStateHandler.MissionStateHandler_C.HasMetConditions");
		
		UMissionStateHandler_C_HasMetConditions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MissionStateHandler.MissionStateHandler_C.On Mission Completed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        MissionName                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FFNAFMissionState                           MissionState                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FFNAFMissionInfo                            MissionInfo                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UMissionStateHandler_C::OnMissionCompleted(const class FName& MissionName, const struct FFNAFMissionState& MissionState, const struct FFNAFMissionInfo& MissionInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionStateHandler.MissionStateHandler_C.On Mission Completed");
		
		UMissionStateHandler_C_OnMissionCompleted_Params params {};
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
	 * 		Name   -> Function MissionStateHandler.MissionStateHandler_C.On Mission Updated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        MissionName                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FFNAFMissionState                           MissionState                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FFNAFMissionInfo                            MissionInfo                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UMissionStateHandler_C::OnMissionUpdated(const class FName& MissionName, const struct FFNAFMissionState& MissionState, const struct FFNAFMissionInfo& MissionInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionStateHandler.MissionStateHandler_C.On Mission Updated");
		
		UMissionStateHandler_C_OnMissionUpdated_Params params {};
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
	 * 		Name   -> Function MissionStateHandler.MissionStateHandler_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void UMissionStateHandler_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionStateHandler.MissionStateHandler_C.ReceiveBeginPlay");
		
		UMissionStateHandler_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MissionStateHandler.MissionStateHandler_C.ExecuteUbergraph_MissionStateHandler
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMissionStateHandler_C::ExecuteUbergraph_MissionStateHandler(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionStateHandler.MissionStateHandler_C.ExecuteUbergraph_MissionStateHandler");
		
		UMissionStateHandler_C_ExecuteUbergraph_MissionStateHandler_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MissionStateHandler.MissionStateHandler_C.OnMissionStateAleadyHit__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMissionStateHandler_C::OnMissionStateAleadyHit__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionStateHandler.MissionStateHandler_C.OnMissionStateAleadyHit__DelegateSignature");
		
		UMissionStateHandler_C_OnMissionStateAleadyHit__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MissionStateHandler.MissionStateHandler_C.OnMissionStateHit__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMissionStateHandler_C::OnMissionStateHit__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionStateHandler.MissionStateHandler_C.OnMissionStateHit__DelegateSignature");
		
		UMissionStateHandler_C_OnMissionStateHit__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMissionStateHandler_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMissionStateHandler_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MissionStateHandler.MissionStateHandler_C");
		return ptr;
	}

}


