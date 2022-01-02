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
//		Name   -> Function SignalDoorActorLoaded.SignalDoorActorLoaded_C.ReceiveTick
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASignalDoorActorLoaded_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SignalDoorActorLoaded.SignalDoorActorLoaded_C.ReceiveTick");

	ASignalDoorActorLoaded_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function SignalDoorActorLoaded.SignalDoorActorLoaded_C.ExecuteUbergraph_SignalDoorActorLoaded
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASignalDoorActorLoaded_C::ExecuteUbergraph_SignalDoorActorLoaded(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SignalDoorActorLoaded.SignalDoorActorLoaded_C.ExecuteUbergraph_SignalDoorActorLoaded");

	ASignalDoorActorLoaded_C_ExecuteUbergraph_SignalDoorActorLoaded_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
