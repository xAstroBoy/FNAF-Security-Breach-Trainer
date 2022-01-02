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
//		Name   -> Function Endo.Endo_C.DeterminedBeingWatched
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void AEndo_C::DeterminedBeingWatched()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Endo.Endo_C.DeterminedBeingWatched");

	AEndo_C_DeterminedBeingWatched_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Endo.Endo_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void AEndo_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Endo.Endo_C.ReceiveBeginPlay");

	AEndo_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Endo.Endo_C.ReceiveTick
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AEndo_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Endo.Endo_C.ReceiveTick");

	AEndo_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Endo.Endo_C.Wake Endo
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AEndo_C::Wake_Endo()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Endo.Endo_C.Wake Endo");

	AEndo_C_Wake_Endo_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Endo.Endo_C.EndoSleep
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AEndo_C::EndoSleep()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Endo.Endo_C.EndoSleep");

	AEndo_C_EndoSleep_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Endo.Endo_C.ExecuteUbergraph_Endo
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AEndo_C::ExecuteUbergraph_Endo(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Endo.Endo_C.ExecuteUbergraph_Endo");

	AEndo_C_ExecuteUbergraph_Endo_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
