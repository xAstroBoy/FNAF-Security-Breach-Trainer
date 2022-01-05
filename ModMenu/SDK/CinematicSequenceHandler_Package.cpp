/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "CinematicSequenceHandler_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function CinematicSequenceHandler.CinematicSequenceHandler_C.Run Cinematics
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UCinematicSequenceHandler_C::Run_Cinematics()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicSequenceHandler.CinematicSequenceHandler_C.Run Cinematics");
		
		UCinematicSequenceHandler_C_Run_Cinematics_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function CinematicSequenceHandler.CinematicSequenceHandler_C.On Sequence Finished
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UCinematicSequenceHandler_C::On_Sequence_Finished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicSequenceHandler.CinematicSequenceHandler_C.On Sequence Finished");
		
		UCinematicSequenceHandler_C_On_Sequence_Finished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function CinematicSequenceHandler.CinematicSequenceHandler_C.ExecuteUbergraph_CinematicSequenceHandler
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCinematicSequenceHandler_C::ExecuteUbergraph_CinematicSequenceHandler(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicSequenceHandler.CinematicSequenceHandler_C.ExecuteUbergraph_CinematicSequenceHandler");
		
		UCinematicSequenceHandler_C_ExecuteUbergraph_CinematicSequenceHandler_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UCinematicSequenceHandler_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCinematicSequenceHandler_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CinematicSequenceHandler.CinematicSequenceHandler_C");
		return ptr;
	}

}


