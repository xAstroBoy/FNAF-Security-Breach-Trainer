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
	 * Function BP_NoiseMakingTowerBase_PaintCans.BP_NoiseMakingTowerBase_PaintCans_C.On Triggered
	 */
	struct ABP_NoiseMakingTowerBase_PaintCans_C_OnTriggered_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       PlayAudio;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NoiseMakingTowerBase_PaintCans.BP_NoiseMakingTowerBase_PaintCans_C.ExecuteUbergraph_BP_NoiseMakingTowerBase_PaintCans
	 */
	struct ABP_NoiseMakingTowerBase_PaintCans_C_ExecuteUbergraph_BP_NoiseMakingTowerBase_PaintCans_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
