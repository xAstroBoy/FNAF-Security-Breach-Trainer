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
//		Name   -> Function Cinematic_Actor_Monty.Cinematic_Actor_Monty_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ACinematic_Actor_Monty_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Cinematic_Actor_Monty.Cinematic_Actor_Monty_C.ReceiveBeginPlay");

	ACinematic_Actor_Monty_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Cinematic_Actor_Monty.Cinematic_Actor_Monty_C.PlayVO
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UAkAudioEvent*                               SubtitleEvent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               SanitizeSubtitleKey                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UAkAudioEvent*                               AudioEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACinematic_Actor_Monty_C::PlayVO(class UAkAudioEvent* SubtitleEvent, bool SanitizeSubtitleKey, class UAkAudioEvent* AudioEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Cinematic_Actor_Monty.Cinematic_Actor_Monty_C.PlayVO");

	ACinematic_Actor_Monty_C_PlayVO_Params params {};
	params.SubtitleEvent = SubtitleEvent;
	params.SanitizeSubtitleKey = SanitizeSubtitleKey;
	params.AudioEvent = AudioEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Cinematic_Actor_Monty.Cinematic_Actor_Monty_C.ExecuteUbergraph_Cinematic_Actor_Monty
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACinematic_Actor_Monty_C::ExecuteUbergraph_Cinematic_Actor_Monty(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Cinematic_Actor_Monty.Cinematic_Actor_Monty_C.ExecuteUbergraph_Cinematic_Actor_Monty");

	ACinematic_Actor_Monty_C_ExecuteUbergraph_Cinematic_Actor_Monty_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
