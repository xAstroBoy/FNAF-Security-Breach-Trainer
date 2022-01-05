/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "EarDynamicsABP_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function EarDynamicsABP.EarDynamicsABP_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   InPose                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UEarDynamicsABP_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EarDynamicsABP.EarDynamicsABP_C.AnimGraph");
		
		UEarDynamicsABP_C_AnimGraph_Params params {};
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
	 * 		Name   -> Function EarDynamicsABP.EarDynamicsABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_EarDynamicsABP_AnimGraphNode_AnimDynamics_84B96FA94215BB4D477D6C9C9E798AD5
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UEarDynamicsABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_EarDynamicsABP_AnimGraphNode_AnimDynamics_84B96FA94215BB4D477D6C9C9E798AD5()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EarDynamicsABP.EarDynamicsABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_EarDynamicsABP_AnimGraphNode_AnimDynamics_84B96FA94215BB4D477D6C9C9E798AD5");
		
		UEarDynamicsABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_EarDynamicsABP_AnimGraphNode_AnimDynamics_84B96FA94215BB4D477D6C9C9E798AD5_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function EarDynamicsABP.EarDynamicsABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_EarDynamicsABP_AnimGraphNode_AnimDynamics_270F7B28448A8D07EE69D4B063D63517
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UEarDynamicsABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_EarDynamicsABP_AnimGraphNode_AnimDynamics_270F7B28448A8D07EE69D4B063D63517()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EarDynamicsABP.EarDynamicsABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_EarDynamicsABP_AnimGraphNode_AnimDynamics_270F7B28448A8D07EE69D4B063D63517");
		
		UEarDynamicsABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_EarDynamicsABP_AnimGraphNode_AnimDynamics_270F7B28448A8D07EE69D4B063D63517_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function EarDynamicsABP.EarDynamicsABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_EarDynamicsABP_AnimGraphNode_LookAt_A05302BF4806E57BF3FAE784A1498827
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UEarDynamicsABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_EarDynamicsABP_AnimGraphNode_LookAt_A05302BF4806E57BF3FAE784A1498827()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EarDynamicsABP.EarDynamicsABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_EarDynamicsABP_AnimGraphNode_LookAt_A05302BF4806E57BF3FAE784A1498827");
		
		UEarDynamicsABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_EarDynamicsABP_AnimGraphNode_LookAt_A05302BF4806E57BF3FAE784A1498827_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function EarDynamicsABP.EarDynamicsABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_EarDynamicsABP_AnimGraphNode_LookAt_31DEA7D14B7CD131BA633FBB5EBB05EC
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UEarDynamicsABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_EarDynamicsABP_AnimGraphNode_LookAt_31DEA7D14B7CD131BA633FBB5EBB05EC()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EarDynamicsABP.EarDynamicsABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_EarDynamicsABP_AnimGraphNode_LookAt_31DEA7D14B7CD131BA633FBB5EBB05EC");
		
		UEarDynamicsABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_EarDynamicsABP_AnimGraphNode_LookAt_31DEA7D14B7CD131BA633FBB5EBB05EC_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function EarDynamicsABP.EarDynamicsABP_C.ExecuteUbergraph_EarDynamicsABP
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEarDynamicsABP_C::ExecuteUbergraph_EarDynamicsABP(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EarDynamicsABP.EarDynamicsABP_C.ExecuteUbergraph_EarDynamicsABP");
		
		UEarDynamicsABP_C_ExecuteUbergraph_EarDynamicsABP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UEarDynamicsABP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEarDynamicsABP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass EarDynamicsABP.EarDynamicsABP_C");
		return ptr;
	}

}


