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
//		Name   -> Function AIShatteredMontyController.AIShatteredMontyController_C.Setup Hiding
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AAIShatteredMontyController_C::Setup_Hiding()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AIShatteredMontyController.AIShatteredMontyController_C.Setup Hiding");

	AAIShatteredMontyController_C_Setup_Hiding_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function AIShatteredMontyController.AIShatteredMontyController_C.End Hiding
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AAIShatteredMontyController_C::End_Hiding()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AIShatteredMontyController.AIShatteredMontyController_C.End Hiding");

	AAIShatteredMontyController_C_End_Hiding_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function AIShatteredMontyController.AIShatteredMontyController_C.ExecuteUbergraph_AIShatteredMontyController
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAIShatteredMontyController_C::ExecuteUbergraph_AIShatteredMontyController(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AIShatteredMontyController.AIShatteredMontyController_C.ExecuteUbergraph_AIShatteredMontyController");

	AAIShatteredMontyController_C_ExecuteUbergraph_AIShatteredMontyController_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
