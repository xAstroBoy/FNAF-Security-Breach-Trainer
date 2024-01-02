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
	 * 		Name   -> Function WI_SecurityScreenDisplay.WI_SecurityScreenDisplay_C.UpdateWidget
	 * 		Flags  -> ()
	 */
	void UWI_SecurityScreenDisplay_C::UpdateWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_SecurityScreenDisplay.WI_SecurityScreenDisplay_C.UpdateWidget");
		
		UWI_SecurityScreenDisplay_C_UpdateWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WI_SecurityScreenDisplay.WI_SecurityScreenDisplay_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWI_SecurityScreenDisplay_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_SecurityScreenDisplay.WI_SecurityScreenDisplay_C.PreConstruct");
		
		UWI_SecurityScreenDisplay_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WI_SecurityScreenDisplay.WI_SecurityScreenDisplay_C.ExecuteUbergraph_WI_SecurityScreenDisplay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWI_SecurityScreenDisplay_C::ExecuteUbergraph_WI_SecurityScreenDisplay(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_SecurityScreenDisplay.WI_SecurityScreenDisplay_C.ExecuteUbergraph_WI_SecurityScreenDisplay");
		
		UWI_SecurityScreenDisplay_C_ExecuteUbergraph_WI_SecurityScreenDisplay_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWI_SecurityScreenDisplay_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWI_SecurityScreenDisplay_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WI_SecurityScreenDisplay.WI_SecurityScreenDisplay_C");
		return ptr;
	}

}


