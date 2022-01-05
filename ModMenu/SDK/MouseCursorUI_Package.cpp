/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "MouseCursorUI_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function MouseCursorUI.MouseCursorUI_C.ToggleCursorVisibility
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMouseCursorUI_C::ToggleCursorVisibility(bool Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MouseCursorUI.MouseCursorUI_C.ToggleCursorVisibility");
		
		UMouseCursorUI_C_ToggleCursorVisibility_Params params {};
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function MouseCursorUI.MouseCursorUI_C.ExecuteUbergraph_MouseCursorUI
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMouseCursorUI_C::ExecuteUbergraph_MouseCursorUI(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MouseCursorUI.MouseCursorUI_C.ExecuteUbergraph_MouseCursorUI");
		
		UMouseCursorUI_C_ExecuteUbergraph_MouseCursorUI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMouseCursorUI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMouseCursorUI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MouseCursorUI.MouseCursorUI_C");
		return ptr;
	}

}


