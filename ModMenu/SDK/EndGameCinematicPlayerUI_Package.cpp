/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function EndGameCinematicPlayerUI.EndGameCinematicPlayerUI_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
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
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function EndGameCinematicPlayerUI.EndGameCinematicPlayerUI_C.EndGameVideoCredits
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function EndGameCinematicPlayerUI.EndGameCinematicPlayerUI_C.StopVideo
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function EndGameCinematicPlayerUI.EndGameCinematicPlayerUI_C.MakeTextVisibleAgain
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function EndGameCinematicPlayerUI.EndGameCinematicPlayerUI_C.StartTextFadeAway
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function EndGameCinematicPlayerUI.EndGameCinematicPlayerUI_C.SetText
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function EndGameCinematicPlayerUI.EndGameCinematicPlayerUI_C.PlayFazerblastDialogue
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function EndGameCinematicPlayerUI.EndGameCinematicPlayerUI_C.Start Hold Timer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UEndGameCinematicPlayerUI_C::Start_Hold_Timer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EndGameCinematicPlayerUI.EndGameCinematicPlayerUI_C.Start Hold Timer");
		
		UEndGameCinematicPlayerUI_C_Start_Hold_Timer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function EndGameCinematicPlayerUI.EndGameCinematicPlayerUI_C.Stop Hold Timer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UEndGameCinematicPlayerUI_C::Stop_Hold_Timer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EndGameCinematicPlayerUI.EndGameCinematicPlayerUI_C.Stop Hold Timer");
		
		UEndGameCinematicPlayerUI_C_Stop_Hold_Timer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function EndGameCinematicPlayerUI.EndGameCinematicPlayerUI_C.OnMediaOpened
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function EndGameCinematicPlayerUI.EndGameCinematicPlayerUI_C.ExecuteUbergraph_EndGameCinematicPlayerUI
	 * 		Flags  -> (Final, HasDefaults)
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
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UEndGameCinematicPlayerUI_C.StaticClass
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


