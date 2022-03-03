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
	 * Function OGM_Underground.OGM_Underground_C.PlayerRequestStart
	 */
	struct AOGM_Underground_C_PlayerRequestStart_Params
	{
	public:
		bool                                                       ForceStart;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Started;                                                 // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		fnaf9_ECantStartMinigameReason                             reason;                                                  // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function OGM_Underground.OGM_Underground_C.PlayerRequestEnd
	 */
	struct AOGM_Underground_C_PlayerRequestEnd_Params
	{
	public:
		E_EndMiniGameType_E_EndMiniGameType                        EndType;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function OGM_Underground.OGM_Underground_C.UpdateVentPowerDrain
	 */
	struct AOGM_Underground_C_UpdateVentPowerDrain_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       PowerDrained;                                            // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function OGM_Underground.OGM_Underground_C.UpdateVentDoorMeter
	 */
	struct AOGM_Underground_C_UpdateVentDoorMeter_Params
	{
	};

	/**
	 * Function OGM_Underground.OGM_Underground_C.UpdateDoorPowerDrain
	 */
	struct AOGM_Underground_C_UpdateDoorPowerDrain_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       PowerDrained;                                            // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function OGM_Underground.OGM_Underground_C.UpdateDoorMeters
	 */
	struct AOGM_Underground_C_UpdateDoorMeters_Params
	{
	};

	/**
	 * Function OGM_Underground.OGM_Underground_C.OnPlayerEnter
	 */
	struct AOGM_Underground_C_OnPlayerEnter_Params
	{
	};

	/**
	 * Function OGM_Underground.OGM_Underground_C.OnEnd
	 */
	struct AOGM_Underground_C_OnEnd_Params
	{
	public:
		E_EndMiniGameType_E_EndMiniGameType                        EndType;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function OGM_Underground.OGM_Underground_C.On Start
	 */
	struct AOGM_Underground_C_On_Start_Params
	{
	};

	/**
	 * Function OGM_Underground.OGM_Underground_C.ReceiveTick
	 */
	struct AOGM_Underground_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function OGM_Underground.OGM_Underground_C.Enter Part 1
	 */
	struct AOGM_Underground_C_Enter_Part_1_Params
	{
	};

	/**
	 * Function OGM_Underground.OGM_Underground_C.Enter Part 2
	 */
	struct AOGM_Underground_C_Enter_Part_2_Params
	{
	};

	/**
	 * Function OGM_Underground.OGM_Underground_C.Spawn Burntrap Wave
	 */
	struct AOGM_Underground_C_Spawn_Burntrap_Wave_Params
	{
	};

	/**
	 * Function OGM_Underground.OGM_Underground_C.Monty Wave
	 */
	struct AOGM_Underground_C_Monty_Wave_Params
	{
	};

	/**
	 * Function OGM_Underground.OGM_Underground_C.Spawn Tangle Wave
	 */
	struct AOGM_Underground_C_Spawn_Tangle_Wave_Params
	{
	};

	/**
	 * Function OGM_Underground.OGM_Underground_C.Burntrap Death
	 */
	struct AOGM_Underground_C_Burntrap_Death_Params
	{
	};

	/**
	 * Function OGM_Underground.OGM_Underground_C.Monty Death
	 */
	struct AOGM_Underground_C_Monty_Death_Params
	{
	};

	/**
	 * Function OGM_Underground.OGM_Underground_C.Tangle Death
	 */
	struct AOGM_Underground_C_Tangle_Death_Params
	{
	};

	/**
	 * Function OGM_Underground.OGM_Underground_C.Spawn Chica
	 */
	struct AOGM_Underground_C_Spawn_Chica_Params
	{
	};

	/**
	 * Function OGM_Underground.OGM_Underground_C.Spawn Monty
	 */
	struct AOGM_Underground_C_Spawn_Monty_Params
	{
	};

	/**
	 * Function OGM_Underground.OGM_Underground_C.Spawn Roxy
	 */
	struct AOGM_Underground_C_Spawn_Roxy_Params
	{
	};

	/**
	 * Function OGM_Underground.OGM_Underground_C.Spawn Burntrap Freddy
	 */
	struct AOGM_Underground_C_Spawn_Burntrap_Freddy_Params
	{
	public:
		struct FTransform                                          SpawnTransform;                                          // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function OGM_Underground.OGM_Underground_C.ExecuteUbergraph_OGM_Underground
	 */
	struct AOGM_Underground_C_ExecuteUbergraph_OGM_Underground_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
