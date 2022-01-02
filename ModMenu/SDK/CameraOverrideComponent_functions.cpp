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
//		Name   -> Function CameraOverrideComponent.CameraOverrideComponent_C.Release Camera
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UCameraOverrideComponent_C::Release_Camera()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CameraOverrideComponent.CameraOverrideComponent_C.Release Camera");

	UCameraOverrideComponent_C_Release_Camera_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function CameraOverrideComponent.CameraOverrideComponent_C.Take Over Camera
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UCameraOverrideComponent_C::Take_Over_Camera()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CameraOverrideComponent.CameraOverrideComponent_C.Take Over Camera");

	UCameraOverrideComponent_C_Take_Over_Camera_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function CameraOverrideComponent.CameraOverrideComponent_C.ExecuteUbergraph_CameraOverrideComponent
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCameraOverrideComponent_C::ExecuteUbergraph_CameraOverrideComponent(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CameraOverrideComponent.CameraOverrideComponent_C.ExecuteUbergraph_CameraOverrideComponent");

	UCameraOverrideComponent_C_ExecuteUbergraph_CameraOverrideComponent_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
