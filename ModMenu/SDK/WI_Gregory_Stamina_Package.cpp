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
	 * 		Name   -> Function WI_Gregory_Stamina.WI_Gregory_Stamina_C.Finished_87005B5146310D84D0BBA7A88DF76D17
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWI_Gregory_Stamina_C::Finished_87005B5146310D84D0BBA7A88DF76D17()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Gregory_Stamina.WI_Gregory_Stamina_C.Finished_87005B5146310D84D0BBA7A88DF76D17");
		
		UWI_Gregory_Stamina_C_Finished_87005B5146310D84D0BBA7A88DF76D17_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function WI_Gregory_Stamina.WI_Gregory_Stamina_C.Finished_910C77124225AE12E5D9A1AE2A438FA4
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWI_Gregory_Stamina_C::Finished_910C77124225AE12E5D9A1AE2A438FA4()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Gregory_Stamina.WI_Gregory_Stamina_C.Finished_910C77124225AE12E5D9A1AE2A438FA4");
		
		UWI_Gregory_Stamina_C_Finished_910C77124225AE12E5D9A1AE2A438FA4_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function WI_Gregory_Stamina.WI_Gregory_Stamina_C.Finished_9E22A3BA404DFC4AEBDD15A4C95B41C4
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWI_Gregory_Stamina_C::Finished_9E22A3BA404DFC4AEBDD15A4C95B41C4()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Gregory_Stamina.WI_Gregory_Stamina_C.Finished_9E22A3BA404DFC4AEBDD15A4C95B41C4");
		
		UWI_Gregory_Stamina_C_Finished_9E22A3BA404DFC4AEBDD15A4C95B41C4_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function WI_Gregory_Stamina.WI_Gregory_Stamina_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWI_Gregory_Stamina_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Gregory_Stamina.WI_Gregory_Stamina_C.Construct");
		
		UWI_Gregory_Stamina_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function WI_Gregory_Stamina.WI_Gregory_Stamina_C.On Stamina Depleted
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWI_Gregory_Stamina_C::On_Stamina_Depleted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Gregory_Stamina.WI_Gregory_Stamina_C.On Stamina Depleted");
		
		UWI_Gregory_Stamina_C_On_Stamina_Depleted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function WI_Gregory_Stamina.WI_Gregory_Stamina_C.On Stamina Replenished
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWI_Gregory_Stamina_C::On_Stamina_Replenished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Gregory_Stamina.WI_Gregory_Stamina_C.On Stamina Replenished");
		
		UWI_Gregory_Stamina_C_On_Stamina_Replenished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function WI_Gregory_Stamina.WI_Gregory_Stamina_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWI_Gregory_Stamina_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Gregory_Stamina.WI_Gregory_Stamina_C.Tick");
		
		UWI_Gregory_Stamina_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function WI_Gregory_Stamina.WI_Gregory_Stamina_C.ExecuteUbergraph_WI_Gregory_Stamina
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWI_Gregory_Stamina_C::ExecuteUbergraph_WI_Gregory_Stamina(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Gregory_Stamina.WI_Gregory_Stamina_C.ExecuteUbergraph_WI_Gregory_Stamina");
		
		UWI_Gregory_Stamina_C_ExecuteUbergraph_WI_Gregory_Stamina_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function WI_Gregory_Stamina.WI_Gregory_Stamina_C.PowerLevelDispatch__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            PowerLevel                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWI_Gregory_Stamina_C::PowerLevelDispatch__DelegateSignature(int32_t PowerLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Gregory_Stamina.WI_Gregory_Stamina_C.PowerLevelDispatch__DelegateSignature");
		
		UWI_Gregory_Stamina_C_PowerLevelDispatch__DelegateSignature_Params params {};
		params.PowerLevel = PowerLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UWI_Gregory_Stamina_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWI_Gregory_Stamina_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WI_Gregory_Stamina.WI_Gregory_Stamina_C");
		return ptr;
	}

}


