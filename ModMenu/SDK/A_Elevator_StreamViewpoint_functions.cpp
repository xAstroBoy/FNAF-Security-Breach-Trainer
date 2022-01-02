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
//		Name   -> Function A_Elevator_StreamViewpoint.A_Elevator_StreamViewpoint_C.IsStreamingEnabled
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool AA_Elevator_StreamViewpoint_C::IsStreamingEnabled()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function A_Elevator_StreamViewpoint.A_Elevator_StreamViewpoint_C.IsStreamingEnabled");

	AA_Elevator_StreamViewpoint_C_IsStreamingEnabled_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function A_Elevator_StreamViewpoint.A_Elevator_StreamViewpoint_C.SetStreamingEnable
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bEnable                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AA_Elevator_StreamViewpoint_C::SetStreamingEnable(bool bEnable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function A_Elevator_StreamViewpoint.A_Elevator_StreamViewpoint_C.SetStreamingEnable");

	AA_Elevator_StreamViewpoint_C_SetStreamingEnable_Params params {};
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
