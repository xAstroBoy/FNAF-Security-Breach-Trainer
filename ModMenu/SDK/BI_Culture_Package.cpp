/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "BI_Culture_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BI_Culture.BI_Culture_C.OnCultureChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TEnumAsByte<fnaf9_ELocalizationCulture>            Culture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBI_Culture_C::OnCultureChanged(TEnumAsByte<fnaf9_ELocalizationCulture> Culture)
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
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBI_Culture_C.StaticClass
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


