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
	 * Function RIG_Hook_ABP.RIG_Hook_ABP_C.AnimGraph
	 */
	struct URIG_Hook_ABP_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           InPose;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FPoseLink                                           AnimGraph;                                               // 0x0010(0x0010)  (Parm, OutParm, NoDestructor)

	};

	/**
	 * Function RIG_Hook_ABP.RIG_Hook_ABP_C.BlueprintUpdateAnimation
	 */
	struct URIG_Hook_ABP_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function RIG_Hook_ABP.RIG_Hook_ABP_C.BlueprintBeginPlay
	 */
	struct URIG_Hook_ABP_C_BlueprintBeginPlay_Params
	{
	};

	/**
	 * Function RIG_Hook_ABP.RIG_Hook_ABP_C.ExecuteUbergraph_RIG_Hook_ABP
	 */
	struct URIG_Hook_ABP_C_ExecuteUbergraph_RIG_Hook_ABP_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
