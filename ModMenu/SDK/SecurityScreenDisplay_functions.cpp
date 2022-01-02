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
//		Name   -> Function SecurityScreenDisplay.SecurityScreenDisplay_C.ToggleInRange
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               InRange                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ASecurityScreenDisplay_C::ToggleInRange(bool InRange)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SecurityScreenDisplay.SecurityScreenDisplay_C.ToggleInRange");

	ASecurityScreenDisplay_C_ToggleInRange_Params params {};
	params.InRange = InRange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function SecurityScreenDisplay.SecurityScreenDisplay_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ASecurityScreenDisplay_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SecurityScreenDisplay.SecurityScreenDisplay_C.ReceiveBeginPlay");

	ASecurityScreenDisplay_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function SecurityScreenDisplay.SecurityScreenDisplay_C.PlayEmitter
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ASecurityScreenDisplay_C::PlayEmitter()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SecurityScreenDisplay.SecurityScreenDisplay_C.PlayEmitter");

	ASecurityScreenDisplay_C_PlayEmitter_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function SecurityScreenDisplay.SecurityScreenDisplay_C.StopEmitter
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ASecurityScreenDisplay_C::StopEmitter()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SecurityScreenDisplay.SecurityScreenDisplay_C.StopEmitter");

	ASecurityScreenDisplay_C_StopEmitter_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function SecurityScreenDisplay.SecurityScreenDisplay_C.ExecuteUbergraph_SecurityScreenDisplay
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASecurityScreenDisplay_C::ExecuteUbergraph_SecurityScreenDisplay(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SecurityScreenDisplay.SecurityScreenDisplay_C.ExecuteUbergraph_SecurityScreenDisplay");

	ASecurityScreenDisplay_C_ExecuteUbergraph_SecurityScreenDisplay_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
