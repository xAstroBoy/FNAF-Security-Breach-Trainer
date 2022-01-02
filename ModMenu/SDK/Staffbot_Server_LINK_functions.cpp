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
//		Name   -> Function Staffbot_Server_LINK.Staffbot_Server_LINK_C.AnimGraph
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPoseLink                                   InPose                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
//		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
void UStaffbot_Server_LINK_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Staffbot_Server_LINK.Staffbot_Server_LINK_C.AnimGraph");

	UStaffbot_Server_LINK_C_AnimGraph_Params params {};
	params.InPose = InPose;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Staffbot_Server_LINK.Staffbot_Server_LINK_C.ExecuteUbergraph_Staffbot_Server_LINK
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStaffbot_Server_LINK_C::ExecuteUbergraph_Staffbot_Server_LINK(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Staffbot_Server_LINK.Staffbot_Server_LINK_C.ExecuteUbergraph_Staffbot_Server_LINK");

	UStaffbot_Server_LINK_C_ExecuteUbergraph_Staffbot_Server_LINK_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
