/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function RIG_PROP_DJMMHallway_Skeleton_ABP.RIG_PROP_DJMMHallway_Skeleton_ABP_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void URIG_PROP_DJMMHallway_Skeleton_ABP_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_PROP_DJMMHallway_Skeleton_ABP.RIG_PROP_DJMMHallway_Skeleton_ABP_C.AnimGraph");
		
		URIG_PROP_DJMMHallway_Skeleton_ABP_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function RIG_PROP_DJMMHallway_Skeleton_ABP.RIG_PROP_DJMMHallway_Skeleton_ABP_C.ExecuteUbergraph_RIG_PROP_DJMMHallway_Skeleton_ABP
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URIG_PROP_DJMMHallway_Skeleton_ABP_C::ExecuteUbergraph_RIG_PROP_DJMMHallway_Skeleton_ABP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_PROP_DJMMHallway_Skeleton_ABP.RIG_PROP_DJMMHallway_Skeleton_ABP_C.ExecuteUbergraph_RIG_PROP_DJMMHallway_Skeleton_ABP");
		
		URIG_PROP_DJMMHallway_Skeleton_ABP_C_ExecuteUbergraph_RIG_PROP_DJMMHallway_Skeleton_ABP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction URIG_PROP_DJMMHallway_Skeleton_ABP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URIG_PROP_DJMMHallway_Skeleton_ABP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass RIG_PROP_DJMMHallway_Skeleton_ABP.RIG_PROP_DJMMHallway_Skeleton_ABP_C");
		return ptr;
	}

}


