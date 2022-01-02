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
//		Name   -> Function SplinePathwayMotionComponent.SplinePathwayMotionComponent_C.ReceiveBeginPlay
//		Flags  -> (Event, Public, BlueprintEvent)
void USplinePathwayMotionComponent_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SplinePathwayMotionComponent.SplinePathwayMotionComponent_C.ReceiveBeginPlay");

	USplinePathwayMotionComponent_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function SplinePathwayMotionComponent.SplinePathwayMotionComponent_C.ExecuteUbergraph_SplinePathwayMotionComponent
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USplinePathwayMotionComponent_C::ExecuteUbergraph_SplinePathwayMotionComponent(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SplinePathwayMotionComponent.SplinePathwayMotionComponent_C.ExecuteUbergraph_SplinePathwayMotionComponent");

	USplinePathwayMotionComponent_C_ExecuteUbergraph_SplinePathwayMotionComponent_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
