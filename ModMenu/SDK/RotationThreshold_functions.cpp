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
//		Name   -> Function RotationThreshold.RotationThreshold_C.Start
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void URotationThreshold_C::Start()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RotationThreshold.RotationThreshold_C.Start");

	URotationThreshold_C_Start_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function RotationThreshold.RotationThreshold_C.ReceiveTick
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URotationThreshold_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RotationThreshold.RotationThreshold_C.ReceiveTick");

	URotationThreshold_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function RotationThreshold.RotationThreshold_C.Stop
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void URotationThreshold_C::Stop()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RotationThreshold.RotationThreshold_C.Stop");

	URotationThreshold_C_Stop_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function RotationThreshold.RotationThreshold_C.ExecuteUbergraph_RotationThreshold
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URotationThreshold_C::ExecuteUbergraph_RotationThreshold(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RotationThreshold.RotationThreshold_C.ExecuteUbergraph_RotationThreshold");

	URotationThreshold_C_ExecuteUbergraph_RotationThreshold_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function RotationThreshold.RotationThreshold_C.OnRotationThresholdReached__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void URotationThreshold_C::OnRotationThresholdReached__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RotationThreshold.RotationThreshold_C.OnRotationThresholdReached__DelegateSignature");

	URotationThreshold_C_OnRotationThresholdReached__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
