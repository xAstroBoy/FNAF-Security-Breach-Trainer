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
	 * Function CautionBotController.CautionBotController_C.ReceiveBeginPlay
	 */
	struct ACautionBotController_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function CautionBotController.CautionBotController_C.MoveToSpill
	 */
	struct ACautionBotController_C_MoveToSpill_Params
	{
	public:
		struct FVector                                             SpillLocation;                                           // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CautionBotController.CautionBotController_C.ExecuteUbergraph_CautionBotController
	 */
	struct ACautionBotController_C_ExecuteUbergraph_CautionBotController_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
