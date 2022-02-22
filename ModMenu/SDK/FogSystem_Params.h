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
	 * Function FogSystem.FogSystem_C.ReceiveTick
	 */
	struct AFogSystem_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FogSystem.FogSystem_C.Set Fog Scenario
	 */
	struct AFogSystem_C_Set_Fog_Scenario_Params
	{
	public:
		class FName                                                FogScenario;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FogSystem.FogSystem_C.Add Overlapped Volume
	 */
	struct AFogSystem_C_Add_Overlapped_Volume_Params
	{
	public:
		class AFogVolume_C*                                        Item;                                                    // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FogSystem.FogSystem_C.Remove Overlapped Volume
	 */
	struct AFogSystem_C_Remove_Overlapped_Volume_Params
	{
	public:
		class AFogVolume_C*                                        Item;                                                    // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FogSystem.FogSystem_C.ExecuteUbergraph_FogSystem
	 */
	struct AFogSystem_C_ExecuteUbergraph_FogSystem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
