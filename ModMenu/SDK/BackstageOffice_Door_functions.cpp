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
//		Name   -> Function BackstageOffice_Door.BackstageOffice_Door_C.ResetPower
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABackstageOffice_Door_C::ResetPower()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BackstageOffice_Door.BackstageOffice_Door_C.ResetPower");

	ABackstageOffice_Door_C_ResetPower_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BackstageOffice_Door.BackstageOffice_Door_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABackstageOffice_Door_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BackstageOffice_Door.BackstageOffice_Door_C.UserConstructionScript");

	ABackstageOffice_Door_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BackstageOffice_Door.BackstageOffice_Door_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABackstageOffice_Door_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BackstageOffice_Door.BackstageOffice_Door_C.ReceiveBeginPlay");

	ABackstageOffice_Door_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BackstageOffice_Door.BackstageOffice_Door_C.ReceiveActorBeginOverlap
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABackstageOffice_Door_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BackstageOffice_Door.BackstageOffice_Door_C.ReceiveActorBeginOverlap");

	ABackstageOffice_Door_C_ReceiveActorBeginOverlap_Params params {};
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BackstageOffice_Door.BackstageOffice_Door_C.ReceiveTick
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABackstageOffice_Door_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BackstageOffice_Door.BackstageOffice_Door_C.ReceiveTick");

	ABackstageOffice_Door_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BackstageOffice_Door.BackstageOffice_Door_C.Drain Power
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABackstageOffice_Door_C::Drain_Power(float Amount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BackstageOffice_Door.BackstageOffice_Door_C.Drain Power");

	ABackstageOffice_Door_C_Drain_Power_Params params {};
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BackstageOffice_Door.BackstageOffice_Door_C.ShockDoor
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABackstageOffice_Door_C::ShockDoor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BackstageOffice_Door.BackstageOffice_Door_C.ShockDoor");

	ABackstageOffice_Door_C_ShockDoor_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BackstageOffice_Door.BackstageOffice_Door_C.Flicker Lights
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABackstageOffice_Door_C::Flicker_Lights()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BackstageOffice_Door.BackstageOffice_Door_C.Flicker Lights");

	ABackstageOffice_Door_C_Flicker_Lights_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BackstageOffice_Door.BackstageOffice_Door_C.ExecuteUbergraph_BackstageOffice_Door
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABackstageOffice_Door_C::ExecuteUbergraph_BackstageOffice_Door(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BackstageOffice_Door.BackstageOffice_Door_C.ExecuteUbergraph_BackstageOffice_Door");

	ABackstageOffice_Door_C_ExecuteUbergraph_BackstageOffice_Door_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BackstageOffice_Door.BackstageOffice_Door_C.OnActorOverlap__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABackstageOffice_Door_C::OnActorOverlap__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BackstageOffice_Door.BackstageOffice_Door_C.OnActorOverlap__DelegateSignature");

	ABackstageOffice_Door_C_OnActorOverlap__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BackstageOffice_Door.BackstageOffice_Door_C.OnDoorDrained__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABackstageOffice_Door_C::OnDoorDrained__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BackstageOffice_Door.BackstageOffice_Door_C.OnDoorDrained__DelegateSignature");

	ABackstageOffice_Door_C_OnDoorDrained__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
