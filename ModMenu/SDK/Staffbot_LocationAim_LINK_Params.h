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
	 * Function Staffbot_LocationAim_LINK.Staffbot_LocationAim_LINK_C.AnimGraph
	 */
	struct UStaffbot_LocationAim_LINK_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           InPose;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FPoseLink                                           AnimGraph;                                               // 0x0010(0x0010)  (Parm, OutParm, NoDestructor)

	};

	/**
	 * Function Staffbot_LocationAim_LINK.Staffbot_LocationAim_LINK_C.BlueprintUpdateAnimation
	 */
	struct UStaffbot_LocationAim_LINK_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Staffbot_LocationAim_LINK.Staffbot_LocationAim_LINK_C.ExecuteUbergraph_Staffbot_LocationAim_LINK
	 */
	struct UStaffbot_LocationAim_LINK_C_ExecuteUbergraph_Staffbot_LocationAim_LINK_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
