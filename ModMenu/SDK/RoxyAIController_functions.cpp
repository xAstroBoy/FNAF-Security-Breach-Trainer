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
//		Name   -> Function RoxyAIController.RoxyAIController_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ARoxyAIController_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RoxyAIController.RoxyAIController_C.ReceiveBeginPlay");

	ARoxyAIController_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function RoxyAIController.RoxyAIController_C.ExecuteUbergraph_RoxyAIController
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ARoxyAIController_C::ExecuteUbergraph_RoxyAIController(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RoxyAIController.RoxyAIController_C.ExecuteUbergraph_RoxyAIController");

	ARoxyAIController_C_ExecuteUbergraph_RoxyAIController_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
