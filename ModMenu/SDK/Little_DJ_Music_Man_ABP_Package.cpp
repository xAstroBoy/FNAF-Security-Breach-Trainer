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
	 * 		Name   -> Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.GetMoveSpeedInput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              MoveSpeed                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULittle_DJ_Music_Man_ABP_C::GetMoveSpeedInput(float* MoveSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.GetMoveSpeedInput");
		
		ULittle_DJ_Music_Man_ABP_C_GetMoveSpeedInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MoveSpeed != nullptr)
			*MoveSpeed = params.MoveSpeed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void ULittle_DJ_Music_Man_ABP_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.AnimGraph");
		
		ULittle_DJ_Music_Man_ABP_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.CalcVelocity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULittle_DJ_Music_Man_ABP_C::CalcVelocity(const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.CalcVelocity");
		
		ULittle_DJ_Music_Man_ABP_C_CalcVelocity_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.OnInterrupted_FA7D18A447815604F75E399A0E97F4BB
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULittle_DJ_Music_Man_ABP_C::OnInterrupted_FA7D18A447815604F75E399A0E97F4BB(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.OnInterrupted_FA7D18A447815604F75E399A0E97F4BB");
		
		ULittle_DJ_Music_Man_ABP_C_OnInterrupted_FA7D18A447815604F75E399A0E97F4BB_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.OnBlendOut_FA7D18A447815604F75E399A0E97F4BB
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULittle_DJ_Music_Man_ABP_C::OnBlendOut_FA7D18A447815604F75E399A0E97F4BB(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.OnBlendOut_FA7D18A447815604F75E399A0E97F4BB");
		
		ULittle_DJ_Music_Man_ABP_C_OnBlendOut_FA7D18A447815604F75E399A0E97F4BB_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.OnCompleted_FA7D18A447815604F75E399A0E97F4BB
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULittle_DJ_Music_Man_ABP_C::OnCompleted_FA7D18A447815604F75E399A0E97F4BB(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.OnCompleted_FA7D18A447815604F75E399A0E97F4BB");
		
		ULittle_DJ_Music_Man_ABP_C_OnCompleted_FA7D18A447815604F75E399A0E97F4BB_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.HeadAimEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OnOff                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULittle_DJ_Music_Man_ABP_C::HeadAimEvent(bool OnOff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.HeadAimEvent");
		
		ULittle_DJ_Music_Man_ABP_C_HeadAimEvent_Params params {};
		params.OnOff = OnOff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.TurnEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              TurnDegrees                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULittle_DJ_Music_Man_ABP_C::TurnEvent(float TurnDegrees)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.TurnEvent");
		
		ULittle_DJ_Music_Man_ABP_C_TurnEvent_Params params {};
		params.TurnDegrees = TurnDegrees;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.Searching
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHideObjectType                                    HideType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULittle_DJ_Music_Man_ABP_C::Searching(EHideObjectType HideType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.Searching");
		
		ULittle_DJ_Music_Man_ABP_C_Searching_Params params {};
		params.HideType = HideType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.SearchingDone
	 * 		Flags  -> ()
	 */
	void ULittle_DJ_Music_Man_ABP_C::SearchingDone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.SearchingDone");
		
		ULittle_DJ_Music_Man_ABP_C_SearchingDone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.Open
	 * 		Flags  -> ()
	 */
	void ULittle_DJ_Music_Man_ABP_C::Open()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.Open");
		
		ULittle_DJ_Music_Man_ABP_C_Open_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.OpenDone
	 * 		Flags  -> ()
	 */
	void ULittle_DJ_Music_Man_ABP_C::OpenDone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.OpenDone");
		
		ULittle_DJ_Music_Man_ABP_C_OpenDone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.SetHeadAimTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     AimLocation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULittle_DJ_Music_Man_ABP_C::SetHeadAimTarget(const struct FVector& AimLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.SetHeadAimTarget");
		
		ULittle_DJ_Music_Man_ABP_C_SetHeadAimTarget_Params params {};
		params.AimLocation = AimLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.StartScan
	 * 		Flags  -> ()
	 */
	void ULittle_DJ_Music_Man_ABP_C::StartScan()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.StartScan");
		
		ULittle_DJ_Music_Man_ABP_C_StartScan_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.CanRunEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CanRun                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULittle_DJ_Music_Man_ABP_C::CanRunEvent(bool CanRun)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.CanRunEvent");
		
		ULittle_DJ_Music_Man_ABP_C_CanRunEvent_Params params {};
		params.CanRun = CanRun;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.Stun Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsStunned                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULittle_DJ_Music_Man_ABP_C::StunEvent(bool IsStunned)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.Stun Event");
		
		ULittle_DJ_Music_Man_ABP_C_StunEvent_Params params {};
		params.IsStunned = IsStunned;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.CanRummageEvent
	 * 		Flags  -> ()
	 */
	void ULittle_DJ_Music_Man_ABP_C::CanRummageEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.CanRummageEvent");
		
		ULittle_DJ_Music_Man_ABP_C_CanRummageEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.IsFirstPersonEvent
	 * 		Flags  -> ()
	 */
	void ULittle_DJ_Music_Man_ABP_C::IsFirstPersonEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.IsFirstPersonEvent");
		
		ULittle_DJ_Music_Man_ABP_C_IsFirstPersonEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.IsNotFirstPersonEvent
	 * 		Flags  -> ()
	 */
	void ULittle_DJ_Music_Man_ABP_C::IsNotFirstPersonEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.IsNotFirstPersonEvent");
		
		ULittle_DJ_Music_Man_ABP_C_IsNotFirstPersonEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.RummagingDoneEvent
	 * 		Flags  -> ()
	 */
	void ULittle_DJ_Music_Man_ABP_C::RummagingDoneEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.RummagingDoneEvent");
		
		ULittle_DJ_Music_Man_ABP_C_RummagingDoneEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.OnAnimInstanceSwap
	 * 		Flags  -> ()
	 */
	void ULittle_DJ_Music_Man_ABP_C::OnAnimInstanceSwap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.OnAnimInstanceSwap");
		
		ULittle_DJ_Music_Man_ABP_C_OnAnimInstanceSwap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.Breakthrough
	 * 		Flags  -> ()
	 */
	void ULittle_DJ_Music_Man_ABP_C::Breakthrough()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.Breakthrough");
		
		ULittle_DJ_Music_Man_ABP_C_Breakthrough_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.ForceScanStates
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OverrideScan                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               CanScan                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               CanScanL                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               CanScanR                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULittle_DJ_Music_Man_ABP_C::ForceScanStates(bool OverrideScan, bool CanScan, bool CanScanL, bool CanScanR)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.ForceScanStates");
		
		ULittle_DJ_Music_Man_ABP_C_ForceScanStates_Params params {};
		params.OverrideScan = OverrideScan;
		params.CanScan = CanScan;
		params.CanScanL = CanScanL;
		params.CanScanR = CanScanR;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.JumpEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CanJump                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULittle_DJ_Music_Man_ABP_C::JumpEvent(bool CanJump)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.JumpEvent");
		
		ULittle_DJ_Music_Man_ABP_C_JumpEvent_Params params {};
		params.CanJump = CanJump;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.LandEvent
	 * 		Flags  -> ()
	 */
	void ULittle_DJ_Music_Man_ABP_C::LandEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.LandEvent");
		
		ULittle_DJ_Music_Man_ABP_C_LandEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.StopScan
	 * 		Flags  -> ()
	 */
	void ULittle_DJ_Music_Man_ABP_C::StopScan()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.StopScan");
		
		ULittle_DJ_Music_Man_ABP_C_StopScan_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.PoundDoorEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               PoundDoor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULittle_DJ_Music_Man_ABP_C::PoundDoorEvent(bool PoundDoor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.PoundDoorEvent");
		
		ULittle_DJ_Music_Man_ABP_C_PoundDoorEvent_Params params {};
		params.PoundDoor = PoundDoor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.CanWaveEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CanWave                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULittle_DJ_Music_Man_ABP_C::CanWaveEvent(bool CanWave)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.CanWaveEvent");
		
		ULittle_DJ_Music_Man_ABP_C_CanWaveEvent_Params params {};
		params.CanWave = CanWave;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.IsSickEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OnOff                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULittle_DJ_Music_Man_ABP_C::IsSickEvent(bool OnOff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.IsSickEvent");
		
		ULittle_DJ_Music_Man_ABP_C_IsSickEvent_Params params {};
		params.OnOff = OnOff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.CanLieDownEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OnOff                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULittle_DJ_Music_Man_ABP_C::CanLieDownEvent(bool OnOff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.CanLieDownEvent");
		
		ULittle_DJ_Music_Man_ABP_C_CanLieDownEvent_Params params {};
		params.OnOff = OnOff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.CanLeapEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULittle_DJ_Music_Man_ABP_C::CanLeapEvent(bool Off)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.CanLeapEvent");
		
		ULittle_DJ_Music_Man_ABP_C_CanLeapEvent_Params params {};
		params.Off = Off;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.EnterFreddyOverrideEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULittle_DJ_Music_Man_ABP_C::EnterFreddyOverrideEvent(bool Off)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.EnterFreddyOverrideEvent");
		
		ULittle_DJ_Music_Man_ABP_C_EnterFreddyOverrideEvent_Params params {};
		params.Off = Off;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.ForceAnimOverride
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULittle_DJ_Music_Man_ABP_C::ForceAnimOverride(bool enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.ForceAnimOverride");
		
		ULittle_DJ_Music_Man_ABP_C_ForceAnimOverride_Params params {};
		params.enable = enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.FreddyCorrupted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULittle_DJ_Music_Man_ABP_C::FreddyCorrupted(bool Off)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.FreddyCorrupted");
		
		ULittle_DJ_Music_Man_ABP_C_FreddyCorrupted_Params params {};
		params.Off = Off;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.RoxyCrying
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULittle_DJ_Music_Man_ABP_C::RoxyCrying(bool Off)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.RoxyCrying");
		
		ULittle_DJ_Music_Man_ABP_C_RoxyCrying_Params params {};
		params.Off = Off;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.VoAnimEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAkAudioEvent*                               AKEvent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULittle_DJ_Music_Man_ABP_C::VoAnimEvent(class UAkAudioEvent* AKEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.VoAnimEvent");
		
		ULittle_DJ_Music_Man_ABP_C_VoAnimEvent_Params params {};
		params.AKEvent = AKEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.CanHackEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULittle_DJ_Music_Man_ABP_C::CanHackEvent(bool Off)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.CanHackEvent");
		
		ULittle_DJ_Music_Man_ABP_C_CanHackEvent_Params params {};
		params.Off = Off;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.CanDieEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULittle_DJ_Music_Man_ABP_C::CanDieEvent(bool Off)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.CanDieEvent");
		
		ULittle_DJ_Music_Man_ABP_C_CanDieEvent_Params params {};
		params.Off = Off;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.EndoSpawnInBowlingEvent
	 * 		Flags  -> ()
	 */
	void ULittle_DJ_Music_Man_ABP_C::EndoSpawnInBowlingEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.EndoSpawnInBowlingEvent");
		
		ULittle_DJ_Music_Man_ABP_C_EndoSpawnInBowlingEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.EndoBowlingCrawlEvent
	 * 		Flags  -> ()
	 */
	void ULittle_DJ_Music_Man_ABP_C::EndoBowlingCrawlEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.EndoBowlingCrawlEvent");
		
		ULittle_DJ_Music_Man_ABP_C_EndoBowlingCrawlEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.LeapLoopEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULittle_DJ_Music_Man_ABP_C::LeapLoopEvent(bool Off)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.LeapLoopEvent");
		
		ULittle_DJ_Music_Man_ABP_C_LeapLoopEvent_Params params {};
		params.Off = Off;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.UpdateLeapInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     ActorLocation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Destination                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Distance                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULittle_DJ_Music_Man_ABP_C::UpdateLeapInfo(const struct FVector& ActorLocation, const struct FVector& Destination, float Distance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.UpdateLeapInfo");
		
		ULittle_DJ_Music_Man_ABP_C_UpdateLeapInfo_Params params {};
		params.ActorLocation = ActorLocation;
		params.Destination = Destination;
		params.Distance = Distance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.FreddyEndIdle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULittle_DJ_Music_Man_ABP_C::FreddyEndIdle(bool Off)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.FreddyEndIdle");
		
		ULittle_DJ_Music_Man_ABP_C_FreddyEndIdle_Params params {};
		params.Off = Off;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.CutSceneSpineBlender
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class ULevelSequencePlayer*                        Sequence                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULittle_DJ_Music_Man_ABP_C::CutSceneSpineBlender(bool Off, class ULevelSequencePlayer* Sequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.CutSceneSpineBlender");
		
		ULittle_DJ_Music_Man_ABP_C_CutSceneSpineBlender_Params params {};
		params.Off = Off;
		params.Sequence = Sequence;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.CutsceneGrateEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ULevelSequencePlayer*                        SequencePlayer                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULittle_DJ_Music_Man_ABP_C::CutsceneGrateEvent(class ULevelSequencePlayer* SequencePlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.CutsceneGrateEvent");
		
		ULittle_DJ_Music_Man_ABP_C_CutsceneGrateEvent_Params params {};
		params.SequencePlayer = SequencePlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.Spotlight Aim Actor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      AimActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULittle_DJ_Music_Man_ABP_C::SpotlightAimActor(class AActor* AimActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.Spotlight Aim Actor");
		
		ULittle_DJ_Music_Man_ABP_C_SpotlightAimActor_Params params {};
		params.AimActor = AimActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.IsHangingEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsHanging                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULittle_DJ_Music_Man_ABP_C::IsHangingEvent(bool IsHanging)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.IsHangingEvent");
		
		ULittle_DJ_Music_Man_ABP_C_IsHangingEvent_Params params {};
		params.IsHanging = IsHanging;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.OverlappingDoor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Overlapping                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      Instigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULittle_DJ_Music_Man_ABP_C::OverlappingDoor(bool Overlapping, class AActor* Instigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.OverlappingDoor");
		
		ULittle_DJ_Music_Man_ABP_C_OverlappingDoor_Params params {};
		params.Overlapping = Overlapping;
		params.Instigator = Instigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.OnNotifyBegin_FA7D18A447815604F75E399A0E97F4BB
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULittle_DJ_Music_Man_ABP_C::OnNotifyBegin_FA7D18A447815604F75E399A0E97F4BB(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.OnNotifyBegin_FA7D18A447815604F75E399A0E97F4BB");
		
		ULittle_DJ_Music_Man_ABP_C_OnNotifyBegin_FA7D18A447815604F75E399A0E97F4BB_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.OnNotifyEnd_FA7D18A447815604F75E399A0E97F4BB
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULittle_DJ_Music_Man_ABP_C::OnNotifyEnd_FA7D18A447815604F75E399A0E97F4BB(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.OnNotifyEnd_FA7D18A447815604F75E399A0E97F4BB");
		
		ULittle_DJ_Music_Man_ABP_C_OnNotifyEnd_FA7D18A447815604F75E399A0E97F4BB_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Little_DJ_Music_Man_ABP_AnimGraphNode_LayeredBoneBlend_D230A39643124712D0B1288DDE3C507C
	 * 		Flags  -> ()
	 */
	void ULittle_DJ_Music_Man_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Little_DJ_Music_Man_ABP_AnimGraphNode_LayeredBoneBlend_D230A39643124712D0B1288DDE3C507C()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Little_DJ_Music_Man_ABP_AnimGraphNode_LayeredBoneBlend_D230A39643124712D0B1288DDE3C507C");
		
		ULittle_DJ_Music_Man_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Little_DJ_Music_Man_ABP_AnimGraphNode_LayeredBoneBlend_D230A39643124712D0B1288DDE3C507C_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.BlueprintUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULittle_DJ_Music_Man_ABP_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.BlueprintUpdateAnimation");
		
		ULittle_DJ_Music_Man_ABP_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.BlueprintBeginPlay
	 * 		Flags  -> ()
	 */
	void ULittle_DJ_Music_Man_ABP_C::BlueprintBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.BlueprintBeginPlay");
		
		ULittle_DJ_Music_Man_ABP_C_BlueprintBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.CanJumpscareEvent
	 * 		Flags  -> ()
	 */
	void ULittle_DJ_Music_Man_ABP_C::CanJumpscareEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.CanJumpscareEvent");
		
		ULittle_DJ_Music_Man_ABP_C_CanJumpscareEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.SkipSpawnInEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               SkipSpawnIn                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULittle_DJ_Music_Man_ABP_C::SkipSpawnInEvent(bool SkipSpawnIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.SkipSpawnInEvent");
		
		ULittle_DJ_Music_Man_ABP_C_SkipSpawnInEvent_Params params {};
		params.SkipSpawnIn = SkipSpawnIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.SpawnOutEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bSpawnOut                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULittle_DJ_Music_Man_ABP_C::SpawnOutEvent(bool bSpawnOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.SpawnOutEvent");
		
		ULittle_DJ_Music_Man_ABP_C_SpawnOutEvent_Params params {};
		params.bSpawnOut = bSpawnOut;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.ExecuteUbergraph_Little_DJ_Music_Man_ABP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULittle_DJ_Music_Man_ABP_C::ExecuteUbergraph_Little_DJ_Music_Man_ABP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.ExecuteUbergraph_Little_DJ_Music_Man_ABP");
		
		ULittle_DJ_Music_Man_ABP_C_ExecuteUbergraph_Little_DJ_Music_Man_ABP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULittle_DJ_Music_Man_ABP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULittle_DJ_Music_Man_ABP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C");
		return ptr;
	}

}


