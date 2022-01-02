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
//		Name   -> Function StaffbotKitchen_NextStep.StaffbotKitchen_NextStep_C.UpdateInstructionsText
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Next_Step                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
void UStaffbotKitchen_NextStep_C::UpdateInstructionsText(const struct FText& Next_Step)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StaffbotKitchen_NextStep.StaffbotKitchen_NextStep_C.UpdateInstructionsText");

	UStaffbotKitchen_NextStep_C_UpdateInstructionsText_Params params {};
	params.Next_Step = Next_Step;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function StaffbotKitchen_NextStep.StaffbotKitchen_NextStep_C.ExecuteUbergraph_StaffbotKitchen_NextStep
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStaffbotKitchen_NextStep_C::ExecuteUbergraph_StaffbotKitchen_NextStep(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StaffbotKitchen_NextStep.StaffbotKitchen_NextStep_C.ExecuteUbergraph_StaffbotKitchen_NextStep");

	UStaffbotKitchen_NextStep_C_ExecuteUbergraph_StaffbotKitchen_NextStep_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
