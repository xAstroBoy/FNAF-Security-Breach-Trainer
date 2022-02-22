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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Burntrap_ABP.Burntrap_ABP_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UBurntrap_ABP_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Burntrap_ABP.Burntrap_ABP_C.AnimGraph");
		
		UBurntrap_ABP_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Burntrap_ABP.Burntrap_ABP_C.VoAnimEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAkAudioEvent*                               AK_Event                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBurntrap_ABP_C::VoAnimEvent(class UAkAudioEvent* AK_Event)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Burntrap_ABP.Burntrap_ABP_C.VoAnimEvent");
		
		UBurntrap_ABP_C_VoAnimEvent_Params params {};
		params.AK_Event = AK_Event;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Burntrap_ABP.Burntrap_ABP_C.EndoSpawnInBowlingEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBurntrap_ABP_C::EndoSpawnInBowlingEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Burntrap_ABP.Burntrap_ABP_C.EndoSpawnInBowlingEvent");
		
		UBurntrap_ABP_C_EndoSpawnInBowlingEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Burntrap_ABP.Burntrap_ABP_C.EndoBowlingCrawlEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBurntrap_ABP_C::EndoBowlingCrawlEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Burntrap_ABP.Burntrap_ABP_C.EndoBowlingCrawlEvent");
		
		UBurntrap_ABP_C_EndoBowlingCrawlEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Burntrap_ABP.Burntrap_ABP_C.LeapLoopEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBurntrap_ABP_C::LeapLoopEvent(bool Off)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Burntrap_ABP.Burntrap_ABP_C.LeapLoopEvent");
		
		UBurntrap_ABP_C_LeapLoopEvent_Params params {};
		params.Off = Off;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Burntrap_ABP.Burntrap_ABP_C.UpdateLeapInfo
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     ActorLocation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Destination                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Distance                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBurntrap_ABP_C::UpdateLeapInfo(const struct FVector& ActorLocation, const struct FVector& Destination, float Distance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Burntrap_ABP.Burntrap_ABP_C.UpdateLeapInfo");
		
		UBurntrap_ABP_C_UpdateLeapInfo_Params params {};
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
	 * 		Name   -> Function Burntrap_ABP.Burntrap_ABP_C.FreddyEndIdle
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBurntrap_ABP_C::FreddyEndIdle(bool Off)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Burntrap_ABP.Burntrap_ABP_C.FreddyEndIdle");
		
		UBurntrap_ABP_C_FreddyEndIdle_Params params {};
		params.Off = Off;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Burntrap_ABP.Burntrap_ABP_C.CutSceneSpineBlender
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class ULevelSequencePlayer*                        Sequence                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBurntrap_ABP_C::CutSceneSpineBlender(bool Off, class ULevelSequencePlayer* Sequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Burntrap_ABP.Burntrap_ABP_C.CutSceneSpineBlender");
		
		UBurntrap_ABP_C_CutSceneSpineBlender_Params params {};
		params.Off = Off;
		params.Sequence = Sequence;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Burntrap_ABP.Burntrap_ABP_C.CutsceneGrateEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ULevelSequencePlayer*                        SequencePlayer                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBurntrap_ABP_C::CutsceneGrateEvent(class ULevelSequencePlayer* SequencePlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Burntrap_ABP.Burntrap_ABP_C.CutsceneGrateEvent");
		
		UBurntrap_ABP_C_CutsceneGrateEvent_Params params {};
		params.SequencePlayer = SequencePlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Burntrap_ABP.Burntrap_ABP_C.Spotlight Aim Actor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      AimActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBurntrap_ABP_C::Spotlight_Aim_Actor(class AActor* AimActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Burntrap_ABP.Burntrap_ABP_C.Spotlight Aim Actor");
		
		UBurntrap_ABP_C_Spotlight_Aim_Actor_Params params {};
		params.AimActor = AimActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Burntrap_ABP.Burntrap_ABP_C.JumpEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CanJump                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBurntrap_ABP_C::JumpEvent(bool CanJump)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Burntrap_ABP.Burntrap_ABP_C.JumpEvent");
		
		UBurntrap_ABP_C_JumpEvent_Params params {};
		params.CanJump = CanJump;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Burntrap_ABP.Burntrap_ABP_C.ForceScanStates
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               OverrideScan                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               CanScan                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               CanScanL                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               CanScanR                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBurntrap_ABP_C::ForceScanStates(bool OverrideScan, bool CanScan, bool CanScanL, bool CanScanR)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Burntrap_ABP.Burntrap_ABP_C.ForceScanStates");
		
		UBurntrap_ABP_C_ForceScanStates_Params params {};
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
	 * 		Name   -> Function Burntrap_ABP.Burntrap_ABP_C.RoxyCrying
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBurntrap_ABP_C::RoxyCrying(bool Off)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Burntrap_ABP.Burntrap_ABP_C.RoxyCrying");
		
		UBurntrap_ABP_C_RoxyCrying_Params params {};
		params.Off = Off;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Burntrap_ABP.Burntrap_ABP_C.FreddyCorrupted
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBurntrap_ABP_C::FreddyCorrupted(bool Off)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Burntrap_ABP.Burntrap_ABP_C.FreddyCorrupted");
		
		UBurntrap_ABP_C_FreddyCorrupted_Params params {};
		params.Off = Off;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Burntrap_ABP.Burntrap_ABP_C.Breakthrough
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBurntrap_ABP_C::Breakthrough()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Burntrap_ABP.Burntrap_ABP_C.Breakthrough");
		
		UBurntrap_ABP_C_Breakthrough_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Burntrap_ABP.Burntrap_ABP_C.ForceAnimOverride
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBurntrap_ABP_C::ForceAnimOverride(bool enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Burntrap_ABP.Burntrap_ABP_C.ForceAnimOverride");
		
		UBurntrap_ABP_C_ForceAnimOverride_Params params {};
		params.enable = enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Burntrap_ABP.Burntrap_ABP_C.EnterFreddyOverrideEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBurntrap_ABP_C::EnterFreddyOverrideEvent(bool Off)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Burntrap_ABP.Burntrap_ABP_C.EnterFreddyOverrideEvent");
		
		UBurntrap_ABP_C_EnterFreddyOverrideEvent_Params params {};
		params.Off = Off;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Burntrap_ABP.Burntrap_ABP_C.OnAnimInstanceSwap
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBurntrap_ABP_C::OnAnimInstanceSwap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Burntrap_ABP.Burntrap_ABP_C.OnAnimInstanceSwap");
		
		UBurntrap_ABP_C_OnAnimInstanceSwap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Burntrap_ABP.Burntrap_ABP_C.CanLeapEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBurntrap_ABP_C::CanLeapEvent(bool Off)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Burntrap_ABP.Burntrap_ABP_C.CanLeapEvent");
		
		UBurntrap_ABP_C_CanLeapEvent_Params params {};
		params.Off = Off;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Burntrap_ABP.Burntrap_ABP_C.RummagingDoneEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBurntrap_ABP_C::RummagingDoneEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Burntrap_ABP.Burntrap_ABP_C.RummagingDoneEvent");
		
		UBurntrap_ABP_C_RummagingDoneEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Burntrap_ABP.Burntrap_ABP_C.CanLieDownEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               OnOff                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBurntrap_ABP_C::CanLieDownEvent(bool OnOff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Burntrap_ABP.Burntrap_ABP_C.CanLieDownEvent");
		
		UBurntrap_ABP_C_CanLieDownEvent_Params params {};
		params.OnOff = OnOff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Burntrap_ABP.Burntrap_ABP_C.IsNotFirstPersonEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBurntrap_ABP_C::IsNotFirstPersonEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Burntrap_ABP.Burntrap_ABP_C.IsNotFirstPersonEvent");
		
		UBurntrap_ABP_C_IsNotFirstPersonEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Burntrap_ABP.Burntrap_ABP_C.IsSickEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               OnOff                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBurntrap_ABP_C::IsSickEvent(bool OnOff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Burntrap_ABP.Burntrap_ABP_C.IsSickEvent");
		
		UBurntrap_ABP_C_IsSickEvent_Params params {};
		params.OnOff = OnOff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Burntrap_ABP.Burntrap_ABP_C.IsFirstPersonEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBurntrap_ABP_C::IsFirstPersonEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Burntrap_ABP.Burntrap_ABP_C.IsFirstPersonEvent");
		
		UBurntrap_ABP_C_IsFirstPersonEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Burntrap_ABP.Burntrap_ABP_C.CanRummageEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBurntrap_ABP_C::CanRummageEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Burntrap_ABP.Burntrap_ABP_C.CanRummageEvent");
		
		UBurntrap_ABP_C_CanRummageEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Burntrap_ABP.Burntrap_ABP_C.Stun Event
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Is_Stunned                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBurntrap_ABP_C::Stun_Event(bool Is_Stunned)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Burntrap_ABP.Burntrap_ABP_C.Stun Event");
		
		UBurntrap_ABP_C_Stun_Event_Params params {};
		params.Is_Stunned = Is_Stunned;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Burntrap_ABP.Burntrap_ABP_C.CanRunEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CanRun                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBurntrap_ABP_C::CanRunEvent(bool CanRun)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Burntrap_ABP.Burntrap_ABP_C.CanRunEvent");
		
		UBurntrap_ABP_C_CanRunEvent_Params params {};
		params.CanRun = CanRun;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Burntrap_ABP.Burntrap_ABP_C.StartScan
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBurntrap_ABP_C::StartScan()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Burntrap_ABP.Burntrap_ABP_C.StartScan");
		
		UBurntrap_ABP_C_StartScan_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Burntrap_ABP.Burntrap_ABP_C.SetHeadAimTarget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     AimLocation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBurntrap_ABP_C::SetHeadAimTarget(const struct FVector& AimLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Burntrap_ABP.Burntrap_ABP_C.SetHeadAimTarget");
		
		UBurntrap_ABP_C_SetHeadAimTarget_Params params {};
		params.AimLocation = AimLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Burntrap_ABP.Burntrap_ABP_C.OpenDone
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBurntrap_ABP_C::OpenDone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Burntrap_ABP.Burntrap_ABP_C.OpenDone");
		
		UBurntrap_ABP_C_OpenDone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Burntrap_ABP.Burntrap_ABP_C.Open
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBurntrap_ABP_C::Open()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Burntrap_ABP.Burntrap_ABP_C.Open");
		
		UBurntrap_ABP_C_Open_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Burntrap_ABP.Burntrap_ABP_C.CanWaveEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CanWave                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBurntrap_ABP_C::CanWaveEvent(bool CanWave)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Burntrap_ABP.Burntrap_ABP_C.CanWaveEvent");
		
		UBurntrap_ABP_C_CanWaveEvent_Params params {};
		params.CanWave = CanWave;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Burntrap_ABP.Burntrap_ABP_C.SearchingDone
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBurntrap_ABP_C::SearchingDone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Burntrap_ABP.Burntrap_ABP_C.SearchingDone");
		
		UBurntrap_ABP_C_SearchingDone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Burntrap_ABP.Burntrap_ABP_C.Searching
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		fnaf9_EHideObjectType                              Hide_Type                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBurntrap_ABP_C::Searching(fnaf9_EHideObjectType Hide_Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Burntrap_ABP.Burntrap_ABP_C.Searching");
		
		UBurntrap_ABP_C_Searching_Params params {};
		params.Hide_Type = Hide_Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Burntrap_ABP.Burntrap_ABP_C.PoundDoorEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               PoundDoor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBurntrap_ABP_C::PoundDoorEvent(bool PoundDoor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Burntrap_ABP.Burntrap_ABP_C.PoundDoorEvent");
		
		UBurntrap_ABP_C_PoundDoorEvent_Params params {};
		params.PoundDoor = PoundDoor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Burntrap_ABP.Burntrap_ABP_C.TurnEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              TurnDegrees                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBurntrap_ABP_C::TurnEvent(float TurnDegrees)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Burntrap_ABP.Burntrap_ABP_C.TurnEvent");
		
		UBurntrap_ABP_C_TurnEvent_Params params {};
		params.TurnDegrees = TurnDegrees;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Burntrap_ABP.Burntrap_ABP_C.HeadAimEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               OnOff                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBurntrap_ABP_C::HeadAimEvent(bool OnOff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Burntrap_ABP.Burntrap_ABP_C.HeadAimEvent");
		
		UBurntrap_ABP_C_HeadAimEvent_Params params {};
		params.OnOff = OnOff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Burntrap_ABP.Burntrap_ABP_C.StopScan
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBurntrap_ABP_C::StopScan()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Burntrap_ABP.Burntrap_ABP_C.StopScan");
		
		UBurntrap_ABP_C_StopScan_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Burntrap_ABP.Burntrap_ABP_C.LandEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBurntrap_ABP_C::LandEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Burntrap_ABP.Burntrap_ABP_C.LandEvent");
		
		UBurntrap_ABP_C_LandEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Burntrap_ABP.Burntrap_ABP_C.CanJumpscareEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBurntrap_ABP_C::CanJumpscareEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Burntrap_ABP.Burntrap_ABP_C.CanJumpscareEvent");
		
		UBurntrap_ABP_C_CanJumpscareEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Burntrap_ABP.Burntrap_ABP_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBurntrap_ABP_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Burntrap_ABP.Burntrap_ABP_C.BlueprintUpdateAnimation");
		
		UBurntrap_ABP_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Burntrap_ABP.Burntrap_ABP_C.BlueprintBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBurntrap_ABP_C::BlueprintBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Burntrap_ABP.Burntrap_ABP_C.BlueprintBeginPlay");
		
		UBurntrap_ABP_C_BlueprintBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Burntrap_ABP.Burntrap_ABP_C.CanDieEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBurntrap_ABP_C::CanDieEvent(bool Off)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Burntrap_ABP.Burntrap_ABP_C.CanDieEvent");
		
		UBurntrap_ABP_C_CanDieEvent_Params params {};
		params.Off = Off;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Burntrap_ABP.Burntrap_ABP_C.CanHackEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBurntrap_ABP_C::CanHackEvent(bool Off)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Burntrap_ABP.Burntrap_ABP_C.CanHackEvent");
		
		UBurntrap_ABP_C_CanHackEvent_Params params {};
		params.Off = Off;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Burntrap_ABP.Burntrap_ABP_C.ExecuteUbergraph_Burntrap_ABP
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBurntrap_ABP_C::ExecuteUbergraph_Burntrap_ABP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Burntrap_ABP.Burntrap_ABP_C.ExecuteUbergraph_Burntrap_ABP");
		
		UBurntrap_ABP_C_ExecuteUbergraph_Burntrap_ABP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBurntrap_ABP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBurntrap_ABP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Burntrap_ABP.Burntrap_ABP_C");
		return ptr;
	}

}


