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
//		Name   -> Function MontyAIController.MontyAIController_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void AMontyAIController_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MontyAIController.MontyAIController_C.ReceiveBeginPlay");

	AMontyAIController_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MontyAIController.MontyAIController_C.ExecuteUbergraph_MontyAIController
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMontyAIController_C::ExecuteUbergraph_MontyAIController(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MontyAIController.MontyAIController_C.ExecuteUbergraph_MontyAIController");

	AMontyAIController_C_ExecuteUbergraph_MontyAIController_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
