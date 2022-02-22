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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function ChicaDynamicsAbp.ChicaDynamicsABP_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   InPose                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UChicaDynamicsABP_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChicaDynamicsAbp.ChicaDynamicsABP_C.AnimGraph");
		
		UChicaDynamicsABP_C_AnimGraph_Params params {};
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
	 * 		Name   -> Function ChicaDynamicsAbp.ChicaDynamicsABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ChicaDynamicsABP_AnimGraphNode_AnimDynamics_24ABA2374DD4480E3F207EAB5F2C0215
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UChicaDynamicsABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ChicaDynamicsABP_AnimGraphNode_AnimDynamics_24ABA2374DD4480E3F207EAB5F2C0215()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChicaDynamicsAbp.ChicaDynamicsABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ChicaDynamicsABP_AnimGraphNode_AnimDynamics_24ABA2374DD4480E3F207EAB5F2C0215");
		
		UChicaDynamicsABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ChicaDynamicsABP_AnimGraphNode_AnimDynamics_24ABA2374DD4480E3F207EAB5F2C0215_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function ChicaDynamicsAbp.ChicaDynamicsABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ChicaDynamicsABP_AnimGraphNode_RigidBody_D1A8DEF14E01AF9939F1ABA66697AA9D
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UChicaDynamicsABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ChicaDynamicsABP_AnimGraphNode_RigidBody_D1A8DEF14E01AF9939F1ABA66697AA9D()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChicaDynamicsAbp.ChicaDynamicsABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ChicaDynamicsABP_AnimGraphNode_RigidBody_D1A8DEF14E01AF9939F1ABA66697AA9D");
		
		UChicaDynamicsABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ChicaDynamicsABP_AnimGraphNode_RigidBody_D1A8DEF14E01AF9939F1ABA66697AA9D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function ChicaDynamicsAbp.ChicaDynamicsABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ChicaDynamicsABP_AnimGraphNode_AnimDynamics_8DE6188741D2F3247D3D34B8F1DD3F01
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UChicaDynamicsABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ChicaDynamicsABP_AnimGraphNode_AnimDynamics_8DE6188741D2F3247D3D34B8F1DD3F01()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChicaDynamicsAbp.ChicaDynamicsABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ChicaDynamicsABP_AnimGraphNode_AnimDynamics_8DE6188741D2F3247D3D34B8F1DD3F01");
		
		UChicaDynamicsABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ChicaDynamicsABP_AnimGraphNode_AnimDynamics_8DE6188741D2F3247D3D34B8F1DD3F01_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function ChicaDynamicsAbp.ChicaDynamicsABP_C.ExecuteUbergraph_ChicaDynamicsABP
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChicaDynamicsABP_C::ExecuteUbergraph_ChicaDynamicsABP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChicaDynamicsAbp.ChicaDynamicsABP_C.ExecuteUbergraph_ChicaDynamicsABP");
		
		UChicaDynamicsABP_C_ExecuteUbergraph_ChicaDynamicsABP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UChicaDynamicsABP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChicaDynamicsABP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ChicaDynamicsAbp.ChicaDynamicsABP_C");
		return ptr;
	}

}


