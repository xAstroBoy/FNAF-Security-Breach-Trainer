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
//		Name   -> Function SecurityOfficePowerUI.SecurityOfficePowerUI_C.Update Percentage
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              InPercent                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USecurityOfficePowerUI_C::Update_Percentage(float InPercent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SecurityOfficePowerUI.SecurityOfficePowerUI_C.Update Percentage");

	USecurityOfficePowerUI_C_Update_Percentage_Params params {};
	params.InPercent = InPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function SecurityOfficePowerUI.SecurityOfficePowerUI_C.Update Time
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              TimeRemaining                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USecurityOfficePowerUI_C::Update_Time(float TimeRemaining)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SecurityOfficePowerUI.SecurityOfficePowerUI_C.Update Time");

	USecurityOfficePowerUI_C_Update_Time_Params params {};
	params.TimeRemaining = TimeRemaining;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function SecurityOfficePowerUI.SecurityOfficePowerUI_C.ExecuteUbergraph_SecurityOfficePowerUI
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USecurityOfficePowerUI_C::ExecuteUbergraph_SecurityOfficePowerUI(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SecurityOfficePowerUI.SecurityOfficePowerUI_C.ExecuteUbergraph_SecurityOfficePowerUI");

	USecurityOfficePowerUI_C_ExecuteUbergraph_SecurityOfficePowerUI_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
