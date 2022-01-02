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
//		Name   -> Function WI_Gregory_Flashlight.WI_Gregory_Flashlight_C.Finished_D0CEEEA149A8A35D1658658D2797BF05
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWI_Gregory_Flashlight_C::Finished_D0CEEEA149A8A35D1658658D2797BF05()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_Gregory_Flashlight.WI_Gregory_Flashlight_C.Finished_D0CEEEA149A8A35D1658658D2797BF05");

	UWI_Gregory_Flashlight_C_Finished_D0CEEEA149A8A35D1658658D2797BF05_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function WI_Gregory_Flashlight.WI_Gregory_Flashlight_C.ShowDeadFlashlightWarning
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWI_Gregory_Flashlight_C::ShowDeadFlashlightWarning()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_Gregory_Flashlight.WI_Gregory_Flashlight_C.ShowDeadFlashlightWarning");

	UWI_Gregory_Flashlight_C_ShowDeadFlashlightWarning_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function WI_Gregory_Flashlight.WI_Gregory_Flashlight_C.PickedUpFlashlight
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWI_Gregory_Flashlight_C::PickedUpFlashlight()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_Gregory_Flashlight.WI_Gregory_Flashlight_C.PickedUpFlashlight");

	UWI_Gregory_Flashlight_C_PickedUpFlashlight_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function WI_Gregory_Flashlight.WI_Gregory_Flashlight_C.ShowPowerLevel
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWI_Gregory_Flashlight_C::ShowPowerLevel()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_Gregory_Flashlight.WI_Gregory_Flashlight_C.ShowPowerLevel");

	UWI_Gregory_Flashlight_C_ShowPowerLevel_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function WI_Gregory_Flashlight.WI_Gregory_Flashlight_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWI_Gregory_Flashlight_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_Gregory_Flashlight.WI_Gregory_Flashlight_C.Construct");

	UWI_Gregory_Flashlight_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function WI_Gregory_Flashlight.WI_Gregory_Flashlight_C.ExecuteUbergraph_WI_Gregory_Flashlight
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWI_Gregory_Flashlight_C::ExecuteUbergraph_WI_Gregory_Flashlight(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_Gregory_Flashlight.WI_Gregory_Flashlight_C.ExecuteUbergraph_WI_Gregory_Flashlight");

	UWI_Gregory_Flashlight_C_ExecuteUbergraph_WI_Gregory_Flashlight_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function WI_Gregory_Flashlight.WI_Gregory_Flashlight_C.PowerLevelDispatch__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                PowerLevel                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWI_Gregory_Flashlight_C::PowerLevelDispatch__DelegateSignature(int PowerLevel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_Gregory_Flashlight.WI_Gregory_Flashlight_C.PowerLevelDispatch__DelegateSignature");

	UWI_Gregory_Flashlight_C_PowerLevelDispatch__DelegateSignature_Params params {};
	params.PowerLevel = PowerLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
