/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "West_Arcade_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function West_Arcade.West_Arcade_C.ExecuteUbergraph_West_Arcade
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWest_Arcade_C::ExecuteUbergraph_West_Arcade(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function West_Arcade.West_Arcade_C.ExecuteUbergraph_West_Arcade");
		
		AWest_Arcade_C_ExecuteUbergraph_West_Arcade_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AWest_Arcade_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWest_Arcade_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass West_Arcade.West_Arcade_C");
		return ptr;
	}

}


