#pragma once

/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function RIG_CartHidePoint_Skeleton_AnimBlueprint.RIG_CartHidePoint_Skeleton_AnimBlueprint_C.AnimGraph
	 */
	struct URIG_CartHidePoint_Skeleton_AnimBlueprint_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)

	};

	/**
	 * Function RIG_CartHidePoint_Skeleton_AnimBlueprint.RIG_CartHidePoint_Skeleton_AnimBlueprint_C.SetAnim
	 */
	struct URIG_CartHidePoint_Skeleton_AnimBlueprint_C_SetAnim_Params
	{
	public:
		class UAnimSequence*                                       Animation;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function RIG_CartHidePoint_Skeleton_AnimBlueprint.RIG_CartHidePoint_Skeleton_AnimBlueprint_C.SetEnterRotation
	 */
	struct URIG_CartHidePoint_Skeleton_AnimBlueprint_C_SetEnterRotation_Params
	{
	public:
		class APawn*                                               PlayerPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function RIG_CartHidePoint_Skeleton_AnimBlueprint.RIG_CartHidePoint_Skeleton_AnimBlueprint_C.StartSearch
	 */
	struct URIG_CartHidePoint_Skeleton_AnimBlueprint_C_StartSearch_Params
	{
	public:
		class APawn*                                               SearcherPawn;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function RIG_CartHidePoint_Skeleton_AnimBlueprint.RIG_CartHidePoint_Skeleton_AnimBlueprint_C.AnimNotify_DoneSearching
	 */
	struct URIG_CartHidePoint_Skeleton_AnimBlueprint_C_AnimNotify_DoneSearching_Params
	{
	};

	/**
	 * Function RIG_CartHidePoint_Skeleton_AnimBlueprint.RIG_CartHidePoint_Skeleton_AnimBlueprint_C.AnimNotify_SearchOver
	 */
	struct URIG_CartHidePoint_Skeleton_AnimBlueprint_C_AnimNotify_SearchOver_Params
	{
	};

	/**
	 * Function RIG_CartHidePoint_Skeleton_AnimBlueprint.RIG_CartHidePoint_Skeleton_AnimBlueprint_C.ExecuteUbergraph_RIG_CartHidePoint_Skeleton_AnimBlueprint
	 */
	struct URIG_CartHidePoint_Skeleton_AnimBlueprint_C_ExecuteUbergraph_RIG_CartHidePoint_Skeleton_AnimBlueprint_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
