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
//		Name   -> Function FlashlightRechargeUI.FlashlightRechargeUI_C.Update Percentage
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Percentage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFlashlightRechargeUI_C::Update_Percentage(float Percentage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FlashlightRechargeUI.FlashlightRechargeUI_C.Update Percentage");

	UFlashlightRechargeUI_C_Update_Percentage_Params params {};
	params.Percentage = Percentage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function FlashlightRechargeUI.FlashlightRechargeUI_C.Reset
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UFlashlightRechargeUI_C::Reset()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FlashlightRechargeUI.FlashlightRechargeUI_C.Reset");

	UFlashlightRechargeUI_C_Reset_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function FlashlightRechargeUI.FlashlightRechargeUI_C.ExecuteUbergraph_FlashlightRechargeUI
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFlashlightRechargeUI_C::ExecuteUbergraph_FlashlightRechargeUI(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FlashlightRechargeUI.FlashlightRechargeUI_C.ExecuteUbergraph_FlashlightRechargeUI");

	UFlashlightRechargeUI_C_ExecuteUbergraph_FlashlightRechargeUI_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
