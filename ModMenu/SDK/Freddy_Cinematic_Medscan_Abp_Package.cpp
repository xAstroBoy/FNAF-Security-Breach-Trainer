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
	 * 		Name   -> Function Freddy_Cinematic_Medscan_Abp.Freddy_Cinematic_Medscan_Abp_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   InPose                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UFreddy_Cinematic_Medscan_Abp_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Freddy_Cinematic_Medscan_Abp.Freddy_Cinematic_Medscan_Abp_C.AnimGraph");
		
		UFreddy_Cinematic_Medscan_Abp_C_AnimGraph_Params params {};
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
	 * 		Name   -> Function Freddy_Cinematic_Medscan_Abp.Freddy_Cinematic_Medscan_Abp_C.ExecuteUbergraph_Freddy_Cinematic_Medscan_Abp
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFreddy_Cinematic_Medscan_Abp_C::ExecuteUbergraph_Freddy_Cinematic_Medscan_Abp(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Freddy_Cinematic_Medscan_Abp.Freddy_Cinematic_Medscan_Abp_C.ExecuteUbergraph_Freddy_Cinematic_Medscan_Abp");
		
		UFreddy_Cinematic_Medscan_Abp_C_ExecuteUbergraph_Freddy_Cinematic_Medscan_Abp_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UFreddy_Cinematic_Medscan_Abp_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFreddy_Cinematic_Medscan_Abp_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Freddy_Cinematic_Medscan_Abp.Freddy_Cinematic_Medscan_Abp_C");
		return ptr;
	}

}


