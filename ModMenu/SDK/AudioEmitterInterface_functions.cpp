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
//		Name   -> Function AudioEmitterInterface.AudioEmitterInterface_C.ToggleInRange
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               InRange                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAudioEmitterInterface_C::ToggleInRange(bool InRange)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AudioEmitterInterface.AudioEmitterInterface_C.ToggleInRange");

	UAudioEmitterInterface_C_ToggleInRange_Params params {};
	params.InRange = InRange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function AudioEmitterInterface.AudioEmitterInterface_C.PlayEmitter
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UAudioEmitterInterface_C::PlayEmitter()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AudioEmitterInterface.AudioEmitterInterface_C.PlayEmitter");

	UAudioEmitterInterface_C_PlayEmitter_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function AudioEmitterInterface.AudioEmitterInterface_C.StopEmitter
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UAudioEmitterInterface_C::StopEmitter()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AudioEmitterInterface.AudioEmitterInterface_C.StopEmitter");

	UAudioEmitterInterface_C_StopEmitter_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
