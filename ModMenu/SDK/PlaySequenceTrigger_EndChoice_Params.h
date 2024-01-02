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
	 * Function PlaySequenceTrigger_EndChoice.PlaySequenceTrigger_EndChoice_C.PlaySequence
	 */
	struct APlaySequenceTrigger_EndChoice_C_PlaySequence_Params
	{
	public:
		bool                                                       success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4OSF[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PlaySequenceTrigger_EndChoice.PlaySequenceTrigger_EndChoice_C.FireEscapeConditionCheck
	 */
	struct APlaySequenceTrigger_EndChoice_C_FireEscapeConditionCheck_Params
	{
	public:
		bool                                                       HasMetConditions;                                        // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_S10R[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PlaySequenceTrigger_EndChoice.PlaySequenceTrigger_EndChoice_C.OnFailure_A1CEA053484729074DE2FC8418AB6D01
	 */
	struct APlaySequenceTrigger_EndChoice_C_OnFailure_A1CEA053484729074DE2FC8418AB6D01_Params
	{	};

	/**
	 * Function PlaySequenceTrigger_EndChoice.PlaySequenceTrigger_EndChoice_C.OnSuccess_A1CEA053484729074DE2FC8418AB6D01
	 */
	struct APlaySequenceTrigger_EndChoice_C_OnSuccess_A1CEA053484729074DE2FC8418AB6D01_Params
	{	};

	/**
	 * Function PlaySequenceTrigger_EndChoice.PlaySequenceTrigger_EndChoice_C.OnFailure_7F2250294461044CDA36CD9C7D00F0D9
	 */
	struct APlaySequenceTrigger_EndChoice_C_OnFailure_7F2250294461044CDA36CD9C7D00F0D9_Params
	{
	public:
		class FName                                                WrittenAchievementName;                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      WrittenProgress;                                         // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    WrittenUserTag;                                          // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlaySequenceTrigger_EndChoice.PlaySequenceTrigger_EndChoice_C.OnSuccess_7F2250294461044CDA36CD9C7D00F0D9
	 */
	struct APlaySequenceTrigger_EndChoice_C_OnSuccess_7F2250294461044CDA36CD9C7D00F0D9_Params
	{
	public:
		class FName                                                WrittenAchievementName;                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      WrittenProgress;                                         // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    WrittenUserTag;                                          // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlaySequenceTrigger_EndChoice.PlaySequenceTrigger_EndChoice_C.OnTriggered
	 */
	struct APlaySequenceTrigger_EndChoice_C_OnTriggered_Params
	{	};

	/**
	 * Function PlaySequenceTrigger_EndChoice.PlaySequenceTrigger_EndChoice_C.On Sequence Stop Event
	 */
	struct APlaySequenceTrigger_EndChoice_C_OnSequenceStopEvent_Params
	{	};

	/**
	 * Function PlaySequenceTrigger_EndChoice.PlaySequenceTrigger_EndChoice_C.Staying
	 */
	struct APlaySequenceTrigger_EndChoice_C_Staying_Params
	{	};

	/**
	 * Function PlaySequenceTrigger_EndChoice.PlaySequenceTrigger_EndChoice_C.Leaving
	 */
	struct APlaySequenceTrigger_EndChoice_C_Leaving_Params
	{	};

	/**
	 * Function PlaySequenceTrigger_EndChoice.PlaySequenceTrigger_EndChoice_C.Vanny
	 */
	struct APlaySequenceTrigger_EndChoice_C_Vanny_Params
	{	};

	/**
	 * Function PlaySequenceTrigger_EndChoice.PlaySequenceTrigger_EndChoice_C.On Vanny Intro Stop
	 */
	struct APlaySequenceTrigger_EndChoice_C_OnVannyIntroStop_Params
	{	};

	/**
	 * Function PlaySequenceTrigger_EndChoice.PlaySequenceTrigger_EndChoice_C.On Teleport Finished
	 */
	struct APlaySequenceTrigger_EndChoice_C_OnTeleportFinished_Params
	{	};

	/**
	 * Function PlaySequenceTrigger_EndChoice.PlaySequenceTrigger_EndChoice_C.HandleIAmNotMeAchievementCheck
	 */
	struct APlaySequenceTrigger_EndChoice_C_HandleIAmNotMeAchievementCheck_Params
	{	};

	/**
	 * Function PlaySequenceTrigger_EndChoice.PlaySequenceTrigger_EndChoice_C.ReceiveBeginPlay
	 */
	struct APlaySequenceTrigger_EndChoice_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function PlaySequenceTrigger_EndChoice.PlaySequenceTrigger_EndChoice_C.On Stay VO Finished
	 */
	struct APlaySequenceTrigger_EndChoice_C_OnStayVOFinished_Params
	{	};

	/**
	 * Function PlaySequenceTrigger_EndChoice.PlaySequenceTrigger_EndChoice_C.ResetTrigger
	 */
	struct APlaySequenceTrigger_EndChoice_C_ResetTrigger_Params
	{	};

	/**
	 * Function PlaySequenceTrigger_EndChoice.PlaySequenceTrigger_EndChoice_C.ExecuteUbergraph_PlaySequenceTrigger_EndChoice
	 */
	struct APlaySequenceTrigger_EndChoice_C_ExecuteUbergraph_PlaySequenceTrigger_EndChoice_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6YFA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
