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
	 * 		Name   -> Function RummagerInterface.RummagerInterface_C.StopRummage
	 * 		Flags  -> ()
	 */
	void URummagerInterface_C::StopRummage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RummagerInterface.RummagerInterface_C.StopRummage");
		
		URummagerInterface_C_StopRummage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RummagerInterface.RummagerInterface_C.StartRummage
	 * 		Flags  -> ()
	 */
	void URummagerInterface_C::StartRummage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RummagerInterface.RummagerInterface_C.StartRummage");
		
		URummagerInterface_C_StartRummage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URummagerInterface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URummagerInterface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass RummagerInterface.RummagerInterface_C");
		return ptr;
	}

}


