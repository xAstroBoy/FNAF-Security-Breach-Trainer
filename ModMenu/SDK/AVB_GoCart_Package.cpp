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
	 * 		Name   -> Function AVB_GoCart.AVB_GoCart_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   InPose                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UAVB_GoCart_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AVB_GoCart.AVB_GoCart_C.AnimGraph");
		
		UAVB_GoCart_C_AnimGraph_Params params {};
		params.InPose = InPose;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function AVB_GoCart.AVB_GoCart_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AVB_GoCart_AnimGraphNode_ModifyBone_7C9FF6714F9BBF14154763B96D29759D
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UAVB_GoCart_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AVB_GoCart_AnimGraphNode_ModifyBone_7C9FF6714F9BBF14154763B96D29759D()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AVB_GoCart.AVB_GoCart_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AVB_GoCart_AnimGraphNode_ModifyBone_7C9FF6714F9BBF14154763B96D29759D");
		
		UAVB_GoCart_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AVB_GoCart_AnimGraphNode_ModifyBone_7C9FF6714F9BBF14154763B96D29759D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function AVB_GoCart.AVB_GoCart_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AVB_GoCart_AnimGraphNode_ModifyBone_4A2B64FA4A21788011957FB8CBA6D8F9
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UAVB_GoCart_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AVB_GoCart_AnimGraphNode_ModifyBone_4A2B64FA4A21788011957FB8CBA6D8F9()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AVB_GoCart.AVB_GoCart_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AVB_GoCart_AnimGraphNode_ModifyBone_4A2B64FA4A21788011957FB8CBA6D8F9");
		
		UAVB_GoCart_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AVB_GoCart_AnimGraphNode_ModifyBone_4A2B64FA4A21788011957FB8CBA6D8F9_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function AVB_GoCart.AVB_GoCart_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AVB_GoCart_AnimGraphNode_ModifyBone_AA8A20DA426FE42437EAEC96C303478B
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UAVB_GoCart_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AVB_GoCart_AnimGraphNode_ModifyBone_AA8A20DA426FE42437EAEC96C303478B()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AVB_GoCart.AVB_GoCart_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AVB_GoCart_AnimGraphNode_ModifyBone_AA8A20DA426FE42437EAEC96C303478B");
		
		UAVB_GoCart_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AVB_GoCart_AnimGraphNode_ModifyBone_AA8A20DA426FE42437EAEC96C303478B_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function AVB_GoCart.AVB_GoCart_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AVB_GoCart_AnimGraphNode_ModifyBone_E784316543D17854009593A51F7141AE
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UAVB_GoCart_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AVB_GoCart_AnimGraphNode_ModifyBone_E784316543D17854009593A51F7141AE()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AVB_GoCart.AVB_GoCart_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AVB_GoCart_AnimGraphNode_ModifyBone_E784316543D17854009593A51F7141AE");
		
		UAVB_GoCart_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AVB_GoCart_AnimGraphNode_ModifyBone_E784316543D17854009593A51F7141AE_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function AVB_GoCart.AVB_GoCart_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAVB_GoCart_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AVB_GoCart.AVB_GoCart_C.BlueprintUpdateAnimation");
		
		UAVB_GoCart_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function AVB_GoCart.AVB_GoCart_C.ExecuteUbergraph_AVB_GoCart
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAVB_GoCart_C::ExecuteUbergraph_AVB_GoCart(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AVB_GoCart.AVB_GoCart_C.ExecuteUbergraph_AVB_GoCart");
		
		UAVB_GoCart_C_ExecuteUbergraph_AVB_GoCart_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UAVB_GoCart_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAVB_GoCart_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass AVB_GoCart.AVB_GoCart_C");
		return ptr;
	}

}


