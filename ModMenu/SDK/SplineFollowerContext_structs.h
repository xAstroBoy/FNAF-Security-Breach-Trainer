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
	 * UserDefinedStruct SplineFollowerContext.SplineFollowerContext
	 * Size -> 0x0011
	 */
	struct FSplineFollowerContext
	{
	public:
		class ASplinePathway_C*                                    CurrentSpline_6_87B74F80428ED6CF5B710F95FAB5E0BD;        // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TotalDistance_5_08E1D2E74013C26D8148BEA95A1AA2BA;        // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FollowMultiplier_9_9547F9BC4253C60775F5B3887DCD6AF8;     // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ReachedEnd_11_2BDEB0C14578432CFE6C73B076B69D4D;          // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
