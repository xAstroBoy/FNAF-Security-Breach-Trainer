/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "FreddyEnterExitPawn_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FreddyEnterExitPawn.FreddyEnterExitPawn_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AFreddyEnterExitPawn_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddyEnterExitPawn.FreddyEnterExitPawn_C.ReceiveBeginPlay");
		
		AFreddyEnterExitPawn_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FreddyEnterExitPawn.FreddyEnterExitPawn_C.ExecuteUbergraph_FreddyEnterExitPawn
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFreddyEnterExitPawn_C::ExecuteUbergraph_FreddyEnterExitPawn(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddyEnterExitPawn.FreddyEnterExitPawn_C.ExecuteUbergraph_FreddyEnterExitPawn");
		
		AFreddyEnterExitPawn_C_ExecuteUbergraph_FreddyEnterExitPawn_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AFreddyEnterExitPawn_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFreddyEnterExitPawn_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FreddyEnterExitPawn.FreddyEnterExitPawn_C");
		return ptr;
	}

}


