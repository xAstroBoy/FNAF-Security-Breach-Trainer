/**
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
	 * 		Name   -> Function Vanny_ABP.Vanny_ABP_C.GetMoveSpeedInput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              MoveSpeed                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UVanny_ABP_C::GetMoveSpeedInput(float* MoveSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanny_ABP.Vanny_ABP_C.GetMoveSpeedInput");
		
		UVanny_ABP_C_GetMoveSpeedInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MoveSpeed != nullptr)
			*MoveSpeed = params.MoveSpeed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanny_ABP.Vanny_ABP_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UVanny_ABP_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanny_ABP.Vanny_ABP_C.AnimGraph");
		
		UVanny_ABP_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanny_ABP.Vanny_ABP_C.footstep
	 * 		Flags  -> ()
	 */
	void UVanny_ABP_C::footstep()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanny_ABP.Vanny_ABP_C.footstep");
		
		UVanny_ABP_C_footstep_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanny_ABP.Vanny_ABP_C.Perform Foot IK
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsRightFoot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UVanny_ABP_C::PerformFootIK(bool IsRightFoot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanny_ABP.Vanny_ABP_C.Perform Foot IK");
		
		UVanny_ABP_C_PerformFootIK_Params params {};
		params.IsRightFoot = IsRightFoot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanny_ABP.Vanny_ABP_C.CanDieEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UVanny_ABP_C::CanDieEvent(bool Off)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanny_ABP.Vanny_ABP_C.CanDieEvent");
		
		UVanny_ABP_C_CanDieEvent_Params params {};
		params.Off = Off;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanny_ABP.Vanny_ABP_C.EndoSpawnInBowlingEvent
	 * 		Flags  -> ()
	 */
	void UVanny_ABP_C::EndoSpawnInBowlingEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanny_ABP.Vanny_ABP_C.EndoSpawnInBowlingEvent");
		
		UVanny_ABP_C_EndoSpawnInBowlingEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanny_ABP.Vanny_ABP_C.EndoBowlingCrawlEvent
	 * 		Flags  -> ()
	 */
	void UVanny_ABP_C::EndoBowlingCrawlEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanny_ABP.Vanny_ABP_C.EndoBowlingCrawlEvent");
		
		UVanny_ABP_C_EndoBowlingCrawlEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanny_ABP.Vanny_ABP_C.LeapLoopEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UVanny_ABP_C::LeapLoopEvent(bool Off)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanny_ABP.Vanny_ABP_C.LeapLoopEvent");
		
		UVanny_ABP_C_LeapLoopEvent_Params params {};
		params.Off = Off;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanny_ABP.Vanny_ABP_C.UpdateLeapInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     ActorLocation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Destination                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Distance                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UVanny_ABP_C::UpdateLeapInfo(const struct FVector& ActorLocation, const struct FVector& Destination, float Distance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanny_ABP.Vanny_ABP_C.UpdateLeapInfo");
		
		UVanny_ABP_C_UpdateLeapInfo_Params params {};
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
	 * 		Name   -> Function Vanny_ABP.Vanny_ABP_C.FreddyEndIdle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UVanny_ABP_C::FreddyEndIdle(bool Off)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanny_ABP.Vanny_ABP_C.FreddyEndIdle");
		
		UVanny_ABP_C_FreddyEndIdle_Params params {};
		params.Off = Off;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanny_ABP.Vanny_ABP_C.CutSceneSpineBlender
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class ULevelSequencePlayer*                        Sequence                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UVanny_ABP_C::CutSceneSpineBlender(bool Off, class ULevelSequencePlayer* Sequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanny_ABP.Vanny_ABP_C.CutSceneSpineBlender");
		
		UVanny_ABP_C_CutSceneSpineBlender_Params params {};
		params.Off = Off;
		params.Sequence = Sequence;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanny_ABP.Vanny_ABP_C.CutsceneGrateEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ULevelSequencePlayer*                        SequencePlayer                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UVanny_ABP_C::CutsceneGrateEvent(class ULevelSequencePlayer* SequencePlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanny_ABP.Vanny_ABP_C.CutsceneGrateEvent");
		
		UVanny_ABP_C_CutsceneGrateEvent_Params params {};
		params.SequencePlayer = SequencePlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanny_ABP.Vanny_ABP_C.Spotlight Aim Actor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      AimActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UVanny_ABP_C::SpotlightAimActor(class AActor* AimActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanny_ABP.Vanny_ABP_C.Spotlight Aim Actor");
		
		UVanny_ABP_C_SpotlightAimActor_Params params {};
		params.AimActor = AimActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanny_ABP.Vanny_ABP_C.IsHangingEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsHanging                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UVanny_ABP_C::IsHangingEvent(bool IsHanging)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanny_ABP.Vanny_ABP_C.IsHangingEvent");
		
		UVanny_ABP_C_IsHangingEvent_Params params {};
		params.IsHanging = IsHanging;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanny_ABP.Vanny_ABP_C.OverlappingDoor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Overlapping                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      Instigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UVanny_ABP_C::OverlappingDoor(bool Overlapping, class AActor* Instigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanny_ABP.Vanny_ABP_C.OverlappingDoor");
		
		UVanny_ABP_C_OverlappingDoor_Params params {};
		params.Overlapping = Overlapping;
		params.Instigator = Instigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanny_ABP.Vanny_ABP_C.CanHackEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UVanny_ABP_C::CanHackEvent(bool Off)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanny_ABP.Vanny_ABP_C.CanHackEvent");
		
		UVanny_ABP_C_CanHackEvent_Params params {};
		params.Off = Off;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanny_ABP.Vanny_ABP_C.VoAnimEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAkAudioEvent*                               AKEvent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UVanny_ABP_C::VoAnimEvent(class UAkAudioEvent* AKEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanny_ABP.Vanny_ABP_C.VoAnimEvent");
		
		UVanny_ABP_C_VoAnimEvent_Params params {};
		params.AKEvent = AKEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanny_ABP.Vanny_ABP_C.RoxyCrying
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UVanny_ABP_C::RoxyCrying(bool Off)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanny_ABP.Vanny_ABP_C.RoxyCrying");
		
		UVanny_ABP_C_RoxyCrying_Params params {};
		params.Off = Off;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanny_ABP.Vanny_ABP_C.FreddyCorrupted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UVanny_ABP_C::FreddyCorrupted(bool Off)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanny_ABP.Vanny_ABP_C.FreddyCorrupted");
		
		UVanny_ABP_C_FreddyCorrupted_Params params {};
		params.Off = Off;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanny_ABP.Vanny_ABP_C.ForceAnimOverride
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UVanny_ABP_C::ForceAnimOverride(bool enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanny_ABP.Vanny_ABP_C.ForceAnimOverride");
		
		UVanny_ABP_C_ForceAnimOverride_Params params {};
		params.enable = enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanny_ABP.Vanny_ABP_C.EnterFreddyOverrideEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UVanny_ABP_C::EnterFreddyOverrideEvent(bool Off)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanny_ABP.Vanny_ABP_C.EnterFreddyOverrideEvent");
		
		UVanny_ABP_C_EnterFreddyOverrideEvent_Params params {};
		params.Off = Off;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanny_ABP.Vanny_ABP_C.CanLeapEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UVanny_ABP_C::CanLeapEvent(bool Off)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanny_ABP.Vanny_ABP_C.CanLeapEvent");
		
		UVanny_ABP_C_CanLeapEvent_Params params {};
		params.Off = Off;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanny_ABP.Vanny_ABP_C.CanLieDownEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OnOff                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UVanny_ABP_C::CanLieDownEvent(bool OnOff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanny_ABP.Vanny_ABP_C.CanLieDownEvent");
		
		UVanny_ABP_C_CanLieDownEvent_Params params {};
		params.OnOff = OnOff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanny_ABP.Vanny_ABP_C.IsSickEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OnOff                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UVanny_ABP_C::IsSickEvent(bool OnOff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanny_ABP.Vanny_ABP_C.IsSickEvent");
		
		UVanny_ABP_C_IsSickEvent_Params params {};
		params.OnOff = OnOff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanny_ABP.Vanny_ABP_C.PoundDoorEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               PoundDoor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UVanny_ABP_C::PoundDoorEvent(bool PoundDoor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanny_ABP.Vanny_ABP_C.PoundDoorEvent");
		
		UVanny_ABP_C_PoundDoorEvent_Params params {};
		params.PoundDoor = PoundDoor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanny_ABP.Vanny_ABP_C.StopScan
	 * 		Flags  -> ()
	 */
	void UVanny_ABP_C::StopScan()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanny_ABP.Vanny_ABP_C.StopScan");
		
		UVanny_ABP_C_StopScan_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanny_ABP.Vanny_ABP_C.LandEvent
	 * 		Flags  -> ()
	 */
	void UVanny_ABP_C::LandEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanny_ABP.Vanny_ABP_C.LandEvent");
		
		UVanny_ABP_C_LandEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanny_ABP.Vanny_ABP_C.JumpEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CanJump                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UVanny_ABP_C::JumpEvent(bool CanJump)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanny_ABP.Vanny_ABP_C.JumpEvent");
		
		UVanny_ABP_C_JumpEvent_Params params {};
		params.CanJump = CanJump;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanny_ABP.Vanny_ABP_C.ForceScanStates
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OverrideScan                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               CanScan                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               CanScanL                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               CanScanR                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UVanny_ABP_C::ForceScanStates(bool OverrideScan, bool CanScan, bool CanScanL, bool CanScanR)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanny_ABP.Vanny_ABP_C.ForceScanStates");
		
		UVanny_ABP_C_ForceScanStates_Params params {};
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
	 * 		Name   -> Function Vanny_ABP.Vanny_ABP_C.Breakthrough
	 * 		Flags  -> ()
	 */
	void UVanny_ABP_C::Breakthrough()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanny_ABP.Vanny_ABP_C.Breakthrough");
		
		UVanny_ABP_C_Breakthrough_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanny_ABP.Vanny_ABP_C.OnAnimInstanceSwap
	 * 		Flags  -> ()
	 */
	void UVanny_ABP_C::OnAnimInstanceSwap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanny_ABP.Vanny_ABP_C.OnAnimInstanceSwap");
		
		UVanny_ABP_C_OnAnimInstanceSwap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanny_ABP.Vanny_ABP_C.RummagingDoneEvent
	 * 		Flags  -> ()
	 */
	void UVanny_ABP_C::RummagingDoneEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanny_ABP.Vanny_ABP_C.RummagingDoneEvent");
		
		UVanny_ABP_C_RummagingDoneEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanny_ABP.Vanny_ABP_C.IsNotFirstPersonEvent
	 * 		Flags  -> ()
	 */
	void UVanny_ABP_C::IsNotFirstPersonEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanny_ABP.Vanny_ABP_C.IsNotFirstPersonEvent");
		
		UVanny_ABP_C_IsNotFirstPersonEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanny_ABP.Vanny_ABP_C.OnCompleted_515640F949B4EDD981CE18B0311FE3C4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UVanny_ABP_C::OnCompleted_515640F949B4EDD981CE18B0311FE3C4(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanny_ABP.Vanny_ABP_C.OnCompleted_515640F949B4EDD981CE18B0311FE3C4");
		
		UVanny_ABP_C_OnCompleted_515640F949B4EDD981CE18B0311FE3C4_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanny_ABP.Vanny_ABP_C.OnBlendOut_515640F949B4EDD981CE18B0311FE3C4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UVanny_ABP_C::OnBlendOut_515640F949B4EDD981CE18B0311FE3C4(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanny_ABP.Vanny_ABP_C.OnBlendOut_515640F949B4EDD981CE18B0311FE3C4");
		
		UVanny_ABP_C_OnBlendOut_515640F949B4EDD981CE18B0311FE3C4_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanny_ABP.Vanny_ABP_C.OnInterrupted_515640F949B4EDD981CE18B0311FE3C4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UVanny_ABP_C::OnInterrupted_515640F949B4EDD981CE18B0311FE3C4(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanny_ABP.Vanny_ABP_C.OnInterrupted_515640F949B4EDD981CE18B0311FE3C4");
		
		UVanny_ABP_C_OnInterrupted_515640F949B4EDD981CE18B0311FE3C4_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanny_ABP.Vanny_ABP_C.OnNotifyBegin_515640F949B4EDD981CE18B0311FE3C4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UVanny_ABP_C::OnNotifyBegin_515640F949B4EDD981CE18B0311FE3C4(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanny_ABP.Vanny_ABP_C.OnNotifyBegin_515640F949B4EDD981CE18B0311FE3C4");
		
		UVanny_ABP_C_OnNotifyBegin_515640F949B4EDD981CE18B0311FE3C4_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanny_ABP.Vanny_ABP_C.OnNotifyEnd_515640F949B4EDD981CE18B0311FE3C4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UVanny_ABP_C::OnNotifyEnd_515640F949B4EDD981CE18B0311FE3C4(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanny_ABP.Vanny_ABP_C.OnNotifyEnd_515640F949B4EDD981CE18B0311FE3C4");
		
		UVanny_ABP_C_OnNotifyEnd_515640F949B4EDD981CE18B0311FE3C4_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanny_ABP.Vanny_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanny_ABP_AnimGraphNode_TwoBoneIK_774B3C0A43A12CED83BD8F8A76AA5201
	 * 		Flags  -> ()
	 */
	void UVanny_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Vanny_ABP_AnimGraphNode_TwoBoneIK_774B3C0A43A12CED83BD8F8A76AA5201()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanny_ABP.Vanny_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanny_ABP_AnimGraphNode_TwoBoneIK_774B3C0A43A12CED83BD8F8A76AA5201");
		
		UVanny_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Vanny_ABP_AnimGraphNode_TwoBoneIK_774B3C0A43A12CED83BD8F8A76AA5201_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanny_ABP.Vanny_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanny_ABP_AnimGraphNode_TwoBoneIK_773EEE614788793E2C7EE6AEE76EC7AA
	 * 		Flags  -> ()
	 */
	void UVanny_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Vanny_ABP_AnimGraphNode_TwoBoneIK_773EEE614788793E2C7EE6AEE76EC7AA()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanny_ABP.Vanny_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanny_ABP_AnimGraphNode_TwoBoneIK_773EEE614788793E2C7EE6AEE76EC7AA");
		
		UVanny_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Vanny_ABP_AnimGraphNode_TwoBoneIK_773EEE614788793E2C7EE6AEE76EC7AA_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanny_ABP.Vanny_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanny_ABP_AnimGraphNode_SequencePlayer_76F1A1E9459450E653946FBDD7A15E7E
	 * 		Flags  -> ()
	 */
	void UVanny_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Vanny_ABP_AnimGraphNode_SequencePlayer_76F1A1E9459450E653946FBDD7A15E7E()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanny_ABP.Vanny_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanny_ABP_AnimGraphNode_SequencePlayer_76F1A1E9459450E653946FBDD7A15E7E");
		
		UVanny_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Vanny_ABP_AnimGraphNode_SequencePlayer_76F1A1E9459450E653946FBDD7A15E7E_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanny_ABP.Vanny_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanny_ABP_AnimGraphNode_BlendListByBool_4112D5E24846CAD77ED5268E263F386E
	 * 		Flags  -> ()
	 */
	void UVanny_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Vanny_ABP_AnimGraphNode_BlendListByBool_4112D5E24846CAD77ED5268E263F386E()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanny_ABP.Vanny_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanny_ABP_AnimGraphNode_BlendListByBool_4112D5E24846CAD77ED5268E263F386E");
		
		UVanny_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Vanny_ABP_AnimGraphNode_BlendListByBool_4112D5E24846CAD77ED5268E263F386E_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanny_ABP.Vanny_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanny_ABP_AnimGraphNode_SequencePlayer_085059F24127374D32C5A49165153A92
	 * 		Flags  -> ()
	 */
	void UVanny_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Vanny_ABP_AnimGraphNode_SequencePlayer_085059F24127374D32C5A49165153A92()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanny_ABP.Vanny_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanny_ABP_AnimGraphNode_SequencePlayer_085059F24127374D32C5A49165153A92");
		
		UVanny_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Vanny_ABP_AnimGraphNode_SequencePlayer_085059F24127374D32C5A49165153A92_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanny_ABP.Vanny_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanny_ABP_AnimGraphNode_SequencePlayer_A121EC7A4201730FB0EA35B05D9B8E64
	 * 		Flags  -> ()
	 */
	void UVanny_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Vanny_ABP_AnimGraphNode_SequencePlayer_A121EC7A4201730FB0EA35B05D9B8E64()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanny_ABP.Vanny_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanny_ABP_AnimGraphNode_SequencePlayer_A121EC7A4201730FB0EA35B05D9B8E64");
		
		UVanny_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Vanny_ABP_AnimGraphNode_SequencePlayer_A121EC7A4201730FB0EA35B05D9B8E64_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanny_ABP.Vanny_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanny_ABP_AnimGraphNode_TransitionResult_3BB8A3A34C396EB7775C40A0FF08A440
	 * 		Flags  -> ()
	 */
	void UVanny_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Vanny_ABP_AnimGraphNode_TransitionResult_3BB8A3A34C396EB7775C40A0FF08A440()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanny_ABP.Vanny_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanny_ABP_AnimGraphNode_TransitionResult_3BB8A3A34C396EB7775C40A0FF08A440");
		
		UVanny_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Vanny_ABP_AnimGraphNode_TransitionResult_3BB8A3A34C396EB7775C40A0FF08A440_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanny_ABP.Vanny_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanny_ABP_AnimGraphNode_TransitionResult_E3D575E54B378E795162C089DC80FF75
	 * 		Flags  -> ()
	 */
	void UVanny_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Vanny_ABP_AnimGraphNode_TransitionResult_E3D575E54B378E795162C089DC80FF75()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanny_ABP.Vanny_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanny_ABP_AnimGraphNode_TransitionResult_E3D575E54B378E795162C089DC80FF75");
		
		UVanny_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Vanny_ABP_AnimGraphNode_TransitionResult_E3D575E54B378E795162C089DC80FF75_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanny_ABP.Vanny_ABP_C.BlueprintUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UVanny_ABP_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanny_ABP.Vanny_ABP_C.BlueprintUpdateAnimation");
		
		UVanny_ABP_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanny_ABP.Vanny_ABP_C.BlueprintBeginPlay
	 * 		Flags  -> ()
	 */
	void UVanny_ABP_C::BlueprintBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanny_ABP.Vanny_ABP_C.BlueprintBeginPlay");
		
		UVanny_ABP_C_BlueprintBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanny_ABP.Vanny_ABP_C.IsSpottedEvent
	 * 		Flags  -> ()
	 */
	void UVanny_ABP_C::IsSpottedEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanny_ABP.Vanny_ABP_C.IsSpottedEvent");
		
		UVanny_ABP_C_IsSpottedEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanny_ABP.Vanny_ABP_C.AnimNotify_IsSpottedEvent
	 * 		Flags  -> ()
	 */
	void UVanny_ABP_C::AnimNotify_IsSpottedEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanny_ABP.Vanny_ABP_C.AnimNotify_IsSpottedEvent");
		
		UVanny_ABP_C_AnimNotify_IsSpottedEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanny_ABP.Vanny_ABP_C.SpottedTimerOverEvent
	 * 		Flags  -> ()
	 */
	void UVanny_ABP_C::SpottedTimerOverEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanny_ABP.Vanny_ABP_C.SpottedTimerOverEvent");
		
		UVanny_ABP_C_SpottedTimerOverEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanny_ABP.Vanny_ABP_C.SearchingDone
	 * 		Flags  -> ()
	 */
	void UVanny_ABP_C::SearchingDone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanny_ABP.Vanny_ABP_C.SearchingDone");
		
		UVanny_ABP_C_SearchingDone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanny_ABP.Vanny_ABP_C.TurnEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              TurnDegrees                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UVanny_ABP_C::TurnEvent(float TurnDegrees)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanny_ABP.Vanny_ABP_C.TurnEvent");
		
		UVanny_ABP_C_TurnEvent_Params params {};
		params.TurnDegrees = TurnDegrees;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanny_ABP.Vanny_ABP_C.SetPeek
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ShouldPeek                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UVanny_ABP_C::SetPeek(bool ShouldPeek)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanny_ABP.Vanny_ABP_C.SetPeek");
		
		UVanny_ABP_C_SetPeek_Params params {};
		params.ShouldPeek = ShouldPeek;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanny_ABP.Vanny_ABP_C.SetAnim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimSequence*                               Animation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UVanny_ABP_C::SetAnim(class UAnimSequence* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanny_ABP.Vanny_ABP_C.SetAnim");
		
		UVanny_ABP_C_SetAnim_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanny_ABP.Vanny_ABP_C.SetEnterRotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       PlayerPawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UVanny_ABP_C::SetEnterRotation(class APawn* PlayerPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanny_ABP.Vanny_ABP_C.SetEnterRotation");
		
		UVanny_ABP_C_SetEnterRotation_Params params {};
		params.PlayerPawn = PlayerPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanny_ABP.Vanny_ABP_C.AnimNotify_BeginWalk
	 * 		Flags  -> ()
	 */
	void UVanny_ABP_C::AnimNotify_BeginWalk()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanny_ABP.Vanny_ABP_C.AnimNotify_BeginWalk");
		
		UVanny_ABP_C_AnimNotify_BeginWalk_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanny_ABP.Vanny_ABP_C.AnimNotify_BeginRun
	 * 		Flags  -> ()
	 */
	void UVanny_ABP_C::AnimNotify_BeginRun()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanny_ABP.Vanny_ABP_C.AnimNotify_BeginRun");
		
		UVanny_ABP_C_AnimNotify_BeginRun_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanny_ABP.Vanny_ABP_C.HeadAimEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OnOff                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UVanny_ABP_C::HeadAimEvent(bool OnOff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanny_ABP.Vanny_ABP_C.HeadAimEvent");
		
		UVanny_ABP_C_HeadAimEvent_Params params {};
		params.OnOff = OnOff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanny_ABP.Vanny_ABP_C.CanJumpscareEvent
	 * 		Flags  -> ()
	 */
	void UVanny_ABP_C::CanJumpscareEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanny_ABP.Vanny_ABP_C.CanJumpscareEvent");
		
		UVanny_ABP_C_CanJumpscareEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanny_ABP.Vanny_ABP_C.StartScan
	 * 		Flags  -> ()
	 */
	void UVanny_ABP_C::StartScan()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanny_ABP.Vanny_ABP_C.StartScan");
		
		UVanny_ABP_C_StartScan_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanny_ABP.Vanny_ABP_C.Searching
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHideObjectType                                    HideType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UVanny_ABP_C::Searching(EHideObjectType HideType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanny_ABP.Vanny_ABP_C.Searching");
		
		UVanny_ABP_C_Searching_Params params {};
		params.HideType = HideType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanny_ABP.Vanny_ABP_C.SetHeadAimTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     AimLocation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UVanny_ABP_C::SetHeadAimTarget(const struct FVector& AimLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanny_ABP.Vanny_ABP_C.SetHeadAimTarget");
		
		UVanny_ABP_C_SetHeadAimTarget_Params params {};
		params.AimLocation = AimLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanny_ABP.Vanny_ABP_C.CanRunEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CanRun                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UVanny_ABP_C::CanRunEvent(bool CanRun)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanny_ABP.Vanny_ABP_C.CanRunEvent");
		
		UVanny_ABP_C_CanRunEvent_Params params {};
		params.CanRun = CanRun;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanny_ABP.Vanny_ABP_C.AnimNotify_EnterSearchStateEvent
	 * 		Flags  -> ()
	 */
	void UVanny_ABP_C::AnimNotify_EnterSearchStateEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanny_ABP.Vanny_ABP_C.AnimNotify_EnterSearchStateEvent");
		
		UVanny_ABP_C_AnimNotify_EnterSearchStateEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanny_ABP.Vanny_ABP_C.AnimNotify_SearchCanKill
	 * 		Flags  -> ()
	 */
	void UVanny_ABP_C::AnimNotify_SearchCanKill()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanny_ABP.Vanny_ABP_C.AnimNotify_SearchCanKill");
		
		UVanny_ABP_C_AnimNotify_SearchCanKill_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanny_ABP.Vanny_ABP_C.AnimNotify_SearchEndEvent
	 * 		Flags  -> ()
	 */
	void UVanny_ABP_C::AnimNotify_SearchEndEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanny_ABP.Vanny_ABP_C.AnimNotify_SearchEndEvent");
		
		UVanny_ABP_C_AnimNotify_SearchEndEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanny_ABP.Vanny_ABP_C.StartSearch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       SearcherPawn                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UVanny_ABP_C::StartSearch(class APawn* SearcherPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanny_ABP.Vanny_ABP_C.StartSearch");
		
		UVanny_ABP_C_StartSearch_Params params {};
		params.SearcherPawn = SearcherPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanny_ABP.Vanny_ABP_C.CanWaveEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CanWave                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UVanny_ABP_C::CanWaveEvent(bool CanWave)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanny_ABP.Vanny_ABP_C.CanWaveEvent");
		
		UVanny_ABP_C_CanWaveEvent_Params params {};
		params.CanWave = CanWave;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanny_ABP.Vanny_ABP_C.EventWaveTest
	 * 		Flags  -> ()
	 */
	void UVanny_ABP_C::EventWaveTest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanny_ABP.Vanny_ABP_C.EventWaveTest");
		
		UVanny_ABP_C_EventWaveTest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanny_ABP.Vanny_ABP_C.AnimNotify_L_Foot_Down
	 * 		Flags  -> ()
	 */
	void UVanny_ABP_C::AnimNotify_L_Foot_Down()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanny_ABP.Vanny_ABP_C.AnimNotify_L_Foot_Down");
		
		UVanny_ABP_C_AnimNotify_L_Foot_Down_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanny_ABP.Vanny_ABP_C.AnimNotify_R_Foot_Down
	 * 		Flags  -> ()
	 */
	void UVanny_ABP_C::AnimNotify_R_Foot_Down()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanny_ABP.Vanny_ABP_C.AnimNotify_R_Foot_Down");
		
		UVanny_ABP_C_AnimNotify_R_Foot_Down_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanny_ABP.Vanny_ABP_C.IsFirstPersonEvent
	 * 		Flags  -> ()
	 */
	void UVanny_ABP_C::IsFirstPersonEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanny_ABP.Vanny_ABP_C.IsFirstPersonEvent");
		
		UVanny_ABP_C_IsFirstPersonEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanny_ABP.Vanny_ABP_C.CanRummageEvent
	 * 		Flags  -> ()
	 */
	void UVanny_ABP_C::CanRummageEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanny_ABP.Vanny_ABP_C.CanRummageEvent");
		
		UVanny_ABP_C_CanRummageEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanny_ABP.Vanny_ABP_C.Stun Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsStunned                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UVanny_ABP_C::StunEvent(bool IsStunned)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanny_ABP.Vanny_ABP_C.Stun Event");
		
		UVanny_ABP_C_StunEvent_Params params {};
		params.IsStunned = IsStunned;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanny_ABP.Vanny_ABP_C.OpenDone
	 * 		Flags  -> ()
	 */
	void UVanny_ABP_C::OpenDone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanny_ABP.Vanny_ABP_C.OpenDone");
		
		UVanny_ABP_C_OpenDone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanny_ABP.Vanny_ABP_C.Open
	 * 		Flags  -> ()
	 */
	void UVanny_ABP_C::Open()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanny_ABP.Vanny_ABP_C.Open");
		
		UVanny_ABP_C_Open_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanny_ABP.Vanny_ABP_C.ExecuteUbergraph_Vanny_ABP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UVanny_ABP_C::ExecuteUbergraph_Vanny_ABP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanny_ABP.Vanny_ABP_C.ExecuteUbergraph_Vanny_ABP");
		
		UVanny_ABP_C_ExecuteUbergraph_Vanny_ABP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVanny_ABP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVanny_ABP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Vanny_ABP.Vanny_ABP_C");
		return ptr;
	}

}


