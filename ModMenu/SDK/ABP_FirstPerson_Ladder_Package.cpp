/**
 * Name: FNAFSB
 * Version: 1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_FirstPerson_Ladder.ABP_FirstPerson_Ladder_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UABP_FirstPerson_Ladder_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_FirstPerson_Ladder.ABP_FirstPerson_Ladder_C.AnimGraph");
		
		UABP_FirstPerson_Ladder_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_FirstPerson_Ladder.ABP_FirstPerson_Ladder_C.BlueprintUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_FirstPerson_Ladder_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_FirstPerson_Ladder.ABP_FirstPerson_Ladder_C.BlueprintUpdateAnimation");
		
		UABP_FirstPerson_Ladder_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_FirstPerson_Ladder.ABP_FirstPerson_Ladder_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FirstPerson_Ladder_AnimGraphNode_TwoWayBlend_BEEE825445CA10145239EC9146E49076
	 * 		Flags  -> ()
	 */
	void UABP_FirstPerson_Ladder_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FirstPerson_Ladder_AnimGraphNode_TwoWayBlend_BEEE825445CA10145239EC9146E49076()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_FirstPerson_Ladder.ABP_FirstPerson_Ladder_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FirstPerson_Ladder_AnimGraphNode_TwoWayBlend_BEEE825445CA10145239EC9146E49076");
		
		UABP_FirstPerson_Ladder_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FirstPerson_Ladder_AnimGraphNode_TwoWayBlend_BEEE825445CA10145239EC9146E49076_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_FirstPerson_Ladder.ABP_FirstPerson_Ladder_C.ExecuteUbergraph_ABP_FirstPerson_Ladder
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_FirstPerson_Ladder_C::ExecuteUbergraph_ABP_FirstPerson_Ladder(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_FirstPerson_Ladder.ABP_FirstPerson_Ladder_C.ExecuteUbergraph_ABP_FirstPerson_Ladder");
		
		UABP_FirstPerson_Ladder_C_ExecuteUbergraph_ABP_FirstPerson_Ladder_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UABP_FirstPerson_Ladder_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UABP_FirstPerson_Ladder_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_FirstPerson_Ladder.ABP_FirstPerson_Ladder_C");
		return ptr;
	}

}


