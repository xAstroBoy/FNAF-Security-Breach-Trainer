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
//		Name   -> Function Staffbot_PartyPass_LINK.Staffbot_PartyPass_LINK_C.AnimGraph
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
void UStaffbot_PartyPass_LINK_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Staffbot_PartyPass_LINK.Staffbot_PartyPass_LINK_C.AnimGraph");

	UStaffbot_PartyPass_LINK_C_AnimGraph_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Staffbot_PartyPass_LINK.Staffbot_PartyPass_LINK_C.AnimNotify_Select Anim
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UStaffbot_PartyPass_LINK_C::AnimNotify_Select_Anim()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Staffbot_PartyPass_LINK.Staffbot_PartyPass_LINK_C.AnimNotify_Select Anim");

	UStaffbot_PartyPass_LINK_C_AnimNotify_Select_Anim_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Staffbot_PartyPass_LINK.Staffbot_PartyPass_LINK_C.AnimNotify_DanceDone
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UStaffbot_PartyPass_LINK_C::AnimNotify_DanceDone()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Staffbot_PartyPass_LINK.Staffbot_PartyPass_LINK_C.AnimNotify_DanceDone");

	UStaffbot_PartyPass_LINK_C_AnimNotify_DanceDone_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Staffbot_PartyPass_LINK.Staffbot_PartyPass_LINK_C.ExecuteUbergraph_Staffbot_PartyPass_LINK
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStaffbot_PartyPass_LINK_C::ExecuteUbergraph_Staffbot_PartyPass_LINK(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Staffbot_PartyPass_LINK.Staffbot_PartyPass_LINK_C.ExecuteUbergraph_Staffbot_PartyPass_LINK");

	UStaffbot_PartyPass_LINK_C_ExecuteUbergraph_Staffbot_PartyPass_LINK_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
