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
//		Name   -> Function FindFreddyInteractible.FindFreddyInteractible_C.GetRandomInteractible
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFindFreddyInteractible_C::GetRandomInteractible(class AActor** Output)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FindFreddyInteractible.FindFreddyInteractible_C.GetRandomInteractible");

	UFindFreddyInteractible_C_GetRandomInteractible_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function FindFreddyInteractible.FindFreddyInteractible_C.ReceiveExecuteAI
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class AAIController*                               OwnerController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFindFreddyInteractible_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FindFreddyInteractible.FindFreddyInteractible_C.ReceiveExecuteAI");

	UFindFreddyInteractible_C_ReceiveExecuteAI_Params params {};
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function FindFreddyInteractible.FindFreddyInteractible_C.ExecuteUbergraph_FindFreddyInteractible
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFindFreddyInteractible_C::ExecuteUbergraph_FindFreddyInteractible(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FindFreddyInteractible.FindFreddyInteractible_C.ExecuteUbergraph_FindFreddyInteractible");

	UFindFreddyInteractible_C_ExecuteUbergraph_FindFreddyInteractible_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
