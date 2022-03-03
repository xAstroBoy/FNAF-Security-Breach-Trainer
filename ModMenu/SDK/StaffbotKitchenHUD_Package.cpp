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
	 * 		Name   -> Function StaffbotKitchenHUD.StaffbotKitchenHUD_C.UpdatePizzaStep
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UStaffbotKitchenHUD_C::UpdatePizzaStep()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffbotKitchenHUD.StaffbotKitchenHUD_C.UpdatePizzaStep");
		
		UStaffbotKitchenHUD_C_UpdatePizzaStep_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function StaffbotKitchenHUD.StaffbotKitchenHUD_C.PizzaCompleted
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UStaffbotKitchenHUD_C::PizzaCompleted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffbotKitchenHUD.StaffbotKitchenHUD_C.PizzaCompleted");
		
		UStaffbotKitchenHUD_C_PizzaCompleted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function StaffbotKitchenHUD.StaffbotKitchenHUD_C.Complete Current Pizza Step
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		PizzaStep_EPizzaStep                               PizzaStep                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStaffbotKitchenHUD_C::Complete_Current_Pizza_Step(PizzaStep_EPizzaStep PizzaStep)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffbotKitchenHUD.StaffbotKitchenHUD_C.Complete Current Pizza Step");
		
		UStaffbotKitchenHUD_C_Complete_Current_Pizza_Step_Params params {};
		params.PizzaStep = PizzaStep;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function StaffbotKitchenHUD.StaffbotKitchenHUD_C.InstructionsInit
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStaffbotKitchenHUD_C::InstructionsInit(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffbotKitchenHUD.StaffbotKitchenHUD_C.InstructionsInit");
		
		UStaffbotKitchenHUD_C_InstructionsInit_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function StaffbotKitchenHUD.StaffbotKitchenHUD_C.Get_DoorPower_Percent_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	float UStaffbotKitchenHUD_C::Get_DoorPower_Percent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffbotKitchenHUD.StaffbotKitchenHUD_C.Get_DoorPower_Percent_1");
		
		UStaffbotKitchenHUD_C_Get_DoorPower_Percent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function StaffbotKitchenHUD.StaffbotKitchenHUD_C.Get_DownloadTimeRemaining_Text_1
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UStaffbotKitchenHUD_C::Get_DownloadTimeRemaining_Text_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffbotKitchenHUD.StaffbotKitchenHUD_C.Get_DownloadTimeRemaining_Text_1");
		
		UStaffbotKitchenHUD_C_Get_DownloadTimeRemaining_Text_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function StaffbotKitchenHUD.StaffbotKitchenHUD_C.Finished_B1D5CA6A4C016BD6EB600E858C3CE633
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UStaffbotKitchenHUD_C::Finished_B1D5CA6A4C016BD6EB600E858C3CE633()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffbotKitchenHUD.StaffbotKitchenHUD_C.Finished_B1D5CA6A4C016BD6EB600E858C3CE633");
		
		UStaffbotKitchenHUD_C_Finished_B1D5CA6A4C016BD6EB600E858C3CE633_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function StaffbotKitchenHUD.StaffbotKitchenHUD_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStaffbotKitchenHUD_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffbotKitchenHUD.StaffbotKitchenHUD_C.PreConstruct");
		
		UStaffbotKitchenHUD_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function StaffbotKitchenHUD.StaffbotKitchenHUD_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UStaffbotKitchenHUD_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffbotKitchenHUD.StaffbotKitchenHUD_C.Construct");
		
		UStaffbotKitchenHUD_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function StaffbotKitchenHUD.StaffbotKitchenHUD_C.ShowErrorMessage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UStaffbotKitchenHUD_C::ShowErrorMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffbotKitchenHUD.StaffbotKitchenHUD_C.ShowErrorMessage");
		
		UStaffbotKitchenHUD_C_ShowErrorMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function StaffbotKitchenHUD.StaffbotKitchenHUD_C.TakePizzaInstructions
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UStaffbotKitchenHUD_C::TakePizzaInstructions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffbotKitchenHUD.StaffbotKitchenHUD_C.TakePizzaInstructions");
		
		UStaffbotKitchenHUD_C_TakePizzaInstructions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function StaffbotKitchenHUD.StaffbotKitchenHUD_C.ClearInstructions
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UStaffbotKitchenHUD_C::ClearInstructions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffbotKitchenHUD.StaffbotKitchenHUD_C.ClearInstructions");
		
		UStaffbotKitchenHUD_C_ClearInstructions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function StaffbotKitchenHUD.StaffbotKitchenHUD_C.ExecuteUbergraph_StaffbotKitchenHUD
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStaffbotKitchenHUD_C::ExecuteUbergraph_StaffbotKitchenHUD(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffbotKitchenHUD.StaffbotKitchenHUD_C.ExecuteUbergraph_StaffbotKitchenHUD");
		
		UStaffbotKitchenHUD_C_ExecuteUbergraph_StaffbotKitchenHUD_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UStaffbotKitchenHUD_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStaffbotKitchenHUD_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass StaffbotKitchenHUD.StaffbotKitchenHUD_C");
		return ptr;
	}

}


