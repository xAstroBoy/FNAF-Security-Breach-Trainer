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
//		Name   -> Function PlayerSlidePawn.PlayerSlidePawn_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void APlayerSlidePawn_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerSlidePawn.PlayerSlidePawn_C.ReceiveBeginPlay");

	APlayerSlidePawn_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlayerSlidePawn.PlayerSlidePawn_C.BndEvt__SplineFollowMovement_K2Node_ComponentBoundEvent_0_OnFinishedFollowingSplineDelegate__DelegateSignature
//		Flags  -> (BlueprintEvent)
void APlayerSlidePawn_C::BndEvt__SplineFollowMovement_K2Node_ComponentBoundEvent_0_OnFinishedFollowingSplineDelegate__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerSlidePawn.PlayerSlidePawn_C.BndEvt__SplineFollowMovement_K2Node_ComponentBoundEvent_0_OnFinishedFollowingSplineDelegate__DelegateSignature");

	APlayerSlidePawn_C_BndEvt__SplineFollowMovement_K2Node_ComponentBoundEvent_0_OnFinishedFollowingSplineDelegate__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlayerSlidePawn.PlayerSlidePawn_C.ExecuteUbergraph_PlayerSlidePawn
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APlayerSlidePawn_C::ExecuteUbergraph_PlayerSlidePawn(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerSlidePawn.PlayerSlidePawn_C.ExecuteUbergraph_PlayerSlidePawn");

	APlayerSlidePawn_C_ExecuteUbergraph_PlayerSlidePawn_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlayerSlidePawn.PlayerSlidePawn_C.OnFinishedFollowingSpline__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void APlayerSlidePawn_C::OnFinishedFollowingSpline__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerSlidePawn.PlayerSlidePawn_C.OnFinishedFollowingSpline__DelegateSignature");

	APlayerSlidePawn_C_OnFinishedFollowingSpline__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
