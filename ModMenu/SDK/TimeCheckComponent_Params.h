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
	 * Function TimeCheckComponent.TimeCheckComponent_C.ConditionsMet
	 */
	struct UTimeCheckComponent_C_ConditionsMet_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TimeCheckComponent.TimeCheckComponent_C.SendConditionUpdate
	 */
	struct UTimeCheckComponent_C_SendConditionUpdate_Params
	{	};

	/**
	 * Function TimeCheckComponent.TimeCheckComponent_C.CheckTime
	 */
	struct UTimeCheckComponent_C_CheckTime_Params
	{	};

	/**
	 * Function TimeCheckComponent.TimeCheckComponent_C.HasMetTimeConditions
	 */
	struct UTimeCheckComponent_C_HasMetTimeConditions_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_77LE[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TimeCheckComponent.TimeCheckComponent_C.On Time Hit
	 */
	struct UTimeCheckComponent_C_OnTimeHit_Params
	{	};

	/**
	 * Function TimeCheckComponent.TimeCheckComponent_C.On Time End
	 */
	struct UTimeCheckComponent_C_OnTimeEnd_Params
	{	};

	/**
	 * Function TimeCheckComponent.TimeCheckComponent_C.On World State Changed
	 */
	struct UTimeCheckComponent_C_OnWorldStateChanged_Params
	{
	public:
		EFNAFGameState                                             NewState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EFNAFGameState                                             PreviousState;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TimeCheckComponent.TimeCheckComponent_C.On Time Changed
	 */
	struct UTimeCheckComponent_C_OnTimeChanged_Params
	{
	public:
		int32_t                                                    Hour;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Minute;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TimeCheckComponent.TimeCheckComponent_C.ReceiveBeginPlay
	 */
	struct UTimeCheckComponent_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function TimeCheckComponent.TimeCheckComponent_C.BindConditionUpdatedDelegate
	 */
	struct UTimeCheckComponent_C_BindConditionUpdatedDelegate_Params
	{
	public:
		class FScriptDelegate                                      OnConditionResultUpdated;                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	};

	/**
	 * Function TimeCheckComponent.TimeCheckComponent_C.UnbindConditionUpdatedDelegate
	 */
	struct UTimeCheckComponent_C_UnbindConditionUpdatedDelegate_Params
	{
	public:
		class FScriptDelegate                                      OnConditionResultUpdated;                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	};

	/**
	 * Function TimeCheckComponent.TimeCheckComponent_C.ExecuteUbergraph_TimeCheckComponent
	 */
	struct UTimeCheckComponent_C_ExecuteUbergraph_TimeCheckComponent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Y8YL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TimeCheckComponent.TimeCheckComponent_C.MoonManTimeHit__DelegateSignature
	 */
	struct UTimeCheckComponent_C_MoonManTimeHit__DelegateSignature_Params
	{	};

	/**
	 * Function TimeCheckComponent.TimeCheckComponent_C.OnTimeEnd__DelegateSignature
	 */
	struct UTimeCheckComponent_C_OnTimeEnd__DelegateSignature_Params
	{	};

	/**
	 * Function TimeCheckComponent.TimeCheckComponent_C.OnTimeStart__DelegateSignature
	 */
	struct UTimeCheckComponent_C_OnTimeStart__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
