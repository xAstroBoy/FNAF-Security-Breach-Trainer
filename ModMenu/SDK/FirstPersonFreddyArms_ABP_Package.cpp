﻿/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "FirstPersonFreddyArms_ABP_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UFirstPersonFreddyArms_ABP_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.AnimGraph");
		
		UFirstPersonFreddyArms_ABP_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.Open
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UFirstPersonFreddyArms_ABP_C::Open()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.Open");
		
		UFirstPersonFreddyArms_ABP_C_Open_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.OpenDone
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UFirstPersonFreddyArms_ABP_C::OpenDone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.OpenDone");
		
		UFirstPersonFreddyArms_ABP_C_OpenDone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.SetHeadAimTarget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     AimLocation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFirstPersonFreddyArms_ABP_C::SetHeadAimTarget(const struct FVector& AimLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.SetHeadAimTarget");
		
		UFirstPersonFreddyArms_ABP_C_SetHeadAimTarget_Params params {};
		params.AimLocation = AimLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.StartScan
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UFirstPersonFreddyArms_ABP_C::StartScan()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.StartScan");
		
		UFirstPersonFreddyArms_ABP_C_StartScan_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.CanRunEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CanRun                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFirstPersonFreddyArms_ABP_C::CanRunEvent(bool CanRun)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.CanRunEvent");
		
		UFirstPersonFreddyArms_ABP_C_CanRunEvent_Params params {};
		params.CanRun = CanRun;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.Stun Event
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Is_Stunned                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFirstPersonFreddyArms_ABP_C::Stun_Event(bool Is_Stunned)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.Stun Event");
		
		UFirstPersonFreddyArms_ABP_C_Stun_Event_Params params {};
		params.Is_Stunned = Is_Stunned;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.CanRummageEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UFirstPersonFreddyArms_ABP_C::CanRummageEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.CanRummageEvent");
		
		UFirstPersonFreddyArms_ABP_C_CanRummageEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.IsFirstPersonEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UFirstPersonFreddyArms_ABP_C::IsFirstPersonEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.IsFirstPersonEvent");
		
		UFirstPersonFreddyArms_ABP_C_IsFirstPersonEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.IsNotFirstPersonEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UFirstPersonFreddyArms_ABP_C::IsNotFirstPersonEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.IsNotFirstPersonEvent");
		
		UFirstPersonFreddyArms_ABP_C_IsNotFirstPersonEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.RummagingDoneEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UFirstPersonFreddyArms_ABP_C::RummagingDoneEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.RummagingDoneEvent");
		
		UFirstPersonFreddyArms_ABP_C_RummagingDoneEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.OnAnimInstanceSwap
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UFirstPersonFreddyArms_ABP_C::OnAnimInstanceSwap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.OnAnimInstanceSwap");
		
		UFirstPersonFreddyArms_ABP_C_OnAnimInstanceSwap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.ForceScanStates
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               OverrideScan                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               CanScan                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               CanScanL                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               CanScanR                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFirstPersonFreddyArms_ABP_C::ForceScanStates(bool OverrideScan, bool CanScan, bool CanScanL, bool CanScanR)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.ForceScanStates");
		
		UFirstPersonFreddyArms_ABP_C_ForceScanStates_Params params {};
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.JumpEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CanJump                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFirstPersonFreddyArms_ABP_C::JumpEvent(bool CanJump)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.JumpEvent");
		
		UFirstPersonFreddyArms_ABP_C_JumpEvent_Params params {};
		params.CanJump = CanJump;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.LandEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UFirstPersonFreddyArms_ABP_C::LandEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.LandEvent");
		
		UFirstPersonFreddyArms_ABP_C_LandEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.StopScan
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UFirstPersonFreddyArms_ABP_C::StopScan()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.StopScan");
		
		UFirstPersonFreddyArms_ABP_C_StopScan_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.PoundDoorEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               PoundDoor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFirstPersonFreddyArms_ABP_C::PoundDoorEvent(bool PoundDoor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.PoundDoorEvent");
		
		UFirstPersonFreddyArms_ABP_C_PoundDoorEvent_Params params {};
		params.PoundDoor = PoundDoor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.CanWaveEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CanWave                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFirstPersonFreddyArms_ABP_C::CanWaveEvent(bool CanWave)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.CanWaveEvent");
		
		UFirstPersonFreddyArms_ABP_C_CanWaveEvent_Params params {};
		params.CanWave = CanWave;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.IsSickEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               OnOff                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFirstPersonFreddyArms_ABP_C::IsSickEvent(bool OnOff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.IsSickEvent");
		
		UFirstPersonFreddyArms_ABP_C_IsSickEvent_Params params {};
		params.OnOff = OnOff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.CanLieDownEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               OnOff                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFirstPersonFreddyArms_ABP_C::CanLieDownEvent(bool OnOff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.CanLieDownEvent");
		
		UFirstPersonFreddyArms_ABP_C_CanLieDownEvent_Params params {};
		params.OnOff = OnOff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.CanLeapEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFirstPersonFreddyArms_ABP_C::CanLeapEvent(bool Off)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.CanLeapEvent");
		
		UFirstPersonFreddyArms_ABP_C_CanLeapEvent_Params params {};
		params.Off = Off;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.EnterFreddyOverrideEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFirstPersonFreddyArms_ABP_C::EnterFreddyOverrideEvent(bool Off)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.EnterFreddyOverrideEvent");
		
		UFirstPersonFreddyArms_ABP_C_EnterFreddyOverrideEvent_Params params {};
		params.Off = Off;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.ForceAnimOverride
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFirstPersonFreddyArms_ABP_C::ForceAnimOverride(bool enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.ForceAnimOverride");
		
		UFirstPersonFreddyArms_ABP_C_ForceAnimOverride_Params params {};
		params.enable = enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.FreddyCorrupted
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFirstPersonFreddyArms_ABP_C::FreddyCorrupted(bool Off)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.FreddyCorrupted");
		
		UFirstPersonFreddyArms_ABP_C_FreddyCorrupted_Params params {};
		params.Off = Off;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.RoxyCrying
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFirstPersonFreddyArms_ABP_C::RoxyCrying(bool Off)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.RoxyCrying");
		
		UFirstPersonFreddyArms_ABP_C_RoxyCrying_Params params {};
		params.Off = Off;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.VoAnimEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAkAudioEvent*                               AK_Event                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFirstPersonFreddyArms_ABP_C::VoAnimEvent(class UAkAudioEvent* AK_Event)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.VoAnimEvent");
		
		UFirstPersonFreddyArms_ABP_C_VoAnimEvent_Params params {};
		params.AK_Event = AK_Event;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.CanHackEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFirstPersonFreddyArms_ABP_C::CanHackEvent(bool Off)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.CanHackEvent");
		
		UFirstPersonFreddyArms_ABP_C_CanHackEvent_Params params {};
		params.Off = Off;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.CanDieEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFirstPersonFreddyArms_ABP_C::CanDieEvent(bool Off)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.CanDieEvent");
		
		UFirstPersonFreddyArms_ABP_C_CanDieEvent_Params params {};
		params.Off = Off;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.EndoSpawnInBowlingEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UFirstPersonFreddyArms_ABP_C::EndoSpawnInBowlingEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.EndoSpawnInBowlingEvent");
		
		UFirstPersonFreddyArms_ABP_C_EndoSpawnInBowlingEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.EndoBowlingCrawlEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UFirstPersonFreddyArms_ABP_C::EndoBowlingCrawlEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.EndoBowlingCrawlEvent");
		
		UFirstPersonFreddyArms_ABP_C_EndoBowlingCrawlEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.LeapLoopEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFirstPersonFreddyArms_ABP_C::LeapLoopEvent(bool Off)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.LeapLoopEvent");
		
		UFirstPersonFreddyArms_ABP_C_LeapLoopEvent_Params params {};
		params.Off = Off;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.UpdateLeapInfo
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     ActorLocation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Destination                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Distance                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFirstPersonFreddyArms_ABP_C::UpdateLeapInfo(const struct FVector& ActorLocation, const struct FVector& Destination, float Distance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.UpdateLeapInfo");
		
		UFirstPersonFreddyArms_ABP_C_UpdateLeapInfo_Params params {};
		params.ActorLocation = ActorLocation;
		params.Destination = Destination;
		params.Distance = Distance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.FreddyEndIdle
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFirstPersonFreddyArms_ABP_C::FreddyEndIdle(bool Off)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.FreddyEndIdle");
		
		UFirstPersonFreddyArms_ABP_C_FreddyEndIdle_Params params {};
		params.Off = Off;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.CutSceneSpineBlender
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class ULevelSequencePlayer*                        Sequence                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFirstPersonFreddyArms_ABP_C::CutSceneSpineBlender(bool Off, class ULevelSequencePlayer* Sequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.CutSceneSpineBlender");
		
		UFirstPersonFreddyArms_ABP_C_CutSceneSpineBlender_Params params {};
		params.Off = Off;
		params.Sequence = Sequence;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.CutsceneGrateEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ULevelSequencePlayer*                        SequencePlayer                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFirstPersonFreddyArms_ABP_C::CutsceneGrateEvent(class ULevelSequencePlayer* SequencePlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.CutsceneGrateEvent");
		
		UFirstPersonFreddyArms_ABP_C_CutsceneGrateEvent_Params params {};
		params.SequencePlayer = SequencePlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.Spotlight Aim Actor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      AimActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFirstPersonFreddyArms_ABP_C::Spotlight_Aim_Actor(class AActor* AimActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.Spotlight Aim Actor");
		
		UFirstPersonFreddyArms_ABP_C_Spotlight_Aim_Actor_Params params {};
		params.AimActor = AimActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.Searching
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		fnaf9_EHideObjectType                              Hide_Type                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFirstPersonFreddyArms_ABP_C::Searching(fnaf9_EHideObjectType Hide_Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.Searching");
		
		UFirstPersonFreddyArms_ABP_C_Searching_Params params {};
		params.Hide_Type = Hide_Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.TurnEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              TurnDegrees                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFirstPersonFreddyArms_ABP_C::TurnEvent(float TurnDegrees)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.TurnEvent");
		
		UFirstPersonFreddyArms_ABP_C_TurnEvent_Params params {};
		params.TurnDegrees = TurnDegrees;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.SearchingDone
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UFirstPersonFreddyArms_ABP_C::SearchingDone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.SearchingDone");
		
		UFirstPersonFreddyArms_ABP_C_SearchingDone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.HeadAimEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               OnOff                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFirstPersonFreddyArms_ABP_C::HeadAimEvent(bool OnOff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.HeadAimEvent");
		
		UFirstPersonFreddyArms_ABP_C_HeadAimEvent_Params params {};
		params.OnOff = OnOff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.CanJumpscareEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UFirstPersonFreddyArms_ABP_C::CanJumpscareEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.CanJumpscareEvent");
		
		UFirstPersonFreddyArms_ABP_C_CanJumpscareEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.Breakthrough
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UFirstPersonFreddyArms_ABP_C::Breakthrough()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.Breakthrough");
		
		UFirstPersonFreddyArms_ABP_C_Breakthrough_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.ExecuteUbergraph_FirstPersonFreddyArms_ABP
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFirstPersonFreddyArms_ABP_C::ExecuteUbergraph_FirstPersonFreddyArms_ABP(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.ExecuteUbergraph_FirstPersonFreddyArms_ABP");
		
		UFirstPersonFreddyArms_ABP_C_ExecuteUbergraph_FirstPersonFreddyArms_ABP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UFirstPersonFreddyArms_ABP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFirstPersonFreddyArms_ABP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C");
		return ptr;
	}

}


