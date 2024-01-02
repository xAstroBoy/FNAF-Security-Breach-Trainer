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
	 * Function PRE_SM_Cable_04_Straight.PRE_SM_Cable_04_Straight_C.StopEmitter
	 */
	struct APRE_SM_Cable_04_Straight_C_StopEmitter_Params
	{	};

	/**
	 * Function PRE_SM_Cable_04_Straight.PRE_SM_Cable_04_Straight_C.PlayEmitter
	 */
	struct APRE_SM_Cable_04_Straight_C_PlayEmitter_Params
	{	};

	/**
	 * Function PRE_SM_Cable_04_Straight.PRE_SM_Cable_04_Straight_C.ReceiveBeginPlay
	 */
	struct APRE_SM_Cable_04_Straight_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function PRE_SM_Cable_04_Straight.PRE_SM_Cable_04_Straight_C.ToggleInRange
	 */
	struct APRE_SM_Cable_04_Straight_C_ToggleInRange_Params
	{
	public:
		bool                                                       InRange;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PRE_SM_Cable_04_Straight.PRE_SM_Cable_04_Straight_C.GetOcclusion
	 */
	struct APRE_SM_Cable_04_Straight_C_GetOcclusion_Params
	{	};

	/**
	 * Function PRE_SM_Cable_04_Straight.PRE_SM_Cable_04_Straight_C.ExecuteUbergraph_PRE_SM_Cable_04_Straight
	 */
	struct APRE_SM_Cable_04_Straight_C_ExecuteUbergraph_PRE_SM_Cable_04_Straight_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
