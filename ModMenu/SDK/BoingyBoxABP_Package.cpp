/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "BoingyBoxABP_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BoingyBoxABP.BoingyBoxABP_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BoingyBoxABP.BoingyBoxABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BoingyBoxABP_AnimGraphNode_ModifyBone_F94B1B084B276CB9908A59B3D9DC8C24
	 * 		Flags  -> (BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BoingyBoxABP.BoingyBoxABP_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BoingyBoxABP.BoingyBoxABP_C.Esplode
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BoingyBoxABP.BoingyBoxABP_C.Set Esploded
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Esploded                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBoingyBoxABP_C::Set_Esploded(bool Esploded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BoingyBoxABP.BoingyBoxABP_C.Set Esploded");
		
		UBoingyBoxABP_C_Set_Esploded_Params params {};
		params.Esploded = Esploded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BoingyBoxABP.BoingyBoxABP_C.Start Crank
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBoingyBoxABP_C::Start_Crank()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BoingyBoxABP.BoingyBoxABP_C.Start Crank");
		
		UBoingyBoxABP_C_Start_Crank_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BoingyBoxABP.BoingyBoxABP_C.Stop Crank
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBoingyBoxABP_C::Stop_Crank()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BoingyBoxABP.BoingyBoxABP_C.Stop Crank");
		
		UBoingyBoxABP_C_Stop_Crank_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BoingyBoxABP.BoingyBoxABP_C.AnimNotify_ModelSwap
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BoingyBoxABP.BoingyBoxABP_C.AnimNotify_EnableRigidBody
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BoingyBoxABP.BoingyBoxABP_C.ExecuteUbergraph_BoingyBoxABP
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBoingyBoxABP_C::ExecuteUbergraph_BoingyBoxABP(int EntryPoint)
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
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBoingyBoxABP_C.StaticClass
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


