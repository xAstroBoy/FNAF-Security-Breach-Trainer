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
//		Name   -> Function BPCeilingFan.BPCeilingFan_C.SwitchColorForScenario
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABPCeilingFan_C::SwitchColorForScenario()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPCeilingFan.BPCeilingFan_C.SwitchColorForScenario");

	ABPCeilingFan_C_SwitchColorForScenario_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BPCeilingFan.BPCeilingFan_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABPCeilingFan_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPCeilingFan.BPCeilingFan_C.ReceiveBeginPlay");

	ABPCeilingFan_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BPCeilingFan.BPCeilingFan_C.ExecuteUbergraph_BPCeilingFan
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABPCeilingFan_C::ExecuteUbergraph_BPCeilingFan(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPCeilingFan.BPCeilingFan_C.ExecuteUbergraph_BPCeilingFan");

	ABPCeilingFan_C_ExecuteUbergraph_BPCeilingFan_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
