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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FBPC_SharedController.FBPC_SharedController_C.PrintDebugSubtitles
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      inString                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               Force                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFBPC_SharedController_C::PrintDebugSubtitles(const class FString& inString, bool Force)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FBPC_SharedController.FBPC_SharedController_C.PrintDebugSubtitles");
		
		AFBPC_SharedController_C_PrintDebugSubtitles_Params params {};
		params.inString = inString;
		params.Force = Force;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FBPC_SharedController.FBPC_SharedController_C.PrintDebug
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      inString                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               Force                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFBPC_SharedController_C::PrintDebug(const class FString& inString, bool Force)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FBPC_SharedController.FBPC_SharedController_C.PrintDebug");
		
		AFBPC_SharedController_C_PrintDebug_Params params {};
		params.inString = inString;
		params.Force = Force;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FBPC_SharedController.FBPC_SharedController_C.UpdateSubtitles
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AFBPC_SharedController_C::UpdateSubtitles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FBPC_SharedController.FBPC_SharedController_C.UpdateSubtitles");
		
		AFBPC_SharedController_C_UpdateSubtitles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FBPC_SharedController.FBPC_SharedController_C.ShowFazwatch
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AFBPC_SharedController_C::ShowFazwatch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FBPC_SharedController.FBPC_SharedController_C.ShowFazwatch");
		
		AFBPC_SharedController_C_ShowFazwatch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FBPC_SharedController.FBPC_SharedController_C.HideFazwatch
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AFBPC_SharedController_C::HideFazwatch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FBPC_SharedController.FBPC_SharedController_C.HideFazwatch");
		
		AFBPC_SharedController_C_HideFazwatch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FBPC_SharedController.FBPC_SharedController_C.EndPostEventWithSubtitles
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		AkAudio_EAkCallbackType                            CallbackType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAkCallbackInfo*                             CallbackInfo                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFBPC_SharedController_C::EndPostEventWithSubtitles(AkAudio_EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FBPC_SharedController.FBPC_SharedController_C.EndPostEventWithSubtitles");
		
		AFBPC_SharedController_C_EndPostEventWithSubtitles_Params params {};
		params.CallbackType = CallbackType;
		params.CallbackInfo = CallbackInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FBPC_SharedController.FBPC_SharedController_C.PostEventWithSubtitles
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAkAudioEvent*                               AkEvent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	int32_t AFBPC_SharedController_C::PostEventWithSubtitles(class UAkAudioEvent* AkEvent, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FBPC_SharedController.FBPC_SharedController_C.PostEventWithSubtitles");
		
		AFBPC_SharedController_C_PostEventWithSubtitles_Params params {};
		params.AkEvent = AkEvent;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FBPC_SharedController.FBPC_SharedController_C.EndSubtitleDisplay
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AFBPC_SharedController_C::EndSubtitleDisplay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FBPC_SharedController.FBPC_SharedController_C.EndSubtitleDisplay");
		
		AFBPC_SharedController_C_EndSubtitleDisplay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FBPC_SharedController.FBPC_SharedController_C.BeginSubtitleDisplay
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      FallbackSourceString                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MaxRadiusPercent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               SanitizeKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               HighPriority                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFBPC_SharedController_C::BeginSubtitleDisplay(const class FString& Key, class AActor* Actor, const class FString& FallbackSourceString, float Duration, float MaxRadiusPercent, bool SanitizeKey, bool HighPriority)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FBPC_SharedController.FBPC_SharedController_C.BeginSubtitleDisplay");
		
		AFBPC_SharedController_C_BeginSubtitleDisplay_Params params {};
		params.Key = Key;
		params.Actor = Actor;
		params.FallbackSourceString = FallbackSourceString;
		params.Duration = Duration;
		params.MaxRadiusPercent = MaxRadiusPercent;
		params.SanitizeKey = SanitizeKey;
		params.HighPriority = HighPriority;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FBPC_SharedController.FBPC_SharedController_C.EnsureSubtitles
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFBPC_SharedController_C::EnsureSubtitles(bool* IsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FBPC_SharedController.FBPC_SharedController_C.EnsureSubtitles");
		
		AFBPC_SharedController_C_EnsureSubtitles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FBPC_SharedController.FBPC_SharedController_C.AfterUnpause
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AFBPC_SharedController_C::AfterUnpause()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FBPC_SharedController.FBPC_SharedController_C.AfterUnpause");
		
		AFBPC_SharedController_C_AfterUnpause_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FBPC_SharedController.FBPC_SharedController_C.AfterPause
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AFBPC_SharedController_C::AfterPause()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FBPC_SharedController.FBPC_SharedController_C.AfterPause");
		
		AFBPC_SharedController_C_AfterPause_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FBPC_SharedController.FBPC_SharedController_C.InpActEvt_Pause_K2Node_InputActionEvent_1
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AFBPC_SharedController_C::InpActEvt_Pause_K2Node_InputActionEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FBPC_SharedController.FBPC_SharedController_C.InpActEvt_Pause_K2Node_InputActionEvent_1");
		
		AFBPC_SharedController_C_InpActEvt_Pause_K2Node_InputActionEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FBPC_SharedController.FBPC_SharedController_C.InpActEvt_LeftShift_K2Node_InputKeyEvent_2
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AFBPC_SharedController_C::InpActEvt_LeftShift_K2Node_InputKeyEvent_2(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FBPC_SharedController.FBPC_SharedController_C.InpActEvt_LeftShift_K2Node_InputKeyEvent_2");
		
		AFBPC_SharedController_C_InpActEvt_LeftShift_K2Node_InputKeyEvent_2_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FBPC_SharedController.FBPC_SharedController_C.InpActEvt_LeftShift_K2Node_InputKeyEvent_1
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AFBPC_SharedController_C::InpActEvt_LeftShift_K2Node_InputKeyEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FBPC_SharedController.FBPC_SharedController_C.InpActEvt_LeftShift_K2Node_InputKeyEvent_1");
		
		AFBPC_SharedController_C_InpActEvt_LeftShift_K2Node_InputKeyEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FBPC_SharedController.FBPC_SharedController_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AFBPC_SharedController_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FBPC_SharedController.FBPC_SharedController_C.ReceiveBeginPlay");
		
		AFBPC_SharedController_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FBPC_SharedController.FBPC_SharedController_C.Click To Unpause
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFBPC_SharedController_C::Click_To_Unpause()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FBPC_SharedController.FBPC_SharedController_C.Click To Unpause");
		
		AFBPC_SharedController_C_Click_To_Unpause_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FBPC_SharedController.FBPC_SharedController_C.OnToggleLocalizationQA
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AFBPC_SharedController_C::OnToggleLocalizationQA()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FBPC_SharedController.FBPC_SharedController_C.OnToggleLocalizationQA");
		
		AFBPC_SharedController_C_OnToggleLocalizationQA_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FBPC_SharedController.FBPC_SharedController_C.ExecuteUbergraph_FBPC_SharedController
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFBPC_SharedController_C::ExecuteUbergraph_FBPC_SharedController(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FBPC_SharedController.FBPC_SharedController_C.ExecuteUbergraph_FBPC_SharedController");
		
		AFBPC_SharedController_C_ExecuteUbergraph_FBPC_SharedController_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AFBPC_SharedController_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFBPC_SharedController_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FBPC_SharedController.FBPC_SharedController_C");
		return ptr;
	}

}


