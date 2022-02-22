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
	 * 		Name   -> Function WI_Subtitles.WI_Subtitles_C.ToggleSubtitleVisibility
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWI_Subtitles_C::ToggleSubtitleVisibility(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Subtitles.WI_Subtitles_C.ToggleSubtitleVisibility");
		
		UWI_Subtitles_C_ToggleSubtitleVisibility_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function WI_Subtitles.WI_Subtitles_C.PrintDebug
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      String                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWI_Subtitles_C::PrintDebug(const class FString& String)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Subtitles.WI_Subtitles_C.PrintDebug");
		
		UWI_Subtitles_C_PrintDebug_Params params {};
		params.String = String;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function WI_Subtitles.WI_Subtitles_C.UpdateDisplay
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWI_Subtitles_C::UpdateDisplay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Subtitles.WI_Subtitles_C.UpdateDisplay");
		
		UWI_Subtitles_C_UpdateDisplay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function WI_Subtitles.WI_Subtitles_C.ExtractSubtitleVariable
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      SourceString                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      CharStart                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      CharEnd                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      Variable                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      String                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWI_Subtitles_C::ExtractSubtitleVariable(const class FString& SourceString, const class FString& CharStart, const class FString& CharEnd, class FString* Variable, class FString* String)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Subtitles.WI_Subtitles_C.ExtractSubtitleVariable");
		
		UWI_Subtitles_C_ExtractSubtitleVariable_Params params {};
		params.SourceString = SourceString;
		params.CharStart = CharStart;
		params.CharEnd = CharEnd;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Variable != nullptr)
			*Variable = params.Variable;
		if (String != nullptr)
			*String = params.String;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function WI_Subtitles.WI_Subtitles_C.BeginVoiceOverDisplay
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      FallbackSourceString                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		float                                              FallbackDuration                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MaxRadiusPercent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               SanitizeKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               HighPriority                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWI_Subtitles_C::BeginVoiceOverDisplay(const class FString& Key, class AActor* Actor, const class FString& FallbackSourceString, float FallbackDuration, float MaxRadiusPercent, bool SanitizeKey, bool HighPriority)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Subtitles.WI_Subtitles_C.BeginVoiceOverDisplay");
		
		UWI_Subtitles_C_BeginVoiceOverDisplay_Params params {};
		params.Key = Key;
		params.Actor = Actor;
		params.FallbackSourceString = FallbackSourceString;
		params.FallbackDuration = FallbackDuration;
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
	 * 		Name   -> Function WI_Subtitles.WI_Subtitles_C.TickDistance
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWI_Subtitles_C::TickDistance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Subtitles.WI_Subtitles_C.TickDistance");
		
		UWI_Subtitles_C_TickDistance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function WI_Subtitles.WI_Subtitles_C.TickLines
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWI_Subtitles_C::TickLines()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Subtitles.WI_Subtitles_C.TickLines");
		
		UWI_Subtitles_C_TickLines_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function WI_Subtitles.WI_Subtitles_C.ToggleActive
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWI_Subtitles_C::ToggleActive(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Subtitles.WI_Subtitles_C.ToggleActive");
		
		UWI_Subtitles_C_ToggleActive_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function WI_Subtitles.WI_Subtitles_C.GetSubtitleState
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	struct FS_SubtitleState UWI_Subtitles_C::GetSubtitleState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Subtitles.WI_Subtitles_C.GetSubtitleState");
		
		UWI_Subtitles_C_GetSubtitleState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function WI_Subtitles.WI_Subtitles_C.SetSubtitleState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FS_SubtitleState                            State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UWI_Subtitles_C::SetSubtitleState(const struct FS_SubtitleState& State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Subtitles.WI_Subtitles_C.SetSubtitleState");
		
		UWI_Subtitles_C_SetSubtitleState_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function WI_Subtitles.WI_Subtitles_C.Reset Lines
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWI_Subtitles_C::Reset_Lines()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Subtitles.WI_Subtitles_C.Reset Lines");
		
		UWI_Subtitles_C_Reset_Lines_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function WI_Subtitles.WI_Subtitles_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWI_Subtitles_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Subtitles.WI_Subtitles_C.PreConstruct");
		
		UWI_Subtitles_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function WI_Subtitles.WI_Subtitles_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWI_Subtitles_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Subtitles.WI_Subtitles_C.Construct");
		
		UWI_Subtitles_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function WI_Subtitles.WI_Subtitles_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWI_Subtitles_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Subtitles.WI_Subtitles_C.Tick");
		
		UWI_Subtitles_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function WI_Subtitles.WI_Subtitles_C.EndVoiceOverDisplay
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      reason                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWI_Subtitles_C::EndVoiceOverDisplay(const class FString& reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Subtitles.WI_Subtitles_C.EndVoiceOverDisplay");
		
		UWI_Subtitles_C_EndVoiceOverDisplay_Params params {};
		params.reason = reason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function WI_Subtitles.WI_Subtitles_C.SetEndTimer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWI_Subtitles_C::SetEndTimer(float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Subtitles.WI_Subtitles_C.SetEndTimer");
		
		UWI_Subtitles_C_SetEndTimer_Params params {};
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function WI_Subtitles.WI_Subtitles_C.EndTimer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWI_Subtitles_C::EndTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Subtitles.WI_Subtitles_C.EndTimer");
		
		UWI_Subtitles_C_EndTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function WI_Subtitles.WI_Subtitles_C.ExecuteUbergraph_WI_Subtitles
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWI_Subtitles_C::ExecuteUbergraph_WI_Subtitles(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Subtitles.WI_Subtitles_C.ExecuteUbergraph_WI_Subtitles");
		
		UWI_Subtitles_C_ExecuteUbergraph_WI_Subtitles_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UWI_Subtitles_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWI_Subtitles_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WI_Subtitles.WI_Subtitles_C");
		return ptr;
	}

}


