// Name: FNAF Security Breach, Version: 1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function WI_Freddy_Clock.WI_Freddy_Clock_C.Finished_1FD1C2C64919F01584174C814C8F4342
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWI_Freddy_Clock_C::Finished_1FD1C2C64919F01584174C814C8F4342()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_Freddy_Clock.WI_Freddy_Clock_C.Finished_1FD1C2C64919F01584174C814C8F4342");

	UWI_Freddy_Clock_C_Finished_1FD1C2C64919F01584174C814C8F4342_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function WI_Freddy_Clock.WI_Freddy_Clock_C.OnFailure_7F2CFDE7462F55FF6A63879E652B696E
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWI_Freddy_Clock_C::OnFailure_7F2CFDE7462F55FF6A63879E652B696E()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_Freddy_Clock.WI_Freddy_Clock_C.OnFailure_7F2CFDE7462F55FF6A63879E652B696E");

	UWI_Freddy_Clock_C_OnFailure_7F2CFDE7462F55FF6A63879E652B696E_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function WI_Freddy_Clock.WI_Freddy_Clock_C.OnSuccess_7F2CFDE7462F55FF6A63879E652B696E
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWI_Freddy_Clock_C::OnSuccess_7F2CFDE7462F55FF6A63879E652B696E()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_Freddy_Clock.WI_Freddy_Clock_C.OnSuccess_7F2CFDE7462F55FF6A63879E652B696E");

	UWI_Freddy_Clock_C_OnSuccess_7F2CFDE7462F55FF6A63879E652B696E_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function WI_Freddy_Clock.WI_Freddy_Clock_C.OnFailure_FBD07C26434C6628805089838B398A42
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       WrittenAchievementName                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              WrittenProgress                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                WrittenUserTag                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWI_Freddy_Clock_C::OnFailure_FBD07C26434C6628805089838B398A42(const struct FName& WrittenAchievementName, float WrittenProgress, int WrittenUserTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_Freddy_Clock.WI_Freddy_Clock_C.OnFailure_FBD07C26434C6628805089838B398A42");

	UWI_Freddy_Clock_C_OnFailure_FBD07C26434C6628805089838B398A42_Params params {};
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function WI_Freddy_Clock.WI_Freddy_Clock_C.OnSuccess_FBD07C26434C6628805089838B398A42
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       WrittenAchievementName                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              WrittenProgress                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                WrittenUserTag                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWI_Freddy_Clock_C::OnSuccess_FBD07C26434C6628805089838B398A42(const struct FName& WrittenAchievementName, float WrittenProgress, int WrittenUserTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_Freddy_Clock.WI_Freddy_Clock_C.OnSuccess_FBD07C26434C6628805089838B398A42");

	UWI_Freddy_Clock_C_OnSuccess_FBD07C26434C6628805089838B398A42_Params params {};
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function WI_Freddy_Clock.WI_Freddy_Clock_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWI_Freddy_Clock_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_Freddy_Clock.WI_Freddy_Clock_C.Tick");

	UWI_Freddy_Clock_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function WI_Freddy_Clock.WI_Freddy_Clock_C.Showtime
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWI_Freddy_Clock_C::Showtime()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_Freddy_Clock.WI_Freddy_Clock_C.Showtime");

	UWI_Freddy_Clock_C_Showtime_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function WI_Freddy_Clock.WI_Freddy_Clock_C.ShowTimeNoRunClock
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWI_Freddy_Clock_C::ShowTimeNoRunClock()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_Freddy_Clock.WI_Freddy_Clock_C.ShowTimeNoRunClock");

	UWI_Freddy_Clock_C_ShowTimeNoRunClock_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function WI_Freddy_Clock.WI_Freddy_Clock_C.ExecuteUbergraph_WI_Freddy_Clock
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWI_Freddy_Clock_C::ExecuteUbergraph_WI_Freddy_Clock(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_Freddy_Clock.WI_Freddy_Clock_C.ExecuteUbergraph_WI_Freddy_Clock");

	UWI_Freddy_Clock_C_ExecuteUbergraph_WI_Freddy_Clock_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
