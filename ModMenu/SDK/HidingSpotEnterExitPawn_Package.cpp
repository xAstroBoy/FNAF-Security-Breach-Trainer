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
	 * 		Name   -> Function HidingSpotEnterExitPawn.HidingSpotEnterExitPawn_C.ReceiveBeginPlay
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HidingSpotEnterExitPawn.HidingSpotEnterExitPawn_C.ReceiveTick
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HidingSpotEnterExitPawn.HidingSpotEnterExitPawn_C.ExecuteUbergraph_HidingSpotEnterExitPawn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHidingSpotEnterExitPawn_C::ExecuteUbergraph_HidingSpotEnterExitPawn(int32_t EntryPoint)
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AHidingSpotEnterExitPawn_C.StaticClass
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


