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
	 * Function WI_RollingCredits_Ruin.WI_RollingCredits_Ruin_C.ResetCredits
	 */
	struct UWI_RollingCredits_Ruin_C_ResetCredits_Params
	{	};

	/**
	 * Function WI_RollingCredits_Ruin.WI_RollingCredits_Ruin_C.Tick
	 */
	struct UWI_RollingCredits_Ruin_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WI_RollingCredits_Ruin.WI_RollingCredits_Ruin_C.ExecuteUbergraph_WI_RollingCredits_Ruin
	 */
	struct UWI_RollingCredits_Ruin_C_ExecuteUbergraph_WI_RollingCredits_Ruin_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
