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
	 * Function PresentCollectible.PresentCollectible_C.GetInteractibleType
	 */
	struct APresentCollectible_C_GetInteractibleType_Params
	{
	public:
		EInteractibleType                                          Type;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EInteractiblePressType                                     PressType;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PresentCollectible.PresentCollectible_C.UserConstructionScript
	 */
	struct APresentCollectible_C_UserConstructionScript_Params
	{	};

	/**
	 * Function PresentCollectible.PresentCollectible_C.ReceiveBeginPlay
	 */
	struct APresentCollectible_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function PresentCollectible.PresentCollectible_C.OnBeginCollect
	 */
	struct APresentCollectible_C_OnBeginCollect_Params
	{	};

	/**
	 * Function PresentCollectible.PresentCollectible_C.OnCollect
	 */
	struct APresentCollectible_C_OnCollect_Params
	{	};

	/**
	 * Function PresentCollectible.PresentCollectible_C.OnCancelCollect
	 */
	struct APresentCollectible_C_OnCancelCollect_Params
	{	};

	/**
	 * Function PresentCollectible.PresentCollectible_C.OnLoadCollected
	 */
	struct APresentCollectible_C_OnLoadCollected_Params
	{	};

	/**
	 * Function PresentCollectible.PresentCollectible_C.Reset Animation
	 */
	struct APresentCollectible_C_ResetAnimation_Params
	{	};

	/**
	 * Function PresentCollectible.PresentCollectible_C.ForceOpened
	 */
	struct APresentCollectible_C_ForceOpened_Params
	{	};

	/**
	 * Function PresentCollectible.PresentCollectible_C.ExecuteUbergraph_PresentCollectible
	 */
	struct APresentCollectible_C_ExecuteUbergraph_PresentCollectible_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VGYV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
