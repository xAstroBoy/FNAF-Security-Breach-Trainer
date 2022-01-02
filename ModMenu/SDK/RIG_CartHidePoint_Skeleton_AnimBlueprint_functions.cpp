// Name: FNAF Security Breach, Version: 1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function RIG_CartHidePoint_Skeleton_AnimBlueprint.RIG_CartHidePoint_Skeleton_AnimBlueprint_C.AnimGraph
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
void URIG_CartHidePoint_Skeleton_AnimBlueprint_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RIG_CartHidePoint_Skeleton_AnimBlueprint.RIG_CartHidePoint_Skeleton_AnimBlueprint_C.AnimGraph");

	URIG_CartHidePoint_Skeleton_AnimBlueprint_C_AnimGraph_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function RIG_CartHidePoint_Skeleton_AnimBlueprint.RIG_CartHidePoint_Skeleton_AnimBlueprint_C.SetAnim
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UAnimSequence*                               Animation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URIG_CartHidePoint_Skeleton_AnimBlueprint_C::SetAnim(class UAnimSequence* Animation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RIG_CartHidePoint_Skeleton_AnimBlueprint.RIG_CartHidePoint_Skeleton_AnimBlueprint_C.SetAnim");

	URIG_CartHidePoint_Skeleton_AnimBlueprint_C_SetAnim_Params params {};
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function RIG_CartHidePoint_Skeleton_AnimBlueprint.RIG_CartHidePoint_Skeleton_AnimBlueprint_C.SetEnterRotation
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APawn*                                       PlayerPawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URIG_CartHidePoint_Skeleton_AnimBlueprint_C::SetEnterRotation(class APawn* PlayerPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RIG_CartHidePoint_Skeleton_AnimBlueprint.RIG_CartHidePoint_Skeleton_AnimBlueprint_C.SetEnterRotation");

	URIG_CartHidePoint_Skeleton_AnimBlueprint_C_SetEnterRotation_Params params {};
	params.PlayerPawn = PlayerPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function RIG_CartHidePoint_Skeleton_AnimBlueprint.RIG_CartHidePoint_Skeleton_AnimBlueprint_C.StartSearch
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APawn*                                       SearcherPawn                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URIG_CartHidePoint_Skeleton_AnimBlueprint_C::StartSearch(class APawn* SearcherPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RIG_CartHidePoint_Skeleton_AnimBlueprint.RIG_CartHidePoint_Skeleton_AnimBlueprint_C.StartSearch");

	URIG_CartHidePoint_Skeleton_AnimBlueprint_C_StartSearch_Params params {};
	params.SearcherPawn = SearcherPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function RIG_CartHidePoint_Skeleton_AnimBlueprint.RIG_CartHidePoint_Skeleton_AnimBlueprint_C.AnimNotify_DoneSearching
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void URIG_CartHidePoint_Skeleton_AnimBlueprint_C::AnimNotify_DoneSearching()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RIG_CartHidePoint_Skeleton_AnimBlueprint.RIG_CartHidePoint_Skeleton_AnimBlueprint_C.AnimNotify_DoneSearching");

	URIG_CartHidePoint_Skeleton_AnimBlueprint_C_AnimNotify_DoneSearching_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function RIG_CartHidePoint_Skeleton_AnimBlueprint.RIG_CartHidePoint_Skeleton_AnimBlueprint_C.AnimNotify_SearchOver
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void URIG_CartHidePoint_Skeleton_AnimBlueprint_C::AnimNotify_SearchOver()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RIG_CartHidePoint_Skeleton_AnimBlueprint.RIG_CartHidePoint_Skeleton_AnimBlueprint_C.AnimNotify_SearchOver");

	URIG_CartHidePoint_Skeleton_AnimBlueprint_C_AnimNotify_SearchOver_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function RIG_CartHidePoint_Skeleton_AnimBlueprint.RIG_CartHidePoint_Skeleton_AnimBlueprint_C.ExecuteUbergraph_RIG_CartHidePoint_Skeleton_AnimBlueprint
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URIG_CartHidePoint_Skeleton_AnimBlueprint_C::ExecuteUbergraph_RIG_CartHidePoint_Skeleton_AnimBlueprint(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RIG_CartHidePoint_Skeleton_AnimBlueprint.RIG_CartHidePoint_Skeleton_AnimBlueprint_C.ExecuteUbergraph_RIG_CartHidePoint_Skeleton_AnimBlueprint");

	URIG_CartHidePoint_Skeleton_AnimBlueprint_C_ExecuteUbergraph_RIG_CartHidePoint_Skeleton_AnimBlueprint_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
