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
	 * 		Name   -> Function CinematicSequenceHandler.CinematicSequenceHandler_C.Run Cinematics
	 * 		Flags  -> ()
	 */
	void UCinematicSequenceHandler_C::RunCinematics()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicSequenceHandler.CinematicSequenceHandler_C.Run Cinematics");
		
		UCinematicSequenceHandler_C_RunCinematics_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CinematicSequenceHandler.CinematicSequenceHandler_C.On Sequence Finished
	 * 		Flags  -> ()
	 */
	void UCinematicSequenceHandler_C::OnSequenceFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicSequenceHandler.CinematicSequenceHandler_C.On Sequence Finished");
		
		UCinematicSequenceHandler_C_OnSequenceFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CinematicSequenceHandler.CinematicSequenceHandler_C.ExecuteUbergraph_CinematicSequenceHandler
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCinematicSequenceHandler_C::ExecuteUbergraph_CinematicSequenceHandler(int32_t EntryPoint)
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCinematicSequenceHandler_C.StaticClass
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


