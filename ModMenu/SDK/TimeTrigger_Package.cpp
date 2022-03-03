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
	 * 		Name   -> Function TimeTrigger.TimeTrigger_C.Start Timer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Current_Time_Hour                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Current_Time_Minute                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            TImer_End_Hour                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Timer_End_Minute                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FScriptDelegate                              Timer_End_Event                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
	 */
	void UTimeTrigger_C::Start_Timer(int32_t Current_Time_Hour, int32_t Current_Time_Minute, int32_t TImer_End_Hour, int32_t Timer_End_Minute, const class FScriptDelegate& Timer_End_Event)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimeTrigger.TimeTrigger_C.Start Timer");
		
		UTimeTrigger_C_Start_Timer_Params params {};
		params.Current_Time_Hour = Current_Time_Hour;
		params.Current_Time_Minute = Current_Time_Minute;
		params.TImer_End_Hour = TImer_End_Hour;
		params.Timer_End_Minute = Timer_End_Minute;
		params.Timer_End_Event = Timer_End_Event;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function TimeTrigger.TimeTrigger_C.Handle Minute Check
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            CurrentMinute                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTimeTrigger_C::Handle_Minute_Check(int32_t CurrentMinute)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimeTrigger.TimeTrigger_C.Handle Minute Check");
		
		UTimeTrigger_C_Handle_Minute_Check_Params params {};
		params.CurrentMinute = CurrentMinute;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function TimeTrigger.TimeTrigger_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
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
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function TimeTrigger.TimeTrigger_C.On Timer Started
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UTimeTrigger_C::On_Timer_Started()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimeTrigger.TimeTrigger_C.On Timer Started");
		
		UTimeTrigger_C_On_Timer_Started_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function TimeTrigger.TimeTrigger_C.On Game Clock TIme Has Changed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Hour                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Minute                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTimeTrigger_C::On_Game_Clock_TIme_Has_Changed(int32_t Hour, int32_t Minute)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimeTrigger.TimeTrigger_C.On Game Clock TIme Has Changed");
		
		UTimeTrigger_C_On_Game_Clock_TIme_Has_Changed_Params params {};
		params.Hour = Hour;
		params.Minute = Minute;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function TimeTrigger.TimeTrigger_C.On Clock State Changed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsRunning                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTimeTrigger_C::On_Clock_State_Changed(bool bIsRunning)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimeTrigger.TimeTrigger_C.On Clock State Changed");
		
		UTimeTrigger_C_On_Clock_State_Changed_Params params {};
		params.bIsRunning = bIsRunning;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function TimeTrigger.TimeTrigger_C.ExecuteUbergraph_TimeTrigger
	 * 		Flags  -> (Final)
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
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function TimeTrigger.TimeTrigger_C.TimerInvoked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UTimeTrigger_C.StaticClass
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


