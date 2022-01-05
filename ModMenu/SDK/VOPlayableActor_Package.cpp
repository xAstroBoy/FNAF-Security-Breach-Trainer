/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "VOPlayableActor_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function VOPlayableActor.VOPlayableActor_C.PlayVoiceType
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TEnumAsByte<AIVoiceOverType_EAIVoiceOverType>      VoiceTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UVOPlayableActor_C::PlayVoiceType(TEnumAsByte<AIVoiceOverType_EAIVoiceOverType> VoiceTag)
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
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVOPlayableActor_C.StaticClass
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


