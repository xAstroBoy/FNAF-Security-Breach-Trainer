/**
 * Name: FNAFSB
 * Version: 1
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EndGameCinematicPlayerUI.EndGameCinematicPlayerUI_C.DisplayComicbookSubtitle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Subtitle                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UEndGameCinematicPlayerUI_C::DisplayComicbookSubtitle(const class FText& Subtitle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EndGameCinematicPlayerUI.EndGameCinematicPlayerUI_C.DisplayComicbookSubtitle");
		
		UEndGameCinematicPlayerUI_C_DisplayComicbookSubtitle_Params params {};
		params.Subtitle = Subtitle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EndGameCinematicPlayerUI.EndGameCinematicPlayerUI_C.SetupComicbookSubtitles
	 * 		Flags  -> ()
	 */
	void UEndGameCinematicPlayerUI_C::SetupComicbookSubtitles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EndGameCinematicPlayerUI.EndGameCinematicPlayerUI_C.SetupComicbookSubtitles");
		
		UEndGameCinematicPlayerUI_C_SetupComicbookSubtitles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EndGameCinematicPlayerUI.EndGameCinematicPlayerUI_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEndGameCinematicPlayerUI_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EndGameCinematicPlayerUI.EndGameCinematicPlayerUI_C.Tick");
		
		UEndGameCinematicPlayerUI_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EndGameCinematicPlayerUI.EndGameCinematicPlayerUI_C.EndGameVideoCredits
	 * 		Flags  -> ()
	 */
	void UEndGameCinematicPlayerUI_C::EndGameVideoCredits()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EndGameCinematicPlayerUI.EndGameCinematicPlayerUI_C.EndGameVideoCredits");
		
		UEndGameCinematicPlayerUI_C_EndGameVideoCredits_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EndGameCinematicPlayerUI.EndGameCinematicPlayerUI_C.StopVideo
	 * 		Flags  -> ()
	 */
	void UEndGameCinematicPlayerUI_C::StopVideo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EndGameCinematicPlayerUI.EndGameCinematicPlayerUI_C.StopVideo");
		
		UEndGameCinematicPlayerUI_C_StopVideo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EndGameCinematicPlayerUI.EndGameCinematicPlayerUI_C.MakeTextVisibleAgain
	 * 		Flags  -> ()
	 */
	void UEndGameCinematicPlayerUI_C::MakeTextVisibleAgain()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EndGameCinematicPlayerUI.EndGameCinematicPlayerUI_C.MakeTextVisibleAgain");
		
		UEndGameCinematicPlayerUI_C_MakeTextVisibleAgain_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EndGameCinematicPlayerUI.EndGameCinematicPlayerUI_C.StartTextFadeAway
	 * 		Flags  -> ()
	 */
	void UEndGameCinematicPlayerUI_C::StartTextFadeAway()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EndGameCinematicPlayerUI.EndGameCinematicPlayerUI_C.StartTextFadeAway");
		
		UEndGameCinematicPlayerUI_C_StartTextFadeAway_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EndGameCinematicPlayerUI.EndGameCinematicPlayerUI_C.SetText
	 * 		Flags  -> ()
	 */
	void UEndGameCinematicPlayerUI_C::SetText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EndGameCinematicPlayerUI.EndGameCinematicPlayerUI_C.SetText");
		
		UEndGameCinematicPlayerUI_C_SetText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EndGameCinematicPlayerUI.EndGameCinematicPlayerUI_C.PlayFazerblastDialogue
	 * 		Flags  -> ()
	 */
	void UEndGameCinematicPlayerUI_C::PlayFazerblastDialogue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EndGameCinematicPlayerUI.EndGameCinematicPlayerUI_C.PlayFazerblastDialogue");
		
		UEndGameCinematicPlayerUI_C_PlayFazerblastDialogue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EndGameCinematicPlayerUI.EndGameCinematicPlayerUI_C.Start Hold Timer
	 * 		Flags  -> ()
	 */
	void UEndGameCinematicPlayerUI_C::StartHoldTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EndGameCinematicPlayerUI.EndGameCinematicPlayerUI_C.Start Hold Timer");
		
		UEndGameCinematicPlayerUI_C_StartHoldTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EndGameCinematicPlayerUI.EndGameCinematicPlayerUI_C.Stop Hold Timer
	 * 		Flags  -> ()
	 */
	void UEndGameCinematicPlayerUI_C::StopHoldTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EndGameCinematicPlayerUI.EndGameCinematicPlayerUI_C.Stop Hold Timer");
		
		UEndGameCinematicPlayerUI_C_StopHoldTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EndGameCinematicPlayerUI.EndGameCinematicPlayerUI_C.OnMediaOpened
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      OpenedUrl                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UEndGameCinematicPlayerUI_C::OnMediaOpened(const class FString& OpenedUrl)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EndGameCinematicPlayerUI.EndGameCinematicPlayerUI_C.OnMediaOpened");
		
		UEndGameCinematicPlayerUI_C_OnMediaOpened_Params params {};
		params.OpenedUrl = OpenedUrl;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EndGameCinematicPlayerUI.EndGameCinematicPlayerUI_C.Start Loading Dock Subtitles
	 * 		Flags  -> ()
	 */
	void UEndGameCinematicPlayerUI_C::StartLoadingDockSubtitles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EndGameCinematicPlayerUI.EndGameCinematicPlayerUI_C.Start Loading Dock Subtitles");
		
		UEndGameCinematicPlayerUI_C_StartLoadingDockSubtitles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EndGameCinematicPlayerUI.EndGameCinematicPlayerUI_C.Start Fire Escape Subtitles
	 * 		Flags  -> ()
	 */
	void UEndGameCinematicPlayerUI_C::StartFireEscapeSubtitles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EndGameCinematicPlayerUI.EndGameCinematicPlayerUI_C.Start Fire Escape Subtitles");
		
		UEndGameCinematicPlayerUI_C_StartFireEscapeSubtitles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EndGameCinematicPlayerUI.EndGameCinematicPlayerUI_C.Start Gregory Escapes Subtitles
	 * 		Flags  -> ()
	 */
	void UEndGameCinematicPlayerUI_C::StartGregoryEscapesSubtitles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EndGameCinematicPlayerUI.EndGameCinematicPlayerUI_C.Start Gregory Escapes Subtitles");
		
		UEndGameCinematicPlayerUI_C_StartGregoryEscapesSubtitles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EndGameCinematicPlayerUI.EndGameCinematicPlayerUI_C.Start Vanny Destroyed Subtitles
	 * 		Flags  -> ()
	 */
	void UEndGameCinematicPlayerUI_C::StartVannyDestroyedSubtitles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EndGameCinematicPlayerUI.EndGameCinematicPlayerUI_C.Start Vanny Destroyed Subtitles");
		
		UEndGameCinematicPlayerUI_C_StartVannyDestroyedSubtitles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EndGameCinematicPlayerUI.EndGameCinematicPlayerUI_C.Start Vanny Redeemed Subtitles
	 * 		Flags  -> ()
	 */
	void UEndGameCinematicPlayerUI_C::StartVannyRedeemedSubtitles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EndGameCinematicPlayerUI.EndGameCinematicPlayerUI_C.Start Vanny Redeemed Subtitles");
		
		UEndGameCinematicPlayerUI_C_StartVannyRedeemedSubtitles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EndGameCinematicPlayerUI.EndGameCinematicPlayerUI_C.Construct
	 * 		Flags  -> ()
	 */
	void UEndGameCinematicPlayerUI_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EndGameCinematicPlayerUI.EndGameCinematicPlayerUI_C.Construct");
		
		UEndGameCinematicPlayerUI_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EndGameCinematicPlayerUI.EndGameCinematicPlayerUI_C.ExecuteUbergraph_EndGameCinematicPlayerUI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEndGameCinematicPlayerUI_C::ExecuteUbergraph_EndGameCinematicPlayerUI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EndGameCinematicPlayerUI.EndGameCinematicPlayerUI_C.ExecuteUbergraph_EndGameCinematicPlayerUI");
		
		UEndGameCinematicPlayerUI_C_ExecuteUbergraph_EndGameCinematicPlayerUI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEndGameCinematicPlayerUI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEndGameCinematicPlayerUI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass EndGameCinematicPlayerUI.EndGameCinematicPlayerUI_C");
		return ptr;
	}

}


