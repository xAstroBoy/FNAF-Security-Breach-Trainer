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
	 * 		Name   -> Function WI_PowerLevel.WI_PowerLevel_C.SetBatteryBarVisibility
	 * 		Flags  -> ()
	 */
	void UWI_PowerLevel_C::SetBatteryBarVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_PowerLevel.WI_PowerLevel_C.SetBatteryBarVisibility");
		
		UWI_PowerLevel_C_SetBatteryBarVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WI_PowerLevel.WI_PowerLevel_C.SetNumberofBatteryBars
	 * 		Flags  -> ()
	 */
	void UWI_PowerLevel_C::SetNumberofBatteryBars()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_PowerLevel.WI_PowerLevel_C.SetNumberofBatteryBars");
		
		UWI_PowerLevel_C_SetNumberofBatteryBars_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WI_PowerLevel.WI_PowerLevel_C.ColorUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               LowOnPower                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWI_PowerLevel_C::ColorUpdate(bool LowOnPower)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_PowerLevel.WI_PowerLevel_C.ColorUpdate");
		
		UWI_PowerLevel_C_ColorUpdate_Params params {};
		params.LowOnPower = LowOnPower;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WI_PowerLevel.WI_PowerLevel_C.PowerLevelUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PowerLevel                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWI_PowerLevel_C::PowerLevelUpdate(int32_t PowerLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_PowerLevel.WI_PowerLevel_C.PowerLevelUpdate");
		
		UWI_PowerLevel_C_PowerLevelUpdate_Params params {};
		params.PowerLevel = PowerLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WI_PowerLevel.WI_PowerLevel_C.Get Flash Value
	 * 		Flags  -> ()
	 */
	float UWI_PowerLevel_C::GetFlashValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_PowerLevel.WI_PowerLevel_C.Get Flash Value");
		
		UWI_PowerLevel_C_GetFlashValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WI_PowerLevel.WI_PowerLevel_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWI_PowerLevel_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_PowerLevel.WI_PowerLevel_C.Tick");
		
		UWI_PowerLevel_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WI_PowerLevel.WI_PowerLevel_C.FlashUsed
	 * 		Flags  -> ()
	 */
	void UWI_PowerLevel_C::FlashUsed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_PowerLevel.WI_PowerLevel_C.FlashUsed");
		
		UWI_PowerLevel_C_FlashUsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WI_PowerLevel.WI_PowerLevel_C.UpdateMaxPowerLevel
	 * 		Flags  -> ()
	 */
	void UWI_PowerLevel_C::UpdateMaxPowerLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_PowerLevel.WI_PowerLevel_C.UpdateMaxPowerLevel");
		
		UWI_PowerLevel_C_UpdateMaxPowerLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WI_PowerLevel.WI_PowerLevel_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWI_PowerLevel_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_PowerLevel.WI_PowerLevel_C.PreConstruct");
		
		UWI_PowerLevel_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WI_PowerLevel.WI_PowerLevel_C.Construct
	 * 		Flags  -> ()
	 */
	void UWI_PowerLevel_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_PowerLevel.WI_PowerLevel_C.Construct");
		
		UWI_PowerLevel_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WI_PowerLevel.WI_PowerLevel_C.ExecuteUbergraph_WI_PowerLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWI_PowerLevel_C::ExecuteUbergraph_WI_PowerLevel(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_PowerLevel.WI_PowerLevel_C.ExecuteUbergraph_WI_PowerLevel");
		
		UWI_PowerLevel_C_ExecuteUbergraph_WI_PowerLevel_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WI_PowerLevel.WI_PowerLevel_C.LowPowerAlert__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWI_PowerLevel_C::LowPowerAlert__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_PowerLevel.WI_PowerLevel_C.LowPowerAlert__DelegateSignature");
		
		UWI_PowerLevel_C_LowPowerAlert__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWI_PowerLevel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWI_PowerLevel_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WI_PowerLevel.WI_PowerLevel_C");
		return ptr;
	}

}


