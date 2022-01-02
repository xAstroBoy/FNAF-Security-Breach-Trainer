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
//		Name   -> Function SplineFollowerController.SplineFollowerController_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ASplineFollowerController_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SplineFollowerController.SplineFollowerController_C.ReceiveBeginPlay");

	ASplineFollowerController_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function SplineFollowerController.SplineFollowerController_C.ExecuteUbergraph_SplineFollowerController
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASplineFollowerController_C::ExecuteUbergraph_SplineFollowerController(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SplineFollowerController.SplineFollowerController_C.ExecuteUbergraph_SplineFollowerController");

	ASplineFollowerController_C_ExecuteUbergraph_SplineFollowerController_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
