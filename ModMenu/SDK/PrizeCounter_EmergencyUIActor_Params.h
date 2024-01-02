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
	 * Function PrizeCounter_EmergencyUIActor.PrizeCounter_EmergencyUIActor_C.GetUIWidget
	 */
	struct APrizeCounter_EmergencyUIActor_C_GetUIWidget_Params
	{
	public:
		class UPrizeCounterEmergencyUI_C*                          AsPrizeCounterEmergencyUI;                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PrizeCounter_EmergencyUIActor.PrizeCounter_EmergencyUIActor_C.PlayEmergencyText
	 */
	struct APrizeCounter_EmergencyUIActor_C_PlayEmergencyText_Params
	{	};

	/**
	 * Function PrizeCounter_EmergencyUIActor.PrizeCounter_EmergencyUIActor_C.ExecuteUbergraph_PrizeCounter_EmergencyUIActor
	 */
	struct APrizeCounter_EmergencyUIActor_C_ExecuteUbergraph_PrizeCounter_EmergencyUIActor_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_F55M[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
