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
//		Name   -> Function MessageCollectible_MontyClue.MessageCollectible_MontyClue_C.OnCollect
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AMessageCollectible_MontyClue_C::OnCollect()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MessageCollectible_MontyClue.MessageCollectible_MontyClue_C.OnCollect");

	AMessageCollectible_MontyClue_C_OnCollect_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MessageCollectible_MontyClue.MessageCollectible_MontyClue_C.ExecuteUbergraph_MessageCollectible_MontyClue
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMessageCollectible_MontyClue_C::ExecuteUbergraph_MessageCollectible_MontyClue(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MessageCollectible_MontyClue.MessageCollectible_MontyClue_C.ExecuteUbergraph_MessageCollectible_MontyClue");

	AMessageCollectible_MontyClue_C_ExecuteUbergraph_MessageCollectible_MontyClue_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
