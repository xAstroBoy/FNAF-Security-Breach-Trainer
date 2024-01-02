/**
 * Name: FNAFSB
 * Version: 1
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RIG_Stroller_Skeleton_AnimBlueprint.RIG_Stroller_Skeleton_AnimBlueprint_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void URIG_Stroller_Skeleton_AnimBlueprint_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_Stroller_Skeleton_AnimBlueprint.RIG_Stroller_Skeleton_AnimBlueprint_C.AnimGraph");
		
		URIG_Stroller_Skeleton_AnimBlueprint_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RIG_Stroller_Skeleton_AnimBlueprint.RIG_Stroller_Skeleton_AnimBlueprint_C.SetPeek
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ShouldPeek                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URIG_Stroller_Skeleton_AnimBlueprint_C::SetPeek(bool ShouldPeek)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_Stroller_Skeleton_AnimBlueprint.RIG_Stroller_Skeleton_AnimBlueprint_C.SetPeek");
		
		URIG_Stroller_Skeleton_AnimBlueprint_C_SetPeek_Params params {};
		params.ShouldPeek = ShouldPeek;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RIG_Stroller_Skeleton_AnimBlueprint.RIG_Stroller_Skeleton_AnimBlueprint_C.SetAnim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimSequence*                               Animation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URIG_Stroller_Skeleton_AnimBlueprint_C::SetAnim(class UAnimSequence* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_Stroller_Skeleton_AnimBlueprint.RIG_Stroller_Skeleton_AnimBlueprint_C.SetAnim");
		
		URIG_Stroller_Skeleton_AnimBlueprint_C_SetAnim_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RIG_Stroller_Skeleton_AnimBlueprint.RIG_Stroller_Skeleton_AnimBlueprint_C.SetEnterRotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       PlayerPawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URIG_Stroller_Skeleton_AnimBlueprint_C::SetEnterRotation(class APawn* PlayerPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_Stroller_Skeleton_AnimBlueprint.RIG_Stroller_Skeleton_AnimBlueprint_C.SetEnterRotation");
		
		URIG_Stroller_Skeleton_AnimBlueprint_C_SetEnterRotation_Params params {};
		params.PlayerPawn = PlayerPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RIG_Stroller_Skeleton_AnimBlueprint.RIG_Stroller_Skeleton_AnimBlueprint_C.AnimNotify_DoneSearching
	 * 		Flags  -> ()
	 */
	void URIG_Stroller_Skeleton_AnimBlueprint_C::AnimNotify_DoneSearching()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_Stroller_Skeleton_AnimBlueprint.RIG_Stroller_Skeleton_AnimBlueprint_C.AnimNotify_DoneSearching");
		
		URIG_Stroller_Skeleton_AnimBlueprint_C_AnimNotify_DoneSearching_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RIG_Stroller_Skeleton_AnimBlueprint.RIG_Stroller_Skeleton_AnimBlueprint_C.StartSearch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       SearcherPawn                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URIG_Stroller_Skeleton_AnimBlueprint_C::StartSearch(class APawn* SearcherPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_Stroller_Skeleton_AnimBlueprint.RIG_Stroller_Skeleton_AnimBlueprint_C.StartSearch");
		
		URIG_Stroller_Skeleton_AnimBlueprint_C_StartSearch_Params params {};
		params.SearcherPawn = SearcherPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RIG_Stroller_Skeleton_AnimBlueprint.RIG_Stroller_Skeleton_AnimBlueprint_C.AnimNotify_SearchOver
	 * 		Flags  -> ()
	 */
	void URIG_Stroller_Skeleton_AnimBlueprint_C::AnimNotify_SearchOver()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_Stroller_Skeleton_AnimBlueprint.RIG_Stroller_Skeleton_AnimBlueprint_C.AnimNotify_SearchOver");
		
		URIG_Stroller_Skeleton_AnimBlueprint_C_AnimNotify_SearchOver_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RIG_Stroller_Skeleton_AnimBlueprint.RIG_Stroller_Skeleton_AnimBlueprint_C.ExecuteUbergraph_RIG_Stroller_Skeleton_AnimBlueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URIG_Stroller_Skeleton_AnimBlueprint_C::ExecuteUbergraph_RIG_Stroller_Skeleton_AnimBlueprint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_Stroller_Skeleton_AnimBlueprint.RIG_Stroller_Skeleton_AnimBlueprint_C.ExecuteUbergraph_RIG_Stroller_Skeleton_AnimBlueprint");
		
		URIG_Stroller_Skeleton_AnimBlueprint_C_ExecuteUbergraph_RIG_Stroller_Skeleton_AnimBlueprint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URIG_Stroller_Skeleton_AnimBlueprint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URIG_Stroller_Skeleton_AnimBlueprint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass RIG_Stroller_Skeleton_AnimBlueprint.RIG_Stroller_Skeleton_AnimBlueprint_C");
		return ptr;
	}

}


