/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "BFL_Post_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BFL_Post.BFL_Post_C.PostEvent_EnsureConstants_MultiplePositions
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAkAudioEvent*                               AkEvent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FTransform>                          Positions                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 * 		AkAudio_EAkMultiPositionType                       MultiPositionType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAkAudioEvent*                               Return_AkEvent                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FTransform>                          Return_Positions                                           (Parm, OutParm, HasGetValueTypeHash)
	 * 		AkAudio_EAkMultiPositionType                       Return_MultiPositionType                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBFL_Post_C::STATIC_PostEvent_EnsureConstants_MultiplePositions(class UAkAudioEvent* AkEvent, TArray<struct FTransform>* Positions, AkAudio_EAkMultiPositionType MultiPositionType, class UObject* __WorldContext, class UAkAudioEvent** Return_AkEvent, TArray<struct FTransform>* Return_Positions, AkAudio_EAkMultiPositionType* Return_MultiPositionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BFL_Post.BFL_Post_C.PostEvent_EnsureConstants_MultiplePositions");
		
		UBFL_Post_C_PostEvent_EnsureConstants_MultiplePositions_Params params {};
		params.AkEvent = AkEvent;
		params.MultiPositionType = MultiPositionType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Positions != nullptr)
			*Positions = params.Positions;
		if (Return_AkEvent != nullptr)
			*Return_AkEvent = params.Return_AkEvent;
		if (Return_Positions != nullptr)
			*Return_Positions = params.Return_Positions;
		if (Return_MultiPositionType != nullptr)
			*Return_MultiPositionType = params.Return_MultiPositionType;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BFL_Post.BFL_Post_C.PostEventWithSubtitles_EnsureConstants_MultiplePositions
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAkAudioEvent*                               AkEvent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Wait                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              MaxRadiusPercent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               SanitizeSubtitleKey                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               HighPriority                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FTransform>                          Positions                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 * 		AkAudio_EAkMultiPositionType                       MultiPositionType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAkAudioEvent*                               Return_AkEvent                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Return_Actor                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Return_Wait                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Return_MaxRadiusPercent                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Return_SanitizeSubtitleKey                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Return_HighPriority                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FTransform>                          Return_Positions                                           (Parm, OutParm, HasGetValueTypeHash)
	 * 		AkAudio_EAkMultiPositionType                       Return_MultiPositionType                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBFL_Post_C::STATIC_PostEventWithSubtitles_EnsureConstants_MultiplePositions(class UAkAudioEvent* AkEvent, class AActor* Actor, bool Wait, float MaxRadiusPercent, bool SanitizeSubtitleKey, bool HighPriority, TArray<struct FTransform>* Positions, AkAudio_EAkMultiPositionType MultiPositionType, class UObject* __WorldContext, class UAkAudioEvent** Return_AkEvent, class AActor** Return_Actor, bool* Return_Wait, float* Return_MaxRadiusPercent, bool* Return_SanitizeSubtitleKey, bool* Return_HighPriority, TArray<struct FTransform>* Return_Positions, AkAudio_EAkMultiPositionType* Return_MultiPositionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BFL_Post.BFL_Post_C.PostEventWithSubtitles_EnsureConstants_MultiplePositions");
		
		UBFL_Post_C_PostEventWithSubtitles_EnsureConstants_MultiplePositions_Params params {};
		params.AkEvent = AkEvent;
		params.Actor = Actor;
		params.Wait = Wait;
		params.MaxRadiusPercent = MaxRadiusPercent;
		params.SanitizeSubtitleKey = SanitizeSubtitleKey;
		params.HighPriority = HighPriority;
		params.MultiPositionType = MultiPositionType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Positions != nullptr)
			*Positions = params.Positions;
		if (Return_AkEvent != nullptr)
			*Return_AkEvent = params.Return_AkEvent;
		if (Return_Actor != nullptr)
			*Return_Actor = params.Return_Actor;
		if (Return_Wait != nullptr)
			*Return_Wait = params.Return_Wait;
		if (Return_MaxRadiusPercent != nullptr)
			*Return_MaxRadiusPercent = params.Return_MaxRadiusPercent;
		if (Return_SanitizeSubtitleKey != nullptr)
			*Return_SanitizeSubtitleKey = params.Return_SanitizeSubtitleKey;
		if (Return_HighPriority != nullptr)
			*Return_HighPriority = params.Return_HighPriority;
		if (Return_Positions != nullptr)
			*Return_Positions = params.Return_Positions;
		if (Return_MultiPositionType != nullptr)
			*Return_MultiPositionType = params.Return_MultiPositionType;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BFL_Post.BFL_Post_C.PostEventWithSubtitles_EnsureConstants
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAkAudioEvent*                               AkEvent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Wait                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              MaxRadiusPercent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               SanitizeSubtitleKey                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               HighPriority                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAkAudioEvent*                               Return_AkEvent                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Return_Actor                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Return_Wait                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Return_MaxRadiusPercent                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Return_SanitizeSubtitleKey                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Return_HighPriority                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBFL_Post_C::STATIC_PostEventWithSubtitles_EnsureConstants(class UAkAudioEvent* AkEvent, class AActor* Actor, bool Wait, float MaxRadiusPercent, bool SanitizeSubtitleKey, bool HighPriority, class UObject* __WorldContext, class UAkAudioEvent** Return_AkEvent, class AActor** Return_Actor, bool* Return_Wait, float* Return_MaxRadiusPercent, bool* Return_SanitizeSubtitleKey, bool* Return_HighPriority)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BFL_Post.BFL_Post_C.PostEventWithSubtitles_EnsureConstants");
		
		UBFL_Post_C_PostEventWithSubtitles_EnsureConstants_Params params {};
		params.AkEvent = AkEvent;
		params.Actor = Actor;
		params.Wait = Wait;
		params.MaxRadiusPercent = MaxRadiusPercent;
		params.SanitizeSubtitleKey = SanitizeSubtitleKey;
		params.HighPriority = HighPriority;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return_AkEvent != nullptr)
			*Return_AkEvent = params.Return_AkEvent;
		if (Return_Actor != nullptr)
			*Return_Actor = params.Return_Actor;
		if (Return_Wait != nullptr)
			*Return_Wait = params.Return_Wait;
		if (Return_MaxRadiusPercent != nullptr)
			*Return_MaxRadiusPercent = params.Return_MaxRadiusPercent;
		if (Return_SanitizeSubtitleKey != nullptr)
			*Return_SanitizeSubtitleKey = params.Return_SanitizeSubtitleKey;
		if (Return_HighPriority != nullptr)
			*Return_HighPriority = params.Return_HighPriority;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBFL_Post_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBFL_Post_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BFL_Post.BFL_Post_C");
		return ptr;
	}

}


