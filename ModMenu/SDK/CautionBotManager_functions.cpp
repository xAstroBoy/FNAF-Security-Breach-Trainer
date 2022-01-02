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
//		Name   -> Function CautionBotManager.CautionBotManager_C.Register Caution Bot
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ACautionBot_C*                               CautionBot                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACautionBotManager_C::Register_Caution_Bot(class ACautionBot_C* CautionBot)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CautionBotManager.CautionBotManager_C.Register Caution Bot");

	ACautionBotManager_C_Register_Caution_Bot_Params params {};
	params.CautionBot = CautionBot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function CautionBotManager.CautionBotManager_C.Unregister Caution Bot
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ACautionBot_C*                               CautionBot                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACautionBotManager_C::Unregister_Caution_Bot(class ACautionBot_C* CautionBot)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CautionBotManager.CautionBotManager_C.Unregister Caution Bot");

	ACautionBotManager_C_Unregister_Caution_Bot_Params params {};
	params.CautionBot = CautionBot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function CautionBotManager.CautionBotManager_C.On Spill
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      SpillActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACautionBotManager_C::On_Spill(class AActor* SpillActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CautionBotManager.CautionBotManager_C.On Spill");

	ACautionBotManager_C_On_Spill_Params params {};
	params.SpillActor = SpillActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function CautionBotManager.CautionBotManager_C.ExecuteUbergraph_CautionBotManager
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACautionBotManager_C::ExecuteUbergraph_CautionBotManager(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CautionBotManager.CautionBotManager_C.ExecuteUbergraph_CautionBotManager");

	ACautionBotManager_C_ExecuteUbergraph_CautionBotManager_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
