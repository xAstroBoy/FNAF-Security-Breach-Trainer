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
	 * Function PRE_MOD_ArcadeCabinent_00.PRE_MOD_ArcadeCabinent_00_C.ScreenSwitcherFunction
	 */
	struct APRE_MOD_ArcadeCabinent_00_C_ScreenSwitcherFunction_Params
	{	};

	/**
	 * Function PRE_MOD_ArcadeCabinent_00.PRE_MOD_ArcadeCabinent_00_C.UserConstructionScript
	 */
	struct APRE_MOD_ArcadeCabinent_00_C_UserConstructionScript_Params
	{	};

	/**
	 * Function PRE_MOD_ArcadeCabinent_00.PRE_MOD_ArcadeCabinent_00_C.Flicer__FinishedFunc
	 */
	struct APRE_MOD_ArcadeCabinent_00_C_Flicer__FinishedFunc_Params
	{	};

	/**
	 * Function PRE_MOD_ArcadeCabinent_00.PRE_MOD_ArcadeCabinent_00_C.Flicer__UpdateFunc
	 */
	struct APRE_MOD_ArcadeCabinent_00_C_Flicer__UpdateFunc_Params
	{	};

	/**
	 * Function PRE_MOD_ArcadeCabinent_00.PRE_MOD_ArcadeCabinent_00_C.ReceiveBeginPlay
	 */
	struct APRE_MOD_ArcadeCabinent_00_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function PRE_MOD_ArcadeCabinent_00.PRE_MOD_ArcadeCabinent_00_C.Update
	 */
	struct APRE_MOD_ArcadeCabinent_00_C_Update_Params
	{	};

	/**
	 * Function PRE_MOD_ArcadeCabinent_00.PRE_MOD_ArcadeCabinent_00_C.ReceiveTick
	 */
	struct APRE_MOD_ArcadeCabinent_00_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PRE_MOD_ArcadeCabinent_00.PRE_MOD_ArcadeCabinent_00_C.PlayEmitter
	 */
	struct APRE_MOD_ArcadeCabinent_00_C_PlayEmitter_Params
	{	};

	/**
	 * Function PRE_MOD_ArcadeCabinent_00.PRE_MOD_ArcadeCabinent_00_C.StopEmitter
	 */
	struct APRE_MOD_ArcadeCabinent_00_C_StopEmitter_Params
	{	};

	/**
	 * Function PRE_MOD_ArcadeCabinent_00.PRE_MOD_ArcadeCabinent_00_C.ToggleInRange
	 */
	struct APRE_MOD_ArcadeCabinent_00_C_ToggleInRange_Params
	{
	public:
		bool                                                       InRange;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PRE_MOD_ArcadeCabinent_00.PRE_MOD_ArcadeCabinent_00_C.ExecuteUbergraph_PRE_MOD_ArcadeCabinent_00
	 */
	struct APRE_MOD_ArcadeCabinent_00_C_ExecuteUbergraph_PRE_MOD_ArcadeCabinent_00_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5TTF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
