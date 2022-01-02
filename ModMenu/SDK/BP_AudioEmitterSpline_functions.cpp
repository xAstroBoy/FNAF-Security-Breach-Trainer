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
//		Name   -> Function BP_AudioEmitterSpline.BP_AudioEmitterSpline_C.StopEmitter
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_AudioEmitterSpline_C::StopEmitter()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AudioEmitterSpline.BP_AudioEmitterSpline_C.StopEmitter");

	ABP_AudioEmitterSpline_C_StopEmitter_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_AudioEmitterSpline.BP_AudioEmitterSpline_C.PlayEmitter
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_AudioEmitterSpline_C::PlayEmitter()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AudioEmitterSpline.BP_AudioEmitterSpline_C.PlayEmitter");

	ABP_AudioEmitterSpline_C_PlayEmitter_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_AudioEmitterSpline.BP_AudioEmitterSpline_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_AudioEmitterSpline_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AudioEmitterSpline.BP_AudioEmitterSpline_C.ReceiveBeginPlay");

	ABP_AudioEmitterSpline_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_AudioEmitterSpline.BP_AudioEmitterSpline_C.ReceiveTick
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AudioEmitterSpline_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AudioEmitterSpline.BP_AudioEmitterSpline_C.ReceiveTick");

	ABP_AudioEmitterSpline_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_AudioEmitterSpline.BP_AudioEmitterSpline_C.ToggleInRange
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               InRange                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_AudioEmitterSpline_C::ToggleInRange(bool InRange)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AudioEmitterSpline.BP_AudioEmitterSpline_C.ToggleInRange");

	ABP_AudioEmitterSpline_C_ToggleInRange_Params params {};
	params.InRange = InRange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_AudioEmitterSpline.BP_AudioEmitterSpline_C.ExecuteUbergraph_BP_AudioEmitterSpline
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AudioEmitterSpline_C::ExecuteUbergraph_BP_AudioEmitterSpline(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AudioEmitterSpline.BP_AudioEmitterSpline_C.ExecuteUbergraph_BP_AudioEmitterSpline");

	ABP_AudioEmitterSpline_C_ExecuteUbergraph_BP_AudioEmitterSpline_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
