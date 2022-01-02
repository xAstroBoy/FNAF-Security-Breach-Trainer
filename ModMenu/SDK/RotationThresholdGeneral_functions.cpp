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
//		Name   -> Function RotationThresholdGeneral.RotationThresholdGeneral_C.ReceiveTick
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URotationThresholdGeneral_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RotationThresholdGeneral.RotationThresholdGeneral_C.ReceiveTick");

	URotationThresholdGeneral_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function RotationThresholdGeneral.RotationThresholdGeneral_C.Start
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void URotationThresholdGeneral_C::Start()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RotationThresholdGeneral.RotationThresholdGeneral_C.Start");

	URotationThresholdGeneral_C_Start_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function RotationThresholdGeneral.RotationThresholdGeneral_C.Stop
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void URotationThresholdGeneral_C::Stop()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RotationThresholdGeneral.RotationThresholdGeneral_C.Stop");

	URotationThresholdGeneral_C_Stop_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function RotationThresholdGeneral.RotationThresholdGeneral_C.ExecuteUbergraph_RotationThresholdGeneral
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URotationThresholdGeneral_C::ExecuteUbergraph_RotationThresholdGeneral(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RotationThresholdGeneral.RotationThresholdGeneral_C.ExecuteUbergraph_RotationThresholdGeneral");

	URotationThresholdGeneral_C_ExecuteUbergraph_RotationThresholdGeneral_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function RotationThresholdGeneral.RotationThresholdGeneral_C.OnThresholdReached__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void URotationThresholdGeneral_C::OnThresholdReached__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RotationThresholdGeneral.RotationThresholdGeneral_C.OnThresholdReached__DelegateSignature");

	URotationThresholdGeneral_C_OnThresholdReached__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
