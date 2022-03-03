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
	 * 		Name   -> Function Backstage_VannyUI.Backstage_VannyUI_C.RoundToHundredths
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Rounded_Value                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBackstage_VannyUI_C::RoundToHundredths(float Value, float* Rounded_Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Backstage_VannyUI.Backstage_VannyUI_C.RoundToHundredths");
		
		UBackstage_VannyUI_C_RoundToHundredths_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Rounded_Value != nullptr)
			*Rounded_Value = params.Rounded_Value;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function Backstage_VannyUI.Backstage_VannyUI_C.Get_TimeAsText
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UBackstage_VannyUI_C::Get_TimeAsText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Backstage_VannyUI.Backstage_VannyUI_C.Get_TimeAsText");
		
		UBackstage_VannyUI_C_Get_TimeAsText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function Backstage_VannyUI.Backstage_VannyUI_C.Get_VannyTimer
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	float UBackstage_VannyUI_C::Get_VannyTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Backstage_VannyUI.Backstage_VannyUI_C.Get_VannyTimer");
		
		UBackstage_VannyUI_C_Get_VannyTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function Backstage_VannyUI.Backstage_VannyUI_C.Finished_562BAB0D49372E0ADBB1BAB559C7136E
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBackstage_VannyUI_C::Finished_562BAB0D49372E0ADBB1BAB559C7136E()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Backstage_VannyUI.Backstage_VannyUI_C.Finished_562BAB0D49372E0ADBB1BAB559C7136E");
		
		UBackstage_VannyUI_C_Finished_562BAB0D49372E0ADBB1BAB559C7136E_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function Backstage_VannyUI.Backstage_VannyUI_C.MakeTimerNotVisible
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBackstage_VannyUI_C::MakeTimerNotVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Backstage_VannyUI.Backstage_VannyUI_C.MakeTimerNotVisible");
		
		UBackstage_VannyUI_C_MakeTimerNotVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function Backstage_VannyUI.Backstage_VannyUI_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBackstage_VannyUI_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Backstage_VannyUI.Backstage_VannyUI_C.Construct");
		
		UBackstage_VannyUI_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function Backstage_VannyUI.Backstage_VannyUI_C.MakeTimerVisible
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBackstage_VannyUI_C::MakeTimerVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Backstage_VannyUI.Backstage_VannyUI_C.MakeTimerVisible");
		
		UBackstage_VannyUI_C_MakeTimerVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function Backstage_VannyUI.Backstage_VannyUI_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBackstage_VannyUI_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Backstage_VannyUI.Backstage_VannyUI_C.PreConstruct");
		
		UBackstage_VannyUI_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function Backstage_VannyUI.Backstage_VannyUI_C.ShowEmergencyText
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBackstage_VannyUI_C::ShowEmergencyText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Backstage_VannyUI.Backstage_VannyUI_C.ShowEmergencyText");
		
		UBackstage_VannyUI_C_ShowEmergencyText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function Backstage_VannyUI.Backstage_VannyUI_C.AdjustPowerLevelRoom
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              New_Power                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBackstage_VannyUI_C::AdjustPowerLevelRoom(float New_Power)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Backstage_VannyUI.Backstage_VannyUI_C.AdjustPowerLevelRoom");
		
		UBackstage_VannyUI_C_AdjustPowerLevelRoom_Params params {};
		params.New_Power = New_Power;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function Backstage_VannyUI.Backstage_VannyUI_C.ExecuteUbergraph_Backstage_VannyUI
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBackstage_VannyUI_C::ExecuteUbergraph_Backstage_VannyUI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Backstage_VannyUI.Backstage_VannyUI_C.ExecuteUbergraph_Backstage_VannyUI");
		
		UBackstage_VannyUI_C_ExecuteUbergraph_Backstage_VannyUI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBackstage_VannyUI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBackstage_VannyUI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Backstage_VannyUI.Backstage_VannyUI_C");
		return ptr;
	}

}


