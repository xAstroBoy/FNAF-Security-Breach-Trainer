/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "Kitchen_EmergencyUI_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Kitchen_EmergencyUI.Kitchen_EmergencyUI_C.Finished_55E1AB854ACBCB1BF91A97A02522234D
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UKitchen_EmergencyUI_C::Finished_55E1AB854ACBCB1BF91A97A02522234D()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Kitchen_EmergencyUI.Kitchen_EmergencyUI_C.Finished_55E1AB854ACBCB1BF91A97A02522234D");
		
		UKitchen_EmergencyUI_C_Finished_55E1AB854ACBCB1BF91A97A02522234D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Kitchen_EmergencyUI.Kitchen_EmergencyUI_C.ShowEmergencyText
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UKitchen_EmergencyUI_C::ShowEmergencyText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Kitchen_EmergencyUI.Kitchen_EmergencyUI_C.ShowEmergencyText");
		
		UKitchen_EmergencyUI_C_ShowEmergencyText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Kitchen_EmergencyUI.Kitchen_EmergencyUI_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UKitchen_EmergencyUI_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Kitchen_EmergencyUI.Kitchen_EmergencyUI_C.Construct");
		
		UKitchen_EmergencyUI_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Kitchen_EmergencyUI.Kitchen_EmergencyUI_C.ExecuteUbergraph_Kitchen_EmergencyUI
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UKitchen_EmergencyUI_C::ExecuteUbergraph_Kitchen_EmergencyUI(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Kitchen_EmergencyUI.Kitchen_EmergencyUI_C.ExecuteUbergraph_Kitchen_EmergencyUI");
		
		UKitchen_EmergencyUI_C_ExecuteUbergraph_Kitchen_EmergencyUI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UKitchen_EmergencyUI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKitchen_EmergencyUI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Kitchen_EmergencyUI.Kitchen_EmergencyUI_C");
		return ptr;
	}

}


