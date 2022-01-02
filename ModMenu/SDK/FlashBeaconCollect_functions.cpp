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
//		Name   -> Function FlashBeaconCollect.FlashBeaconCollect_C.OnCollect
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AFlashBeaconCollect_C::OnCollect()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FlashBeaconCollect.FlashBeaconCollect_C.OnCollect");

	AFlashBeaconCollect_C_OnCollect_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function FlashBeaconCollect.FlashBeaconCollect_C.OnBeginCollect
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AFlashBeaconCollect_C::OnBeginCollect()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FlashBeaconCollect.FlashBeaconCollect_C.OnBeginCollect");

	AFlashBeaconCollect_C_OnBeginCollect_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function FlashBeaconCollect.FlashBeaconCollect_C.ExecuteUbergraph_FlashBeaconCollect
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFlashBeaconCollect_C::ExecuteUbergraph_FlashBeaconCollect(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FlashBeaconCollect.FlashBeaconCollect_C.ExecuteUbergraph_FlashBeaconCollect");

	AFlashBeaconCollect_C_ExecuteUbergraph_FlashBeaconCollect_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
