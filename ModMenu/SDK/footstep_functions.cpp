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
//		Name   -> Function footstep.footstep_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void Afootstep_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function footstep.footstep_C.ReceiveBeginPlay");

	Afootstep_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function footstep.footstep_C.Step
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void Afootstep_C::Step()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function footstep.footstep_C.Step");

	Afootstep_C_Step_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function footstep.footstep_C.ExecuteUbergraph_footstep
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void Afootstep_C::ExecuteUbergraph_footstep(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function footstep.footstep_C.ExecuteUbergraph_footstep");

	Afootstep_C_ExecuteUbergraph_footstep_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
