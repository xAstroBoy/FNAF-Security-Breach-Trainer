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
//		Name   -> Function CameraProvider.CameraProvider_C.GetCamera
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UCameraComponent*                            Camera                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCameraProvider_C::GetCamera(class UCameraComponent** Camera)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CameraProvider.CameraProvider_C.GetCamera");

	UCameraProvider_C_GetCamera_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Camera != nullptr)
		*Camera = params.Camera;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
