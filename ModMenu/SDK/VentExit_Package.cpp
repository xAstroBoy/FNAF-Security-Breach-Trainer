/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "VentExit_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function VentExit.VentExit_C.On Vent Exited
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AVentExit_C::On_Vent_Exited()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VentExit.VentExit_C.On Vent Exited");
		
		AVentExit_C_On_Vent_Exited_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function VentExit.VentExit_C.ExecuteUbergraph_VentExit
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AVentExit_C::ExecuteUbergraph_VentExit(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VentExit.VentExit_C.ExecuteUbergraph_VentExit");
		
		AVentExit_C_ExecuteUbergraph_VentExit_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AVentExit_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AVentExit_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass VentExit.VentExit_C");
		return ptr;
	}

}


