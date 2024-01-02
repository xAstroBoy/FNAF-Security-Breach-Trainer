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
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.IsMeshVisible
	 * 		Flags  -> ()
	 */
	bool UVanessa_ABP_C::IsMeshVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.IsMeshVisible");
		
		UVanessa_ABP_C_IsMeshVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.CanReceiveAlert
	 * 		Flags  -> ()
	 */
	bool UVanessa_ABP_C::CanReceiveAlert()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.CanReceiveAlert");
		
		UVanessa_ABP_C_CanReceiveAlert_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.IsShatteredVersion
	 * 		Flags  -> ()
	 */
	bool UVanessa_ABP_C::IsShatteredVersion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.IsShatteredVersion");
		
		UVanessa_ABP_C_IsShatteredVersion_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.GetCurrentPathName
	 * 		Flags  -> ()
	 */
	class FName UVanessa_ABP_C::GetCurrentPathName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.GetCurrentPathName");
		
		UVanessa_ABP_C_GetCurrentPathName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.GetManagedAIType
	 * 		Flags  -> ()
	 */
	EFNAFAISpawnType UVanessa_ABP_C::GetManagedAIType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.GetManagedAIType");
		
		UVanessa_ABP_C_GetManagedAIType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.GetMoveSpeedInput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              MoveSpeed                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UVanessa_ABP_C::GetMoveSpeedInput(float* MoveSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.GetMoveSpeedInput");
		
		UVanessa_ABP_C_GetMoveSpeedInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MoveSpeed != nullptr)
			*MoveSpeed = params.MoveSpeed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UVanessa_ABP_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.AnimGraph");
		
		UVanessa_ABP_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.footstep
	 * 		Flags  -> ()
	 */
	void UVanessa_ABP_C::footstep()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.footstep");
		
		UVanessa_ABP_C_footstep_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.HeadAimFunction
	 * 		Flags  -> ()
	 */
	void UVanessa_ABP_C::HeadAimFunction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.HeadAimFunction");
		
		UVanessa_ABP_C_HeadAimFunction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.ApplyControlRotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UVanessa_ABP_C::ApplyControlRotation(class UObject* Pawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.ApplyControlRotation");
		
		UVanessa_ABP_C_ApplyControlRotation_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.Procedural Scan 
	 * 		Flags  -> ()
	 */
	void UVanessa_ABP_C::ProceduralScan()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.Procedural Scan ");
		
		UVanessa_ABP_C_ProceduralScan_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.Perform Scan Trace
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsRight                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EDrawDebugTrace                                    DrawDebugType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UVanessa_ABP_C::PerformScanTrace(bool IsRight, EDrawDebugTrace DrawDebugType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.Perform Scan Trace");
		
		UVanessa_ABP_C_PerformScanTrace_Params params {};
		params.IsRight = IsRight;
		params.DrawDebugType = DrawDebugType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.Perform Foot IK
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsRightFoot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EDrawDebugTrace                                    DrawDebugType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UVanessa_ABP_C::PerformFootIK(bool IsRightFoot, EDrawDebugTrace DrawDebugType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.Perform Foot IK");
		
		UVanessa_ABP_C_PerformFootIK_Params params {};
		params.IsRightFoot = IsRightFoot;
		params.DrawDebugType = DrawDebugType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.OverlappingDoor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Overlapping                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      Instigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UVanessa_ABP_C::OverlappingDoor(bool Overlapping, class AActor* Instigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.OverlappingDoor");
		
		UVanessa_ABP_C_OverlappingDoor_Params params {};
		params.Overlapping = Overlapping;
		params.Instigator = Instigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.IsHangingEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsHanging                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UVanessa_ABP_C::IsHangingEvent(bool IsHanging)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.IsHangingEvent");
		
		UVanessa_ABP_C_IsHangingEvent_Params params {};
		params.IsHanging = IsHanging;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.Spotlight Aim Actor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      AimActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UVanessa_ABP_C::SpotlightAimActor(class AActor* AimActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.Spotlight Aim Actor");
		
		UVanessa_ABP_C_SpotlightAimActor_Params params {};
		params.AimActor = AimActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.CutsceneGrateEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ULevelSequencePlayer*                        SequencePlayer                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UVanessa_ABP_C::CutsceneGrateEvent(class ULevelSequencePlayer* SequencePlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.CutsceneGrateEvent");
		
		UVanessa_ABP_C_CutsceneGrateEvent_Params params {};
		params.SequencePlayer = SequencePlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.CutSceneSpineBlender
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class ULevelSequencePlayer*                        Sequence                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UVanessa_ABP_C::CutSceneSpineBlender(bool Off, class ULevelSequencePlayer* Sequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.CutSceneSpineBlender");
		
		UVanessa_ABP_C_CutSceneSpineBlender_Params params {};
		params.Off = Off;
		params.Sequence = Sequence;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.FreddyEndIdle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UVanessa_ABP_C::FreddyEndIdle(bool Off)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.FreddyEndIdle");
		
		UVanessa_ABP_C_FreddyEndIdle_Params params {};
		params.Off = Off;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.UpdateLeapInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     ActorLocation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Destination                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Distance                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UVanessa_ABP_C::UpdateLeapInfo(const struct FVector& ActorLocation, const struct FVector& Destination, float Distance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.UpdateLeapInfo");
		
		UVanessa_ABP_C_UpdateLeapInfo_Params params {};
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
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.LeapLoopEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UVanessa_ABP_C::LeapLoopEvent(bool Off)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.LeapLoopEvent");
		
		UVanessa_ABP_C_LeapLoopEvent_Params params {};
		params.Off = Off;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.EndoBowlingCrawlEvent
	 * 		Flags  -> ()
	 */
	void UVanessa_ABP_C::EndoBowlingCrawlEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.EndoBowlingCrawlEvent");
		
		UVanessa_ABP_C_EndoBowlingCrawlEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.EndoSpawnInBowlingEvent
	 * 		Flags  -> ()
	 */
	void UVanessa_ABP_C::EndoSpawnInBowlingEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.EndoSpawnInBowlingEvent");
		
		UVanessa_ABP_C_EndoSpawnInBowlingEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.CanDieEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UVanessa_ABP_C::CanDieEvent(bool Off)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.CanDieEvent");
		
		UVanessa_ABP_C_CanDieEvent_Params params {};
		params.Off = Off;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.CanHackEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UVanessa_ABP_C::CanHackEvent(bool Off)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.CanHackEvent");
		
		UVanessa_ABP_C_CanHackEvent_Params params {};
		params.Off = Off;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.VoAnimEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAkAudioEvent*                               AKEvent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UVanessa_ABP_C::VoAnimEvent(class UAkAudioEvent* AKEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.VoAnimEvent");
		
		UVanessa_ABP_C_VoAnimEvent_Params params {};
		params.AKEvent = AKEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.RoxyCrying
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UVanessa_ABP_C::RoxyCrying(bool Off)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.RoxyCrying");
		
		UVanessa_ABP_C_RoxyCrying_Params params {};
		params.Off = Off;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.FreddyCorrupted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UVanessa_ABP_C::FreddyCorrupted(bool Off)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.FreddyCorrupted");
		
		UVanessa_ABP_C_FreddyCorrupted_Params params {};
		params.Off = Off;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.EnterFreddyOverrideEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UVanessa_ABP_C::EnterFreddyOverrideEvent(bool Off)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.EnterFreddyOverrideEvent");
		
		UVanessa_ABP_C_EnterFreddyOverrideEvent_Params params {};
		params.Off = Off;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.CanLeapEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UVanessa_ABP_C::CanLeapEvent(bool Off)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.CanLeapEvent");
		
		UVanessa_ABP_C_CanLeapEvent_Params params {};
		params.Off = Off;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.CanLieDownEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OnOff                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UVanessa_ABP_C::CanLieDownEvent(bool OnOff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.CanLieDownEvent");
		
		UVanessa_ABP_C_CanLieDownEvent_Params params {};
		params.OnOff = OnOff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.IsSickEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OnOff                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UVanessa_ABP_C::IsSickEvent(bool OnOff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.IsSickEvent");
		
		UVanessa_ABP_C_IsSickEvent_Params params {};
		params.OnOff = OnOff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.CanWaveEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CanWave                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UVanessa_ABP_C::CanWaveEvent(bool CanWave)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.CanWaveEvent");
		
		UVanessa_ABP_C_CanWaveEvent_Params params {};
		params.CanWave = CanWave;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.PoundDoorEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               PoundDoor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UVanessa_ABP_C::PoundDoorEvent(bool PoundDoor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.PoundDoorEvent");
		
		UVanessa_ABP_C_PoundDoorEvent_Params params {};
		params.PoundDoor = PoundDoor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.StopScan
	 * 		Flags  -> ()
	 */
	void UVanessa_ABP_C::StopScan()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.StopScan");
		
		UVanessa_ABP_C_StopScan_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.LandEvent
	 * 		Flags  -> ()
	 */
	void UVanessa_ABP_C::LandEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.LandEvent");
		
		UVanessa_ABP_C_LandEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.JumpEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CanJump                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UVanessa_ABP_C::JumpEvent(bool CanJump)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.JumpEvent");
		
		UVanessa_ABP_C_JumpEvent_Params params {};
		params.CanJump = CanJump;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.Breakthrough
	 * 		Flags  -> ()
	 */
	void UVanessa_ABP_C::Breakthrough()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.Breakthrough");
		
		UVanessa_ABP_C_Breakthrough_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.OnAnimInstanceSwap
	 * 		Flags  -> ()
	 */
	void UVanessa_ABP_C::OnAnimInstanceSwap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.OnAnimInstanceSwap");
		
		UVanessa_ABP_C_OnAnimInstanceSwap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.RummagingDoneEvent
	 * 		Flags  -> ()
	 */
	void UVanessa_ABP_C::RummagingDoneEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.RummagingDoneEvent");
		
		UVanessa_ABP_C_RummagingDoneEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.IsNotFirstPersonEvent
	 * 		Flags  -> ()
	 */
	void UVanessa_ABP_C::IsNotFirstPersonEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.IsNotFirstPersonEvent");
		
		UVanessa_ABP_C_IsNotFirstPersonEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.IsFirstPersonEvent
	 * 		Flags  -> ()
	 */
	void UVanessa_ABP_C::IsFirstPersonEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.IsFirstPersonEvent");
		
		UVanessa_ABP_C_IsFirstPersonEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.CanRummageEvent
	 * 		Flags  -> ()
	 */
	void UVanessa_ABP_C::CanRummageEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.CanRummageEvent");
		
		UVanessa_ABP_C_CanRummageEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.OpenDone
	 * 		Flags  -> ()
	 */
	void UVanessa_ABP_C::OpenDone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.OpenDone");
		
		UVanessa_ABP_C_OpenDone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.Open
	 * 		Flags  -> ()
	 */
	void UVanessa_ABP_C::Open()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.Open");
		
		UVanessa_ABP_C_Open_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.SearchingDone
	 * 		Flags  -> ()
	 */
	void UVanessa_ABP_C::SearchingDone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.SearchingDone");
		
		UVanessa_ABP_C_SearchingDone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.TurnEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              TurnDegrees                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UVanessa_ABP_C::TurnEvent(float TurnDegrees)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.TurnEvent");
		
		UVanessa_ABP_C_TurnEvent_Params params {};
		params.TurnDegrees = TurnDegrees;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.TeleportAI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UVanessa_ABP_C::TeleportAI(const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.TeleportAI");
		
		UVanessa_ABP_C_TeleportAI_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.StartMoveTo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UVanessa_ABP_C::StartMoveTo(const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.StartMoveTo");
		
		UVanessa_ABP_C_StartMoveTo_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.OnCompleted_4DA5BD5F44BC73B8F401CBAC20AA502C
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UVanessa_ABP_C::OnCompleted_4DA5BD5F44BC73B8F401CBAC20AA502C(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.OnCompleted_4DA5BD5F44BC73B8F401CBAC20AA502C");
		
		UVanessa_ABP_C_OnCompleted_4DA5BD5F44BC73B8F401CBAC20AA502C_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.OnBlendOut_4DA5BD5F44BC73B8F401CBAC20AA502C
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UVanessa_ABP_C::OnBlendOut_4DA5BD5F44BC73B8F401CBAC20AA502C(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.OnBlendOut_4DA5BD5F44BC73B8F401CBAC20AA502C");
		
		UVanessa_ABP_C_OnBlendOut_4DA5BD5F44BC73B8F401CBAC20AA502C_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.OnInterrupted_4DA5BD5F44BC73B8F401CBAC20AA502C
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UVanessa_ABP_C::OnInterrupted_4DA5BD5F44BC73B8F401CBAC20AA502C(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.OnInterrupted_4DA5BD5F44BC73B8F401CBAC20AA502C");
		
		UVanessa_ABP_C_OnInterrupted_4DA5BD5F44BC73B8F401CBAC20AA502C_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.OnNotifyBegin_4DA5BD5F44BC73B8F401CBAC20AA502C
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UVanessa_ABP_C::OnNotifyBegin_4DA5BD5F44BC73B8F401CBAC20AA502C(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.OnNotifyBegin_4DA5BD5F44BC73B8F401CBAC20AA502C");
		
		UVanessa_ABP_C_OnNotifyBegin_4DA5BD5F44BC73B8F401CBAC20AA502C_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.OnNotifyEnd_4DA5BD5F44BC73B8F401CBAC20AA502C
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UVanessa_ABP_C::OnNotifyEnd_4DA5BD5F44BC73B8F401CBAC20AA502C(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.OnNotifyEnd_4DA5BD5F44BC73B8F401CBAC20AA502C");
		
		UVanessa_ABP_C_OnNotifyEnd_4DA5BD5F44BC73B8F401CBAC20AA502C_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_LinkedAnimGraph_DC53091D4E6FCA691388C0990162EB0D
	 * 		Flags  -> ()
	 */
	void UVanessa_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_LinkedAnimGraph_DC53091D4E6FCA691388C0990162EB0D()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_LinkedAnimGraph_DC53091D4E6FCA691388C0990162EB0D");
		
		UVanessa_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_LinkedAnimGraph_DC53091D4E6FCA691388C0990162EB0D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_ModifyBone_4691D8D34D12D0F4A8B7C2A2C50984F9
	 * 		Flags  -> ()
	 */
	void UVanessa_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_ModifyBone_4691D8D34D12D0F4A8B7C2A2C50984F9()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_ModifyBone_4691D8D34D12D0F4A8B7C2A2C50984F9");
		
		UVanessa_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_ModifyBone_4691D8D34D12D0F4A8B7C2A2C50984F9_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TwoBoneIK_993BAAED4D157B0D87B48096B6529B7E
	 * 		Flags  -> ()
	 */
	void UVanessa_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TwoBoneIK_993BAAED4D157B0D87B48096B6529B7E()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TwoBoneIK_993BAAED4D157B0D87B48096B6529B7E");
		
		UVanessa_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TwoBoneIK_993BAAED4D157B0D87B48096B6529B7E_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TwoBoneIK_70F82F6E480614776ED921B7A53F28E6
	 * 		Flags  -> ()
	 */
	void UVanessa_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TwoBoneIK_70F82F6E480614776ED921B7A53F28E6()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TwoBoneIK_70F82F6E480614776ED921B7A53F28E6");
		
		UVanessa_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TwoBoneIK_70F82F6E480614776ED921B7A53F28E6_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_ModifyBone_50584A994F24F427A666108FC0674DAA
	 * 		Flags  -> ()
	 */
	void UVanessa_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_ModifyBone_50584A994F24F427A666108FC0674DAA()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_ModifyBone_50584A994F24F427A666108FC0674DAA");
		
		UVanessa_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_ModifyBone_50584A994F24F427A666108FC0674DAA_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_C926174F4DD7962A43DD818AC1EDF87A
	 * 		Flags  -> ()
	 */
	void UVanessa_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_C926174F4DD7962A43DD818AC1EDF87A()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_C926174F4DD7962A43DD818AC1EDF87A");
		
		UVanessa_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_C926174F4DD7962A43DD818AC1EDF87A_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_69CB370C4E540D69C9B9F497E8135E8A
	 * 		Flags  -> ()
	 */
	void UVanessa_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_69CB370C4E540D69C9B9F497E8135E8A()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_69CB370C4E540D69C9B9F497E8135E8A");
		
		UVanessa_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_69CB370C4E540D69C9B9F497E8135E8A_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_CD64B4ED42D901A2B093138A9A78B219
	 * 		Flags  -> ()
	 */
	void UVanessa_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_CD64B4ED42D901A2B093138A9A78B219()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_CD64B4ED42D901A2B093138A9A78B219");
		
		UVanessa_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_CD64B4ED42D901A2B093138A9A78B219_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_BC3C93B8414987FAB2DAF783C900B253
	 * 		Flags  -> ()
	 */
	void UVanessa_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_BC3C93B8414987FAB2DAF783C900B253()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_BC3C93B8414987FAB2DAF783C900B253");
		
		UVanessa_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_BC3C93B8414987FAB2DAF783C900B253_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_98CC3A6B46CD0A3E1DD39F843685C7EC
	 * 		Flags  -> ()
	 */
	void UVanessa_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_98CC3A6B46CD0A3E1DD39F843685C7EC()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_98CC3A6B46CD0A3E1DD39F843685C7EC");
		
		UVanessa_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_98CC3A6B46CD0A3E1DD39F843685C7EC_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_9F44644A42CF6825D540EAA16268FF3F
	 * 		Flags  -> ()
	 */
	void UVanessa_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_9F44644A42CF6825D540EAA16268FF3F()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_9F44644A42CF6825D540EAA16268FF3F");
		
		UVanessa_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_9F44644A42CF6825D540EAA16268FF3F_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_636B335844F5B28EA90431B77829735C
	 * 		Flags  -> ()
	 */
	void UVanessa_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_636B335844F5B28EA90431B77829735C()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_636B335844F5B28EA90431B77829735C");
		
		UVanessa_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_636B335844F5B28EA90431B77829735C_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_56208E724ECE0F7C29BE1B91ECBFE3C1
	 * 		Flags  -> ()
	 */
	void UVanessa_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_56208E724ECE0F7C29BE1B91ECBFE3C1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_56208E724ECE0F7C29BE1B91ECBFE3C1");
		
		UVanessa_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_56208E724ECE0F7C29BE1B91ECBFE3C1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_7298042A40BE2E43A86B7392E6F9AB5B
	 * 		Flags  -> ()
	 */
	void UVanessa_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_7298042A40BE2E43A86B7392E6F9AB5B()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_7298042A40BE2E43A86B7392E6F9AB5B");
		
		UVanessa_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_7298042A40BE2E43A86B7392E6F9AB5B_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_623EE7424106F4C2D9D6158DCCF8DDA4
	 * 		Flags  -> ()
	 */
	void UVanessa_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_623EE7424106F4C2D9D6158DCCF8DDA4()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_623EE7424106F4C2D9D6158DCCF8DDA4");
		
		UVanessa_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_623EE7424106F4C2D9D6158DCCF8DDA4_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_E50FDA3D49E6F7319331B29D18CE9FCF
	 * 		Flags  -> ()
	 */
	void UVanessa_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_E50FDA3D49E6F7319331B29D18CE9FCF()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_E50FDA3D49E6F7319331B29D18CE9FCF");
		
		UVanessa_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_E50FDA3D49E6F7319331B29D18CE9FCF_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_BCDBC404418D84D37FF9A2A31D6EBAD7
	 * 		Flags  -> ()
	 */
	void UVanessa_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_BCDBC404418D84D37FF9A2A31D6EBAD7()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_BCDBC404418D84D37FF9A2A31D6EBAD7");
		
		UVanessa_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_BCDBC404418D84D37FF9A2A31D6EBAD7_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_FE7403C249C5DE46A7F19E9497EE2321
	 * 		Flags  -> ()
	 */
	void UVanessa_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_FE7403C249C5DE46A7F19E9497EE2321()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_FE7403C249C5DE46A7F19E9497EE2321");
		
		UVanessa_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_FE7403C249C5DE46A7F19E9497EE2321_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_7E5F755341809FE4E93AF385201F6A94
	 * 		Flags  -> ()
	 */
	void UVanessa_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_7E5F755341809FE4E93AF385201F6A94()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_7E5F755341809FE4E93AF385201F6A94");
		
		UVanessa_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_7E5F755341809FE4E93AF385201F6A94_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_3C76F8F34937EFBA0934B6A7587808DA
	 * 		Flags  -> ()
	 */
	void UVanessa_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_3C76F8F34937EFBA0934B6A7587808DA()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_3C76F8F34937EFBA0934B6A7587808DA");
		
		UVanessa_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_3C76F8F34937EFBA0934B6A7587808DA_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.BlueprintUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UVanessa_ABP_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.BlueprintUpdateAnimation");
		
		UVanessa_ABP_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.BlueprintBeginPlay
	 * 		Flags  -> ()
	 */
	void UVanessa_ABP_C::BlueprintBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.BlueprintBeginPlay");
		
		UVanessa_ABP_C_BlueprintBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.IsSpottedEvent
	 * 		Flags  -> ()
	 */
	void UVanessa_ABP_C::IsSpottedEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.IsSpottedEvent");
		
		UVanessa_ABP_C_IsSpottedEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.AnimNotify_IsSpottedEvent
	 * 		Flags  -> ()
	 */
	void UVanessa_ABP_C::AnimNotify_IsSpottedEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.AnimNotify_IsSpottedEvent");
		
		UVanessa_ABP_C_AnimNotify_IsSpottedEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.SpottedTimerOverEvent
	 * 		Flags  -> ()
	 */
	void UVanessa_ABP_C::SpottedTimerOverEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.SpottedTimerOverEvent");
		
		UVanessa_ABP_C_SpottedTimerOverEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.AnimNotify_BeginWalk
	 * 		Flags  -> ()
	 */
	void UVanessa_ABP_C::AnimNotify_BeginWalk()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.AnimNotify_BeginWalk");
		
		UVanessa_ABP_C_AnimNotify_BeginWalk_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.AnimNotify_BeginRun
	 * 		Flags  -> ()
	 */
	void UVanessa_ABP_C::AnimNotify_BeginRun()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.AnimNotify_BeginRun");
		
		UVanessa_ABP_C_AnimNotify_BeginRun_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.HeadAimEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OnOff                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UVanessa_ABP_C::HeadAimEvent(bool OnOff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.HeadAimEvent");
		
		UVanessa_ABP_C_HeadAimEvent_Params params {};
		params.OnOff = OnOff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.CanJumpscareEvent
	 * 		Flags  -> ()
	 */
	void UVanessa_ABP_C::CanJumpscareEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.CanJumpscareEvent");
		
		UVanessa_ABP_C_CanJumpscareEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.StartScan
	 * 		Flags  -> ()
	 */
	void UVanessa_ABP_C::StartScan()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.StartScan");
		
		UVanessa_ABP_C_StartScan_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.Searching
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHideObjectType                                    HideType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UVanessa_ABP_C::Searching(EHideObjectType HideType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.Searching");
		
		UVanessa_ABP_C_Searching_Params params {};
		params.HideType = HideType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.SetHeadAimTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     AimLocation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UVanessa_ABP_C::SetHeadAimTarget(const struct FVector& AimLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.SetHeadAimTarget");
		
		UVanessa_ABP_C_SetHeadAimTarget_Params params {};
		params.AimLocation = AimLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.CanRunEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CanRun                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UVanessa_ABP_C::CanRunEvent(bool CanRun)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.CanRunEvent");
		
		UVanessa_ABP_C_CanRunEvent_Params params {};
		params.CanRun = CanRun;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.SendPositionalAlert
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UVanessa_ABP_C::SendPositionalAlert(const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.SendPositionalAlert");
		
		UVanessa_ABP_C_SendPositionalAlert_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.ForceJumpscarePlayer
	 * 		Flags  -> ()
	 */
	void UVanessa_ABP_C::ForceJumpscarePlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.ForceJumpscarePlayer");
		
		UVanessa_ABP_C_ForceJumpscarePlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.ScanTimerEvent
	 * 		Flags  -> ()
	 */
	void UVanessa_ABP_C::ScanTimerEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.ScanTimerEvent");
		
		UVanessa_ABP_C_ScanTimerEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.ScanWhileMoving
	 * 		Flags  -> ()
	 */
	void UVanessa_ABP_C::ScanWhileMoving()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.ScanWhileMoving");
		
		UVanessa_ABP_C_ScanWhileMoving_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.StopScanEventLocal
	 * 		Flags  -> ()
	 */
	void UVanessa_ABP_C::StopScanEventLocal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.StopScanEventLocal");
		
		UVanessa_ABP_C_StopScanEventLocal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.ForceTrackToPlayer
	 * 		Flags  -> ()
	 */
	void UVanessa_ABP_C::ForceTrackToPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.ForceTrackToPlayer");
		
		UVanessa_ABP_C_ForceTrackToPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.EndTrackToPlayer
	 * 		Flags  -> ()
	 */
	void UVanessa_ABP_C::EndTrackToPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.EndTrackToPlayer");
		
		UVanessa_ABP_C_EndTrackToPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.ForceScanStates
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OverrideScan                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               CanScan                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               CanScanL                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               CanScanR                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UVanessa_ABP_C::ForceScanStates(bool OverrideScan, bool CanScan, bool CanScanL, bool CanScanR)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.ForceScanStates");
		
		UVanessa_ABP_C_ForceScanStates_Params params {};
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
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.BlinkTimerEvent
	 * 		Flags  -> ()
	 */
	void UVanessa_ABP_C::BlinkTimerEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.BlinkTimerEvent");
		
		UVanessa_ABP_C_BlinkTimerEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.BlinkEvent
	 * 		Flags  -> ()
	 */
	void UVanessa_ABP_C::BlinkEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.BlinkEvent");
		
		UVanessa_ABP_C_BlinkEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.SendVanessaAlert
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       VanessaPawn                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UVanessa_ABP_C::SendVanessaAlert(class APawn* VanessaPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.SendVanessaAlert");
		
		UVanessa_ABP_C_SendVanessaAlert_Params params {};
		params.VanessaPawn = VanessaPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.Stun Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsStunned                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UVanessa_ABP_C::StunEvent(bool IsStunned)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.Stun Event");
		
		UVanessa_ABP_C_StunEvent_Params params {};
		params.IsStunned = IsStunned;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.AnimNotify_StunBlendComplete
	 * 		Flags  -> ()
	 */
	void UVanessa_ABP_C::AnimNotify_StunBlendComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.AnimNotify_StunBlendComplete");
		
		UVanessa_ABP_C_AnimNotify_StunBlendComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.AnimNotify_TurnOffScan
	 * 		Flags  -> ()
	 */
	void UVanessa_ABP_C::AnimNotify_TurnOffScan()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.AnimNotify_TurnOffScan");
		
		UVanessa_ABP_C_AnimNotify_TurnOffScan_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.AnimNotify_LeftFootDown
	 * 		Flags  -> ()
	 */
	void UVanessa_ABP_C::AnimNotify_LeftFootDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.AnimNotify_LeftFootDown");
		
		UVanessa_ABP_C_AnimNotify_LeftFootDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.AnimNotify_RightFootDown
	 * 		Flags  -> ()
	 */
	void UVanessa_ABP_C::AnimNotify_RightFootDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.AnimNotify_RightFootDown");
		
		UVanessa_ABP_C_AnimNotify_RightFootDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.ForceAnimOverride
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UVanessa_ABP_C::ForceAnimOverride(bool enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.ForceAnimOverride");
		
		UVanessa_ABP_C_ForceAnimOverride_Params params {};
		params.enable = enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.ExecuteUbergraph_Vanessa_ABP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UVanessa_ABP_C::ExecuteUbergraph_Vanessa_ABP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.ExecuteUbergraph_Vanessa_ABP");
		
		UVanessa_ABP_C_ExecuteUbergraph_Vanessa_ABP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVanessa_ABP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVanessa_ABP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Vanessa_ABP.Vanessa_ABP_C");
		return ptr;
	}

}


