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
	 * Function OGM_GatorGolf.OGM_GatorGolf_C.On Start
	 */
	struct AOGM_GatorGolf_C_OnStart_Params
	{	};

	/**
	 * Function OGM_GatorGolf.OGM_GatorGolf_C.Spawn Monty
	 */
	struct AOGM_GatorGolf_C_SpawnMonty_Params
	{	};

	/**
	 * Function OGM_GatorGolf.OGM_GatorGolf_C.ReceiveBeginPlay
	 */
	struct AOGM_GatorGolf_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function OGM_GatorGolf.OGM_GatorGolf_C.OnCollectSecurityBadge
	 */
	struct AOGM_GatorGolf_C_OnCollectSecurityBadge_Params
	{	};

	/**
	 * Function OGM_GatorGolf.OGM_GatorGolf_C.ExecuteUbergraph_OGM_GatorGolf
	 */
	struct AOGM_GatorGolf_C_ExecuteUbergraph_OGM_GatorGolf_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0SHB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
