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
	 * Function Pre_BadgeHolder_Backstage.Pre_BadgeHolder_Backstage_C.OnPlayerInteract
	 */
	struct APre_BadgeHolder_Backstage_C_OnPlayerInteract_Params
	{
	public:
		class APawn*                                               PlayerPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Pre_BadgeHolder_Backstage.Pre_BadgeHolder_Backstage_C.ExecuteUbergraph_Pre_BadgeHolder_Backstage
	 */
	struct APre_BadgeHolder_Backstage_C_ExecuteUbergraph_Pre_BadgeHolder_Backstage_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Z8WE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Pre_BadgeHolder_Backstage.Pre_BadgeHolder_Backstage_C.OnRoxyMontySpawn__DelegateSignature
	 */
	struct APre_BadgeHolder_Backstage_C_OnRoxyMontySpawn__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
