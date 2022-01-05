/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "newGameCinematicPlayerUI_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function newGameCinematicPlayerUI.NewGameCinematicPlayerUI_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNewGameCinematicPlayerUI_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function newGameCinematicPlayerUI.NewGameCinematicPlayerUI_C.Tick");
		
		UNewGameCinematicPlayerUI_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function newGameCinematicPlayerUI.NewGameCinematicPlayerUI_C.StopIntroVideo
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UNewGameCinematicPlayerUI_C::StopIntroVideo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function newGameCinematicPlayerUI.NewGameCinematicPlayerUI_C.StopIntroVideo");
		
		UNewGameCinematicPlayerUI_C_StopIntroVideo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function newGameCinematicPlayerUI.NewGameCinematicPlayerUI_C.NewGameIntroVideo
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FCinematicCutscene                          CinematicCutscene                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UNewGameCinematicPlayerUI_C::NewGameIntroVideo(const struct FCinematicCutscene& CinematicCutscene)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function newGameCinematicPlayerUI.NewGameCinematicPlayerUI_C.NewGameIntroVideo");
		
		UNewGameCinematicPlayerUI_C_NewGameIntroVideo_Params params {};
		params.CinematicCutscene = CinematicCutscene;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function newGameCinematicPlayerUI.NewGameCinematicPlayerUI_C.MakeTextVisibleAgain
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UNewGameCinematicPlayerUI_C::MakeTextVisibleAgain()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function newGameCinematicPlayerUI.NewGameCinematicPlayerUI_C.MakeTextVisibleAgain");
		
		UNewGameCinematicPlayerUI_C_MakeTextVisibleAgain_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function newGameCinematicPlayerUI.NewGameCinematicPlayerUI_C.StartTextFadeAway
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UNewGameCinematicPlayerUI_C::StartTextFadeAway()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function newGameCinematicPlayerUI.NewGameCinematicPlayerUI_C.StartTextFadeAway");
		
		UNewGameCinematicPlayerUI_C_StartTextFadeAway_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function newGameCinematicPlayerUI.NewGameCinematicPlayerUI_C.SetText
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UNewGameCinematicPlayerUI_C::SetText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function newGameCinematicPlayerUI.NewGameCinematicPlayerUI_C.SetText");
		
		UNewGameCinematicPlayerUI_C_SetText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function newGameCinematicPlayerUI.NewGameCinematicPlayerUI_C.ExecuteUbergraph_NewGameCinematicPlayerUI
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNewGameCinematicPlayerUI_C::ExecuteUbergraph_NewGameCinematicPlayerUI(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function newGameCinematicPlayerUI.NewGameCinematicPlayerUI_C.ExecuteUbergraph_NewGameCinematicPlayerUI");
		
		UNewGameCinematicPlayerUI_C_ExecuteUbergraph_NewGameCinematicPlayerUI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UNewGameCinematicPlayerUI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNewGameCinematicPlayerUI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass newGameCinematicPlayerUI.NewGameCinematicPlayerUI_C");
		return ptr;
	}

}


