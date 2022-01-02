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
//		Name   -> Function CautionBotController.CautionBotController_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ACautionBotController_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CautionBotController.CautionBotController_C.ReceiveBeginPlay");

	ACautionBotController_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function CautionBotController.CautionBotController_C.MoveToSpill
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector                                     SpillLocation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACautionBotController_C::MoveToSpill(const struct FVector& SpillLocation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CautionBotController.CautionBotController_C.MoveToSpill");

	ACautionBotController_C_MoveToSpill_Params params {};
	params.SpillLocation = SpillLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function CautionBotController.CautionBotController_C.ExecuteUbergraph_CautionBotController
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACautionBotController_C::ExecuteUbergraph_CautionBotController(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CautionBotController.CautionBotController_C.ExecuteUbergraph_CautionBotController");

	ACautionBotController_C_ExecuteUbergraph_CautionBotController_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
