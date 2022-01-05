/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "EndGameCinematicPlayerUI_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
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
	 * 		Offset -> 0x00EE6700
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
	 * 		Offset -> 0x00EE6700
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
	 * 		Offset -> 0x00EE6700
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
	 * 		Offset -> 0x00EE6700
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
	 * 		Offset -> 0x00EE6700
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
	 * 		Offset -> 0x00EE6700
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function EndGameCinematicPlayerUI.EndGameCinematicPlayerUI_C.ExecuteUbergraph_EndGameCinematicPlayerUI
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEndGameCinematicPlayerUI_C::ExecuteUbergraph_EndGameCinematicPlayerUI(int EntryPoint)
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


