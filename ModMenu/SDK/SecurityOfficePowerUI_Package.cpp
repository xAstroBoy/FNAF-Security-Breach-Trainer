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
	 * 		Name   -> Function SecurityOfficePowerUI.SecurityOfficePowerUI_C.Update Percentage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              InPercent                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USecurityOfficePowerUI_C::Update_Percentage(float InPercent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOfficePowerUI.SecurityOfficePowerUI_C.Update Percentage");
		
		USecurityOfficePowerUI_C_Update_Percentage_Params params {};
		params.InPercent = InPercent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function SecurityOfficePowerUI.SecurityOfficePowerUI_C.Update Time
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              TimeRemaining                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USecurityOfficePowerUI_C::Update_Time(float TimeRemaining)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOfficePowerUI.SecurityOfficePowerUI_C.Update Time");
		
		USecurityOfficePowerUI_C_Update_Time_Params params {};
		params.TimeRemaining = TimeRemaining;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function SecurityOfficePowerUI.SecurityOfficePowerUI_C.ExecuteUbergraph_SecurityOfficePowerUI
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USecurityOfficePowerUI_C::ExecuteUbergraph_SecurityOfficePowerUI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOfficePowerUI.SecurityOfficePowerUI_C.ExecuteUbergraph_SecurityOfficePowerUI");
		
		USecurityOfficePowerUI_C_ExecuteUbergraph_SecurityOfficePowerUI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction USecurityOfficePowerUI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USecurityOfficePowerUI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SecurityOfficePowerUI.SecurityOfficePowerUI_C");
		return ptr;
	}

}


