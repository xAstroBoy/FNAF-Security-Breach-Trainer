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
//		Name   -> Function PRE_Elevator_NarrowBase.PRE_Elevator_NarrowBase_C.ExecuteUbergraph_PRE_Elevator_NarrowBase
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APRE_Elevator_NarrowBase_C::ExecuteUbergraph_PRE_Elevator_NarrowBase(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PRE_Elevator_NarrowBase.PRE_Elevator_NarrowBase_C.ExecuteUbergraph_PRE_Elevator_NarrowBase");

	APRE_Elevator_NarrowBase_C_ExecuteUbergraph_PRE_Elevator_NarrowBase_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
