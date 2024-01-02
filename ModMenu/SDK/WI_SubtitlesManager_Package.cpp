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
	 * 		Name   -> Function WI_SubtitlesManager.WI_SubtitlesManager_C.FixOnomatopoeiaFormatting
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Subtitle                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      SubtitleWithOnomatopeia                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWI_SubtitlesManager_C::FixOnomatopoeiaFormatting(const class FString& Subtitle, class FString* SubtitleWithOnomatopeia)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_SubtitlesManager.WI_SubtitlesManager_C.FixOnomatopoeiaFormatting");
		
		UWI_SubtitlesManager_C_FixOnomatopoeiaFormatting_Params params {};
		params.Subtitle = Subtitle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SubtitleWithOnomatopeia != nullptr)
			*SubtitleWithOnomatopeia = params.SubtitleWithOnomatopeia;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WI_SubtitlesManager.WI_SubtitlesManager_C.AdjustSpacing
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              SubtitleSpacing                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              LastSubtitleSpacing                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWI_SubtitlesManager_C::AdjustSpacing(float SubtitleSpacing, float LastSubtitleSpacing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_SubtitlesManager.WI_SubtitlesManager_C.AdjustSpacing");
		
		UWI_SubtitlesManager_C_AdjustSpacing_Params params {};
		params.SubtitleSpacing = SubtitleSpacing;
		params.LastSubtitleSpacing = LastSubtitleSpacing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WI_SubtitlesManager.WI_SubtitlesManager_C.GetFreeSubtitleFromPool
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSubtitlePoolItem                           SubtitleItem                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	 */
	void UWI_SubtitlesManager_C::GetFreeSubtitleFromPool(struct FSubtitlePoolItem* SubtitleItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_SubtitlesManager.WI_SubtitlesManager_C.GetFreeSubtitleFromPool");
		
		UWI_SubtitlesManager_C_GetFreeSubtitleFromPool_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SubtitleItem != nullptr)
			*SubtitleItem = params.SubtitleItem;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WI_SubtitlesManager.WI_SubtitlesManager_C.UpdateDisplay
	 * 		Flags  -> ()
	 */
	void UWI_SubtitlesManager_C::UpdateDisplay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_SubtitlesManager.WI_SubtitlesManager_C.UpdateDisplay");
		
		UWI_SubtitlesManager_C_UpdateDisplay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WI_SubtitlesManager.WI_SubtitlesManager_C.EndVoiceOverDisplay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      reason                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWI_SubtitlesManager_C::EndVoiceOverDisplay(const class FString& reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_SubtitlesManager.WI_SubtitlesManager_C.EndVoiceOverDisplay");
		
		UWI_SubtitlesManager_C_EndVoiceOverDisplay_Params params {};
		params.reason = reason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WI_SubtitlesManager.WI_SubtitlesManager_C.RemoveSubtitles
	 * 		Flags  -> ()
	 */
	void UWI_SubtitlesManager_C::RemoveSubtitles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_SubtitlesManager.WI_SubtitlesManager_C.RemoveSubtitles");
		
		UWI_SubtitlesManager_C_RemoveSubtitles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WI_SubtitlesManager.WI_SubtitlesManager_C.CreateNewSubtitle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWI_Subtitles_C*                             Subtitle                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSubtitlePoolItem                           SubtitlePoolItem                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	 */
	void UWI_SubtitlesManager_C::CreateNewSubtitle(class UWI_Subtitles_C** Subtitle, struct FSubtitlePoolItem* SubtitlePoolItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_SubtitlesManager.WI_SubtitlesManager_C.CreateNewSubtitle");
		
		UWI_SubtitlesManager_C_CreateNewSubtitle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Subtitle != nullptr)
			*Subtitle = params.Subtitle;
		if (SubtitlePoolItem != nullptr)
			*SubtitlePoolItem = params.SubtitlePoolItem;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WI_SubtitlesManager.WI_SubtitlesManager_C.SetSubtitleStates
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FS_SubtitleState>                    States                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWI_SubtitlesManager_C::SetSubtitleStates(TArray<struct FS_SubtitleState>* States)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_SubtitlesManager.WI_SubtitlesManager_C.SetSubtitleStates");
		
		UWI_SubtitlesManager_C_SetSubtitleStates_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (States != nullptr)
			*States = params.States;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WI_SubtitlesManager.WI_SubtitlesManager_C.GetSubtitleStates
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FS_SubtitleState>                    SubtitleStates                                             (Parm, OutParm)
	 */
	void UWI_SubtitlesManager_C::GetSubtitleStates(TArray<struct FS_SubtitleState>* SubtitleStates)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_SubtitlesManager.WI_SubtitlesManager_C.GetSubtitleStates");
		
		UWI_SubtitlesManager_C_GetSubtitleStates_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SubtitleStates != nullptr)
			*SubtitleStates = params.SubtitleStates;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WI_SubtitlesManager.WI_SubtitlesManager_C.Extract Subtitle Variable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SourceString                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      CharStart                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      CharEnd                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      Variable                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      String                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWI_SubtitlesManager_C::ExtractSubtitleVariable(const class FString& SourceString, const class FString& CharStart, const class FString& CharEnd, class FString* Variable, class FString* String)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_SubtitlesManager.WI_SubtitlesManager_C.Extract Subtitle Variable");
		
		UWI_SubtitlesManager_C_ExtractSubtitleVariable_Params params {};
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WI_SubtitlesManager.WI_SubtitlesManager_C.PrintDebug
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      inString                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWI_SubtitlesManager_C::PrintDebug(const class FString& inString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_SubtitlesManager.WI_SubtitlesManager_C.PrintDebug");
		
		UWI_SubtitlesManager_C_PrintDebug_Params params {};
		params.inString = inString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WI_SubtitlesManager.WI_SubtitlesManager_C.BeginVoiceOverDisplay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      FallbackSourceString                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		float                                              FallbackDuration                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MaxRadiusPercent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               SanitizeKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               HightPriority                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWI_SubtitlesManager_C::BeginVoiceOverDisplay(const class FString& Key, class AActor* Actor, const class FString& FallbackSourceString, float FallbackDuration, float MaxRadiusPercent, bool SanitizeKey, bool HightPriority)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_SubtitlesManager.WI_SubtitlesManager_C.BeginVoiceOverDisplay");
		
		UWI_SubtitlesManager_C_BeginVoiceOverDisplay_Params params {};
		params.Key = Key;
		params.Actor = Actor;
		params.FallbackSourceString = FallbackSourceString;
		params.FallbackDuration = FallbackDuration;
		params.MaxRadiusPercent = MaxRadiusPercent;
		params.SanitizeKey = SanitizeKey;
		params.HightPriority = HightPriority;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WI_SubtitlesManager.WI_SubtitlesManager_C.SubtitleEnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWI_Subtitles_C*                             SubtitleWidget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWI_SubtitlesManager_C::SubtitleEnd(class UWI_Subtitles_C* SubtitleWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_SubtitlesManager.WI_SubtitlesManager_C.SubtitleEnd");
		
		UWI_SubtitlesManager_C_SubtitleEnd_Params params {};
		params.SubtitleWidget = SubtitleWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WI_SubtitlesManager.WI_SubtitlesManager_C.ExecuteUbergraph_WI_SubtitlesManager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWI_SubtitlesManager_C::ExecuteUbergraph_WI_SubtitlesManager(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_SubtitlesManager.WI_SubtitlesManager_C.ExecuteUbergraph_WI_SubtitlesManager");
		
		UWI_SubtitlesManager_C_ExecuteUbergraph_WI_SubtitlesManager_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWI_SubtitlesManager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWI_SubtitlesManager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WI_SubtitlesManager.WI_SubtitlesManager_C");
		return ptr;
	}

}


