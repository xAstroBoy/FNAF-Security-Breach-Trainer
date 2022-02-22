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
	 * 		Name   -> Function Staffbot_PartyPass_LINK.Staffbot_PartyPass_LINK_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UStaffbot_PartyPass_LINK_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_PartyPass_LINK.Staffbot_PartyPass_LINK_C.AnimGraph");
		
		UStaffbot_PartyPass_LINK_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Staffbot_PartyPass_LINK.Staffbot_PartyPass_LINK_C.AnimNotify_Select Anim
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UStaffbot_PartyPass_LINK_C::AnimNotify_Select_Anim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_PartyPass_LINK.Staffbot_PartyPass_LINK_C.AnimNotify_Select Anim");
		
		UStaffbot_PartyPass_LINK_C_AnimNotify_Select_Anim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Staffbot_PartyPass_LINK.Staffbot_PartyPass_LINK_C.AnimNotify_DanceDone
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UStaffbot_PartyPass_LINK_C::AnimNotify_DanceDone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_PartyPass_LINK.Staffbot_PartyPass_LINK_C.AnimNotify_DanceDone");
		
		UStaffbot_PartyPass_LINK_C_AnimNotify_DanceDone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Staffbot_PartyPass_LINK.Staffbot_PartyPass_LINK_C.ExecuteUbergraph_Staffbot_PartyPass_LINK
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStaffbot_PartyPass_LINK_C::ExecuteUbergraph_Staffbot_PartyPass_LINK(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_PartyPass_LINK.Staffbot_PartyPass_LINK_C.ExecuteUbergraph_Staffbot_PartyPass_LINK");
		
		UStaffbot_PartyPass_LINK_C_ExecuteUbergraph_Staffbot_PartyPass_LINK_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UStaffbot_PartyPass_LINK_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStaffbot_PartyPass_LINK_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Staffbot_PartyPass_LINK.Staffbot_PartyPass_LINK_C");
		return ptr;
	}

}


