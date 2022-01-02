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
//		Name   -> Function PizzaMakerManager.PizzaMakerManager_C.FinishStep
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<PizzaStep_EPizzaStep>                  Step                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APizzaMakerManager_C::FinishStep(TEnumAsByte<PizzaStep_EPizzaStep> Step)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PizzaMakerManager.PizzaMakerManager_C.FinishStep");

	APizzaMakerManager_C_FinishStep_Params params {};
	params.Step = Step;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PizzaMakerManager.PizzaMakerManager_C.MoveToPizzaStep
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<PizzaStep_EPizzaStep>                  Step                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APizzaMakerManager_C::MoveToPizzaStep(TEnumAsByte<PizzaStep_EPizzaStep> Step)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PizzaMakerManager.PizzaMakerManager_C.MoveToPizzaStep");

	APizzaMakerManager_C_MoveToPizzaStep_Params params {};
	params.Step = Step;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PizzaMakerManager.PizzaMakerManager_C.ShowNextStationName
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void APizzaMakerManager_C::ShowNextStationName()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PizzaMakerManager.PizzaMakerManager_C.ShowNextStationName");

	APizzaMakerManager_C_ShowNextStationName_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PizzaMakerManager.PizzaMakerManager_C.Step Completed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<PizzaStep_EPizzaStep>                  Step                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APizzaMakerManager_C::Step_Completed(TEnumAsByte<PizzaStep_EPizzaStep> Step)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PizzaMakerManager.PizzaMakerManager_C.Step Completed");

	APizzaMakerManager_C_Step_Completed_Params params {};
	params.Step = Step;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PizzaMakerManager.PizzaMakerManager_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void APizzaMakerManager_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PizzaMakerManager.PizzaMakerManager_C.ReceiveBeginPlay");

	APizzaMakerManager_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PizzaMakerManager.PizzaMakerManager_C.PlayStepAudio
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void APizzaMakerManager_C::PlayStepAudio()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PizzaMakerManager.PizzaMakerManager_C.PlayStepAudio");

	APizzaMakerManager_C_PlayStepAudio_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PizzaMakerManager.PizzaMakerManager_C.ExecuteUbergraph_PizzaMakerManager
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APizzaMakerManager_C::ExecuteUbergraph_PizzaMakerManager(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PizzaMakerManager.PizzaMakerManager_C.ExecuteUbergraph_PizzaMakerManager");

	APizzaMakerManager_C_ExecuteUbergraph_PizzaMakerManager_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
