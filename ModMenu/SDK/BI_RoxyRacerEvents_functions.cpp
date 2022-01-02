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
//		Name   -> Function BI_RoxyRacerEvents.BI_RoxyRacerEvents_C.GetCanMove
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               CanMove                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBI_RoxyRacerEvents_C::GetCanMove(bool* CanMove)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BI_RoxyRacerEvents.BI_RoxyRacerEvents_C.GetCanMove");

	UBI_RoxyRacerEvents_C_GetCanMove_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanMove != nullptr)
		*CanMove = params.CanMove;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BI_RoxyRacerEvents.BI_RoxyRacerEvents_C.GameEnd
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBI_RoxyRacerEvents_C::GameEnd()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BI_RoxyRacerEvents.BI_RoxyRacerEvents_C.GameEnd");

	UBI_RoxyRacerEvents_C_GameEnd_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BI_RoxyRacerEvents.BI_RoxyRacerEvents_C.EndRace
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBI_RoxyRacerEvents_C::EndRace()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BI_RoxyRacerEvents.BI_RoxyRacerEvents_C.EndRace");

	UBI_RoxyRacerEvents_C_EndRace_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BI_RoxyRacerEvents.BI_RoxyRacerEvents_C.StartRace
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBI_RoxyRacerEvents_C::StartRace()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BI_RoxyRacerEvents.BI_RoxyRacerEvents_C.StartRace");

	UBI_RoxyRacerEvents_C_StartRace_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BI_RoxyRacerEvents.BI_RoxyRacerEvents_C.StartRaceCountdown
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              TimeTillStart                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBI_RoxyRacerEvents_C::StartRaceCountdown(float TimeTillStart)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BI_RoxyRacerEvents.BI_RoxyRacerEvents_C.StartRaceCountdown");

	UBI_RoxyRacerEvents_C_StartRaceCountdown_Params params {};
	params.TimeTillStart = TimeTillStart;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BI_RoxyRacerEvents.BI_RoxyRacerEvents_C.CanMove
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               New_Can_Move                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBI_RoxyRacerEvents_C::CanMove(bool New_Can_Move)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BI_RoxyRacerEvents.BI_RoxyRacerEvents_C.CanMove");

	UBI_RoxyRacerEvents_C_CanMove_Params params {};
	params.New_Can_Move = New_Can_Move;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
