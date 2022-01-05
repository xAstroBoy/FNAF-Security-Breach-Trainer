/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "OGM_GatorGolf_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OGM_GatorGolf.OGM_GatorGolf_C.On Start
	 * 		Flags  -> (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AOGM_GatorGolf_C::On_Start()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OGM_GatorGolf.OGM_GatorGolf_C.On Start");
		
		AOGM_GatorGolf_C_On_Start_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AOGM_GatorGolf_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AOGM_GatorGolf_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass OGM_GatorGolf.OGM_GatorGolf_C");
		return ptr;
	}

}


