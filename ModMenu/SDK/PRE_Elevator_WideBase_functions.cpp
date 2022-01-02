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
//		Name   -> Function PRE_Elevator_WideBase.PRE_Elevator_WideBase_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void APRE_Elevator_WideBase_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PRE_Elevator_WideBase.PRE_Elevator_WideBase_C.ReceiveBeginPlay");

	APRE_Elevator_WideBase_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PRE_Elevator_WideBase.PRE_Elevator_WideBase_C.ExecuteUbergraph_PRE_Elevator_WideBase
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APRE_Elevator_WideBase_C::ExecuteUbergraph_PRE_Elevator_WideBase(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PRE_Elevator_WideBase.PRE_Elevator_WideBase_C.ExecuteUbergraph_PRE_Elevator_WideBase");

	APRE_Elevator_WideBase_C_ExecuteUbergraph_PRE_Elevator_WideBase_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
