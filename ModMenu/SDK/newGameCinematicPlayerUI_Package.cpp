/**
 * Name: FNAFSB
 * Version: 1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function newGameCinematicPlayerUI.NewGameCinematicPlayerUI_C.Tick
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function newGameCinematicPlayerUI.NewGameCinematicPlayerUI_C.NewGameIntroVideo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCinematicCutscene                          CinimaticCutsceen                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UNewGameCinematicPlayerUI_C::NewGameIntroVideo(const struct FCinematicCutscene& CinimaticCutsceen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function newGameCinematicPlayerUI.NewGameCinematicPlayerUI_C.NewGameIntroVideo");
		
		UNewGameCinematicPlayerUI_C_NewGameIntroVideo_Params params {};
		params.CinimaticCutsceen = CinimaticCutsceen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function newGameCinematicPlayerUI.NewGameCinematicPlayerUI_C.StopIntroVideo
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function newGameCinematicPlayerUI.NewGameCinematicPlayerUI_C.MakeTextVisibleAgain
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function newGameCinematicPlayerUI.NewGameCinematicPlayerUI_C.StartTextFadeAway
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function newGameCinematicPlayerUI.NewGameCinematicPlayerUI_C.SetText
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function newGameCinematicPlayerUI.NewGameCinematicPlayerUI_C.OnMediaOpened
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      OpenedUrl                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UNewGameCinematicPlayerUI_C::OnMediaOpened(const class FString& OpenedUrl)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function newGameCinematicPlayerUI.NewGameCinematicPlayerUI_C.OnMediaOpened");
		
		UNewGameCinematicPlayerUI_C_OnMediaOpened_Params params {};
		params.OpenedUrl = OpenedUrl;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function newGameCinematicPlayerUI.NewGameCinematicPlayerUI_C.PrepNewGameIntroVideo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCinematicCutscene                          CinematicCutscene                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UNewGameCinematicPlayerUI_C::PrepNewGameIntroVideo(const struct FCinematicCutscene& CinematicCutscene)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function newGameCinematicPlayerUI.NewGameCinematicPlayerUI_C.PrepNewGameIntroVideo");
		
		UNewGameCinematicPlayerUI_C_PrepNewGameIntroVideo_Params params {};
		params.CinematicCutscene = CinematicCutscene;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function newGameCinematicPlayerUI.NewGameCinematicPlayerUI_C.ExecuteUbergraph_NewGameCinematicPlayerUI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNewGameCinematicPlayerUI_C::ExecuteUbergraph_NewGameCinematicPlayerUI(int32_t EntryPoint)
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNewGameCinematicPlayerUI_C.StaticClass
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


