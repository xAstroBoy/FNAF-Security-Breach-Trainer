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
//		Name   -> Function Monty_Intro_Shot_201.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_2
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ACinematic_Actor_Monty_C*                    Cinematic_Actor_Monty                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_2(class ACinematic_Actor_Monty_C* Cinematic_Actor_Monty)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Monty_Intro_Shot_201.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_2");

	USequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_2_Params params {};
	params.Cinematic_Actor_Monty = Cinematic_Actor_Monty;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Monty_Intro_Shot_201.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_1
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ACineCameraActor*                            CineCameraActor2                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_1(class ACineCameraActor* CineCameraActor2)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Monty_Intro_Shot_201.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_1");

	USequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_1_Params params {};
	params.CineCameraActor2 = CineCameraActor2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Monty_Intro_Shot_201.SequenceDirector_C.Animatronic_ABP_Monty_C_0_Event_2
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UAnimatronic_ABP_Monty_C*                    Animatronic_ABP_Monty_C_1                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              JiggleScaleTarget                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Shoulderpad_DynamicAlpha                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              TailDynamicAlpha                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USequenceDirector_C::Animatronic_ABP_Monty_C_0_Event_2(class UAnimatronic_ABP_Monty_C* Animatronic_ABP_Monty_C_1, float JiggleScaleTarget, float Shoulderpad_DynamicAlpha, float TailDynamicAlpha)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Monty_Intro_Shot_201.SequenceDirector_C.Animatronic_ABP_Monty_C_0_Event_2");

	USequenceDirector_C_Animatronic_ABP_Monty_C_0_Event_2_Params params {};
	params.Animatronic_ABP_Monty_C_1 = Animatronic_ABP_Monty_C_1;
	params.JiggleScaleTarget = JiggleScaleTarget;
	params.Shoulderpad_DynamicAlpha = Shoulderpad_DynamicAlpha;
	params.TailDynamicAlpha = TailDynamicAlpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Monty_Intro_Shot_201.SequenceDirector_C.CineCameraActor2_Event_1
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ACineCameraActor*                            CineCameraActor2                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USequenceDirector_C::CineCameraActor2_Event_1(class ACineCameraActor* CineCameraActor2)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Monty_Intro_Shot_201.SequenceDirector_C.CineCameraActor2_Event_1");

	USequenceDirector_C_CineCameraActor2_Event_1_Params params {};
	params.CineCameraActor2 = CineCameraActor2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Monty_Intro_Shot_201.SequenceDirector_C.Cinematic_Actor_Monty_Event_1
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ACinematic_Actor_Monty_C*                    Cinematic_Actor_Monty                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UAkAudioEvent*                               SubtitleEvent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               SanitizeSubtitleKey                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UAkAudioEvent*                               AudioEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USequenceDirector_C::Cinematic_Actor_Monty_Event_1(class ACinematic_Actor_Monty_C* Cinematic_Actor_Monty, class UAkAudioEvent* SubtitleEvent, bool SanitizeSubtitleKey, class UAkAudioEvent* AudioEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Monty_Intro_Shot_201.SequenceDirector_C.Cinematic_Actor_Monty_Event_1");

	USequenceDirector_C_Cinematic_Actor_Monty_Event_1_Params params {};
	params.Cinematic_Actor_Monty = Cinematic_Actor_Monty;
	params.SubtitleEvent = SubtitleEvent;
	params.SanitizeSubtitleKey = SanitizeSubtitleKey;
	params.AudioEvent = AudioEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Monty_Intro_Shot_201.SequenceDirector_C.ExecuteUbergraph_SequenceDirector
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USequenceDirector_C::ExecuteUbergraph_SequenceDirector(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Monty_Intro_Shot_201.SequenceDirector_C.ExecuteUbergraph_SequenceDirector");

	USequenceDirector_C_ExecuteUbergraph_SequenceDirector_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
