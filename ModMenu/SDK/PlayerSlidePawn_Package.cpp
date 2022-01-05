/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "PlayerSlidePawn_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PlayerSlidePawn.PlayerSlidePawn_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void APlayerSlidePawn_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerSlidePawn.PlayerSlidePawn_C.ReceiveBeginPlay");
		
		APlayerSlidePawn_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PlayerSlidePawn.PlayerSlidePawn_C.BndEvt__SplineFollowMovement_K2Node_ComponentBoundEvent_0_OnFinishedFollowingSplineDelegate__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void APlayerSlidePawn_C::BndEvt__SplineFollowMovement_K2Node_ComponentBoundEvent_0_OnFinishedFollowingSplineDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerSlidePawn.PlayerSlidePawn_C.BndEvt__SplineFollowMovement_K2Node_ComponentBoundEvent_0_OnFinishedFollowingSplineDelegate__DelegateSignature");
		
		APlayerSlidePawn_C_BndEvt__SplineFollowMovement_K2Node_ComponentBoundEvent_0_OnFinishedFollowingSplineDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PlayerSlidePawn.PlayerSlidePawn_C.ExecuteUbergraph_PlayerSlidePawn
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APlayerSlidePawn_C::ExecuteUbergraph_PlayerSlidePawn(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerSlidePawn.PlayerSlidePawn_C.ExecuteUbergraph_PlayerSlidePawn");
		
		APlayerSlidePawn_C_ExecuteUbergraph_PlayerSlidePawn_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PlayerSlidePawn.PlayerSlidePawn_C.OnFinishedFollowingSpline__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void APlayerSlidePawn_C::OnFinishedFollowingSpline__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerSlidePawn.PlayerSlidePawn_C.OnFinishedFollowingSpline__DelegateSignature");
		
		APlayerSlidePawn_C_OnFinishedFollowingSpline__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction APlayerSlidePawn_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APlayerSlidePawn_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PlayerSlidePawn.PlayerSlidePawn_C");
		return ptr;
	}

}


