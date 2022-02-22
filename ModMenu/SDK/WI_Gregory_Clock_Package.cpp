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
	 * 		Name   -> Function WI_Gregory_Clock.WI_Gregory_Clock_C.Finished_A235BE3544718285A83055848878902F
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWI_Gregory_Clock_C::Finished_A235BE3544718285A83055848878902F()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Gregory_Clock.WI_Gregory_Clock_C.Finished_A235BE3544718285A83055848878902F");
		
		UWI_Gregory_Clock_C_Finished_A235BE3544718285A83055848878902F_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function WI_Gregory_Clock.WI_Gregory_Clock_C.OnFailure_1FD9A5F14F3F0BA6F2C2AA9A1F9BB590
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWI_Gregory_Clock_C::OnFailure_1FD9A5F14F3F0BA6F2C2AA9A1F9BB590()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Gregory_Clock.WI_Gregory_Clock_C.OnFailure_1FD9A5F14F3F0BA6F2C2AA9A1F9BB590");
		
		UWI_Gregory_Clock_C_OnFailure_1FD9A5F14F3F0BA6F2C2AA9A1F9BB590_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function WI_Gregory_Clock.WI_Gregory_Clock_C.OnSuccess_1FD9A5F14F3F0BA6F2C2AA9A1F9BB590
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWI_Gregory_Clock_C::OnSuccess_1FD9A5F14F3F0BA6F2C2AA9A1F9BB590()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Gregory_Clock.WI_Gregory_Clock_C.OnSuccess_1FD9A5F14F3F0BA6F2C2AA9A1F9BB590");
		
		UWI_Gregory_Clock_C_OnSuccess_1FD9A5F14F3F0BA6F2C2AA9A1F9BB590_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function WI_Gregory_Clock.WI_Gregory_Clock_C.OnFailure_9627632E42AF1548717DA3A133495CE7
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        WrittenAchievementName                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              WrittenProgress                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            WrittenUserTag                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWI_Gregory_Clock_C::OnFailure_9627632E42AF1548717DA3A133495CE7(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Gregory_Clock.WI_Gregory_Clock_C.OnFailure_9627632E42AF1548717DA3A133495CE7");
		
		UWI_Gregory_Clock_C_OnFailure_9627632E42AF1548717DA3A133495CE7_Params params {};
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
	 * 		Name   -> Function WI_Gregory_Clock.WI_Gregory_Clock_C.OnSuccess_9627632E42AF1548717DA3A133495CE7
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        WrittenAchievementName                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              WrittenProgress                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            WrittenUserTag                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWI_Gregory_Clock_C::OnSuccess_9627632E42AF1548717DA3A133495CE7(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Gregory_Clock.WI_Gregory_Clock_C.OnSuccess_9627632E42AF1548717DA3A133495CE7");
		
		UWI_Gregory_Clock_C_OnSuccess_9627632E42AF1548717DA3A133495CE7_Params params {};
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
	 * 		Name   -> Function WI_Gregory_Clock.WI_Gregory_Clock_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWI_Gregory_Clock_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Gregory_Clock.WI_Gregory_Clock_C.Tick");
		
		UWI_Gregory_Clock_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function WI_Gregory_Clock.WI_Gregory_Clock_C.Showtime
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWI_Gregory_Clock_C::Showtime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Gregory_Clock.WI_Gregory_Clock_C.Showtime");
		
		UWI_Gregory_Clock_C_Showtime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function WI_Gregory_Clock.WI_Gregory_Clock_C.ShowTimeNoRunClock
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWI_Gregory_Clock_C::ShowTimeNoRunClock()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Gregory_Clock.WI_Gregory_Clock_C.ShowTimeNoRunClock");
		
		UWI_Gregory_Clock_C_ShowTimeNoRunClock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function WI_Gregory_Clock.WI_Gregory_Clock_C.ExecuteUbergraph_WI_Gregory_Clock
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWI_Gregory_Clock_C::ExecuteUbergraph_WI_Gregory_Clock(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Gregory_Clock.WI_Gregory_Clock_C.ExecuteUbergraph_WI_Gregory_Clock");
		
		UWI_Gregory_Clock_C_ExecuteUbergraph_WI_Gregory_Clock_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UWI_Gregory_Clock_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWI_Gregory_Clock_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WI_Gregory_Clock.WI_Gregory_Clock_C");
		return ptr;
	}

}


