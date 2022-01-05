/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "HidingSpotEnterExitPawn_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function HidingSpotEnterExitPawn.HidingSpotEnterExitPawn_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AHidingSpotEnterExitPawn_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HidingSpotEnterExitPawn.HidingSpotEnterExitPawn_C.ReceiveBeginPlay");
		
		AHidingSpotEnterExitPawn_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function HidingSpotEnterExitPawn.HidingSpotEnterExitPawn_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHidingSpotEnterExitPawn_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HidingSpotEnterExitPawn.HidingSpotEnterExitPawn_C.ReceiveTick");
		
		AHidingSpotEnterExitPawn_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function HidingSpotEnterExitPawn.HidingSpotEnterExitPawn_C.ExecuteUbergraph_HidingSpotEnterExitPawn
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHidingSpotEnterExitPawn_C::ExecuteUbergraph_HidingSpotEnterExitPawn(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HidingSpotEnterExitPawn.HidingSpotEnterExitPawn_C.ExecuteUbergraph_HidingSpotEnterExitPawn");
		
		AHidingSpotEnterExitPawn_C_ExecuteUbergraph_HidingSpotEnterExitPawn_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AHidingSpotEnterExitPawn_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AHidingSpotEnterExitPawn_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass HidingSpotEnterExitPawn.HidingSpotEnterExitPawn_C");
		return ptr;
	}

}


