#pragma once

/**
 * Name: FNAFSB
 * Version: 1
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
	 * Function Freddy_Cinematic_Medscan_Abp.Freddy_Cinematic_Medscan_Abp_C.AnimGraph
	 */
	struct UFreddy_Cinematic_Medscan_Abp_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           InPose;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FPoseLink                                           AnimGraph;                                               // 0x0010(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function Freddy_Cinematic_Medscan_Abp.Freddy_Cinematic_Medscan_Abp_C.ExecuteUbergraph_Freddy_Cinematic_Medscan_Abp
	 */
	struct UFreddy_Cinematic_Medscan_Abp_C_ExecuteUbergraph_Freddy_Cinematic_Medscan_Abp_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
