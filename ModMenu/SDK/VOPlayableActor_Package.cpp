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
	 * 		Name   -> Function VOPlayableActor.VOPlayableActor_C.ForcePlayVoiceLine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAkAudioEvent*                               AKEvent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UVOPlayableActor_C::ForcePlayVoiceLine(class UAkAudioEvent* AKEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VOPlayableActor.VOPlayableActor_C.ForcePlayVoiceLine");
		
		UVOPlayableActor_C_ForcePlayVoiceLine_Params params {};
		params.AKEvent = AKEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VOPlayableActor.VOPlayableActor_C.PlayVoiceType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EAIVoiceOverType                                   VoiceTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UVOPlayableActor_C::PlayVoiceType(EAIVoiceOverType VoiceTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VOPlayableActor.VOPlayableActor_C.PlayVoiceType");
		
		UVOPlayableActor_C_PlayVoiceType_Params params {};
		params.VoiceTag = VoiceTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVOPlayableActor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVOPlayableActor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass VOPlayableActor.VOPlayableActor_C");
		return ptr;
	}

}


