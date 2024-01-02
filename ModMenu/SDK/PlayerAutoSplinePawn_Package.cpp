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
	 * 		Name   -> Function PlayerAutoSplinePawn.PlayerAutoSplinePawn_C.EjectPlayer
	 * 		Flags  -> ()
	 */
	void APlayerAutoSplinePawn_C::EjectPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerAutoSplinePawn.PlayerAutoSplinePawn_C.EjectPlayer");
		
		APlayerAutoSplinePawn_C_EjectPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerAutoSplinePawn.PlayerAutoSplinePawn_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void APlayerAutoSplinePawn_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerAutoSplinePawn.PlayerAutoSplinePawn_C.ReceiveBeginPlay");
		
		APlayerAutoSplinePawn_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerAutoSplinePawn.PlayerAutoSplinePawn_C.BndEvt__SplineFollowMovement_K2Node_ComponentBoundEvent_0_OnFinishedFollowingSplineDelegate__DelegateSignature
	 * 		Flags  -> ()
	 */
	void APlayerAutoSplinePawn_C::BndEvt__SplineFollowMovement_K2Node_ComponentBoundEvent_0_OnFinishedFollowingSplineDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerAutoSplinePawn.PlayerAutoSplinePawn_C.BndEvt__SplineFollowMovement_K2Node_ComponentBoundEvent_0_OnFinishedFollowingSplineDelegate__DelegateSignature");
		
		APlayerAutoSplinePawn_C_BndEvt__SplineFollowMovement_K2Node_ComponentBoundEvent_0_OnFinishedFollowingSplineDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerAutoSplinePawn.PlayerAutoSplinePawn_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APlayerAutoSplinePawn_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerAutoSplinePawn.PlayerAutoSplinePawn_C.ReceiveTick");
		
		APlayerAutoSplinePawn_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerAutoSplinePawn.PlayerAutoSplinePawn_C.ExecuteUbergraph_PlayerAutoSplinePawn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APlayerAutoSplinePawn_C::ExecuteUbergraph_PlayerAutoSplinePawn(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerAutoSplinePawn.PlayerAutoSplinePawn_C.ExecuteUbergraph_PlayerAutoSplinePawn");
		
		APlayerAutoSplinePawn_C_ExecuteUbergraph_PlayerAutoSplinePawn_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerAutoSplinePawn.PlayerAutoSplinePawn_C.OnFinishedFollowingSpline__DelegateSignature
	 * 		Flags  -> ()
	 */
	void APlayerAutoSplinePawn_C::OnFinishedFollowingSpline__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerAutoSplinePawn.PlayerAutoSplinePawn_C.OnFinishedFollowingSpline__DelegateSignature");
		
		APlayerAutoSplinePawn_C_OnFinishedFollowingSpline__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APlayerAutoSplinePawn_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APlayerAutoSplinePawn_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PlayerAutoSplinePawn.PlayerAutoSplinePawn_C");
		return ptr;
	}

}


