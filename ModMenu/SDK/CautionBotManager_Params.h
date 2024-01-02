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
	 * Function CautionBotManager.CautionBotManager_C.Register Caution Bot
	 */
	struct ACautionBotManager_C_RegisterCautionBot_Params
	{
	public:
		class ACautionBot_C*                                       CautionBot;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CautionBotManager.CautionBotManager_C.Unregister Caution Bot
	 */
	struct ACautionBotManager_C_UnregisterCautionBot_Params
	{
	public:
		class ACautionBot_C*                                       CautionBot;                                              // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CautionBotManager.CautionBotManager_C.On Spill
	 */
	struct ACautionBotManager_C_OnSpill_Params
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
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DI44[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
