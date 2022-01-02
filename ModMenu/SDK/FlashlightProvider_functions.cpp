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
//		Name   -> Function FlashlightProvider.FlashlightProvider_C.GetFlashlightLocationAndDirection
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               HasFlashlight                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FVector                                     FlashlightLocation                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     FlashlightDirection                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFlashlightProvider_C::GetFlashlightLocationAndDirection(bool* HasFlashlight, struct FVector* FlashlightLocation, struct FVector* FlashlightDirection)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FlashlightProvider.FlashlightProvider_C.GetFlashlightLocationAndDirection");

	UFlashlightProvider_C_GetFlashlightLocationAndDirection_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HasFlashlight != nullptr)
		*HasFlashlight = params.HasFlashlight;
	if (FlashlightLocation != nullptr)
		*FlashlightLocation = params.FlashlightLocation;
	if (FlashlightDirection != nullptr)
		*FlashlightDirection = params.FlashlightDirection;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
