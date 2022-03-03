/**
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
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function Backstage_VannyUI_ForScreen.Backstage_VannyUI_ForScreen_C.Get_TimeAsText
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
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
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function Backstage_VannyUI_ForScreen.Backstage_VannyUI_ForScreen_C.Get_VannyTimer
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
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
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBackstage_VannyUI_ForScreen_C.StaticClass
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


