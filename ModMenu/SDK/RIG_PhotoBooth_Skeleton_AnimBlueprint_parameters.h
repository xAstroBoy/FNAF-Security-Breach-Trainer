#pragma once

// Name: FNAF Security Breach, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function RIG_PhotoBooth_Skeleton_AnimBlueprint.RIG_PhotoBooth_Skeleton_AnimBlueprint_C.AnimGraph
struct URIG_PhotoBooth_Skeleton_AnimBlueprint_C_AnimGraph_Params
{
	struct FPoseLink                                   AnimGraph;                                                 // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
};

// Function RIG_PhotoBooth_Skeleton_AnimBlueprint.RIG_PhotoBooth_Skeleton_AnimBlueprint_C.SetAnim
struct URIG_PhotoBooth_Skeleton_AnimBlueprint_C_SetAnim_Params
{
	class UAnimSequence*                               Animation;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RIG_PhotoBooth_Skeleton_AnimBlueprint.RIG_PhotoBooth_Skeleton_AnimBlueprint_C.SetEnterRotation
struct URIG_PhotoBooth_Skeleton_AnimBlueprint_C_SetEnterRotation_Params
{
	class APawn*                                       PlayerPawn;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RIG_PhotoBooth_Skeleton_AnimBlueprint.RIG_PhotoBooth_Skeleton_AnimBlueprint_C.AnimNotify_DoneSearching
struct URIG_PhotoBooth_Skeleton_AnimBlueprint_C_AnimNotify_DoneSearching_Params
{
};

// Function RIG_PhotoBooth_Skeleton_AnimBlueprint.RIG_PhotoBooth_Skeleton_AnimBlueprint_C.StartSearch
struct URIG_PhotoBooth_Skeleton_AnimBlueprint_C_StartSearch_Params
{
	class APawn*                                       SearcherPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RIG_PhotoBooth_Skeleton_AnimBlueprint.RIG_PhotoBooth_Skeleton_AnimBlueprint_C.AnimNotify_SearchOver
struct URIG_PhotoBooth_Skeleton_AnimBlueprint_C_AnimNotify_SearchOver_Params
{
};

// Function RIG_PhotoBooth_Skeleton_AnimBlueprint.RIG_PhotoBooth_Skeleton_AnimBlueprint_C.ExecuteUbergraph_RIG_PhotoBooth_Skeleton_AnimBlueprint
struct URIG_PhotoBooth_Skeleton_AnimBlueprint_C_ExecuteUbergraph_RIG_PhotoBooth_Skeleton_AnimBlueprint_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
