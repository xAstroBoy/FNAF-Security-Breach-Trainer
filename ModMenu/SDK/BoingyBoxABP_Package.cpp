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
	 * 		Name   -> Function BoingyBoxABP.BoingyBoxABP_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UBoingyBoxABP_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BoingyBoxABP.BoingyBoxABP_C.AnimGraph");
		
		UBoingyBoxABP_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BoingyBoxABP.BoingyBoxABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BoingyBoxABP_AnimGraphNode_ModifyBone_F94B1B084B276CB9908A59B3D9DC8C24
	 * 		Flags  -> ()
	 */
	void UBoingyBoxABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BoingyBoxABP_AnimGraphNode_ModifyBone_F94B1B084B276CB9908A59B3D9DC8C24()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BoingyBoxABP.BoingyBoxABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BoingyBoxABP_AnimGraphNode_ModifyBone_F94B1B084B276CB9908A59B3D9DC8C24");
		
		UBoingyBoxABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BoingyBoxABP_AnimGraphNode_ModifyBone_F94B1B084B276CB9908A59B3D9DC8C24_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BoingyBoxABP.BoingyBoxABP_C.BlueprintUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBoingyBoxABP_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BoingyBoxABP.BoingyBoxABP_C.BlueprintUpdateAnimation");
		
		UBoingyBoxABP_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BoingyBoxABP.BoingyBoxABP_C.Esplode
	 * 		Flags  -> ()
	 */
	void UBoingyBoxABP_C::Esplode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BoingyBoxABP.BoingyBoxABP_C.Esplode");
		
		UBoingyBoxABP_C_Esplode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BoingyBoxABP.BoingyBoxABP_C.Set Esploded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Esploded                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBoingyBoxABP_C::SetEsploded(bool Esploded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BoingyBoxABP.BoingyBoxABP_C.Set Esploded");
		
		UBoingyBoxABP_C_SetEsploded_Params params {};
		params.Esploded = Esploded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BoingyBoxABP.BoingyBoxABP_C.Start Crank
	 * 		Flags  -> ()
	 */
	void UBoingyBoxABP_C::StartCrank()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BoingyBoxABP.BoingyBoxABP_C.Start Crank");
		
		UBoingyBoxABP_C_StartCrank_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BoingyBoxABP.BoingyBoxABP_C.Stop Crank
	 * 		Flags  -> ()
	 */
	void UBoingyBoxABP_C::StopCrank()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BoingyBoxABP.BoingyBoxABP_C.Stop Crank");
		
		UBoingyBoxABP_C_StopCrank_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BoingyBoxABP.BoingyBoxABP_C.AnimNotify_ModelSwap
	 * 		Flags  -> ()
	 */
	void UBoingyBoxABP_C::AnimNotify_ModelSwap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BoingyBoxABP.BoingyBoxABP_C.AnimNotify_ModelSwap");
		
		UBoingyBoxABP_C_AnimNotify_ModelSwap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BoingyBoxABP.BoingyBoxABP_C.AnimNotify_EnableRigidBody
	 * 		Flags  -> ()
	 */
	void UBoingyBoxABP_C::AnimNotify_EnableRigidBody()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BoingyBoxABP.BoingyBoxABP_C.AnimNotify_EnableRigidBody");
		
		UBoingyBoxABP_C_AnimNotify_EnableRigidBody_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BoingyBoxABP.BoingyBoxABP_C.ExecuteUbergraph_BoingyBoxABP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBoingyBoxABP_C::ExecuteUbergraph_BoingyBoxABP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BoingyBoxABP.BoingyBoxABP_C.ExecuteUbergraph_BoingyBoxABP");
		
		UBoingyBoxABP_C_ExecuteUbergraph_BoingyBoxABP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBoingyBoxABP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBoingyBoxABP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass BoingyBoxABP.BoingyBoxABP_C");
		return ptr;
	}

}


