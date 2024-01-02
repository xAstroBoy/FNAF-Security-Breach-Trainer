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
	 * 		Name   -> Function FlashlightRechargeUI.FlashlightRechargeUI_C.Update Percentage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Percentage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFlashlightRechargeUI_C::UpdatePercentage(float Percentage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlashlightRechargeUI.FlashlightRechargeUI_C.Update Percentage");
		
		UFlashlightRechargeUI_C_UpdatePercentage_Params params {};
		params.Percentage = Percentage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlashlightRechargeUI.FlashlightRechargeUI_C.Reset
	 * 		Flags  -> ()
	 */
	void UFlashlightRechargeUI_C::Reset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlashlightRechargeUI.FlashlightRechargeUI_C.Reset");
		
		UFlashlightRechargeUI_C_Reset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlashlightRechargeUI.FlashlightRechargeUI_C.ExecuteUbergraph_FlashlightRechargeUI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFlashlightRechargeUI_C::ExecuteUbergraph_FlashlightRechargeUI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlashlightRechargeUI.FlashlightRechargeUI_C.ExecuteUbergraph_FlashlightRechargeUI");
		
		UFlashlightRechargeUI_C_ExecuteUbergraph_FlashlightRechargeUI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFlashlightRechargeUI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFlashlightRechargeUI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass FlashlightRechargeUI.FlashlightRechargeUI_C");
		return ptr;
	}

}


