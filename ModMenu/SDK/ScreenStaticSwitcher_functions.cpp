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
//		Name   -> Function ScreenStaticSwitcher.ScreenStaticSwitcher_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void AScreenStaticSwitcher_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ScreenStaticSwitcher.ScreenStaticSwitcher_C.ReceiveBeginPlay");

	AScreenStaticSwitcher_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function ScreenStaticSwitcher.ScreenStaticSwitcher_C.Update
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AScreenStaticSwitcher_C::Update()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ScreenStaticSwitcher.ScreenStaticSwitcher_C.Update");

	AScreenStaticSwitcher_C_Update_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function ScreenStaticSwitcher.ScreenStaticSwitcher_C.ExecuteUbergraph_ScreenStaticSwitcher
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScreenStaticSwitcher_C::ExecuteUbergraph_ScreenStaticSwitcher(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ScreenStaticSwitcher.ScreenStaticSwitcher_C.ExecuteUbergraph_ScreenStaticSwitcher");

	AScreenStaticSwitcher_C_ExecuteUbergraph_ScreenStaticSwitcher_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
