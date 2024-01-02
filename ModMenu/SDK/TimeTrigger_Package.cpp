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
	 * 		Name   -> Function TimeTrigger.TimeTrigger_C.Start Timer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            CurrentTimeHour                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            CurrentTimeMinute                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            TimerEndHour                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            TimerEndMinute                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FScriptDelegate                              TimerEndEvent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
	 * 		bool                                               DoNotDespawnAI                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTimeTrigger_C::StartTimer(int32_t CurrentTimeHour, int32_t CurrentTimeMinute, int32_t TimerEndHour, int32_t TimerEndMinute, const class FScriptDelegate& TimerEndEvent, bool DoNotDespawnAI)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimeTrigger.TimeTrigger_C.Start Timer");
		
		UTimeTrigger_C_StartTimer_Params params {};
		params.CurrentTimeHour = CurrentTimeHour;
		params.CurrentTimeMinute = CurrentTimeMinute;
		params.TimerEndHour = TimerEndHour;
		params.TimerEndMinute = TimerEndMinute;
		params.TimerEndEvent = TimerEndEvent;
		params.DoNotDespawnAI = DoNotDespawnAI;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimeTrigger.TimeTrigger_C.Handle Minute Check
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            CurrentMinute                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTimeTrigger_C::HandleMinuteCheck(int32_t CurrentMinute)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimeTrigger.TimeTrigger_C.Handle Minute Check");
		
		UTimeTrigger_C_HandleMinuteCheck_Params params {};
		params.CurrentMinute = CurrentMinute;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimeTrigger.TimeTrigger_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void UTimeTrigger_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimeTrigger.TimeTrigger_C.ReceiveBeginPlay");
		
		UTimeTrigger_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimeTrigger.TimeTrigger_C.On Timer Started
	 * 		Flags  -> ()
	 */
	void UTimeTrigger_C::OnTimerStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimeTrigger.TimeTrigger_C.On Timer Started");
		
		UTimeTrigger_C_OnTimerStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimeTrigger.TimeTrigger_C.On Game Clock TIme Has Changed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Hour                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Minute                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTimeTrigger_C::OnGameClockTImeHasChanged(int32_t Hour, int32_t Minute)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimeTrigger.TimeTrigger_C.On Game Clock TIme Has Changed");
		
		UTimeTrigger_C_OnGameClockTImeHasChanged_Params params {};
		params.Hour = Hour;
		params.Minute = Minute;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimeTrigger.TimeTrigger_C.On Clock State Changed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsRunning                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTimeTrigger_C::OnClockStateChanged(bool bIsRunning)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimeTrigger.TimeTrigger_C.On Clock State Changed");
		
		UTimeTrigger_C_OnClockStateChanged_Params params {};
		params.bIsRunning = bIsRunning;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimeTrigger.TimeTrigger_C.ExecuteUbergraph_TimeTrigger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTimeTrigger_C::ExecuteUbergraph_TimeTrigger(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimeTrigger.TimeTrigger_C.ExecuteUbergraph_TimeTrigger");
		
		UTimeTrigger_C_ExecuteUbergraph_TimeTrigger_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimeTrigger.TimeTrigger_C.TimerInvoked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTimeTrigger_C::TimerInvoked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimeTrigger.TimeTrigger_C.TimerInvoked__DelegateSignature");
		
		UTimeTrigger_C_TimerInvoked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTimeTrigger_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTimeTrigger_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TimeTrigger.TimeTrigger_C");
		return ptr;
	}

}


