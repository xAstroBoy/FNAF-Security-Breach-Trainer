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
//		Name   -> Function MontyDropTellAnchor.MontyDropTellAnchor_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void AMontyDropTellAnchor_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MontyDropTellAnchor.MontyDropTellAnchor_C.ReceiveBeginPlay");

	AMontyDropTellAnchor_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MontyDropTellAnchor.MontyDropTellAnchor_C.ReceiveTick
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMontyDropTellAnchor_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MontyDropTellAnchor.MontyDropTellAnchor_C.ReceiveTick");

	AMontyDropTellAnchor_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MontyDropTellAnchor.MontyDropTellAnchor_C.ExecuteUbergraph_MontyDropTellAnchor
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMontyDropTellAnchor_C::ExecuteUbergraph_MontyDropTellAnchor(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MontyDropTellAnchor.MontyDropTellAnchor_C.ExecuteUbergraph_MontyDropTellAnchor");

	AMontyDropTellAnchor_C_ExecuteUbergraph_MontyDropTellAnchor_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
