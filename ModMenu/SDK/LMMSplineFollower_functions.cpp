// Name: FNAF Security Breach, Version: 1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function LMMSplineFollower.LMMSplineFollower_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ALMMSplineFollower_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LMMSplineFollower.LMMSplineFollower_C.ReceiveBeginPlay");

	ALMMSplineFollower_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function LMMSplineFollower.LMMSplineFollower_C.FollowSpline
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ASplinePathway_C*                            Spline_Pathway                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALMMSplineFollower_C::FollowSpline(class ASplinePathway_C* Spline_Pathway)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LMMSplineFollower.LMMSplineFollower_C.FollowSpline");

	ALMMSplineFollower_C_FollowSpline_Params params {};
	params.Spline_Pathway = Spline_Pathway;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function LMMSplineFollower.LMMSplineFollower_C.BndEvt__SplinePathwayMotionComponent_K2Node_ComponentBoundEvent_0_OnFinishedFollowingSplineDelegate__DelegateSignature
//		Flags  -> (BlueprintEvent)
void ALMMSplineFollower_C::BndEvt__SplinePathwayMotionComponent_K2Node_ComponentBoundEvent_0_OnFinishedFollowingSplineDelegate__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LMMSplineFollower.LMMSplineFollower_C.BndEvt__SplinePathwayMotionComponent_K2Node_ComponentBoundEvent_0_OnFinishedFollowingSplineDelegate__DelegateSignature");

	ALMMSplineFollower_C_BndEvt__SplinePathwayMotionComponent_K2Node_ComponentBoundEvent_0_OnFinishedFollowingSplineDelegate__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function LMMSplineFollower.LMMSplineFollower_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
//		Flags  -> (HasOutParms, BlueprintEvent)
// Parameters:
//		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void ALMMSplineFollower_C::BndEvt__Capsule_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LMMSplineFollower.LMMSplineFollower_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature");

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


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function LMMSplineFollower.LMMSplineFollower_C.PauseFollowingSpline
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ALMMSplineFollower_C::PauseFollowingSpline()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LMMSplineFollower.LMMSplineFollower_C.PauseFollowingSpline");

	ALMMSplineFollower_C_PauseFollowingSpline_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function LMMSplineFollower.LMMSplineFollower_C.ResumeFollowingSpline
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ALMMSplineFollower_C::ResumeFollowingSpline()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LMMSplineFollower.LMMSplineFollower_C.ResumeFollowingSpline");

	ALMMSplineFollower_C_ResumeFollowingSpline_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function LMMSplineFollower.LMMSplineFollower_C.ReceiveTick
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALMMSplineFollower_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LMMSplineFollower.LMMSplineFollower_C.ReceiveTick");

	ALMMSplineFollower_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function LMMSplineFollower.LMMSplineFollower_C.ExecuteUbergraph_LMMSplineFollower
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALMMSplineFollower_C::ExecuteUbergraph_LMMSplineFollower(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LMMSplineFollower.LMMSplineFollower_C.ExecuteUbergraph_LMMSplineFollower");

	ALMMSplineFollower_C_ExecuteUbergraph_LMMSplineFollower_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function LMMSplineFollower.LMMSplineFollower_C.OnSplineEndReached__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ALMMSplineFollower_C::OnSplineEndReached__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LMMSplineFollower.LMMSplineFollower_C.OnSplineEndReached__DelegateSignature");

	ALMMSplineFollower_C_OnSplineEndReached__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
