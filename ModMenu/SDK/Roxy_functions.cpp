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
//		Name   -> Function Roxy.Roxy_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ARoxy_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Roxy.Roxy_C.ReceiveBeginPlay");

	ARoxy_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Roxy.Roxy_C.Random Howling
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ARoxy_C::Random_Howling(bool enable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Roxy.Roxy_C.Random Howling");

	ARoxy_C_Random_Howling_Params params {};
	params.enable = enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Roxy.Roxy_C.ExecuteUbergraph_Roxy
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ARoxy_C::ExecuteUbergraph_Roxy(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Roxy.Roxy_C.ExecuteUbergraph_Roxy");

	ARoxy_C_ExecuteUbergraph_Roxy_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
