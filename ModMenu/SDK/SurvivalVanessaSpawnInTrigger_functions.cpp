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
//		Name   -> Function SurvivalVanessaSpawnInTrigger.SurvivalVanessaSpawnInTrigger_C.OnTriggered
//		Flags  -> (Event, Protected, BlueprintEvent)
void ASurvivalVanessaSpawnInTrigger_C::OnTriggered()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvivalVanessaSpawnInTrigger.SurvivalVanessaSpawnInTrigger_C.OnTriggered");

	ASurvivalVanessaSpawnInTrigger_C_OnTriggered_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function SurvivalVanessaSpawnInTrigger.SurvivalVanessaSpawnInTrigger_C.ExecuteUbergraph_SurvivalVanessaSpawnInTrigger
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvivalVanessaSpawnInTrigger_C::ExecuteUbergraph_SurvivalVanessaSpawnInTrigger(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvivalVanessaSpawnInTrigger.SurvivalVanessaSpawnInTrigger_C.ExecuteUbergraph_SurvivalVanessaSpawnInTrigger");

	ASurvivalVanessaSpawnInTrigger_C_ExecuteUbergraph_SurvivalVanessaSpawnInTrigger_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
