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
//		Name   -> Function CinematicMediaPlayerUI.CinematicMediaPlayerUI_C.Begin Video
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UCinematicMediaPlayerUI_C::Begin_Video()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CinematicMediaPlayerUI.CinematicMediaPlayerUI_C.Begin Video");

	UCinematicMediaPlayerUI_C_Begin_Video_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function CinematicMediaPlayerUI.CinematicMediaPlayerUI_C.Eyes Open 2
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UCinematicMediaPlayerUI_C::Eyes_Open_2()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CinematicMediaPlayerUI.CinematicMediaPlayerUI_C.Eyes Open 2");

	UCinematicMediaPlayerUI_C_Eyes_Open_2_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function CinematicMediaPlayerUI.CinematicMediaPlayerUI_C.Eyes Open 1
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UCinematicMediaPlayerUI_C::Eyes_Open_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CinematicMediaPlayerUI.CinematicMediaPlayerUI_C.Eyes Open 1");

	UCinematicMediaPlayerUI_C_Eyes_Open_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function CinematicMediaPlayerUI.CinematicMediaPlayerUI_C.NewGameIntroVideo
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FCinematicCutscene                          CinematicCutscene                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UCinematicMediaPlayerUI_C::NewGameIntroVideo(const struct FCinematicCutscene& CinematicCutscene)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CinematicMediaPlayerUI.CinematicMediaPlayerUI_C.NewGameIntroVideo");

	UCinematicMediaPlayerUI_C_NewGameIntroVideo_Params params {};
	params.CinematicCutscene = CinematicCutscene;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function CinematicMediaPlayerUI.CinematicMediaPlayerUI_C.StopIntroVideo
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UCinematicMediaPlayerUI_C::StopIntroVideo()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CinematicMediaPlayerUI.CinematicMediaPlayerUI_C.StopIntroVideo");

	UCinematicMediaPlayerUI_C_StopIntroVideo_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function CinematicMediaPlayerUI.CinematicMediaPlayerUI_C.Eyes Shut 2
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UCinematicMediaPlayerUI_C::Eyes_Shut_2()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CinematicMediaPlayerUI.CinematicMediaPlayerUI_C.Eyes Shut 2");

	UCinematicMediaPlayerUI_C_Eyes_Shut_2_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function CinematicMediaPlayerUI.CinematicMediaPlayerUI_C.Eyes Shut 1
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UCinematicMediaPlayerUI_C::Eyes_Shut_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CinematicMediaPlayerUI.CinematicMediaPlayerUI_C.Eyes Shut 1");

	UCinematicMediaPlayerUI_C_Eyes_Shut_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function CinematicMediaPlayerUI.CinematicMediaPlayerUI_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UCinematicMediaPlayerUI_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CinematicMediaPlayerUI.CinematicMediaPlayerUI_C.PreConstruct");

	UCinematicMediaPlayerUI_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function CinematicMediaPlayerUI.CinematicMediaPlayerUI_C.Stop
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UCinematicMediaPlayerUI_C::Stop()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CinematicMediaPlayerUI.CinematicMediaPlayerUI_C.Stop");

	UCinematicMediaPlayerUI_C_Stop_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function CinematicMediaPlayerUI.CinematicMediaPlayerUI_C.Play
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FCinematicCutscene                          CinematicCutscene                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UCinematicMediaPlayerUI_C::Play(const struct FCinematicCutscene& CinematicCutscene)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CinematicMediaPlayerUI.CinematicMediaPlayerUI_C.Play");

	UCinematicMediaPlayerUI_C_Play_Params params {};
	params.CinematicCutscene = CinematicCutscene;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function CinematicMediaPlayerUI.CinematicMediaPlayerUI_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCinematicMediaPlayerUI_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CinematicMediaPlayerUI.CinematicMediaPlayerUI_C.Tick");

	UCinematicMediaPlayerUI_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function CinematicMediaPlayerUI.CinematicMediaPlayerUI_C.ExecuteUbergraph_CinematicMediaPlayerUI
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCinematicMediaPlayerUI_C::ExecuteUbergraph_CinematicMediaPlayerUI(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CinematicMediaPlayerUI.CinematicMediaPlayerUI_C.ExecuteUbergraph_CinematicMediaPlayerUI");

	UCinematicMediaPlayerUI_C_ExecuteUbergraph_CinematicMediaPlayerUI_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function CinematicMediaPlayerUI.CinematicMediaPlayerUI_C.OnStop__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UCinematicMediaPlayerUI_C::OnStop__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CinematicMediaPlayerUI.CinematicMediaPlayerUI_C.OnStop__DelegateSignature");

	UCinematicMediaPlayerUI_C_OnStop__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
