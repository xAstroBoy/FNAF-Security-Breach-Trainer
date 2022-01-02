﻿// Name: FNAF Security Breach, Version: 1

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
//		Name   -> Function MontyJump.MontyJump_C.Jump Check
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ACharacter*                                  Object                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UMontyJump_C::Jump_Check(class ACharacter* Object, bool* success)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MontyJump.MontyJump_C.Jump Check");

	UMontyJump_C_Jump_Check_Params params {};
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (success != nullptr)
		*success = params.success;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MontyJump.MontyJump_C.OnNotifyEnd_95A8414241D4C3D70915AFB59A5B125F
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMontyJump_C::OnNotifyEnd_95A8414241D4C3D70915AFB59A5B125F(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MontyJump.MontyJump_C.OnNotifyEnd_95A8414241D4C3D70915AFB59A5B125F");

	UMontyJump_C_OnNotifyEnd_95A8414241D4C3D70915AFB59A5B125F_Params params {};
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MontyJump.MontyJump_C.OnNotifyBegin_95A8414241D4C3D70915AFB59A5B125F
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMontyJump_C::OnNotifyBegin_95A8414241D4C3D70915AFB59A5B125F(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MontyJump.MontyJump_C.OnNotifyBegin_95A8414241D4C3D70915AFB59A5B125F");

	UMontyJump_C_OnNotifyBegin_95A8414241D4C3D70915AFB59A5B125F_Params params {};
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MontyJump.MontyJump_C.OnInterrupted_95A8414241D4C3D70915AFB59A5B125F
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMontyJump_C::OnInterrupted_95A8414241D4C3D70915AFB59A5B125F(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MontyJump.MontyJump_C.OnInterrupted_95A8414241D4C3D70915AFB59A5B125F");

	UMontyJump_C_OnInterrupted_95A8414241D4C3D70915AFB59A5B125F_Params params {};
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MontyJump.MontyJump_C.OnBlendOut_95A8414241D4C3D70915AFB59A5B125F
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMontyJump_C::OnBlendOut_95A8414241D4C3D70915AFB59A5B125F(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MontyJump.MontyJump_C.OnBlendOut_95A8414241D4C3D70915AFB59A5B125F");

	UMontyJump_C_OnBlendOut_95A8414241D4C3D70915AFB59A5B125F_Params params {};
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MontyJump.MontyJump_C.OnCompleted_95A8414241D4C3D70915AFB59A5B125F
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMontyJump_C::OnCompleted_95A8414241D4C3D70915AFB59A5B125F(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MontyJump.MontyJump_C.OnCompleted_95A8414241D4C3D70915AFB59A5B125F");

	UMontyJump_C_OnCompleted_95A8414241D4C3D70915AFB59A5B125F_Params params {};
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MontyJump.MontyJump_C.ReceiveExecuteAI
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class AAIController*                               OwnerController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMontyJump_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MontyJump.MontyJump_C.ReceiveExecuteAI");

	UMontyJump_C_ReceiveExecuteAI_Params params {};
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MontyJump.MontyJump_C.ExecuteUbergraph_MontyJump
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMontyJump_C::ExecuteUbergraph_MontyJump(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MontyJump.MontyJump_C.ExecuteUbergraph_MontyJump");

	UMontyJump_C_ExecuteUbergraph_MontyJump_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
