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
	 * 		Name   -> Function Backstage_VannyUI.Backstage_VannyUI_C.RoundToHundredths
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              RoundedValue                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBackstage_VannyUI_C::RoundToHundredths(float Value, float* RoundedValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Backstage_VannyUI.Backstage_VannyUI_C.RoundToHundredths");
		
		UBackstage_VannyUI_C_RoundToHundredths_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RoundedValue != nullptr)
			*RoundedValue = params.RoundedValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Backstage_VannyUI.Backstage_VannyUI_C.Get_TimeAsText
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Backstage_VannyUI.Backstage_VannyUI_C.Get_VannyTimer
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Backstage_VannyUI.Backstage_VannyUI_C.Finished_562BAB0D49372E0ADBB1BAB559C7136E
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Backstage_VannyUI.Backstage_VannyUI_C.MakeTimerNotVisible
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Backstage_VannyUI.Backstage_VannyUI_C.Construct
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Backstage_VannyUI.Backstage_VannyUI_C.MakeTimerVisible
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Backstage_VannyUI.Backstage_VannyUI_C.PreConstruct
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Backstage_VannyUI.Backstage_VannyUI_C.ShowEmergencyText
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Backstage_VannyUI.Backstage_VannyUI_C.AdjustPowerLevelRoom
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewPower                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBackstage_VannyUI_C::AdjustPowerLevelRoom(float NewPower)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Backstage_VannyUI.Backstage_VannyUI_C.AdjustPowerLevelRoom");
		
		UBackstage_VannyUI_C_AdjustPowerLevelRoom_Params params {};
		params.NewPower = NewPower;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Backstage_VannyUI.Backstage_VannyUI_C.ExecuteUbergraph_Backstage_VannyUI
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBackstage_VannyUI_C.StaticClass
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


