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
//		Name   -> Function Pre_Speaker.Pre_Speaker_C.PlaySound
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Play                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APre_Speaker_C::PlaySound(bool Play)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Pre_Speaker.Pre_Speaker_C.PlaySound");

	APre_Speaker_C_PlaySound_Params params {};
	params.Play = Play;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Pre_Speaker.Pre_Speaker_C.ExecuteUbergraph_Pre_Speaker
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APre_Speaker_C::ExecuteUbergraph_Pre_Speaker(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Pre_Speaker.Pre_Speaker_C.ExecuteUbergraph_Pre_Speaker");

	APre_Speaker_C_ExecuteUbergraph_Pre_Speaker_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
