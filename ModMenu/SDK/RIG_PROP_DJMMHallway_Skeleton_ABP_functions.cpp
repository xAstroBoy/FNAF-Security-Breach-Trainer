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
//		Name   -> Function RIG_PROP_DJMMHallway_Skeleton_ABP.RIG_PROP_DJMMHallway_Skeleton_ABP_C.AnimGraph
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
void URIG_PROP_DJMMHallway_Skeleton_ABP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RIG_PROP_DJMMHallway_Skeleton_ABP.RIG_PROP_DJMMHallway_Skeleton_ABP_C.AnimGraph");

	URIG_PROP_DJMMHallway_Skeleton_ABP_C_AnimGraph_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function RIG_PROP_DJMMHallway_Skeleton_ABP.RIG_PROP_DJMMHallway_Skeleton_ABP_C.ExecuteUbergraph_RIG_PROP_DJMMHallway_Skeleton_ABP
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URIG_PROP_DJMMHallway_Skeleton_ABP_C::ExecuteUbergraph_RIG_PROP_DJMMHallway_Skeleton_ABP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RIG_PROP_DJMMHallway_Skeleton_ABP.RIG_PROP_DJMMHallway_Skeleton_ABP_C.ExecuteUbergraph_RIG_PROP_DJMMHallway_Skeleton_ABP");

	URIG_PROP_DJMMHallway_Skeleton_ABP_C_ExecuteUbergraph_RIG_PROP_DJMMHallway_Skeleton_ABP_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
