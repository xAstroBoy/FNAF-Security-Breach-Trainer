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
//		Name   -> Function ShatteredMonty.ShatteredMonty_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void AShatteredMonty_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ShatteredMonty.ShatteredMonty_C.ReceiveBeginPlay");

	AShatteredMonty_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function ShatteredMonty.ShatteredMonty_C.EnterHideMode
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      HideActor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AShatteredMonty_C::EnterHideMode(class AActor* HideActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ShatteredMonty.ShatteredMonty_C.EnterHideMode");

	AShatteredMonty_C_EnterHideMode_Params params {};
	params.HideActor = HideActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function ShatteredMonty.ShatteredMonty_C.ExitHideMode
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      HideActor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AShatteredMonty_C::ExitHideMode(class AActor* HideActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ShatteredMonty.ShatteredMonty_C.ExitHideMode");

	AShatteredMonty_C_ExitHideMode_Params params {};
	params.HideActor = HideActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function ShatteredMonty.ShatteredMonty_C.ExecuteUbergraph_ShatteredMonty
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AShatteredMonty_C::ExecuteUbergraph_ShatteredMonty(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ShatteredMonty.ShatteredMonty_C.ExecuteUbergraph_ShatteredMonty");

	AShatteredMonty_C_ExecuteUbergraph_ShatteredMonty_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
