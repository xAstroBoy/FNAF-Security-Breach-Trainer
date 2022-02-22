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
	 * 		Name   -> Function RIG_BallBlaster_ABP.RIG_BallBlaster_ABP_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   InPose                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void URIG_BallBlaster_ABP_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_BallBlaster_ABP.RIG_BallBlaster_ABP_C.AnimGraph");
		
		URIG_BallBlaster_ABP_C_AnimGraph_Params params {};
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
	 * 		Name   -> Function RIG_BallBlaster_ABP.RIG_BallBlaster_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_BallBlaster_ABP_AnimGraphNode_ModifyBone_9ADFD5044E6B48D4FAEBE692EED0D647
	 * 		Flags  -> (BlueprintEvent)
	 */
	void URIG_BallBlaster_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_BallBlaster_ABP_AnimGraphNode_ModifyBone_9ADFD5044E6B48D4FAEBE692EED0D647()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_BallBlaster_ABP.RIG_BallBlaster_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_BallBlaster_ABP_AnimGraphNode_ModifyBone_9ADFD5044E6B48D4FAEBE692EED0D647");
		
		URIG_BallBlaster_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_BallBlaster_ABP_AnimGraphNode_ModifyBone_9ADFD5044E6B48D4FAEBE692EED0D647_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RIG_BallBlaster_ABP.RIG_BallBlaster_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_BallBlaster_ABP_AnimGraphNode_ModifyBone_66DFD46844C5CAD2432A8CAA2334DB9F
	 * 		Flags  -> (BlueprintEvent)
	 */
	void URIG_BallBlaster_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_BallBlaster_ABP_AnimGraphNode_ModifyBone_66DFD46844C5CAD2432A8CAA2334DB9F()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_BallBlaster_ABP.RIG_BallBlaster_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_BallBlaster_ABP_AnimGraphNode_ModifyBone_66DFD46844C5CAD2432A8CAA2334DB9F");
		
		URIG_BallBlaster_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_BallBlaster_ABP_AnimGraphNode_ModifyBone_66DFD46844C5CAD2432A8CAA2334DB9F_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RIG_BallBlaster_ABP.RIG_BallBlaster_ABP_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URIG_BallBlaster_ABP_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_BallBlaster_ABP.RIG_BallBlaster_ABP_C.BlueprintUpdateAnimation");
		
		URIG_BallBlaster_ABP_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RIG_BallBlaster_ABP.RIG_BallBlaster_ABP_C.AnimNotify_ModelSwap
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void URIG_BallBlaster_ABP_C::AnimNotify_ModelSwap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_BallBlaster_ABP.RIG_BallBlaster_ABP_C.AnimNotify_ModelSwap");
		
		URIG_BallBlaster_ABP_C_AnimNotify_ModelSwap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RIG_BallBlaster_ABP.RIG_BallBlaster_ABP_C.ExecuteUbergraph_RIG_BallBlaster_ABP
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URIG_BallBlaster_ABP_C::ExecuteUbergraph_RIG_BallBlaster_ABP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_BallBlaster_ABP.RIG_BallBlaster_ABP_C.ExecuteUbergraph_RIG_BallBlaster_ABP");
		
		URIG_BallBlaster_ABP_C_ExecuteUbergraph_RIG_BallBlaster_ABP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction URIG_BallBlaster_ABP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URIG_BallBlaster_ABP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass RIG_BallBlaster_ABP.RIG_BallBlaster_ABP_C");
		return ptr;
	}

}


