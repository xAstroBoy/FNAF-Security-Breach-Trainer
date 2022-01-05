/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "RummagerInterface_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RummagerInterface.RummagerInterface_C.StopRummage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RummagerInterface.RummagerInterface_C.StartRummage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction URummagerInterface_C.StaticClass
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


