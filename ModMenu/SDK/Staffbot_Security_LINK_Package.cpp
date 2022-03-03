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
	 * 		Name   -> Function Staffbot_Security_LINK.Staffbot_Security_LINK_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UStaffbot_Security_LINK_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_Security_LINK.Staffbot_Security_LINK_C.AnimGraph");
		
		UStaffbot_Security_LINK_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function Staffbot_Security_LINK.Staffbot_Security_LINK_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_Security_LINK_AnimGraphNode_BlendListByBool_6BCBB770493CB8D2210BF9B0E868031C
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UStaffbot_Security_LINK_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_Security_LINK_AnimGraphNode_BlendListByBool_6BCBB770493CB8D2210BF9B0E868031C()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_Security_LINK.Staffbot_Security_LINK_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_Security_LINK_AnimGraphNode_BlendListByBool_6BCBB770493CB8D2210BF9B0E868031C");
		
		UStaffbot_Security_LINK_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_Security_LINK_AnimGraphNode_BlendListByBool_6BCBB770493CB8D2210BF9B0E868031C_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function Staffbot_Security_LINK.Staffbot_Security_LINK_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStaffbot_Security_LINK_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_Security_LINK.Staffbot_Security_LINK_C.BlueprintUpdateAnimation");
		
		UStaffbot_Security_LINK_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function Staffbot_Security_LINK.Staffbot_Security_LINK_C.BlueprintBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UStaffbot_Security_LINK_C::BlueprintBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_Security_LINK.Staffbot_Security_LINK_C.BlueprintBeginPlay");
		
		UStaffbot_Security_LINK_C_BlueprintBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function Staffbot_Security_LINK.Staffbot_Security_LINK_C.ExecuteUbergraph_Staffbot_Security_LINK
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStaffbot_Security_LINK_C::ExecuteUbergraph_Staffbot_Security_LINK(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_Security_LINK.Staffbot_Security_LINK_C.ExecuteUbergraph_Staffbot_Security_LINK");
		
		UStaffbot_Security_LINK_C_ExecuteUbergraph_Staffbot_Security_LINK_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UStaffbot_Security_LINK_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStaffbot_Security_LINK_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Staffbot_Security_LINK.Staffbot_Security_LINK_C");
		return ptr;
	}

}


