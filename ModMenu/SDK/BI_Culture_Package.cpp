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
	 * 		Name   -> Function BI_Culture.BI_Culture_C.OnCultureChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ELocalizationCulture                               Culture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBI_Culture_C::OnCultureChanged(ELocalizationCulture Culture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_Culture.BI_Culture_C.OnCultureChanged");
		
		UBI_Culture_C_OnCultureChanged_Params params {};
		params.Culture = Culture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBI_Culture_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBI_Culture_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BI_Culture.BI_Culture_C");
		return ptr;
	}

}


