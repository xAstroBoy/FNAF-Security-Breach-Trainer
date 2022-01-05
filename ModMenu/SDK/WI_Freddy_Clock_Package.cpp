﻿/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "WI_Freddy_Clock_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function WI_Freddy_Clock.WI_Freddy_Clock_C.Finished_1FD1C2C64919F01584174C814C8F4342
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWI_Freddy_Clock_C::Finished_1FD1C2C64919F01584174C814C8F4342()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Freddy_Clock.WI_Freddy_Clock_C.Finished_1FD1C2C64919F01584174C814C8F4342");
		
		UWI_Freddy_Clock_C_Finished_1FD1C2C64919F01584174C814C8F4342_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function WI_Freddy_Clock.WI_Freddy_Clock_C.OnFailure_7F2CFDE7462F55FF6A63879E652B696E
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWI_Freddy_Clock_C::OnFailure_7F2CFDE7462F55FF6A63879E652B696E()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Freddy_Clock.WI_Freddy_Clock_C.OnFailure_7F2CFDE7462F55FF6A63879E652B696E");
		
		UWI_Freddy_Clock_C_OnFailure_7F2CFDE7462F55FF6A63879E652B696E_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function WI_Freddy_Clock.WI_Freddy_Clock_C.OnSuccess_7F2CFDE7462F55FF6A63879E652B696E
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWI_Freddy_Clock_C::OnSuccess_7F2CFDE7462F55FF6A63879E652B696E()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Freddy_Clock.WI_Freddy_Clock_C.OnSuccess_7F2CFDE7462F55FF6A63879E652B696E");
		
		UWI_Freddy_Clock_C_OnSuccess_7F2CFDE7462F55FF6A63879E652B696E_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function WI_Freddy_Clock.WI_Freddy_Clock_C.OnFailure_FBD07C26434C6628805089838B398A42
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        WrittenAchievementName                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              WrittenProgress                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int                                                WrittenUserTag                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWI_Freddy_Clock_C::OnFailure_FBD07C26434C6628805089838B398A42(const class FName& WrittenAchievementName, float WrittenProgress, int WrittenUserTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Freddy_Clock.WI_Freddy_Clock_C.OnFailure_FBD07C26434C6628805089838B398A42");
		
		UWI_Freddy_Clock_C_OnFailure_FBD07C26434C6628805089838B398A42_Params params {};
		params.WrittenAchievementName = WrittenAchievementName;
		params.WrittenProgress = WrittenProgress;
		params.WrittenUserTag = WrittenUserTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function WI_Freddy_Clock.WI_Freddy_Clock_C.OnSuccess_FBD07C26434C6628805089838B398A42
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        WrittenAchievementName                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              WrittenProgress                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int                                                WrittenUserTag                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWI_Freddy_Clock_C::OnSuccess_FBD07C26434C6628805089838B398A42(const class FName& WrittenAchievementName, float WrittenProgress, int WrittenUserTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Freddy_Clock.WI_Freddy_Clock_C.OnSuccess_FBD07C26434C6628805089838B398A42");
		
		UWI_Freddy_Clock_C_OnSuccess_FBD07C26434C6628805089838B398A42_Params params {};
		params.WrittenAchievementName = WrittenAchievementName;
		params.WrittenProgress = WrittenProgress;
		params.WrittenUserTag = WrittenUserTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function WI_Freddy_Clock.WI_Freddy_Clock_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWI_Freddy_Clock_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Freddy_Clock.WI_Freddy_Clock_C.Tick");
		
		UWI_Freddy_Clock_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function WI_Freddy_Clock.WI_Freddy_Clock_C.Showtime
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWI_Freddy_Clock_C::Showtime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Freddy_Clock.WI_Freddy_Clock_C.Showtime");
		
		UWI_Freddy_Clock_C_Showtime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function WI_Freddy_Clock.WI_Freddy_Clock_C.ShowTimeNoRunClock
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWI_Freddy_Clock_C::ShowTimeNoRunClock()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Freddy_Clock.WI_Freddy_Clock_C.ShowTimeNoRunClock");
		
		UWI_Freddy_Clock_C_ShowTimeNoRunClock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function WI_Freddy_Clock.WI_Freddy_Clock_C.ExecuteUbergraph_WI_Freddy_Clock
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWI_Freddy_Clock_C::ExecuteUbergraph_WI_Freddy_Clock(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Freddy_Clock.WI_Freddy_Clock_C.ExecuteUbergraph_WI_Freddy_Clock");
		
		UWI_Freddy_Clock_C_ExecuteUbergraph_WI_Freddy_Clock_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UWI_Freddy_Clock_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWI_Freddy_Clock_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WI_Freddy_Clock.WI_Freddy_Clock_C");
		return ptr;
	}

}


