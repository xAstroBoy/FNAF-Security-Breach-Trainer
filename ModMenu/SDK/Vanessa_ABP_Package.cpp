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
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.CanReceiveAlert
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.IsShatteredVersion
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.GetCurrentPathName
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.GetManagedAIType
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	fnaf9_EFNAFAISpawnType UVanessa_ABP_C::GetManagedAIType()
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.footstep
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.HeadAimFunction
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.ApplyControlRotation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.Procedural Scan 
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UVanessa_ABP_C::Procedural_Scan_()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.Procedural Scan ");
		
		UVanessa_ABP_C_Procedural_Scan__Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.Perform Scan Trace
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsRight                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		Engine_EDrawDebugTrace                             DrawDebugType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UVanessa_ABP_C::Perform_Scan_Trace(bool IsRight, Engine_EDrawDebugTrace DrawDebugType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.Perform Scan Trace");
		
		UVanessa_ABP_C_Perform_Scan_Trace_Params params {};
		params.IsRight = IsRight;
		params.DrawDebugType = DrawDebugType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.Perform Foot IK
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsRightFoot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		Engine_EDrawDebugTrace                             DrawDebugType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UVanessa_ABP_C::Perform_Foot_IK(bool IsRightFoot, Engine_EDrawDebugTrace DrawDebugType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.Perform Foot IK");
		
		UVanessa_ABP_C_Perform_Foot_IK_Params params {};
		params.IsRightFoot = IsRightFoot;
		params.DrawDebugType = DrawDebugType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.OnNotifyEnd_4DA5BD5F44BC73B8F401CBAC20AA502C
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.OnNotifyBegin_4DA5BD5F44BC73B8F401CBAC20AA502C
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.OnInterrupted_4DA5BD5F44BC73B8F401CBAC20AA502C
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.OnBlendOut_4DA5BD5F44BC73B8F401CBAC20AA502C
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.OnCompleted_4DA5BD5F44BC73B8F401CBAC20AA502C
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_C926174F4DD7962A43DD818AC1EDF87A
	 * 		Flags  -> (BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.Spotlight Aim Actor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      AimActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UVanessa_ABP_C::Spotlight_Aim_Actor(class AActor* AimActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.Spotlight Aim Actor");
		
		UVanessa_ABP_C_Spotlight_Aim_Actor_Params params {};
		params.AimActor = AimActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.CutsceneGrateEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.CutSceneSpineBlender
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.FreddyEndIdle
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_69CB370C4E540D69C9B9F497E8135E8A
	 * 		Flags  -> (BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.UpdateLeapInfo
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.LeapLoopEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.EndoBowlingCrawlEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.EndoSpawnInBowlingEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_CD64B4ED42D901A2B093138A9A78B219
	 * 		Flags  -> (BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.CanDieEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.CanHackEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.VoAnimEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAkAudioEvent*                               AK_Event                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UVanessa_ABP_C::VoAnimEvent(class UAkAudioEvent* AK_Event)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.VoAnimEvent");
		
		UVanessa_ABP_C_VoAnimEvent_Params params {};
		params.AK_Event = AK_Event;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.RoxyCrying
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.FreddyCorrupted
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_3C76F8F34937EFBA0934B6A7587808DA
	 * 		Flags  -> (BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.EnterFreddyOverrideEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.CanLeapEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.CanLieDownEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.IsSickEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.CanWaveEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.PoundDoorEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_ModifyBone_4691D8D34D12D0F4A8B7C2A2C50984F9
	 * 		Flags  -> (BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TwoBoneIK_993BAAED4D157B0D87B48096B6529B7E
	 * 		Flags  -> (BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TwoBoneIK_70F82F6E480614776ED921B7A53F28E6
	 * 		Flags  -> (BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_ModifyBone_50584A994F24F427A666108FC0674DAA
	 * 		Flags  -> (BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_LinkedAnimGraph_DC53091D4E6FCA691388C0990162EB0D
	 * 		Flags  -> (BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.StopScan
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.LandEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.JumpEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.Breakthrough
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_BC3C93B8414987FAB2DAF783C900B253
	 * 		Flags  -> (BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.OnAnimInstanceSwap
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.RummagingDoneEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.IsNotFirstPersonEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.IsFirstPersonEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.CanRummageEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.OpenDone
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.Open
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.SearchingDone
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.TurnEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.TeleportAI
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.StartMoveTo
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_98CC3A6B46CD0A3E1DD39F843685C7EC
	 * 		Flags  -> (BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.SendPositionalAlert
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_7E5F755341809FE4E93AF385201F6A94
	 * 		Flags  -> (BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_9F44644A42CF6825D540EAA16268FF3F
	 * 		Flags  -> (BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_FE7403C249C5DE46A7F19E9497EE2321
	 * 		Flags  -> (BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_BCDBC404418D84D37FF9A2A31D6EBAD7
	 * 		Flags  -> (BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_636B335844F5B28EA90431B77829735C
	 * 		Flags  -> (BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_56208E724ECE0F7C29BE1B91ECBFE3C1
	 * 		Flags  -> (BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.BlueprintBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.IsSpottedEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.AnimNotify_IsSpottedEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.SpottedTimerOverEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_7298042A40BE2E43A86B7392E6F9AB5B
	 * 		Flags  -> (BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.AnimNotify_BeginWalk
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.AnimNotify_BeginRun
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.HeadAimEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.CanJumpscareEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.StartScan
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.Searching
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		fnaf9_EHideObjectType                              Hide_Type                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UVanessa_ABP_C::Searching(fnaf9_EHideObjectType Hide_Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.Searching");
		
		UVanessa_ABP_C_Searching_Params params {};
		params.Hide_Type = Hide_Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.SetHeadAimTarget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.CanRunEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.ScanTimerEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.ScanWhileMoving
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.StopScanEventLocal
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.ForceTrackToPlayer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.EndTrackToPlayer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.ForceScanStates
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_623EE7424106F4C2D9D6158DCCF8DDA4
	 * 		Flags  -> (BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.BlinkTimerEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.BlinkEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_E50FDA3D49E6F7319331B29D18CE9FCF
	 * 		Flags  -> (BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.SendVanessaAlert
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.Stun Event
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Is_Stunned                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UVanessa_ABP_C::Stun_Event(bool Is_Stunned)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa_ABP.Vanessa_ABP_C.Stun Event");
		
		UVanessa_ABP_C_Stun_Event_Params params {};
		params.Is_Stunned = Is_Stunned;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.AnimNotify_StunBlendComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.AnimNotify_TurnOffScan
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.AnimNotify_LeftFootDown
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.AnimNotify_RightFootDown
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.ForceAnimOverride
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Vanessa_ABP.Vanessa_ABP_C.ExecuteUbergraph_Vanessa_ABP
	 * 		Flags  -> (Final, HasDefaults)
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
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVanessa_ABP_C.StaticClass
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


