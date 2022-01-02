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
//		Name   -> Function UI_MissionItem.UI_MissionItem_C.Update
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
//		bool                                               Complete                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               HideTask                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_MissionItem_C::Update(const struct FText& InText, bool Complete, bool HideTask)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_MissionItem.UI_MissionItem_C.Update");

	UUI_MissionItem_C_Update_Params params {};
	params.InText = InText;
	params.Complete = Complete;
	params.HideTask = HideTask;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function UI_MissionItem.UI_MissionItem_C.ExecuteUbergraph_UI_MissionItem
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_MissionItem_C::ExecuteUbergraph_UI_MissionItem(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_MissionItem.UI_MissionItem_C.ExecuteUbergraph_UI_MissionItem");

	UUI_MissionItem_C_ExecuteUbergraph_UI_MissionItem_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
