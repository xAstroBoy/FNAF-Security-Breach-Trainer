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
	 * 		Name   -> Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.GetMoveSpeedInput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              MoveSpeed                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URIG_Endo_Skeleton_ABP_C::GetMoveSpeedInput(float* MoveSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.GetMoveSpeedInput");
		
		URIG_Endo_Skeleton_ABP_C_GetMoveSpeedInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MoveSpeed != nullptr)
			*MoveSpeed = params.MoveSpeed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void URIG_Endo_Skeleton_ABP_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.AnimGraph");
		
		URIG_Endo_Skeleton_ABP_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.CameraShake
	 * 		Flags  -> ()
	 */
	void URIG_Endo_Skeleton_ABP_C::CameraShake()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.CameraShake");
		
		URIG_Endo_Skeleton_ABP_C_CameraShake_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.Handstep
	 * 		Flags  -> ()
	 */
	void URIG_Endo_Skeleton_ABP_C::Handstep()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.Handstep");
		
		URIG_Endo_Skeleton_ABP_C_Handstep_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.footstep
	 * 		Flags  -> ()
	 */
	void URIG_Endo_Skeleton_ABP_C::footstep()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.footstep");
		
		URIG_Endo_Skeleton_ABP_C_footstep_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.OverlappingDoor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Overlapping                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      Instigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URIG_Endo_Skeleton_ABP_C::OverlappingDoor(bool Overlapping, class AActor* Instigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.OverlappingDoor");
		
		URIG_Endo_Skeleton_ABP_C_OverlappingDoor_Params params {};
		params.Overlapping = Overlapping;
		params.Instigator = Instigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.Spotlight Aim Actor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      AimActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URIG_Endo_Skeleton_ABP_C::SpotlightAimActor(class AActor* AimActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.Spotlight Aim Actor");
		
		URIG_Endo_Skeleton_ABP_C_SpotlightAimActor_Params params {};
		params.AimActor = AimActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.CutsceneGrateEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ULevelSequencePlayer*                        SequencePlayer                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URIG_Endo_Skeleton_ABP_C::CutsceneGrateEvent(class ULevelSequencePlayer* SequencePlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.CutsceneGrateEvent");
		
		URIG_Endo_Skeleton_ABP_C_CutsceneGrateEvent_Params params {};
		params.SequencePlayer = SequencePlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.CutSceneSpineBlender
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class ULevelSequencePlayer*                        Sequence                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URIG_Endo_Skeleton_ABP_C::CutSceneSpineBlender(bool Off, class ULevelSequencePlayer* Sequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.CutSceneSpineBlender");
		
		URIG_Endo_Skeleton_ABP_C_CutSceneSpineBlender_Params params {};
		params.Off = Off;
		params.Sequence = Sequence;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.FreddyEndIdle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URIG_Endo_Skeleton_ABP_C::FreddyEndIdle(bool Off)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.FreddyEndIdle");
		
		URIG_Endo_Skeleton_ABP_C_FreddyEndIdle_Params params {};
		params.Off = Off;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.UpdateLeapInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     ActorLocation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Destination                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Distance                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URIG_Endo_Skeleton_ABP_C::UpdateLeapInfo(const struct FVector& ActorLocation, const struct FVector& Destination, float Distance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.UpdateLeapInfo");
		
		URIG_Endo_Skeleton_ABP_C_UpdateLeapInfo_Params params {};
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
	 * 		Name   -> Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.LeapLoopEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URIG_Endo_Skeleton_ABP_C::LeapLoopEvent(bool Off)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.LeapLoopEvent");
		
		URIG_Endo_Skeleton_ABP_C_LeapLoopEvent_Params params {};
		params.Off = Off;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.CanDieEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URIG_Endo_Skeleton_ABP_C::CanDieEvent(bool Off)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.CanDieEvent");
		
		URIG_Endo_Skeleton_ABP_C_CanDieEvent_Params params {};
		params.Off = Off;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.CanHackEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URIG_Endo_Skeleton_ABP_C::CanHackEvent(bool Off)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.CanHackEvent");
		
		URIG_Endo_Skeleton_ABP_C_CanHackEvent_Params params {};
		params.Off = Off;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.VoAnimEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAkAudioEvent*                               AKEvent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URIG_Endo_Skeleton_ABP_C::VoAnimEvent(class UAkAudioEvent* AKEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.VoAnimEvent");
		
		URIG_Endo_Skeleton_ABP_C_VoAnimEvent_Params params {};
		params.AKEvent = AKEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.RoxyCrying
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URIG_Endo_Skeleton_ABP_C::RoxyCrying(bool Off)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.RoxyCrying");
		
		URIG_Endo_Skeleton_ABP_C_RoxyCrying_Params params {};
		params.Off = Off;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.FreddyCorrupted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URIG_Endo_Skeleton_ABP_C::FreddyCorrupted(bool Off)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.FreddyCorrupted");
		
		URIG_Endo_Skeleton_ABP_C_FreddyCorrupted_Params params {};
		params.Off = Off;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.ForceAnimOverride
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URIG_Endo_Skeleton_ABP_C::ForceAnimOverride(bool enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.ForceAnimOverride");
		
		URIG_Endo_Skeleton_ABP_C_ForceAnimOverride_Params params {};
		params.enable = enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.EnterFreddyOverrideEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URIG_Endo_Skeleton_ABP_C::EnterFreddyOverrideEvent(bool Off)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.EnterFreddyOverrideEvent");
		
		URIG_Endo_Skeleton_ABP_C_EnterFreddyOverrideEvent_Params params {};
		params.Off = Off;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.CanLeapEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URIG_Endo_Skeleton_ABP_C::CanLeapEvent(bool Off)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.CanLeapEvent");
		
		URIG_Endo_Skeleton_ABP_C_CanLeapEvent_Params params {};
		params.Off = Off;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.CanLieDownEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OnOff                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URIG_Endo_Skeleton_ABP_C::CanLieDownEvent(bool OnOff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.CanLieDownEvent");
		
		URIG_Endo_Skeleton_ABP_C_CanLieDownEvent_Params params {};
		params.OnOff = OnOff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.IsSickEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OnOff                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URIG_Endo_Skeleton_ABP_C::IsSickEvent(bool OnOff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.IsSickEvent");
		
		URIG_Endo_Skeleton_ABP_C_IsSickEvent_Params params {};
		params.OnOff = OnOff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.CanWaveEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CanWave                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URIG_Endo_Skeleton_ABP_C::CanWaveEvent(bool CanWave)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.CanWaveEvent");
		
		URIG_Endo_Skeleton_ABP_C_CanWaveEvent_Params params {};
		params.CanWave = CanWave;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.PoundDoorEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               PoundDoor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URIG_Endo_Skeleton_ABP_C::PoundDoorEvent(bool PoundDoor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.PoundDoorEvent");
		
		URIG_Endo_Skeleton_ABP_C_PoundDoorEvent_Params params {};
		params.PoundDoor = PoundDoor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.StopScan
	 * 		Flags  -> ()
	 */
	void URIG_Endo_Skeleton_ABP_C::StopScan()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.StopScan");
		
		URIG_Endo_Skeleton_ABP_C_StopScan_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.LandEvent
	 * 		Flags  -> ()
	 */
	void URIG_Endo_Skeleton_ABP_C::LandEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.LandEvent");
		
		URIG_Endo_Skeleton_ABP_C_LandEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.JumpEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CanJump                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URIG_Endo_Skeleton_ABP_C::JumpEvent(bool CanJump)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.JumpEvent");
		
		URIG_Endo_Skeleton_ABP_C_JumpEvent_Params params {};
		params.CanJump = CanJump;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.ForceScanStates
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OverrideScan                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               CanScan                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               CanScanL                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               CanScanR                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URIG_Endo_Skeleton_ABP_C::ForceScanStates(bool OverrideScan, bool CanScan, bool CanScanL, bool CanScanR)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.ForceScanStates");
		
		URIG_Endo_Skeleton_ABP_C_ForceScanStates_Params params {};
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
	 * 		Name   -> Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.Breakthrough
	 * 		Flags  -> ()
	 */
	void URIG_Endo_Skeleton_ABP_C::Breakthrough()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.Breakthrough");
		
		URIG_Endo_Skeleton_ABP_C_Breakthrough_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.OnAnimInstanceSwap
	 * 		Flags  -> ()
	 */
	void URIG_Endo_Skeleton_ABP_C::OnAnimInstanceSwap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.OnAnimInstanceSwap");
		
		URIG_Endo_Skeleton_ABP_C_OnAnimInstanceSwap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.RummagingDoneEvent
	 * 		Flags  -> ()
	 */
	void URIG_Endo_Skeleton_ABP_C::RummagingDoneEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.RummagingDoneEvent");
		
		URIG_Endo_Skeleton_ABP_C_RummagingDoneEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.IsNotFirstPersonEvent
	 * 		Flags  -> ()
	 */
	void URIG_Endo_Skeleton_ABP_C::IsNotFirstPersonEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.IsNotFirstPersonEvent");
		
		URIG_Endo_Skeleton_ABP_C_IsNotFirstPersonEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.IsFirstPersonEvent
	 * 		Flags  -> ()
	 */
	void URIG_Endo_Skeleton_ABP_C::IsFirstPersonEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.IsFirstPersonEvent");
		
		URIG_Endo_Skeleton_ABP_C_IsFirstPersonEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.CanRummageEvent
	 * 		Flags  -> ()
	 */
	void URIG_Endo_Skeleton_ABP_C::CanRummageEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.CanRummageEvent");
		
		URIG_Endo_Skeleton_ABP_C_CanRummageEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.StartScan
	 * 		Flags  -> ()
	 */
	void URIG_Endo_Skeleton_ABP_C::StartScan()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.StartScan");
		
		URIG_Endo_Skeleton_ABP_C_StartScan_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_Endo_Skeleton_ABP_AnimGraphNode_ModifyBone_C0C70AEF40AB5AAB89A364B038D51A4C
	 * 		Flags  -> ()
	 */
	void URIG_Endo_Skeleton_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_Endo_Skeleton_ABP_AnimGraphNode_ModifyBone_C0C70AEF40AB5AAB89A364B038D51A4C()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_Endo_Skeleton_ABP_AnimGraphNode_ModifyBone_C0C70AEF40AB5AAB89A364B038D51A4C");
		
		URIG_Endo_Skeleton_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_Endo_Skeleton_ABP_AnimGraphNode_ModifyBone_C0C70AEF40AB5AAB89A364B038D51A4C_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.SetHeadAimTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     AimLocation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URIG_Endo_Skeleton_ABP_C::SetHeadAimTarget(const struct FVector& AimLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.SetHeadAimTarget");
		
		URIG_Endo_Skeleton_ABP_C_SetHeadAimTarget_Params params {};
		params.AimLocation = AimLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_Endo_Skeleton_ABP_AnimGraphNode_LookAt_4D16C8F149A1BF671B2783BFA524B02B
	 * 		Flags  -> ()
	 */
	void URIG_Endo_Skeleton_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_Endo_Skeleton_ABP_AnimGraphNode_LookAt_4D16C8F149A1BF671B2783BFA524B02B()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_Endo_Skeleton_ABP_AnimGraphNode_LookAt_4D16C8F149A1BF671B2783BFA524B02B");
		
		URIG_Endo_Skeleton_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_Endo_Skeleton_ABP_AnimGraphNode_LookAt_4D16C8F149A1BF671B2783BFA524B02B_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_Endo_Skeleton_ABP_AnimGraphNode_LookAt_D400E08D47BD7EF232A174993E01B69A
	 * 		Flags  -> ()
	 */
	void URIG_Endo_Skeleton_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_Endo_Skeleton_ABP_AnimGraphNode_LookAt_D400E08D47BD7EF232A174993E01B69A()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_Endo_Skeleton_ABP_AnimGraphNode_LookAt_D400E08D47BD7EF232A174993E01B69A");
		
		URIG_Endo_Skeleton_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_Endo_Skeleton_ABP_AnimGraphNode_LookAt_D400E08D47BD7EF232A174993E01B69A_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_Endo_Skeleton_ABP_AnimGraphNode_LayeredBoneBlend_2DB8B9FD495A3226938D76A3B4EDD43D
	 * 		Flags  -> ()
	 */
	void URIG_Endo_Skeleton_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_Endo_Skeleton_ABP_AnimGraphNode_LayeredBoneBlend_2DB8B9FD495A3226938D76A3B4EDD43D()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_Endo_Skeleton_ABP_AnimGraphNode_LayeredBoneBlend_2DB8B9FD495A3226938D76A3B4EDD43D");
		
		URIG_Endo_Skeleton_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_Endo_Skeleton_ABP_AnimGraphNode_LayeredBoneBlend_2DB8B9FD495A3226938D76A3B4EDD43D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_Endo_Skeleton_ABP_AnimGraphNode_AimOffsetLookAt_2D4C8F4544CC53C09863CBB08E99AFFE
	 * 		Flags  -> ()
	 */
	void URIG_Endo_Skeleton_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_Endo_Skeleton_ABP_AnimGraphNode_AimOffsetLookAt_2D4C8F4544CC53C09863CBB08E99AFFE()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_Endo_Skeleton_ABP_AnimGraphNode_AimOffsetLookAt_2D4C8F4544CC53C09863CBB08E99AFFE");
		
		URIG_Endo_Skeleton_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_Endo_Skeleton_ABP_AnimGraphNode_AimOffsetLookAt_2D4C8F4544CC53C09863CBB08E99AFFE_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_Endo_Skeleton_ABP_AnimGraphNode_TransitionResult_75A36FAB4FBB2A8608BCF4ACCD74EA92
	 * 		Flags  -> ()
	 */
	void URIG_Endo_Skeleton_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_Endo_Skeleton_ABP_AnimGraphNode_TransitionResult_75A36FAB4FBB2A8608BCF4ACCD74EA92()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_Endo_Skeleton_ABP_AnimGraphNode_TransitionResult_75A36FAB4FBB2A8608BCF4ACCD74EA92");
		
		URIG_Endo_Skeleton_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_Endo_Skeleton_ABP_AnimGraphNode_TransitionResult_75A36FAB4FBB2A8608BCF4ACCD74EA92_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.BlueprintUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URIG_Endo_Skeleton_ABP_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.BlueprintUpdateAnimation");
		
		URIG_Endo_Skeleton_ABP_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.CanJumpscareEvent
	 * 		Flags  -> ()
	 */
	void URIG_Endo_Skeleton_ABP_C::CanJumpscareEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.CanJumpscareEvent");
		
		URIG_Endo_Skeleton_ABP_C_CanJumpscareEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.Stun Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsStunned                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URIG_Endo_Skeleton_ABP_C::StunEvent(bool IsStunned)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.Stun Event");
		
		URIG_Endo_Skeleton_ABP_C_StunEvent_Params params {};
		params.IsStunned = IsStunned;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.OpenDone
	 * 		Flags  -> ()
	 */
	void URIG_Endo_Skeleton_ABP_C::OpenDone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.OpenDone");
		
		URIG_Endo_Skeleton_ABP_C_OpenDone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.Open
	 * 		Flags  -> ()
	 */
	void URIG_Endo_Skeleton_ABP_C::Open()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.Open");
		
		URIG_Endo_Skeleton_ABP_C_Open_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.SearchingDone
	 * 		Flags  -> ()
	 */
	void URIG_Endo_Skeleton_ABP_C::SearchingDone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.SearchingDone");
		
		URIG_Endo_Skeleton_ABP_C_SearchingDone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.Searching
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHideObjectType                                    HideType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URIG_Endo_Skeleton_ABP_C::Searching(EHideObjectType HideType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.Searching");
		
		URIG_Endo_Skeleton_ABP_C_Searching_Params params {};
		params.HideType = HideType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.TurnEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              TurnDegrees                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URIG_Endo_Skeleton_ABP_C::TurnEvent(float TurnDegrees)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.TurnEvent");
		
		URIG_Endo_Skeleton_ABP_C_TurnEvent_Params params {};
		params.TurnDegrees = TurnDegrees;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.CanRunEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CanRun                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URIG_Endo_Skeleton_ABP_C::CanRunEvent(bool CanRun)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.CanRunEvent");
		
		URIG_Endo_Skeleton_ABP_C_CanRunEvent_Params params {};
		params.CanRun = CanRun;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.AnimNotify_L_Foot_Down
	 * 		Flags  -> ()
	 */
	void URIG_Endo_Skeleton_ABP_C::AnimNotify_L_Foot_Down()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.AnimNotify_L_Foot_Down");
		
		URIG_Endo_Skeleton_ABP_C_AnimNotify_L_Foot_Down_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.AnimNotify_R_Foot_Down
	 * 		Flags  -> ()
	 */
	void URIG_Endo_Skeleton_ABP_C::AnimNotify_R_Foot_Down()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.AnimNotify_R_Foot_Down");
		
		URIG_Endo_Skeleton_ABP_C_AnimNotify_R_Foot_Down_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.BlueprintBeginPlay
	 * 		Flags  -> ()
	 */
	void URIG_Endo_Skeleton_ABP_C::BlueprintBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.BlueprintBeginPlay");
		
		URIG_Endo_Skeleton_ABP_C_BlueprintBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.AnimNotify_L_Hand_Down
	 * 		Flags  -> ()
	 */
	void URIG_Endo_Skeleton_ABP_C::AnimNotify_L_Hand_Down()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.AnimNotify_L_Hand_Down");
		
		URIG_Endo_Skeleton_ABP_C_AnimNotify_L_Hand_Down_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.AnimNotify_R_Hand_Down
	 * 		Flags  -> ()
	 */
	void URIG_Endo_Skeleton_ABP_C::AnimNotify_R_Hand_Down()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.AnimNotify_R_Hand_Down");
		
		URIG_Endo_Skeleton_ABP_C_AnimNotify_R_Hand_Down_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.AnimNotify_enterLocoEvent
	 * 		Flags  -> ()
	 */
	void URIG_Endo_Skeleton_ABP_C::AnimNotify_enterLocoEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.AnimNotify_enterLocoEvent");
		
		URIG_Endo_Skeleton_ABP_C_AnimNotify_enterLocoEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.AnimNotify_EnteredIdleEvent
	 * 		Flags  -> ()
	 */
	void URIG_Endo_Skeleton_ABP_C::AnimNotify_EnteredIdleEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.AnimNotify_EnteredIdleEvent");
		
		URIG_Endo_Skeleton_ABP_C_AnimNotify_EnteredIdleEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.EndoSpawnInBowlingEvent
	 * 		Flags  -> ()
	 */
	void URIG_Endo_Skeleton_ABP_C::EndoSpawnInBowlingEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.EndoSpawnInBowlingEvent");
		
		URIG_Endo_Skeleton_ABP_C_EndoSpawnInBowlingEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.EndoBowlingCrawlEvent
	 * 		Flags  -> ()
	 */
	void URIG_Endo_Skeleton_ABP_C::EndoBowlingCrawlEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.EndoBowlingCrawlEvent");
		
		URIG_Endo_Skeleton_ABP_C_EndoBowlingCrawlEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.HeadAimEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OnOff                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URIG_Endo_Skeleton_ABP_C::HeadAimEvent(bool OnOff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.HeadAimEvent");
		
		URIG_Endo_Skeleton_ABP_C_HeadAimEvent_Params params {};
		params.OnOff = OnOff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.IsHangingEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsHanging                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URIG_Endo_Skeleton_ABP_C::IsHangingEvent(bool IsHanging)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.IsHangingEvent");
		
		URIG_Endo_Skeleton_ABP_C_IsHangingEvent_Params params {};
		params.IsHanging = IsHanging;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.ExecuteUbergraph_RIG_Endo_Skeleton_ABP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URIG_Endo_Skeleton_ABP_C::ExecuteUbergraph_RIG_Endo_Skeleton_ABP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.ExecuteUbergraph_RIG_Endo_Skeleton_ABP");
		
		URIG_Endo_Skeleton_ABP_C_ExecuteUbergraph_RIG_Endo_Skeleton_ABP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URIG_Endo_Skeleton_ABP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URIG_Endo_Skeleton_ABP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C");
		return ptr;
	}

}


