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
//		Name   -> Function SpillComponent.SpillComponent_C.Trigger Spill
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void USpillComponent_C::Trigger_Spill()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpillComponent.SpillComponent_C.Trigger Spill");

	USpillComponent_C_Trigger_Spill_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function SpillComponent.SpillComponent_C.ExecuteUbergraph_SpillComponent
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USpillComponent_C::ExecuteUbergraph_SpillComponent(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpillComponent.SpillComponent_C.ExecuteUbergraph_SpillComponent");

	USpillComponent_C_ExecuteUbergraph_SpillComponent_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
