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
//		Name   -> Function MissionInfoElementHUD.MissionInfoElementHUD_C.Setup
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       MissionName                                                (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FText                                       MissionDescription                                         (BlueprintVisible, BlueprintReadOnly, Parm)
//		bool                                               ContainsIcon                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FText                                       LeftText                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FName                                       KeyName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       RightText                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
void UMissionInfoElementHUD_C::Setup(const struct FText& MissionName, const struct FText& MissionDescription, bool ContainsIcon, const struct FText& LeftText, const struct FName& KeyName, const struct FText& RightText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MissionInfoElementHUD.MissionInfoElementHUD_C.Setup");

	UMissionInfoElementHUD_C_Setup_Params params {};
	params.MissionName = MissionName;
	params.MissionDescription = MissionDescription;
	params.ContainsIcon = ContainsIcon;
	params.LeftText = LeftText;
	params.KeyName = KeyName;
	params.RightText = RightText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MissionInfoElementHUD.MissionInfoElementHUD_C.ExecuteUbergraph_MissionInfoElementHUD
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMissionInfoElementHUD_C::ExecuteUbergraph_MissionInfoElementHUD(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MissionInfoElementHUD.MissionInfoElementHUD_C.ExecuteUbergraph_MissionInfoElementHUD");

	UMissionInfoElementHUD_C_ExecuteUbergraph_MissionInfoElementHUD_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
