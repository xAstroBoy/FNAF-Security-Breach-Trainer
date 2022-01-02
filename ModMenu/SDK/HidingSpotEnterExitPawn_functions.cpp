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
//		Name   -> Function HidingSpotEnterExitPawn.HidingSpotEnterExitPawn_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void AHidingSpotEnterExitPawn_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HidingSpotEnterExitPawn.HidingSpotEnterExitPawn_C.ReceiveBeginPlay");

	AHidingSpotEnterExitPawn_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function HidingSpotEnterExitPawn.HidingSpotEnterExitPawn_C.ReceiveTick
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHidingSpotEnterExitPawn_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HidingSpotEnterExitPawn.HidingSpotEnterExitPawn_C.ReceiveTick");

	AHidingSpotEnterExitPawn_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function HidingSpotEnterExitPawn.HidingSpotEnterExitPawn_C.ExecuteUbergraph_HidingSpotEnterExitPawn
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHidingSpotEnterExitPawn_C::ExecuteUbergraph_HidingSpotEnterExitPawn(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HidingSpotEnterExitPawn.HidingSpotEnterExitPawn_C.ExecuteUbergraph_HidingSpotEnterExitPawn");

	AHidingSpotEnterExitPawn_C_ExecuteUbergraph_HidingSpotEnterExitPawn_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
