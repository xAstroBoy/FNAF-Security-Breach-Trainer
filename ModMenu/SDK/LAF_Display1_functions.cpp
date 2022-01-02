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
//		Name   -> Function LAF_Display1.LAF_Display1_C.StopEmitter
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ALAF_Display1_C::StopEmitter()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LAF_Display1.LAF_Display1_C.StopEmitter");

	ALAF_Display1_C_StopEmitter_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function LAF_Display1.LAF_Display1_C.PlayEmitter
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ALAF_Display1_C::PlayEmitter()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LAF_Display1.LAF_Display1_C.PlayEmitter");

	ALAF_Display1_C_PlayEmitter_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function LAF_Display1.LAF_Display1_C.ToggleInRange
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               InRange                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ALAF_Display1_C::ToggleInRange(bool InRange)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LAF_Display1.LAF_Display1_C.ToggleInRange");

	ALAF_Display1_C_ToggleInRange_Params params {};
	params.InRange = InRange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function LAF_Display1.LAF_Display1_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ALAF_Display1_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LAF_Display1.LAF_Display1_C.ReceiveBeginPlay");

	ALAF_Display1_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function LAF_Display1.LAF_Display1_C.Stop Video
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ALAF_Display1_C::Stop_Video()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LAF_Display1.LAF_Display1_C.Stop Video");

	ALAF_Display1_C_Stop_Video_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function LAF_Display1.LAF_Display1_C.ExecuteUbergraph_LAF_Display1
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALAF_Display1_C::ExecuteUbergraph_LAF_Display1(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LAF_Display1.LAF_Display1_C.ExecuteUbergraph_LAF_Display1");

	ALAF_Display1_C_ExecuteUbergraph_LAF_Display1_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
