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
	 * 		Name   -> Function SubtitleDisplayInterface.SubtitleDisplayInterface_C.SkipSubtitles
	 * 		Flags  -> ()
	 */
	void USubtitleDisplayInterface_C::SkipSubtitles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SubtitleDisplayInterface.SubtitleDisplayInterface_C.SkipSubtitles");
		
		USubtitleDisplayInterface_C_SkipSubtitles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SubtitleDisplayInterface.SubtitleDisplayInterface_C.PostEventWithSubtitles
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAkAudioEvent*                               AkEvent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	int32_t USubtitleDisplayInterface_C::PostEventWithSubtitles(class UAkAudioEvent* AkEvent, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SubtitleDisplayInterface.SubtitleDisplayInterface_C.PostEventWithSubtitles");
		
		USubtitleDisplayInterface_C_PostEventWithSubtitles_Params params {};
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
	 * 		Name   -> Function SubtitleDisplayInterface.SubtitleDisplayInterface_C.EndSubtitleDisplay
	 * 		Flags  -> ()
	 */
	void USubtitleDisplayInterface_C::EndSubtitleDisplay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SubtitleDisplayInterface.SubtitleDisplayInterface_C.EndSubtitleDisplay");
		
		USubtitleDisplayInterface_C_EndSubtitleDisplay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SubtitleDisplayInterface.SubtitleDisplayInterface_C.BeginSubtitleDisplay
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
	void USubtitleDisplayInterface_C::BeginSubtitleDisplay(const class FString& Key, class AActor* Actor, const class FString& FallbackSourceString, float Duration, float MaxRadiusPercent, bool SanitizeKey, bool HighPriority)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SubtitleDisplayInterface.SubtitleDisplayInterface_C.BeginSubtitleDisplay");
		
		USubtitleDisplayInterface_C_BeginSubtitleDisplay_Params params {};
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
	 * 		Name   -> PredefinedFunction USubtitleDisplayInterface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USubtitleDisplayInterface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SubtitleDisplayInterface.SubtitleDisplayInterface_C");
		return ptr;
	}

}


