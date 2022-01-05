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
	 * Function CautionBotManager.CautionBotManager_C.Register Caution Bot
	 */
	struct ACautionBotManager_C_Register_Caution_Bot_Params
	{
	public:
		class ACautionBot_C*                                       CautionBot;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function CautionBotManager.CautionBotManager_C.Unregister Caution Bot
	 */
	struct ACautionBotManager_C_Unregister_Caution_Bot_Params
	{
	public:
		class ACautionBot_C*                                       CautionBot;                                              // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function CautionBotManager.CautionBotManager_C.On Spill
	 */
	struct ACautionBotManager_C_On_Spill_Params
	{
	public:
		class AActor*                                              SpillActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function CautionBotManager.CautionBotManager_C.ExecuteUbergraph_CautionBotManager
	 */
	struct ACautionBotManager_C_ExecuteUbergraph_CautionBotManager_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
