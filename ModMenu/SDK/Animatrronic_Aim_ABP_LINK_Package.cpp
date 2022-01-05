/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "Animatrronic_Aim_ABP_LINK_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Animatrronic_Aim_ABP_LINK.Animatrronic_Aim_ABP_LINK_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   InPose                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UAnimatrronic_Aim_ABP_LINK_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatrronic_Aim_ABP_LINK.Animatrronic_Aim_ABP_LINK_C.AnimGraph");
		
		UAnimatrronic_Aim_ABP_LINK_C_AnimGraph_Params params {};
		params.InPose = InPose;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Animatrronic_Aim_ABP_LINK.Animatrronic_Aim_ABP_LINK_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Animatrronic_Aim_ABP_LINK_AnimGraphNode_ApplyAdditive_2834E0AC418F667477954EB5BD39E046
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UAnimatrronic_Aim_ABP_LINK_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Animatrronic_Aim_ABP_LINK_AnimGraphNode_ApplyAdditive_2834E0AC418F667477954EB5BD39E046()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatrronic_Aim_ABP_LINK.Animatrronic_Aim_ABP_LINK_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Animatrronic_Aim_ABP_LINK_AnimGraphNode_ApplyAdditive_2834E0AC418F667477954EB5BD39E046");
		
		UAnimatrronic_Aim_ABP_LINK_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Animatrronic_Aim_ABP_LINK_AnimGraphNode_ApplyAdditive_2834E0AC418F667477954EB5BD39E046_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Animatrronic_Aim_ABP_LINK.Animatrronic_Aim_ABP_LINK_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Animatrronic_Aim_ABP_LINK_AnimGraphNode_RotationOffsetBlendSpace_2006674F4053D037FA770789483272ED
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UAnimatrronic_Aim_ABP_LINK_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Animatrronic_Aim_ABP_LINK_AnimGraphNode_RotationOffsetBlendSpace_2006674F4053D037FA770789483272ED()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatrronic_Aim_ABP_LINK.Animatrronic_Aim_ABP_LINK_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Animatrronic_Aim_ABP_LINK_AnimGraphNode_RotationOffsetBlendSpace_2006674F4053D037FA770789483272ED");
		
		UAnimatrronic_Aim_ABP_LINK_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Animatrronic_Aim_ABP_LINK_AnimGraphNode_RotationOffsetBlendSpace_2006674F4053D037FA770789483272ED_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Animatrronic_Aim_ABP_LINK.Animatrronic_Aim_ABP_LINK_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Animatrronic_Aim_ABP_LINK_AnimGraphNode_RotationOffsetBlendSpace_44E21F9F4F87B07FD730F495C7BC12D4
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UAnimatrronic_Aim_ABP_LINK_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Animatrronic_Aim_ABP_LINK_AnimGraphNode_RotationOffsetBlendSpace_44E21F9F4F87B07FD730F495C7BC12D4()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatrronic_Aim_ABP_LINK.Animatrronic_Aim_ABP_LINK_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Animatrronic_Aim_ABP_LINK_AnimGraphNode_RotationOffsetBlendSpace_44E21F9F4F87B07FD730F495C7BC12D4");
		
		UAnimatrronic_Aim_ABP_LINK_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Animatrronic_Aim_ABP_LINK_AnimGraphNode_RotationOffsetBlendSpace_44E21F9F4F87B07FD730F495C7BC12D4_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Animatrronic_Aim_ABP_LINK.Animatrronic_Aim_ABP_LINK_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimatrronic_Aim_ABP_LINK_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatrronic_Aim_ABP_LINK.Animatrronic_Aim_ABP_LINK_C.BlueprintUpdateAnimation");
		
		UAnimatrronic_Aim_ABP_LINK_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Animatrronic_Aim_ABP_LINK.Animatrronic_Aim_ABP_LINK_C.BlueprintBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UAnimatrronic_Aim_ABP_LINK_C::BlueprintBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatrronic_Aim_ABP_LINK.Animatrronic_Aim_ABP_LINK_C.BlueprintBeginPlay");
		
		UAnimatrronic_Aim_ABP_LINK_C_BlueprintBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Animatrronic_Aim_ABP_LINK.Animatrronic_Aim_ABP_LINK_C.ExecuteUbergraph_Animatrronic_Aim_ABP_LINK
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimatrronic_Aim_ABP_LINK_C::ExecuteUbergraph_Animatrronic_Aim_ABP_LINK(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatrronic_Aim_ABP_LINK.Animatrronic_Aim_ABP_LINK_C.ExecuteUbergraph_Animatrronic_Aim_ABP_LINK");
		
		UAnimatrronic_Aim_ABP_LINK_C_ExecuteUbergraph_Animatrronic_Aim_ABP_LINK_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UAnimatrronic_Aim_ABP_LINK_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimatrronic_Aim_ABP_LINK_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Animatrronic_Aim_ABP_LINK.Animatrronic_Aim_ABP_LINK_C");
		return ptr;
	}

}


