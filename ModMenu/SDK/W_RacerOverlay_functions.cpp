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
//		Name   -> Function W_RacerOverlay.W_RacerOverlay_C.GetCanMove
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               CanMove                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_RacerOverlay_C::GetCanMove(bool* CanMove)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_RacerOverlay.W_RacerOverlay_C.GetCanMove");

	UW_RacerOverlay_C_GetCanMove_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanMove != nullptr)
		*CanMove = params.CanMove;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function W_RacerOverlay.W_RacerOverlay_C.GetLastTime
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UW_RacerOverlay_C::GetLastTime()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_RacerOverlay.W_RacerOverlay_C.GetLastTime");

	UW_RacerOverlay_C_GetLastTime_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function W_RacerOverlay.W_RacerOverlay_C.GetBestTime
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UW_RacerOverlay_C::GetBestTime()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_RacerOverlay.W_RacerOverlay_C.GetBestTime");

	UW_RacerOverlay_C_GetBestTime_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function W_RacerOverlay.W_RacerOverlay_C.GetLapTime
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UW_RacerOverlay_C::GetLapTime()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_RacerOverlay.W_RacerOverlay_C.GetLapTime");

	UW_RacerOverlay_C_GetLapTime_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function W_RacerOverlay.W_RacerOverlay_C.GetLap
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UW_RacerOverlay_C::GetLap()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_RacerOverlay.W_RacerOverlay_C.GetLap");

	UW_RacerOverlay_C_GetLap_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function W_RacerOverlay.W_RacerOverlay_C.GetPosition
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UW_RacerOverlay_C::GetPosition()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_RacerOverlay.W_RacerOverlay_C.GetPosition");

	UW_RacerOverlay_C_GetPosition_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function W_RacerOverlay.W_RacerOverlay_C.CanMove
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               New_Can_Move                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_RacerOverlay_C::CanMove(bool New_Can_Move)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_RacerOverlay.W_RacerOverlay_C.CanMove");

	UW_RacerOverlay_C_CanMove_Params params {};
	params.New_Can_Move = New_Can_Move;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function W_RacerOverlay.W_RacerOverlay_C.StartRaceCountdown
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              TimeTillStart                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_RacerOverlay_C::StartRaceCountdown(float TimeTillStart)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_RacerOverlay.W_RacerOverlay_C.StartRaceCountdown");

	UW_RacerOverlay_C_StartRaceCountdown_Params params {};
	params.TimeTillStart = TimeTillStart;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function W_RacerOverlay.W_RacerOverlay_C.StartRace
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UW_RacerOverlay_C::StartRace()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_RacerOverlay.W_RacerOverlay_C.StartRace");

	UW_RacerOverlay_C_StartRace_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function W_RacerOverlay.W_RacerOverlay_C.GameEnd
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UW_RacerOverlay_C::GameEnd()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_RacerOverlay.W_RacerOverlay_C.GameEnd");

	UW_RacerOverlay_C_GameEnd_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function W_RacerOverlay.W_RacerOverlay_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_RacerOverlay_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_RacerOverlay.W_RacerOverlay_C.Construct");

	UW_RacerOverlay_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function W_RacerOverlay.W_RacerOverlay_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_RacerOverlay_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_RacerOverlay.W_RacerOverlay_C.Tick");

	UW_RacerOverlay_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function W_RacerOverlay.W_RacerOverlay_C.EndRace
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UW_RacerOverlay_C::EndRace()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_RacerOverlay.W_RacerOverlay_C.EndRace");

	UW_RacerOverlay_C_EndRace_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function W_RacerOverlay.W_RacerOverlay_C.ExecuteUbergraph_W_RacerOverlay
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_RacerOverlay_C::ExecuteUbergraph_W_RacerOverlay(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_RacerOverlay.W_RacerOverlay_C.ExecuteUbergraph_W_RacerOverlay");

	UW_RacerOverlay_C_ExecuteUbergraph_W_RacerOverlay_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
