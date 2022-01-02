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
//		Name   -> Function Staffbot_ABP_Security.Staffbot_ABP_Security_C.BlueprintUpdateAnimation
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStaffbot_ABP_Security_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Staffbot_ABP_Security.Staffbot_ABP_Security_C.BlueprintUpdateAnimation");

	UStaffbot_ABP_Security_C_BlueprintUpdateAnimation_Params params {};
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Staffbot_ABP_Security.Staffbot_ABP_Security_C.BlueprintBeginPlay
//		Flags  -> (Event, Public, BlueprintEvent)
void UStaffbot_ABP_Security_C::BlueprintBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Staffbot_ABP_Security.Staffbot_ABP_Security_C.BlueprintBeginPlay");

	UStaffbot_ABP_Security_C_BlueprintBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Staffbot_ABP_Security.Staffbot_ABP_Security_C.AimHead_Event
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               AimHead                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UStaffbot_ABP_Security_C::AimHead_Event(bool AimHead)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Staffbot_ABP_Security.Staffbot_ABP_Security_C.AimHead_Event");

	UStaffbot_ABP_Security_C_AimHead_Event_Params params {};
	params.AimHead = AimHead;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Staffbot_ABP_Security.Staffbot_ABP_Security_C.CanJumpscareEvent
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UStaffbot_ABP_Security_C::CanJumpscareEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Staffbot_ABP_Security.Staffbot_ABP_Security_C.CanJumpscareEvent");

	UStaffbot_ABP_Security_C_CanJumpscareEvent_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Staffbot_ABP_Security.Staffbot_ABP_Security_C.JumpscareEvent
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               canJumpscare                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UStaffbot_ABP_Security_C::JumpscareEvent(bool canJumpscare)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Staffbot_ABP_Security.Staffbot_ABP_Security_C.JumpscareEvent");

	UStaffbot_ABP_Security_C_JumpscareEvent_Params params {};
	params.canJumpscare = canJumpscare;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Staffbot_ABP_Security.Staffbot_ABP_Security_C.ExecuteUbergraph_Staffbot_ABP_Security
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStaffbot_ABP_Security_C::ExecuteUbergraph_Staffbot_ABP_Security(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Staffbot_ABP_Security.Staffbot_ABP_Security_C.ExecuteUbergraph_Staffbot_ABP_Security");

	UStaffbot_ABP_Security_C_ExecuteUbergraph_Staffbot_ABP_Security_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
