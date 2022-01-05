/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "GregoryEjectPawn_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function GregoryEjectPawn.GregoryEjectPawn_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AGregoryEjectPawn_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GregoryEjectPawn.GregoryEjectPawn_C.ReceiveBeginPlay");
		
		AGregoryEjectPawn_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function GregoryEjectPawn.GregoryEjectPawn_C.BndEvt__SplineFollowMovement_K2Node_ComponentBoundEvent_0_OnFinishedFollowingSplineDelegate__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AGregoryEjectPawn_C::BndEvt__SplineFollowMovement_K2Node_ComponentBoundEvent_0_OnFinishedFollowingSplineDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GregoryEjectPawn.GregoryEjectPawn_C.BndEvt__SplineFollowMovement_K2Node_ComponentBoundEvent_0_OnFinishedFollowingSplineDelegate__DelegateSignature");
		
		AGregoryEjectPawn_C_BndEvt__SplineFollowMovement_K2Node_ComponentBoundEvent_0_OnFinishedFollowingSplineDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function GregoryEjectPawn.GregoryEjectPawn_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGregoryEjectPawn_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GregoryEjectPawn.GregoryEjectPawn_C.ReceiveTick");
		
		AGregoryEjectPawn_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function GregoryEjectPawn.GregoryEjectPawn_C.ExecuteUbergraph_GregoryEjectPawn
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGregoryEjectPawn_C::ExecuteUbergraph_GregoryEjectPawn(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GregoryEjectPawn.GregoryEjectPawn_C.ExecuteUbergraph_GregoryEjectPawn");
		
		AGregoryEjectPawn_C_ExecuteUbergraph_GregoryEjectPawn_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AGregoryEjectPawn_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGregoryEjectPawn_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GregoryEjectPawn.GregoryEjectPawn_C");
		return ptr;
	}

}


