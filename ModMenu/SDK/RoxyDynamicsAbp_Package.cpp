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
	 * 		Name   -> Function RoxyDynamicsAbp.RoxyDynamicsABP_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   InPose                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void URoxyDynamicsABP_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RoxyDynamicsAbp.RoxyDynamicsABP_C.AnimGraph");
		
		URoxyDynamicsABP_C_AnimGraph_Params params {};
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
	 * 		Name   -> Function RoxyDynamicsAbp.RoxyDynamicsABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RoxyDynamicsABP_AnimGraphNode_AnimDynamics_46F86D8240F8ACA574A93F988992C3B7
	 * 		Flags  -> (BlueprintEvent)
	 */
	void URoxyDynamicsABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_RoxyDynamicsABP_AnimGraphNode_AnimDynamics_46F86D8240F8ACA574A93F988992C3B7()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RoxyDynamicsAbp.RoxyDynamicsABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RoxyDynamicsABP_AnimGraphNode_AnimDynamics_46F86D8240F8ACA574A93F988992C3B7");
		
		URoxyDynamicsABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_RoxyDynamicsABP_AnimGraphNode_AnimDynamics_46F86D8240F8ACA574A93F988992C3B7_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RoxyDynamicsAbp.RoxyDynamicsABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RoxyDynamicsABP_AnimGraphNode_LayeredBoneBlend_91E243E7438F47A4B8A901A4C6D5E07B
	 * 		Flags  -> (BlueprintEvent)
	 */
	void URoxyDynamicsABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_RoxyDynamicsABP_AnimGraphNode_LayeredBoneBlend_91E243E7438F47A4B8A901A4C6D5E07B()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RoxyDynamicsAbp.RoxyDynamicsABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RoxyDynamicsABP_AnimGraphNode_LayeredBoneBlend_91E243E7438F47A4B8A901A4C6D5E07B");
		
		URoxyDynamicsABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_RoxyDynamicsABP_AnimGraphNode_LayeredBoneBlend_91E243E7438F47A4B8A901A4C6D5E07B_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RoxyDynamicsAbp.RoxyDynamicsABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RoxyDynamicsABP_AnimGraphNode_AnimDynamics_83B2BB6D45375CA4D8665DA7ACD3036D
	 * 		Flags  -> (BlueprintEvent)
	 */
	void URoxyDynamicsABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_RoxyDynamicsABP_AnimGraphNode_AnimDynamics_83B2BB6D45375CA4D8665DA7ACD3036D()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RoxyDynamicsAbp.RoxyDynamicsABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RoxyDynamicsABP_AnimGraphNode_AnimDynamics_83B2BB6D45375CA4D8665DA7ACD3036D");
		
		URoxyDynamicsABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_RoxyDynamicsABP_AnimGraphNode_AnimDynamics_83B2BB6D45375CA4D8665DA7ACD3036D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RoxyDynamicsAbp.RoxyDynamicsABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RoxyDynamicsABP_AnimGraphNode_ApplyAdditive_515794A74F0D78795A2788BF98F384B5
	 * 		Flags  -> (BlueprintEvent)
	 */
	void URoxyDynamicsABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_RoxyDynamicsABP_AnimGraphNode_ApplyAdditive_515794A74F0D78795A2788BF98F384B5()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RoxyDynamicsAbp.RoxyDynamicsABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RoxyDynamicsABP_AnimGraphNode_ApplyAdditive_515794A74F0D78795A2788BF98F384B5");
		
		URoxyDynamicsABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_RoxyDynamicsABP_AnimGraphNode_ApplyAdditive_515794A74F0D78795A2788BF98F384B5_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RoxyDynamicsAbp.RoxyDynamicsABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RoxyDynamicsABP_AnimGraphNode_LayeredBoneBlend_17C9FB8B473A79F3D6FC9DBDCCF37489
	 * 		Flags  -> (BlueprintEvent)
	 */
	void URoxyDynamicsABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_RoxyDynamicsABP_AnimGraphNode_LayeredBoneBlend_17C9FB8B473A79F3D6FC9DBDCCF37489()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RoxyDynamicsAbp.RoxyDynamicsABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RoxyDynamicsABP_AnimGraphNode_LayeredBoneBlend_17C9FB8B473A79F3D6FC9DBDCCF37489");
		
		URoxyDynamicsABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_RoxyDynamicsABP_AnimGraphNode_LayeredBoneBlend_17C9FB8B473A79F3D6FC9DBDCCF37489_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RoxyDynamicsAbp.RoxyDynamicsABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RoxyDynamicsABP_AnimGraphNode_AnimDynamics_5F50E9F74DAED1131D3ADBBBD611D3CE
	 * 		Flags  -> (BlueprintEvent)
	 */
	void URoxyDynamicsABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_RoxyDynamicsABP_AnimGraphNode_AnimDynamics_5F50E9F74DAED1131D3ADBBBD611D3CE()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RoxyDynamicsAbp.RoxyDynamicsABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RoxyDynamicsABP_AnimGraphNode_AnimDynamics_5F50E9F74DAED1131D3ADBBBD611D3CE");
		
		URoxyDynamicsABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_RoxyDynamicsABP_AnimGraphNode_AnimDynamics_5F50E9F74DAED1131D3ADBBBD611D3CE_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RoxyDynamicsAbp.RoxyDynamicsABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RoxyDynamicsABP_AnimGraphNode_Constraint_AE7B32954333B383741E3FB4E2AED097
	 * 		Flags  -> (BlueprintEvent)
	 */
	void URoxyDynamicsABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_RoxyDynamicsABP_AnimGraphNode_Constraint_AE7B32954333B383741E3FB4E2AED097()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RoxyDynamicsAbp.RoxyDynamicsABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RoxyDynamicsABP_AnimGraphNode_Constraint_AE7B32954333B383741E3FB4E2AED097");
		
		URoxyDynamicsABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_RoxyDynamicsABP_AnimGraphNode_Constraint_AE7B32954333B383741E3FB4E2AED097_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RoxyDynamicsAbp.RoxyDynamicsABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RoxyDynamicsABP_AnimGraphNode_AnimDynamics_8FD4335A4E3C45DD49C4E18C21742C22
	 * 		Flags  -> (BlueprintEvent)
	 */
	void URoxyDynamicsABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_RoxyDynamicsABP_AnimGraphNode_AnimDynamics_8FD4335A4E3C45DD49C4E18C21742C22()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RoxyDynamicsAbp.RoxyDynamicsABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RoxyDynamicsABP_AnimGraphNode_AnimDynamics_8FD4335A4E3C45DD49C4E18C21742C22");
		
		URoxyDynamicsABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_RoxyDynamicsABP_AnimGraphNode_AnimDynamics_8FD4335A4E3C45DD49C4E18C21742C22_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RoxyDynamicsAbp.RoxyDynamicsABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RoxyDynamicsABP_AnimGraphNode_AnimDynamics_CCE1177F431B26BEAAA6E6AA7E162207
	 * 		Flags  -> (BlueprintEvent)
	 */
	void URoxyDynamicsABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_RoxyDynamicsABP_AnimGraphNode_AnimDynamics_CCE1177F431B26BEAAA6E6AA7E162207()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RoxyDynamicsAbp.RoxyDynamicsABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RoxyDynamicsABP_AnimGraphNode_AnimDynamics_CCE1177F431B26BEAAA6E6AA7E162207");
		
		URoxyDynamicsABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_RoxyDynamicsABP_AnimGraphNode_AnimDynamics_CCE1177F431B26BEAAA6E6AA7E162207_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RoxyDynamicsAbp.RoxyDynamicsABP_C.ExecuteUbergraph_RoxyDynamicsABP
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URoxyDynamicsABP_C::ExecuteUbergraph_RoxyDynamicsABP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RoxyDynamicsAbp.RoxyDynamicsABP_C.ExecuteUbergraph_RoxyDynamicsABP");
		
		URoxyDynamicsABP_C_ExecuteUbergraph_RoxyDynamicsABP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction URoxyDynamicsABP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URoxyDynamicsABP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass RoxyDynamicsAbp.RoxyDynamicsABP_C");
		return ptr;
	}

}


