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
//		Name   -> Function SignalActorLoaded.SignalActorLoaded_C.ReceiveTick
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASignalActorLoaded_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SignalActorLoaded.SignalActorLoaded_C.ReceiveTick");

	ASignalActorLoaded_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function SignalActorLoaded.SignalActorLoaded_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ASignalActorLoaded_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SignalActorLoaded.SignalActorLoaded_C.ReceiveBeginPlay");

	ASignalActorLoaded_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function SignalActorLoaded.SignalActorLoaded_C.ExecuteUbergraph_SignalActorLoaded
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASignalActorLoaded_C::ExecuteUbergraph_SignalActorLoaded(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SignalActorLoaded.SignalActorLoaded_C.ExecuteUbergraph_SignalActorLoaded");

	ASignalActorLoaded_C_ExecuteUbergraph_SignalActorLoaded_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function SignalActorLoaded.SignalActorLoaded_C.OnActorLoaded__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      LoadedActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASignalActorLoaded_C::OnActorLoaded__DelegateSignature(class AActor* LoadedActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SignalActorLoaded.SignalActorLoaded_C.OnActorLoaded__DelegateSignature");

	ASignalActorLoaded_C_OnActorLoaded__DelegateSignature_Params params {};
	params.LoadedActor = LoadedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
