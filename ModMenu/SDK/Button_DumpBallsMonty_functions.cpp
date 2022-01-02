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
//		Name   -> Function Button_DumpBallsMonty.Button_DumpBallsMonty_C.Enable Dump Ball Button
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Enabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AButton_DumpBallsMonty_C::Enable_Dump_Ball_Button(bool Enabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Button_DumpBallsMonty.Button_DumpBallsMonty_C.Enable Dump Ball Button");

	AButton_DumpBallsMonty_C_Enable_Dump_Ball_Button_Params params {};
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Button_DumpBallsMonty.Button_DumpBallsMonty_C.UserConstructionScript
//		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void AButton_DumpBallsMonty_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Button_DumpBallsMonty.Button_DumpBallsMonty_C.UserConstructionScript");

	AButton_DumpBallsMonty_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Button_DumpBallsMonty.Button_DumpBallsMonty_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void AButton_DumpBallsMonty_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Button_DumpBallsMonty.Button_DumpBallsMonty_C.ReceiveBeginPlay");

	AButton_DumpBallsMonty_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Button_DumpBallsMonty.Button_DumpBallsMonty_C.OnTriggered
//		Flags  -> (Event, Protected, BlueprintEvent)
void AButton_DumpBallsMonty_C::OnTriggered()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Button_DumpBallsMonty.Button_DumpBallsMonty_C.OnTriggered");

	AButton_DumpBallsMonty_C_OnTriggered_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Button_DumpBallsMonty.Button_DumpBallsMonty_C.On Player Interact
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AButton_DumpBallsMonty_C::On_Player_Interact()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Button_DumpBallsMonty.Button_DumpBallsMonty_C.On Player Interact");

	AButton_DumpBallsMonty_C_On_Player_Interact_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Button_DumpBallsMonty.Button_DumpBallsMonty_C.On Sequence Stop Event
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AButton_DumpBallsMonty_C::On_Sequence_Stop_Event()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Button_DumpBallsMonty.Button_DumpBallsMonty_C.On Sequence Stop Event");

	AButton_DumpBallsMonty_C_On_Sequence_Stop_Event_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Button_DumpBallsMonty.Button_DumpBallsMonty_C.ExecuteUbergraph_Button_DumpBallsMonty
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AButton_DumpBallsMonty_C::ExecuteUbergraph_Button_DumpBallsMonty(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Button_DumpBallsMonty.Button_DumpBallsMonty_C.ExecuteUbergraph_Button_DumpBallsMonty");

	AButton_DumpBallsMonty_C_ExecuteUbergraph_Button_DumpBallsMonty_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
