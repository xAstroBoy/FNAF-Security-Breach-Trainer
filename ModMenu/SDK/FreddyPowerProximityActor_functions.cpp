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
//		Name   -> Function FreddyPowerProximityActor.FreddyPowerProximityActor_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void AFreddyPowerProximityActor_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FreddyPowerProximityActor.FreddyPowerProximityActor_C.ReceiveBeginPlay");

	AFreddyPowerProximityActor_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function FreddyPowerProximityActor.FreddyPowerProximityActor_C.ReceiveTick
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFreddyPowerProximityActor_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FreddyPowerProximityActor.FreddyPowerProximityActor_C.ReceiveTick");

	AFreddyPowerProximityActor_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function FreddyPowerProximityActor.FreddyPowerProximityActor_C.Setup Proximity
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                FreddyPower                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFreddyPowerProximityActor_C::Setup_Proximity(int FreddyPower)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FreddyPowerProximityActor.FreddyPowerProximityActor_C.Setup Proximity");

	AFreddyPowerProximityActor_C_Setup_Proximity_Params params {};
	params.FreddyPower = FreddyPower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function FreddyPowerProximityActor.FreddyPowerProximityActor_C.ExecuteUbergraph_FreddyPowerProximityActor
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFreddyPowerProximityActor_C::ExecuteUbergraph_FreddyPowerProximityActor(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FreddyPowerProximityActor.FreddyPowerProximityActor_C.ExecuteUbergraph_FreddyPowerProximityActor");

	AFreddyPowerProximityActor_C_ExecuteUbergraph_FreddyPowerProximityActor_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
