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
//		Offset -> 0x005DF250
//		Name   -> Function RTXGI.DDGIBlueprintLibrary.ClearProbeData
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UDDGIVolumeComponent*                        DDGIVolumeComponent                                        (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDDGIBlueprintLibrary::STATIC_ClearProbeData(class UDDGIVolumeComponent* DDGIVolumeComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RTXGI.DDGIBlueprintLibrary.ClearProbeData");

	UDDGIBlueprintLibrary_ClearProbeData_Params params {};
	params.DDGIVolumeComponent = DDGIVolumeComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x005DF2C0
//		Name   -> Function RTXGI.DDGIVolumeComponent.DDGIClearVolumes
//		Flags  -> (Final, Exec, Native, Public)
void UDDGIVolumeComponent::DDGIClearVolumes()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RTXGI.DDGIVolumeComponent.DDGIClearVolumes");

	UDDGIVolumeComponent_DDGIClearVolumes_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
