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
	 * 		Name   -> Function WIDGET_TestOverlay_GlitchAftermath.WIDGET_TestOverlay_GlitchAftermath_C.GetText_1
	 * 		Flags  -> ()
	 */
	void UWIDGET_TestOverlay_GlitchAftermath_C::GetText_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WIDGET_TestOverlay_GlitchAftermath.WIDGET_TestOverlay_GlitchAftermath_C.GetText_1");
		
		UWIDGET_TestOverlay_GlitchAftermath_C_GetText_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WIDGET_TestOverlay_GlitchAftermath.WIDGET_TestOverlay_GlitchAftermath_C.SwitchMap_Display
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               PlayerInNormal                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWIDGET_TestOverlay_GlitchAftermath_C::SwitchMap_Display(bool PlayerInNormal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WIDGET_TestOverlay_GlitchAftermath.WIDGET_TestOverlay_GlitchAftermath_C.SwitchMap_Display");
		
		UWIDGET_TestOverlay_GlitchAftermath_C_SwitchMap_Display_Params params {};
		params.PlayerInNormal = PlayerInNormal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WIDGET_TestOverlay_GlitchAftermath.WIDGET_TestOverlay_GlitchAftermath_C.Construct
	 * 		Flags  -> ()
	 */
	void UWIDGET_TestOverlay_GlitchAftermath_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WIDGET_TestOverlay_GlitchAftermath.WIDGET_TestOverlay_GlitchAftermath_C.Construct");
		
		UWIDGET_TestOverlay_GlitchAftermath_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WIDGET_TestOverlay_GlitchAftermath.WIDGET_TestOverlay_GlitchAftermath_C.ExecuteUbergraph_WIDGET_TestOverlay_GlitchAftermath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWIDGET_TestOverlay_GlitchAftermath_C::ExecuteUbergraph_WIDGET_TestOverlay_GlitchAftermath(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WIDGET_TestOverlay_GlitchAftermath.WIDGET_TestOverlay_GlitchAftermath_C.ExecuteUbergraph_WIDGET_TestOverlay_GlitchAftermath");
		
		UWIDGET_TestOverlay_GlitchAftermath_C_ExecuteUbergraph_WIDGET_TestOverlay_GlitchAftermath_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWIDGET_TestOverlay_GlitchAftermath_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWIDGET_TestOverlay_GlitchAftermath_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WIDGET_TestOverlay_GlitchAftermath.WIDGET_TestOverlay_GlitchAftermath_C");
		return ptr;
	}

}


