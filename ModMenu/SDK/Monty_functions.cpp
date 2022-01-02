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
//		Name   -> Function Monty.Monty_C.EnterHideMode
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      HideActor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMonty_C::EnterHideMode(class AActor* HideActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Monty.Monty_C.EnterHideMode");

	AMonty_C_EnterHideMode_Params params {};
	params.HideActor = HideActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Monty.Monty_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void AMonty_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Monty.Monty_C.ReceiveBeginPlay");

	AMonty_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Monty.Monty_C.Stun
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void AMonty_C::Stun()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Monty.Monty_C.Stun");

	AMonty_C_Stun_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Monty.Monty_C.ExecuteUbergraph_Monty
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMonty_C::ExecuteUbergraph_Monty(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Monty.Monty_C.ExecuteUbergraph_Monty");

	AMonty_C_ExecuteUbergraph_Monty_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
