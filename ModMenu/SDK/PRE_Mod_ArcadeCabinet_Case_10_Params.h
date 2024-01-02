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
	 * Function PRE_Mod_ArcadeCabinet_Case_10.PRE_Mod_ArcadeCabinet_Case_9_C.ReceiveTick
	 */
	struct APRE_Mod_ArcadeCabinet_Case_9_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PRE_Mod_ArcadeCabinet_Case_10.PRE_Mod_ArcadeCabinet_Case_9_C.PlayEmitter
	 */
	struct APRE_Mod_ArcadeCabinet_Case_9_C_PlayEmitter_Params
	{	};

	/**
	 * Function PRE_Mod_ArcadeCabinet_Case_10.PRE_Mod_ArcadeCabinet_Case_9_C.StopEmitter
	 */
	struct APRE_Mod_ArcadeCabinet_Case_9_C_StopEmitter_Params
	{	};

	/**
	 * Function PRE_Mod_ArcadeCabinet_Case_10.PRE_Mod_ArcadeCabinet_Case_9_C.ToggleInRange
	 */
	struct APRE_Mod_ArcadeCabinet_Case_9_C_ToggleInRange_Params
	{
	public:
		bool                                                       InRange;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PRE_Mod_ArcadeCabinet_Case_10.PRE_Mod_ArcadeCabinet_Case_9_C.ExecuteUbergraph_PRE_Mod_ArcadeCabinet_Case_10
	 */
	struct APRE_Mod_ArcadeCabinet_Case_9_C_ExecuteUbergraph_PRE_Mod_ArcadeCabinet_Case_10_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OGG9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
