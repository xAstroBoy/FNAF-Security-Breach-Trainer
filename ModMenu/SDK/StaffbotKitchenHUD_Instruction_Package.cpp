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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function StaffbotKitchenHUD_Instruction.StaffbotKitchenHUD_Instruction_C.SetCompleted
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UStaffbotKitchenHUD_Instruction_C::SetCompleted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffbotKitchenHUD_Instruction.StaffbotKitchenHUD_Instruction_C.SetCompleted");
		
		UStaffbotKitchenHUD_Instruction_C_SetCompleted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function StaffbotKitchenHUD_Instruction.StaffbotKitchenHUD_Instruction_C.SetVisible
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStaffbotKitchenHUD_Instruction_C::SetVisible(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffbotKitchenHUD_Instruction.StaffbotKitchenHUD_Instruction_C.SetVisible");
		
		UStaffbotKitchenHUD_Instruction_C_SetVisible_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function StaffbotKitchenHUD_Instruction.StaffbotKitchenHUD_Instruction_C.SetInstructionText
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UStaffbotKitchenHUD_Instruction_C::SetInstructionText(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffbotKitchenHUD_Instruction.StaffbotKitchenHUD_Instruction_C.SetInstructionText");
		
		UStaffbotKitchenHUD_Instruction_C_SetInstructionText_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function StaffbotKitchenHUD_Instruction.StaffbotKitchenHUD_Instruction_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStaffbotKitchenHUD_Instruction_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffbotKitchenHUD_Instruction.StaffbotKitchenHUD_Instruction_C.PreConstruct");
		
		UStaffbotKitchenHUD_Instruction_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function StaffbotKitchenHUD_Instruction.StaffbotKitchenHUD_Instruction_C.ExecuteUbergraph_StaffbotKitchenHUD_Instruction
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStaffbotKitchenHUD_Instruction_C::ExecuteUbergraph_StaffbotKitchenHUD_Instruction(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffbotKitchenHUD_Instruction.StaffbotKitchenHUD_Instruction_C.ExecuteUbergraph_StaffbotKitchenHUD_Instruction");
		
		UStaffbotKitchenHUD_Instruction_C_ExecuteUbergraph_StaffbotKitchenHUD_Instruction_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UStaffbotKitchenHUD_Instruction_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStaffbotKitchenHUD_Instruction_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass StaffbotKitchenHUD_Instruction.StaffbotKitchenHUD_Instruction_C");
		return ptr;
	}

}


