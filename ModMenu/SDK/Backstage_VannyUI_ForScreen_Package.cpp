/**
 * Name: FNAFSB
 * Version: 1
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Backstage_VannyUI_ForScreen.Backstage_VannyUI_ForScreen_C.Get_TimeAsText
	 * 		Flags  -> ()
	 */
	class FText UBackstage_VannyUI_ForScreen_C::Get_TimeAsText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Backstage_VannyUI_ForScreen.Backstage_VannyUI_ForScreen_C.Get_TimeAsText");
		
		UBackstage_VannyUI_ForScreen_C_Get_TimeAsText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Backstage_VannyUI_ForScreen.Backstage_VannyUI_ForScreen_C.Get_VannyTimer
	 * 		Flags  -> ()
	 */
	float UBackstage_VannyUI_ForScreen_C::Get_VannyTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Backstage_VannyUI_ForScreen.Backstage_VannyUI_ForScreen_C.Get_VannyTimer");
		
		UBackstage_VannyUI_ForScreen_C_Get_VannyTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBackstage_VannyUI_ForScreen_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBackstage_VannyUI_ForScreen_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Backstage_VannyUI_ForScreen.Backstage_VannyUI_ForScreen_C");
		return ptr;
	}

}


