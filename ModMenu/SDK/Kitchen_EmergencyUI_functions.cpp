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
//		Name   -> Function Kitchen_EmergencyUI.Kitchen_EmergencyUI_C.Finished_55E1AB854ACBCB1BF91A97A02522234D
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UKitchen_EmergencyUI_C::Finished_55E1AB854ACBCB1BF91A97A02522234D()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Kitchen_EmergencyUI.Kitchen_EmergencyUI_C.Finished_55E1AB854ACBCB1BF91A97A02522234D");

	UKitchen_EmergencyUI_C_Finished_55E1AB854ACBCB1BF91A97A02522234D_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Kitchen_EmergencyUI.Kitchen_EmergencyUI_C.ShowEmergencyText
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UKitchen_EmergencyUI_C::ShowEmergencyText()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Kitchen_EmergencyUI.Kitchen_EmergencyUI_C.ShowEmergencyText");

	UKitchen_EmergencyUI_C_ShowEmergencyText_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Kitchen_EmergencyUI.Kitchen_EmergencyUI_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UKitchen_EmergencyUI_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Kitchen_EmergencyUI.Kitchen_EmergencyUI_C.Construct");

	UKitchen_EmergencyUI_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Kitchen_EmergencyUI.Kitchen_EmergencyUI_C.ExecuteUbergraph_Kitchen_EmergencyUI
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UKitchen_EmergencyUI_C::ExecuteUbergraph_Kitchen_EmergencyUI(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Kitchen_EmergencyUI.Kitchen_EmergencyUI_C.ExecuteUbergraph_Kitchen_EmergencyUI");

	UKitchen_EmergencyUI_C_ExecuteUbergraph_Kitchen_EmergencyUI_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
