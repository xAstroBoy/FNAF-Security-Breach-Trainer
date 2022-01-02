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
//		Name   -> Function Staffbot_ABP_Cleaner.Staffbot_ABP_Cleaner_C.BlueprintUpdateAnimation
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStaffbot_ABP_Cleaner_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Staffbot_ABP_Cleaner.Staffbot_ABP_Cleaner_C.BlueprintUpdateAnimation");

	UStaffbot_ABP_Cleaner_C_BlueprintUpdateAnimation_Params params {};
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Staffbot_ABP_Cleaner.Staffbot_ABP_Cleaner_C.BlueprintBeginPlay
//		Flags  -> (Event, Public, BlueprintEvent)
void UStaffbot_ABP_Cleaner_C::BlueprintBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Staffbot_ABP_Cleaner.Staffbot_ABP_Cleaner_C.BlueprintBeginPlay");

	UStaffbot_ABP_Cleaner_C_BlueprintBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Staffbot_ABP_Cleaner.Staffbot_ABP_Cleaner_C.isStunnedEvent
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsStunned                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UStaffbot_ABP_Cleaner_C::isStunnedEvent(bool IsStunned)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Staffbot_ABP_Cleaner.Staffbot_ABP_Cleaner_C.isStunnedEvent");

	UStaffbot_ABP_Cleaner_C_isStunnedEvent_Params params {};
	params.IsStunned = IsStunned;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Staffbot_ABP_Cleaner.Staffbot_ABP_Cleaner_C.WarningEvent
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsWarning                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		int                                                WarningCount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStaffbot_ABP_Cleaner_C::WarningEvent(bool IsWarning, int WarningCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Staffbot_ABP_Cleaner.Staffbot_ABP_Cleaner_C.WarningEvent");

	UStaffbot_ABP_Cleaner_C_WarningEvent_Params params {};
	params.IsWarning = IsWarning;
	params.WarningCount = WarningCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Staffbot_ABP_Cleaner.Staffbot_ABP_Cleaner_C.AlertEvent
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsAlerting                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UStaffbot_ABP_Cleaner_C::AlertEvent(bool IsAlerting)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Staffbot_ABP_Cleaner.Staffbot_ABP_Cleaner_C.AlertEvent");

	UStaffbot_ABP_Cleaner_C_AlertEvent_Params params {};
	params.IsAlerting = IsAlerting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Staffbot_ABP_Cleaner.Staffbot_ABP_Cleaner_C.ExecuteUbergraph_Staffbot_ABP_Cleaner
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStaffbot_ABP_Cleaner_C::ExecuteUbergraph_Staffbot_ABP_Cleaner(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Staffbot_ABP_Cleaner.Staffbot_ABP_Cleaner_C.ExecuteUbergraph_Staffbot_ABP_Cleaner");

	UStaffbot_ABP_Cleaner_C_ExecuteUbergraph_Staffbot_ABP_Cleaner_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
