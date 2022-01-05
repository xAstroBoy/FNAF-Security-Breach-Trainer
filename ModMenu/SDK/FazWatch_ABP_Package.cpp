/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "FazWatch_ABP_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FazWatch_ABP.FazWatch_ABP_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UFazWatch_ABP_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FazWatch_ABP.FazWatch_ABP_C.AnimGraph");
		
		UFazWatch_ABP_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FazWatch_ABP.FazWatch_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FazWatch_ABP_AnimGraphNode_SequencePlayer_AFA778E8410A0C1F14F22FB8924933AC
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UFazWatch_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_FazWatch_ABP_AnimGraphNode_SequencePlayer_AFA778E8410A0C1F14F22FB8924933AC()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FazWatch_ABP.FazWatch_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FazWatch_ABP_AnimGraphNode_SequencePlayer_AFA778E8410A0C1F14F22FB8924933AC");
		
		UFazWatch_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_FazWatch_ABP_AnimGraphNode_SequencePlayer_AFA778E8410A0C1F14F22FB8924933AC_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FazWatch_ABP.FazWatch_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FazWatch_ABP_AnimGraphNode_SequencePlayer_98F9360D42701DDE07D54E8A72B2544C
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UFazWatch_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_FazWatch_ABP_AnimGraphNode_SequencePlayer_98F9360D42701DDE07D54E8A72B2544C()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FazWatch_ABP.FazWatch_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FazWatch_ABP_AnimGraphNode_SequencePlayer_98F9360D42701DDE07D54E8A72B2544C");
		
		UFazWatch_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_FazWatch_ABP_AnimGraphNode_SequencePlayer_98F9360D42701DDE07D54E8A72B2544C_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FazWatch_ABP.FazWatch_ABP_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFazWatch_ABP_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FazWatch_ABP.FazWatch_ABP_C.BlueprintUpdateAnimation");
		
		UFazWatch_ABP_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FazWatch_ABP.FazWatch_ABP_C.ExecuteUbergraph_FazWatch_ABP
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFazWatch_ABP_C::ExecuteUbergraph_FazWatch_ABP(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FazWatch_ABP.FazWatch_ABP_C.ExecuteUbergraph_FazWatch_ABP");
		
		UFazWatch_ABP_C_ExecuteUbergraph_FazWatch_ABP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UFazWatch_ABP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFazWatch_ABP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass FazWatch_ABP.FazWatch_ABP_C");
		return ptr;
	}

}


