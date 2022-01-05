/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "StaffbotKitchen_NextStep_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function StaffbotKitchen_NextStep.StaffbotKitchen_NextStep_C.UpdateInstructionsText
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Next_Step                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UStaffbotKitchen_NextStep_C::UpdateInstructionsText(const class FText& Next_Step)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffbotKitchen_NextStep.StaffbotKitchen_NextStep_C.UpdateInstructionsText");
		
		UStaffbotKitchen_NextStep_C_UpdateInstructionsText_Params params {};
		params.Next_Step = Next_Step;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function StaffbotKitchen_NextStep.StaffbotKitchen_NextStep_C.ExecuteUbergraph_StaffbotKitchen_NextStep
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStaffbotKitchen_NextStep_C::ExecuteUbergraph_StaffbotKitchen_NextStep(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffbotKitchen_NextStep.StaffbotKitchen_NextStep_C.ExecuteUbergraph_StaffbotKitchen_NextStep");
		
		UStaffbotKitchen_NextStep_C_ExecuteUbergraph_StaffbotKitchen_NextStep_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UStaffbotKitchen_NextStep_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStaffbotKitchen_NextStep_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass StaffbotKitchen_NextStep.StaffbotKitchen_NextStep_C");
		return ptr;
	}

}


