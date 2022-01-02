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
//		Name   -> Function BI_AIRaceInput.BI_AIRaceInput_C.AITurnRight
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Axis                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBI_AIRaceInput_C::AITurnRight(float Axis)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BI_AIRaceInput.BI_AIRaceInput_C.AITurnRight");

	UBI_AIRaceInput_C_AITurnRight_Params params {};
	params.Axis = Axis;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BI_AIRaceInput.BI_AIRaceInput_C.AIMoveForward
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Axis                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBI_AIRaceInput_C::AIMoveForward(float Axis)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BI_AIRaceInput.BI_AIRaceInput_C.AIMoveForward");

	UBI_AIRaceInput_C_AIMoveForward_Params params {};
	params.Axis = Axis;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
