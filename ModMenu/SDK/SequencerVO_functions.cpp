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
//		Name   -> Function SequencerVO.SequencerVO_C.PlayVO
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UAkAudioEvent*                               VO                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Freddy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              MaxRadiusPercent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASequencerVO_C::PlayVO(class UAkAudioEvent* VO, class AActor* Actor, bool Freddy, float MaxRadiusPercent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SequencerVO.SequencerVO_C.PlayVO");

	ASequencerVO_C_PlayVO_Params params {};
	params.VO = VO;
	params.Actor = Actor;
	params.Freddy = Freddy;
	params.MaxRadiusPercent = MaxRadiusPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function SequencerVO.SequencerVO_C.ExecuteUbergraph_SequencerVO
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASequencerVO_C::ExecuteUbergraph_SequencerVO(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SequencerVO.SequencerVO_C.ExecuteUbergraph_SequencerVO");

	ASequencerVO_C_ExecuteUbergraph_SequencerVO_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
