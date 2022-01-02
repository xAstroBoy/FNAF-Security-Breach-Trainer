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
//		Name   -> Function newGameCinematicPlayerUI.NewGameCinematicPlayerUI_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UNewGameCinematicPlayerUI_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function newGameCinematicPlayerUI.NewGameCinematicPlayerUI_C.Tick");

	UNewGameCinematicPlayerUI_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function newGameCinematicPlayerUI.NewGameCinematicPlayerUI_C.StopIntroVideo
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UNewGameCinematicPlayerUI_C::StopIntroVideo()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function newGameCinematicPlayerUI.NewGameCinematicPlayerUI_C.StopIntroVideo");

	UNewGameCinematicPlayerUI_C_StopIntroVideo_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function newGameCinematicPlayerUI.NewGameCinematicPlayerUI_C.NewGameIntroVideo
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FCinematicCutscene                          CinematicCutscene                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UNewGameCinematicPlayerUI_C::NewGameIntroVideo(const struct FCinematicCutscene& CinematicCutscene)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function newGameCinematicPlayerUI.NewGameCinematicPlayerUI_C.NewGameIntroVideo");

	UNewGameCinematicPlayerUI_C_NewGameIntroVideo_Params params {};
	params.CinematicCutscene = CinematicCutscene;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function newGameCinematicPlayerUI.NewGameCinematicPlayerUI_C.MakeTextVisibleAgain
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UNewGameCinematicPlayerUI_C::MakeTextVisibleAgain()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function newGameCinematicPlayerUI.NewGameCinematicPlayerUI_C.MakeTextVisibleAgain");

	UNewGameCinematicPlayerUI_C_MakeTextVisibleAgain_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function newGameCinematicPlayerUI.NewGameCinematicPlayerUI_C.StartTextFadeAway
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UNewGameCinematicPlayerUI_C::StartTextFadeAway()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function newGameCinematicPlayerUI.NewGameCinematicPlayerUI_C.StartTextFadeAway");

	UNewGameCinematicPlayerUI_C_StartTextFadeAway_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function newGameCinematicPlayerUI.NewGameCinematicPlayerUI_C.SetText
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UNewGameCinematicPlayerUI_C::SetText()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function newGameCinematicPlayerUI.NewGameCinematicPlayerUI_C.SetText");

	UNewGameCinematicPlayerUI_C_SetText_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function newGameCinematicPlayerUI.NewGameCinematicPlayerUI_C.ExecuteUbergraph_NewGameCinematicPlayerUI
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UNewGameCinematicPlayerUI_C::ExecuteUbergraph_NewGameCinematicPlayerUI(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function newGameCinematicPlayerUI.NewGameCinematicPlayerUI_C.ExecuteUbergraph_NewGameCinematicPlayerUI");

	UNewGameCinematicPlayerUI_C_ExecuteUbergraph_NewGameCinematicPlayerUI_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
