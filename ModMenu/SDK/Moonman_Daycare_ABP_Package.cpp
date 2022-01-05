/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "Moonman_Daycare_ABP_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UMoonman_Daycare_ABP_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.AnimGraph");
		
		UMoonman_Daycare_ABP_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.LineTraceForOrientation
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        InSocketName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     StartOffset                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     EndOffset                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TEnumAsByte<Engine_EDrawDebugTrace>                DrawDebugType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FHitResult>                          OutHits                                                    (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
	 */
	bool UMoonman_Daycare_ABP_C::LineTraceForOrientation(const class FName& InSocketName, const struct FVector& StartOffset, const struct FVector& EndOffset, TEnumAsByte<Engine_EDrawDebugTrace> DrawDebugType, TArray<struct FHitResult>* OutHits)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.LineTraceForOrientation");
		
		UMoonman_Daycare_ABP_C_LineTraceForOrientation_Params params {};
		params.InSocketName = InSocketName;
		params.StartOffset = StartOffset;
		params.EndOffset = EndOffset;
		params.DrawDebugType = DrawDebugType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutHits != nullptr)
			*OutHits = params.OutHits;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.LineTraceForIK
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        InSocketName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     StartOffset                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     EndOffset                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TEnumAsByte<Engine_EDrawDebugTrace>                DrawDebugType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  OutHit                                                     (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	bool UMoonman_Daycare_ABP_C::LineTraceForIK(const class FName& InSocketName, const struct FVector& StartOffset, const struct FVector& EndOffset, TEnumAsByte<Engine_EDrawDebugTrace> DrawDebugType, struct FHitResult* OutHit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.LineTraceForIK");
		
		UMoonman_Daycare_ABP_C_LineTraceForIK_Params params {};
		params.InSocketName = InSocketName;
		params.StartOffset = StartOffset;
		params.EndOffset = EndOffset;
		params.DrawDebugType = DrawDebugType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutHit != nullptr)
			*OutHit = params.OutHit;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.FreddyEndIdle
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMoonman_Daycare_ABP_C::FreddyEndIdle(bool Off)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.FreddyEndIdle");
		
		UMoonman_Daycare_ABP_C_FreddyEndIdle_Params params {};
		params.Off = Off;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.CutSceneSpineBlender
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class ULevelSequencePlayer*                        Sequence                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMoonman_Daycare_ABP_C::CutSceneSpineBlender(bool Off, class ULevelSequencePlayer* Sequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.CutSceneSpineBlender");
		
		UMoonman_Daycare_ABP_C_CutSceneSpineBlender_Params params {};
		params.Off = Off;
		params.Sequence = Sequence;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Moonman_Daycare_ABP_AnimGraphNode_TransitionResult_C82573104A0C2721E49FF7A141C0BE1F
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UMoonman_Daycare_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Moonman_Daycare_ABP_AnimGraphNode_TransitionResult_C82573104A0C2721E49FF7A141C0BE1F()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Moonman_Daycare_ABP_AnimGraphNode_TransitionResult_C82573104A0C2721E49FF7A141C0BE1F");
		
		UMoonman_Daycare_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Moonman_Daycare_ABP_AnimGraphNode_TransitionResult_C82573104A0C2721E49FF7A141C0BE1F_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.UpdateLeapInfo
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     ActorLocation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Destination                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Distance                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMoonman_Daycare_ABP_C::UpdateLeapInfo(const struct FVector& ActorLocation, const struct FVector& Destination, float Distance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.UpdateLeapInfo");
		
		UMoonman_Daycare_ABP_C_UpdateLeapInfo_Params params {};
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
	 * 		Name   -> Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Moonman_Daycare_ABP_AnimGraphNode_TransitionResult_479407CF4241F7EF8239B0969719ED44
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UMoonman_Daycare_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Moonman_Daycare_ABP_AnimGraphNode_TransitionResult_479407CF4241F7EF8239B0969719ED44()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Moonman_Daycare_ABP_AnimGraphNode_TransitionResult_479407CF4241F7EF8239B0969719ED44");
		
		UMoonman_Daycare_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Moonman_Daycare_ABP_AnimGraphNode_TransitionResult_479407CF4241F7EF8239B0969719ED44_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.LeapLoopEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMoonman_Daycare_ABP_C::LeapLoopEvent(bool Off)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.LeapLoopEvent");
		
		UMoonman_Daycare_ABP_C_LeapLoopEvent_Params params {};
		params.Off = Off;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.EndoBowlingCrawlEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UMoonman_Daycare_ABP_C::EndoBowlingCrawlEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.EndoBowlingCrawlEvent");
		
		UMoonman_Daycare_ABP_C_EndoBowlingCrawlEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.EndoSpawnInBowlingEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UMoonman_Daycare_ABP_C::EndoSpawnInBowlingEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.EndoSpawnInBowlingEvent");
		
		UMoonman_Daycare_ABP_C_EndoSpawnInBowlingEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.CanDieEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMoonman_Daycare_ABP_C::CanDieEvent(bool Off)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.CanDieEvent");
		
		UMoonman_Daycare_ABP_C_CanDieEvent_Params params {};
		params.Off = Off;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.CanHackEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMoonman_Daycare_ABP_C::CanHackEvent(bool Off)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.CanHackEvent");
		
		UMoonman_Daycare_ABP_C_CanHackEvent_Params params {};
		params.Off = Off;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.VoAnimEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAkAudioEvent*                               AK_Event                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMoonman_Daycare_ABP_C::VoAnimEvent(class UAkAudioEvent* AK_Event)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.VoAnimEvent");
		
		UMoonman_Daycare_ABP_C_VoAnimEvent_Params params {};
		params.AK_Event = AK_Event;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.RoxyCrying
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMoonman_Daycare_ABP_C::RoxyCrying(bool Off)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.RoxyCrying");
		
		UMoonman_Daycare_ABP_C_RoxyCrying_Params params {};
		params.Off = Off;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.FreddyCorrupted
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMoonman_Daycare_ABP_C::FreddyCorrupted(bool Off)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.FreddyCorrupted");
		
		UMoonman_Daycare_ABP_C_FreddyCorrupted_Params params {};
		params.Off = Off;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.ForceAnimOverride
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMoonman_Daycare_ABP_C::ForceAnimOverride(bool enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.ForceAnimOverride");
		
		UMoonman_Daycare_ABP_C_ForceAnimOverride_Params params {};
		params.enable = enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.EnterFreddyOverrideEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMoonman_Daycare_ABP_C::EnterFreddyOverrideEvent(bool Off)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.EnterFreddyOverrideEvent");
		
		UMoonman_Daycare_ABP_C_EnterFreddyOverrideEvent_Params params {};
		params.Off = Off;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Moonman_Daycare_ABP_AnimGraphNode_TransitionResult_B8F527D748FC1E0438253396F91786A7
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UMoonman_Daycare_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Moonman_Daycare_ABP_AnimGraphNode_TransitionResult_B8F527D748FC1E0438253396F91786A7()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Moonman_Daycare_ABP_AnimGraphNode_TransitionResult_B8F527D748FC1E0438253396F91786A7");
		
		UMoonman_Daycare_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Moonman_Daycare_ABP_AnimGraphNode_TransitionResult_B8F527D748FC1E0438253396F91786A7_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Moonman_Daycare_ABP_AnimGraphNode_TransitionResult_1C593DE44B2619381E58F6BB2A08CDA3
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UMoonman_Daycare_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Moonman_Daycare_ABP_AnimGraphNode_TransitionResult_1C593DE44B2619381E58F6BB2A08CDA3()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Moonman_Daycare_ABP_AnimGraphNode_TransitionResult_1C593DE44B2619381E58F6BB2A08CDA3");
		
		UMoonman_Daycare_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Moonman_Daycare_ABP_AnimGraphNode_TransitionResult_1C593DE44B2619381E58F6BB2A08CDA3_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.CanLeapEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMoonman_Daycare_ABP_C::CanLeapEvent(bool Off)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.CanLeapEvent");
		
		UMoonman_Daycare_ABP_C_CanLeapEvent_Params params {};
		params.Off = Off;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.CanLieDownEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               OnOff                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMoonman_Daycare_ABP_C::CanLieDownEvent(bool OnOff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.CanLieDownEvent");
		
		UMoonman_Daycare_ABP_C_CanLieDownEvent_Params params {};
		params.OnOff = OnOff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Moonman_Daycare_ABP_AnimGraphNode_TransitionResult_7129D59D4B79FB26C3FDC7BA9036F7E3
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UMoonman_Daycare_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Moonman_Daycare_ABP_AnimGraphNode_TransitionResult_7129D59D4B79FB26C3FDC7BA9036F7E3()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Moonman_Daycare_ABP_AnimGraphNode_TransitionResult_7129D59D4B79FB26C3FDC7BA9036F7E3");
		
		UMoonman_Daycare_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Moonman_Daycare_ABP_AnimGraphNode_TransitionResult_7129D59D4B79FB26C3FDC7BA9036F7E3_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.IsSickEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               OnOff                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMoonman_Daycare_ABP_C::IsSickEvent(bool OnOff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.IsSickEvent");
		
		UMoonman_Daycare_ABP_C_IsSickEvent_Params params {};
		params.OnOff = OnOff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.CanWaveEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CanWave                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMoonman_Daycare_ABP_C::CanWaveEvent(bool CanWave)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.CanWaveEvent");
		
		UMoonman_Daycare_ABP_C_CanWaveEvent_Params params {};
		params.CanWave = CanWave;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Moonman_Daycare_ABP_AnimGraphNode_TransitionResult_35C602E145D3DEC16DB5C9ADB9C6F6FF
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UMoonman_Daycare_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Moonman_Daycare_ABP_AnimGraphNode_TransitionResult_35C602E145D3DEC16DB5C9ADB9C6F6FF()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Moonman_Daycare_ABP_AnimGraphNode_TransitionResult_35C602E145D3DEC16DB5C9ADB9C6F6FF");
		
		UMoonman_Daycare_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Moonman_Daycare_ABP_AnimGraphNode_TransitionResult_35C602E145D3DEC16DB5C9ADB9C6F6FF_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.PoundDoorEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               PoundDoor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMoonman_Daycare_ABP_C::PoundDoorEvent(bool PoundDoor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.PoundDoorEvent");
		
		UMoonman_Daycare_ABP_C_PoundDoorEvent_Params params {};
		params.PoundDoor = PoundDoor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.StopScan
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UMoonman_Daycare_ABP_C::StopScan()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.StopScan");
		
		UMoonman_Daycare_ABP_C_StopScan_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Moonman_Daycare_ABP_AnimGraphNode_TransitionResult_EE3F8781470BCC1A5918FFAF95357165
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UMoonman_Daycare_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Moonman_Daycare_ABP_AnimGraphNode_TransitionResult_EE3F8781470BCC1A5918FFAF95357165()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Moonman_Daycare_ABP_AnimGraphNode_TransitionResult_EE3F8781470BCC1A5918FFAF95357165");
		
		UMoonman_Daycare_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Moonman_Daycare_ABP_AnimGraphNode_TransitionResult_EE3F8781470BCC1A5918FFAF95357165_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.LandEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UMoonman_Daycare_ABP_C::LandEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.LandEvent");
		
		UMoonman_Daycare_ABP_C_LandEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.JumpEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CanJump                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMoonman_Daycare_ABP_C::JumpEvent(bool CanJump)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.JumpEvent");
		
		UMoonman_Daycare_ABP_C_JumpEvent_Params params {};
		params.CanJump = CanJump;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.ForceScanStates
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               OverrideScan                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               CanScan                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               CanScanL                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               CanScanR                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMoonman_Daycare_ABP_C::ForceScanStates(bool OverrideScan, bool CanScan, bool CanScanL, bool CanScanR)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.ForceScanStates");
		
		UMoonman_Daycare_ABP_C_ForceScanStates_Params params {};
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
	 * 		Name   -> Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.Breakthrough
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UMoonman_Daycare_ABP_C::Breakthrough()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.Breakthrough");
		
		UMoonman_Daycare_ABP_C_Breakthrough_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.OnAnimInstanceSwap
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UMoonman_Daycare_ABP_C::OnAnimInstanceSwap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.OnAnimInstanceSwap");
		
		UMoonman_Daycare_ABP_C_OnAnimInstanceSwap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.RummagingDoneEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UMoonman_Daycare_ABP_C::RummagingDoneEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.RummagingDoneEvent");
		
		UMoonman_Daycare_ABP_C_RummagingDoneEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.IsNotFirstPersonEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UMoonman_Daycare_ABP_C::IsNotFirstPersonEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.IsNotFirstPersonEvent");
		
		UMoonman_Daycare_ABP_C_IsNotFirstPersonEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.IsFirstPersonEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UMoonman_Daycare_ABP_C::IsFirstPersonEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.IsFirstPersonEvent");
		
		UMoonman_Daycare_ABP_C_IsFirstPersonEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.CanRummageEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UMoonman_Daycare_ABP_C::CanRummageEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.CanRummageEvent");
		
		UMoonman_Daycare_ABP_C_CanRummageEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.Stun Event
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Is_Stunned                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMoonman_Daycare_ABP_C::Stun_Event(bool Is_Stunned)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.Stun Event");
		
		UMoonman_Daycare_ABP_C_Stun_Event_Params params {};
		params.Is_Stunned = Is_Stunned;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.CanRunEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CanRun                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMoonman_Daycare_ABP_C::CanRunEvent(bool CanRun)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.CanRunEvent");
		
		UMoonman_Daycare_ABP_C_CanRunEvent_Params params {};
		params.CanRun = CanRun;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.StartScan
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UMoonman_Daycare_ABP_C::StartScan()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.StartScan");
		
		UMoonman_Daycare_ABP_C_StartScan_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Moonman_Daycare_ABP_AnimGraphNode_ModifyBone_6A7DF53B433FB2358918EA8C14AE6181
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UMoonman_Daycare_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Moonman_Daycare_ABP_AnimGraphNode_ModifyBone_6A7DF53B433FB2358918EA8C14AE6181()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Moonman_Daycare_ABP_AnimGraphNode_ModifyBone_6A7DF53B433FB2358918EA8C14AE6181");
		
		UMoonman_Daycare_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Moonman_Daycare_ABP_AnimGraphNode_ModifyBone_6A7DF53B433FB2358918EA8C14AE6181_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.SetHeadAimTarget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     AimLocation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMoonman_Daycare_ABP_C::SetHeadAimTarget(const struct FVector& AimLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.SetHeadAimTarget");
		
		UMoonman_Daycare_ABP_C_SetHeadAimTarget_Params params {};
		params.AimLocation = AimLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.OpenDone
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UMoonman_Daycare_ABP_C::OpenDone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.OpenDone");
		
		UMoonman_Daycare_ABP_C_OpenDone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.Open
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UMoonman_Daycare_ABP_C::Open()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.Open");
		
		UMoonman_Daycare_ABP_C_Open_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.SearchingDone
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UMoonman_Daycare_ABP_C::SearchingDone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.SearchingDone");
		
		UMoonman_Daycare_ABP_C_SearchingDone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.Searching
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		fnaf9_EHideObjectType                              Hide_Type                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMoonman_Daycare_ABP_C::Searching(fnaf9_EHideObjectType Hide_Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.Searching");
		
		UMoonman_Daycare_ABP_C_Searching_Params params {};
		params.Hide_Type = Hide_Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.TurnEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              TurnDegrees                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMoonman_Daycare_ABP_C::TurnEvent(float TurnDegrees)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.TurnEvent");
		
		UMoonman_Daycare_ABP_C_TurnEvent_Params params {};
		params.TurnDegrees = TurnDegrees;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.HeadAimEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               OnOff                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMoonman_Daycare_ABP_C::HeadAimEvent(bool OnOff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.HeadAimEvent");
		
		UMoonman_Daycare_ABP_C_HeadAimEvent_Params params {};
		params.OnOff = OnOff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.CutsceneGrateEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ULevelSequencePlayer*                        SequencePlayer                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMoonman_Daycare_ABP_C::CutsceneGrateEvent(class ULevelSequencePlayer* SequencePlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.CutsceneGrateEvent");
		
		UMoonman_Daycare_ABP_C_CutsceneGrateEvent_Params params {};
		params.SequencePlayer = SequencePlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMoonman_Daycare_ABP_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.BlueprintUpdateAnimation");
		
		UMoonman_Daycare_ABP_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.CanJumpscareEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UMoonman_Daycare_ABP_C::CanJumpscareEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.CanJumpscareEvent");
		
		UMoonman_Daycare_ABP_C_CanJumpscareEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.PanicEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isPanic                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMoonman_Daycare_ABP_C::PanicEvent(bool isPanic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.PanicEvent");
		
		UMoonman_Daycare_ABP_C_PanicEvent_Params params {};
		params.isPanic = isPanic;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.IsPhase2_Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isPhase2                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMoonman_Daycare_ABP_C::IsPhase2_Event(bool isPhase2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.IsPhase2_Event");
		
		UMoonman_Daycare_ABP_C_IsPhase2_Event_Params params {};
		params.isPhase2 = isPhase2;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.IsInTubesEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsInTubes                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMoonman_Daycare_ABP_C::IsInTubesEvent(bool IsInTubes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.IsInTubesEvent");
		
		UMoonman_Daycare_ABP_C_IsInTubesEvent_Params params {};
		params.IsInTubes = IsInTubes;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.IsBlockingPlayer_Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isBlockingPlayer                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMoonman_Daycare_ABP_C::IsBlockingPlayer_Event(bool isBlockingPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.IsBlockingPlayer_Event");
		
		UMoonman_Daycare_ABP_C_IsBlockingPlayer_Event_Params params {};
		params.isBlockingPlayer = isBlockingPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.ForceWalkEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ForceWalk                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMoonman_Daycare_ABP_C::ForceWalkEvent(bool ForceWalk)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.ForceWalkEvent");
		
		UMoonman_Daycare_ABP_C_ForceWalkEvent_Params params {};
		params.ForceWalk = ForceWalk;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.IscarryingPlayer_EVENT
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isCarryingPlayer                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMoonman_Daycare_ABP_C::IscarryingPlayer_EVENT(bool isCarryingPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.IscarryingPlayer_EVENT");
		
		UMoonman_Daycare_ABP_C_IscarryingPlayer_EVENT_Params params {};
		params.isCarryingPlayer = isCarryingPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Moonman_Daycare_ABP_AnimGraphNode_TransitionResult_7E9541D441FDC2825D6C088D584F8F2B
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UMoonman_Daycare_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Moonman_Daycare_ABP_AnimGraphNode_TransitionResult_7E9541D441FDC2825D6C088D584F8F2B()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Moonman_Daycare_ABP_AnimGraphNode_TransitionResult_7E9541D441FDC2825D6C088D584F8F2B");
		
		UMoonman_Daycare_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Moonman_Daycare_ABP_AnimGraphNode_TransitionResult_7E9541D441FDC2825D6C088D584F8F2B_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.Spotlight Aim Actor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      AimActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMoonman_Daycare_ABP_C::Spotlight_Aim_Actor(class AActor* AimActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.Spotlight Aim Actor");
		
		UMoonman_Daycare_ABP_C_Spotlight_Aim_Actor_Params params {};
		params.AimActor = AimActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.AnimNotify_CableDownEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UMoonman_Daycare_ABP_C::AnimNotify_CableDownEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.AnimNotify_CableDownEvent");
		
		UMoonman_Daycare_ABP_C_AnimNotify_CableDownEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.AnimNotify_CableUpEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UMoonman_Daycare_ABP_C::AnimNotify_CableUpEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.AnimNotify_CableUpEvent");
		
		UMoonman_Daycare_ABP_C_AnimNotify_CableUpEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.ExecuteUbergraph_Moonman_Daycare_ABP
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMoonman_Daycare_ABP_C::ExecuteUbergraph_Moonman_Daycare_ABP(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.ExecuteUbergraph_Moonman_Daycare_ABP");
		
		UMoonman_Daycare_ABP_C_ExecuteUbergraph_Moonman_Daycare_ABP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMoonman_Daycare_ABP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMoonman_Daycare_ABP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Moonman_Daycare_ABP.Moonman_Daycare_ABP_C");
		return ptr;
	}

}


