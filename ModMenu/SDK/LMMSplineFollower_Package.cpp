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
	 * 		Name   -> Function LMMSplineFollower.LMMSplineFollower_C.Completed_E29D545D43AE097D262AD79915112665
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PlayingID                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ALMMSplineFollower_C::Completed_E29D545D43AE097D262AD79915112665(int32_t PlayingID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LMMSplineFollower.LMMSplineFollower_C.Completed_E29D545D43AE097D262AD79915112665");
		
		ALMMSplineFollower_C_Completed_E29D545D43AE097D262AD79915112665_Params params {};
		params.PlayingID = PlayingID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LMMSplineFollower.LMMSplineFollower_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ALMMSplineFollower_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LMMSplineFollower.LMMSplineFollower_C.ReceiveBeginPlay");
		
		ALMMSplineFollower_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LMMSplineFollower.LMMSplineFollower_C.FollowSpline
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASplinePathway_C*                            SplinePathway                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ALMMSplineFollower_C::FollowSpline(class ASplinePathway_C* SplinePathway)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LMMSplineFollower.LMMSplineFollower_C.FollowSpline");
		
		ALMMSplineFollower_C_FollowSpline_Params params {};
		params.SplinePathway = SplinePathway;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LMMSplineFollower.LMMSplineFollower_C.BndEvt__SplinePathwayMotionComponent_K2Node_ComponentBoundEvent_0_OnFinishedFollowingSplineDelegate__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ALMMSplineFollower_C::BndEvt__SplinePathwayMotionComponent_K2Node_ComponentBoundEvent_0_OnFinishedFollowingSplineDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LMMSplineFollower.LMMSplineFollower_C.BndEvt__SplinePathwayMotionComponent_K2Node_ComponentBoundEvent_0_OnFinishedFollowingSplineDelegate__DelegateSignature");
		
		ALMMSplineFollower_C_BndEvt__SplinePathwayMotionComponent_K2Node_ComponentBoundEvent_0_OnFinishedFollowingSplineDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LMMSplineFollower.LMMSplineFollower_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ALMMSplineFollower_C::BndEvt__Capsule_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LMMSplineFollower.LMMSplineFollower_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature");
		
		ALMMSplineFollower_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LMMSplineFollower.LMMSplineFollower_C.PauseFollowingSpline
	 * 		Flags  -> ()
	 */
	void ALMMSplineFollower_C::PauseFollowingSpline()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LMMSplineFollower.LMMSplineFollower_C.PauseFollowingSpline");
		
		ALMMSplineFollower_C_PauseFollowingSpline_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LMMSplineFollower.LMMSplineFollower_C.ResumeFollowingSpline
	 * 		Flags  -> ()
	 */
	void ALMMSplineFollower_C::ResumeFollowingSpline()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LMMSplineFollower.LMMSplineFollower_C.ResumeFollowingSpline");
		
		ALMMSplineFollower_C_ResumeFollowingSpline_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LMMSplineFollower.LMMSplineFollower_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ALMMSplineFollower_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LMMSplineFollower.LMMSplineFollower_C.ReceiveTick");
		
		ALMMSplineFollower_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LMMSplineFollower.LMMSplineFollower_C.RandomFootstepsWhenOffCamera
	 * 		Flags  -> ()
	 */
	void ALMMSplineFollower_C::RandomFootstepsWhenOffCamera()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LMMSplineFollower.LMMSplineFollower_C.RandomFootstepsWhenOffCamera");
		
		ALMMSplineFollower_C_RandomFootstepsWhenOffCamera_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LMMSplineFollower.LMMSplineFollower_C.JumpscareEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Gregory                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ALMMSplineFollower_C::JumpscareEvent(class AActor* Gregory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LMMSplineFollower.LMMSplineFollower_C.JumpscareEvent");
		
		ALMMSplineFollower_C_JumpscareEvent_Params params {};
		params.Gregory = Gregory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LMMSplineFollower.LMMSplineFollower_C.BndEvt__LMMSplineFollower_SplinePathwayMotionComponent_K2Node_ComponentBoundEvent_1_OnFinishedFollowingSplineDelegate__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ALMMSplineFollower_C::BndEvt__LMMSplineFollower_SplinePathwayMotionComponent_K2Node_ComponentBoundEvent_1_OnFinishedFollowingSplineDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LMMSplineFollower.LMMSplineFollower_C.BndEvt__LMMSplineFollower_SplinePathwayMotionComponent_K2Node_ComponentBoundEvent_1_OnFinishedFollowingSplineDelegate__DelegateSignature");
		
		ALMMSplineFollower_C_BndEvt__LMMSplineFollower_SplinePathwayMotionComponent_K2Node_ComponentBoundEvent_1_OnFinishedFollowingSplineDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LMMSplineFollower.LMMSplineFollower_C.ExecuteUbergraph_LMMSplineFollower
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ALMMSplineFollower_C::ExecuteUbergraph_LMMSplineFollower(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LMMSplineFollower.LMMSplineFollower_C.ExecuteUbergraph_LMMSplineFollower");
		
		ALMMSplineFollower_C_ExecuteUbergraph_LMMSplineFollower_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LMMSplineFollower.LMMSplineFollower_C.OnSplineEndReached__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ALMMSplineFollower_C::OnSplineEndReached__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LMMSplineFollower.LMMSplineFollower_C.OnSplineEndReached__DelegateSignature");
		
		ALMMSplineFollower_C_OnSplineEndReached__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ALMMSplineFollower_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALMMSplineFollower_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LMMSplineFollower.LMMSplineFollower_C");
		return ptr;
	}

}


