// Name: FNAF Security Breach, Version: 1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function VOPlayableActor.VOPlayableActor_C.PlayVoiceType
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<AIVoiceOverType_EAIVoiceOverType>      VoiceTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UVOPlayableActor_C::PlayVoiceType(TEnumAsByte<AIVoiceOverType_EAIVoiceOverType> VoiceTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VOPlayableActor.VOPlayableActor_C.PlayVoiceType");

	UVOPlayableActor_C_PlayVoiceType_Params params {};
	params.VoiceTag = VoiceTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
