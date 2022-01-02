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
//		Name   -> Function BP_CinematicAudioEmitter.BP_CinematicAudioEmitter_C.PlaySound
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_CinematicAudioEmitter_C::PlaySound()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CinematicAudioEmitter.BP_CinematicAudioEmitter_C.PlaySound");

	ABP_CinematicAudioEmitter_C_PlaySound_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_CinematicAudioEmitter.BP_CinematicAudioEmitter_C.PlayAkEvent
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UAkAudioEvent*                               AkEvent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_CinematicAudioEmitter_C::PlayAkEvent(class UAkAudioEvent* AkEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CinematicAudioEmitter.BP_CinematicAudioEmitter_C.PlayAkEvent");

	ABP_CinematicAudioEmitter_C_PlayAkEvent_Params params {};
	params.AkEvent = AkEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_CinematicAudioEmitter.BP_CinematicAudioEmitter_C.ExecuteUbergraph_BP_CinematicAudioEmitter
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_CinematicAudioEmitter_C::ExecuteUbergraph_BP_CinematicAudioEmitter(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CinematicAudioEmitter.BP_CinematicAudioEmitter_C.ExecuteUbergraph_BP_CinematicAudioEmitter");

	ABP_CinematicAudioEmitter_C_ExecuteUbergraph_BP_CinematicAudioEmitter_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
