﻿/**
 * Name: FNAFSB
 * Version: 1
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VanessaAim_Abp_LINK.VanessaAim_Abp_LINK_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   InPose                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UVanessaAim_Abp_LINK_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VanessaAim_Abp_LINK.VanessaAim_Abp_LINK_C.AnimGraph");
		
		UVanessaAim_Abp_LINK_C_AnimGraph_Params params {};
		params.InPose = InPose;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VanessaAim_Abp_LINK.VanessaAim_Abp_LINK_C.EvaluateGraphExposedInputs_ExecuteUbergraph_VanessaAim_Abp_LINK_AnimGraphNode_RotationOffsetBlendSpace_0C4376F14ABA76C1E15160847A9377CF
	 * 		Flags  -> ()
	 */
	void UVanessaAim_Abp_LINK_C::EvaluateGraphExposedInputs_ExecuteUbergraph_VanessaAim_Abp_LINK_AnimGraphNode_RotationOffsetBlendSpace_0C4376F14ABA76C1E15160847A9377CF()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VanessaAim_Abp_LINK.VanessaAim_Abp_LINK_C.EvaluateGraphExposedInputs_ExecuteUbergraph_VanessaAim_Abp_LINK_AnimGraphNode_RotationOffsetBlendSpace_0C4376F14ABA76C1E15160847A9377CF");
		
		UVanessaAim_Abp_LINK_C_EvaluateGraphExposedInputs_ExecuteUbergraph_VanessaAim_Abp_LINK_AnimGraphNode_RotationOffsetBlendSpace_0C4376F14ABA76C1E15160847A9377CF_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VanessaAim_Abp_LINK.VanessaAim_Abp_LINK_C.BlueprintUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UVanessaAim_Abp_LINK_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VanessaAim_Abp_LINK.VanessaAim_Abp_LINK_C.BlueprintUpdateAnimation");
		
		UVanessaAim_Abp_LINK_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VanessaAim_Abp_LINK.VanessaAim_Abp_LINK_C.EvaluateGraphExposedInputs_ExecuteUbergraph_VanessaAim_Abp_LINK_AnimGraphNode_RotationOffsetBlendSpace_6B820C2A43EFDD79A6D22199F7C0187F
	 * 		Flags  -> ()
	 */
	void UVanessaAim_Abp_LINK_C::EvaluateGraphExposedInputs_ExecuteUbergraph_VanessaAim_Abp_LINK_AnimGraphNode_RotationOffsetBlendSpace_6B820C2A43EFDD79A6D22199F7C0187F()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VanessaAim_Abp_LINK.VanessaAim_Abp_LINK_C.EvaluateGraphExposedInputs_ExecuteUbergraph_VanessaAim_Abp_LINK_AnimGraphNode_RotationOffsetBlendSpace_6B820C2A43EFDD79A6D22199F7C0187F");
		
		UVanessaAim_Abp_LINK_C_EvaluateGraphExposedInputs_ExecuteUbergraph_VanessaAim_Abp_LINK_AnimGraphNode_RotationOffsetBlendSpace_6B820C2A43EFDD79A6D22199F7C0187F_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VanessaAim_Abp_LINK.VanessaAim_Abp_LINK_C.ExecuteUbergraph_VanessaAim_Abp_LINK
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UVanessaAim_Abp_LINK_C::ExecuteUbergraph_VanessaAim_Abp_LINK(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VanessaAim_Abp_LINK.VanessaAim_Abp_LINK_C.ExecuteUbergraph_VanessaAim_Abp_LINK");
		
		UVanessaAim_Abp_LINK_C_ExecuteUbergraph_VanessaAim_Abp_LINK_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVanessaAim_Abp_LINK_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVanessaAim_Abp_LINK_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass VanessaAim_Abp_LINK.VanessaAim_Abp_LINK_C");
		return ptr;
	}

}


