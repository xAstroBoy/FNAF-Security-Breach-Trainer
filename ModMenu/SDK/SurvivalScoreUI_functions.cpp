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
//		Name   -> Function SurvivalScoreUI.SurvivalScoreUI_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void USurvivalScoreUI_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvivalScoreUI.SurvivalScoreUI_C.Construct");

	USurvivalScoreUI_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function SurvivalScoreUI.SurvivalScoreUI_C.ExecuteUbergraph_SurvivalScoreUI
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USurvivalScoreUI_C::ExecuteUbergraph_SurvivalScoreUI(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvivalScoreUI.SurvivalScoreUI_C.ExecuteUbergraph_SurvivalScoreUI");

	USurvivalScoreUI_C_ExecuteUbergraph_SurvivalScoreUI_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
