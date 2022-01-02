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
//		Name   -> Function SetupSplineMovement.SetupSplineMovement_C.Setup Spline Movement
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APawn*                                       Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USetupSplineMovement_C::Setup_Spline_Movement(class APawn* Pawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SetupSplineMovement.SetupSplineMovement_C.Setup Spline Movement");

	USetupSplineMovement_C_Setup_Spline_Movement_Params params {};
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function SetupSplineMovement.SetupSplineMovement_C.ExecuteUbergraph_SetupSplineMovement
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USetupSplineMovement_C::ExecuteUbergraph_SetupSplineMovement(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SetupSplineMovement.SetupSplineMovement_C.ExecuteUbergraph_SetupSplineMovement");

	USetupSplineMovement_C_ExecuteUbergraph_SetupSplineMovement_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
