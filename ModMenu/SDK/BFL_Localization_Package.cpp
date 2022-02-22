﻿/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BFL_Localization.BFL_Localization_C.ToggleLocalizationQA
	 * 		Flags  -> (Static, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBFL_Localization_C::STATIC_ToggleLocalizationQA(class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BFL_Localization.BFL_Localization_C.ToggleLocalizationQA");
		
		UBFL_Localization_C_ToggleLocalizationQA_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBFL_Localization_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBFL_Localization_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BFL_Localization.BFL_Localization_C");
		return ptr;
	}

}


