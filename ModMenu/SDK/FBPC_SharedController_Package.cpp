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
	 * 		Name   -> Function FBPC_SharedController.FBPC_SharedController_C.IsOnPauseMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsOnPauseMenu                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFBPC_SharedController_C::IsOnPauseMenu(bool* IsOnPauseMenu)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FBPC_SharedController.FBPC_SharedController_C.IsOnPauseMenu");
		
		AFBPC_SharedController_C_IsOnPauseMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsOnPauseMenu != nullptr)
			*IsOnPauseMenu = params.IsOnPauseMenu;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FBPC_SharedController.FBPC_SharedController_C.UsingGamepad
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               UsingGamepad                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFBPC_SharedController_C::UsingGamepad(bool* UsingGamepad)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FBPC_SharedController.FBPC_SharedController_C.UsingGamepad");
		
		AFBPC_SharedController_C_UsingGamepad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UsingGamepad != nullptr)
			*UsingGamepad = params.UsingGamepad;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FBPC_SharedController.FBPC_SharedController_C.GetRobotArmsAnimInstance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimInstance*                               AnimInstance                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFBPC_SharedController_C::GetRobotArmsAnimInstance(class UAnimInstance** AnimInstance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FBPC_SharedController.FBPC_SharedController_C.GetRobotArmsAnimInstance");
		
		AFBPC_SharedController_C_GetRobotArmsAnimInstance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimInstance != nullptr)
			*AnimInstance = params.AnimInstance;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FBPC_SharedController.FBPC_SharedController_C.GetFreddyChairAnimInstance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimInstance*                               AnimInstance                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFBPC_SharedController_C::GetFreddyChairAnimInstance(class UAnimInstance** AnimInstance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FBPC_SharedController.FBPC_SharedController_C.GetFreddyChairAnimInstance");
		
		AFBPC_SharedController_C_GetFreddyChairAnimInstance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimInstance != nullptr)
			*AnimInstance = params.AnimInstance;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FBPC_SharedController.FBPC_SharedController_C.PostEventWithSubtitles
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FBPC_SharedController.FBPC_SharedController_C.AttemptToExitPawns
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        A                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AFBPC_SharedController_C::AttemptToExitPawns(const struct FKey& A)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FBPC_SharedController.FBPC_SharedController_C.AttemptToExitPawns");
		
		AFBPC_SharedController_C_AttemptToExitPawns_Params params {};
		params.A = A;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FBPC_SharedController.FBPC_SharedController_C.PrintDebugSubtitles
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FBPC_SharedController.FBPC_SharedController_C.PrintDebug
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FBPC_SharedController.FBPC_SharedController_C.UpdateSubtitles
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FBPC_SharedController.FBPC_SharedController_C.ShowFazwatch
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FBPC_SharedController.FBPC_SharedController_C.HideFazwatch
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FBPC_SharedController.FBPC_SharedController_C.EndPostEventWithSubtitles
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EAkCallbackType                                    CallbackType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAkCallbackInfo*                             CallbackInfo                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFBPC_SharedController_C::EndPostEventWithSubtitles(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FBPC_SharedController.FBPC_SharedController_C.Post Event With Subtitles Func
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAkAudioEvent*                               AkEvent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	int32_t AFBPC_SharedController_C::PostEventWithSubtitlesFunc(class UAkAudioEvent* AkEvent, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FBPC_SharedController.FBPC_SharedController_C.Post Event With Subtitles Func");
		
		AFBPC_SharedController_C_PostEventWithSubtitlesFunc_Params params {};
		params.AkEvent = AkEvent;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FBPC_SharedController.FBPC_SharedController_C.EndSubtitleDisplayFunc
	 * 		Flags  -> ()
	 */
	void AFBPC_SharedController_C::EndSubtitleDisplayFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FBPC_SharedController.FBPC_SharedController_C.EndSubtitleDisplayFunc");
		
		AFBPC_SharedController_C_EndSubtitleDisplayFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FBPC_SharedController.FBPC_SharedController_C.Begin Subtitle Display Func
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      FallbackSourceString                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MaxRadiusPercent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               SanitizeKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               HighPriority                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFBPC_SharedController_C::BeginSubtitleDisplayFunc(const class FString& Key, class AActor* Actor, const class FString& FallbackSourceString, float Duration, float MaxRadiusPercent, bool SanitizeKey, bool HighPriority)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FBPC_SharedController.FBPC_SharedController_C.Begin Subtitle Display Func");
		
		AFBPC_SharedController_C_BeginSubtitleDisplayFunc_Params params {};
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FBPC_SharedController.FBPC_SharedController_C.EnsureSubtitles
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FBPC_SharedController.FBPC_SharedController_C.AfterUnpause
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FBPC_SharedController.FBPC_SharedController_C.AfterPause
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FBPC_SharedController.FBPC_SharedController_C.InpActEvt_Pause_K2Node_InputActionEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AFBPC_SharedController_C::InpActEvt_Pause_K2Node_InputActionEvent_2(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FBPC_SharedController.FBPC_SharedController_C.InpActEvt_Pause_K2Node_InputActionEvent_2");
		
		AFBPC_SharedController_C_InpActEvt_Pause_K2Node_InputActionEvent_2_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FBPC_SharedController.FBPC_SharedController_C.InpActEvt_LeftShift_K2Node_InputKeyEvent_2
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FBPC_SharedController.FBPC_SharedController_C.InpActEvt_LeftShift_K2Node_InputKeyEvent_1
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FBPC_SharedController.FBPC_SharedController_C.InpActEvt_Inventory_K2Node_InputActionEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AFBPC_SharedController_C::InpActEvt_Inventory_K2Node_InputActionEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FBPC_SharedController.FBPC_SharedController_C.InpActEvt_Inventory_K2Node_InputActionEvent_1");
		
		AFBPC_SharedController_C_InpActEvt_Inventory_K2Node_InputActionEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FBPC_SharedController.FBPC_SharedController_C.Click To Unpause
	 * 		Flags  -> ()
	 */
	void AFBPC_SharedController_C::ClickToUnpause()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FBPC_SharedController.FBPC_SharedController_C.Click To Unpause");
		
		AFBPC_SharedController_C_ClickToUnpause_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FBPC_SharedController.FBPC_SharedController_C.OnToggleLocalizationQA
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FBPC_SharedController.FBPC_SharedController_C.EndSubtitleDisplay
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FBPC_SharedController.FBPC_SharedController_C.BeginSubtitleDisplay
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FBPC_SharedController.FBPC_SharedController_C.SkipSubtitles
	 * 		Flags  -> ()
	 */
	void AFBPC_SharedController_C::SkipSubtitles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FBPC_SharedController.FBPC_SharedController_C.SkipSubtitles");
		
		AFBPC_SharedController_C_SkipSubtitles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FBPC_SharedController.FBPC_SharedController_C.SetPlayingPartsAndServiceGame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsPlaying                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFBPC_SharedController_C::SetPlayingPartsAndServiceGame(bool IsPlaying)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FBPC_SharedController.FBPC_SharedController_C.SetPlayingPartsAndServiceGame");
		
		AFBPC_SharedController_C_SetPlayingPartsAndServiceGame_Params params {};
		params.IsPlaying = IsPlaying;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FBPC_SharedController.FBPC_SharedController_C.OverridePause
	 * 		Flags  -> ()
	 */
	void AFBPC_SharedController_C::OverridePause()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FBPC_SharedController.FBPC_SharedController_C.OverridePause");
		
		AFBPC_SharedController_C_OverridePause_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FBPC_SharedController.FBPC_SharedController_C.RemoveOverride
	 * 		Flags  -> ()
	 */
	void AFBPC_SharedController_C::RemoveOverride()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FBPC_SharedController.FBPC_SharedController_C.RemoveOverride");
		
		AFBPC_SharedController_C_RemoveOverride_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FBPC_SharedController.FBPC_SharedController_C.AllowNewItemPreview
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Allow                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFBPC_SharedController_C::AllowNewItemPreview(bool Allow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FBPC_SharedController.FBPC_SharedController_C.AllowNewItemPreview");
		
		AFBPC_SharedController_C_AllowNewItemPreview_Params params {};
		params.Allow = Allow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FBPC_SharedController.FBPC_SharedController_C.PauseGame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AFBPC_SharedController_C::PauseGame(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FBPC_SharedController.FBPC_SharedController_C.PauseGame");
		
		AFBPC_SharedController_C_PauseGame_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FBPC_SharedController.FBPC_SharedController_C.UsingCameraStation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               UsingCamStation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFBPC_SharedController_C::UsingCameraStation(bool UsingCamStation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FBPC_SharedController.FBPC_SharedController_C.UsingCameraStation");
		
		AFBPC_SharedController_C_UsingCameraStation_Params params {};
		params.UsingCamStation = UsingCamStation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FBPC_SharedController.FBPC_SharedController_C.CloseInventoryMenu
	 * 		Flags  -> ()
	 */
	void AFBPC_SharedController_C::CloseInventoryMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FBPC_SharedController.FBPC_SharedController_C.CloseInventoryMenu");
		
		AFBPC_SharedController_C_CloseInventoryMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FBPC_SharedController.FBPC_SharedController_C.IsOnLoadingScreen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               _TRUE__                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFBPC_SharedController_C::IsOnLoadingScreen(bool _TRUE__)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FBPC_SharedController.FBPC_SharedController_C.IsOnLoadingScreen");
		
		AFBPC_SharedController_C_IsOnLoadingScreen_Params params {};
		params._TRUE__ = _TRUE__;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FBPC_SharedController.FBPC_SharedController_C.ToggleCanPause
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               AllowPausing                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFBPC_SharedController_C::ToggleCanPause(bool AllowPausing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FBPC_SharedController.FBPC_SharedController_C.ToggleCanPause");
		
		AFBPC_SharedController_C_ToggleCanPause_Params params {};
		params.AllowPausing = AllowPausing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FBPC_SharedController.FBPC_SharedController_C.ExecuteUbergraph_FBPC_SharedController
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FBPC_SharedController.FBPC_SharedController_C.EscapePressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void AFBPC_SharedController_C::EscapePressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FBPC_SharedController.FBPC_SharedController_C.EscapePressed__DelegateSignature");
		
		AFBPC_SharedController_C_EscapePressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AFBPC_SharedController_C.StaticClass
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


