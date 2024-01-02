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
	 * Function PowerStationManager.PowerStationManager_C.GetPowerStationEvent
	 */
	struct APowerStationManager_C_GetPowerStationEvent_Params
	{
	public:
		unsigned char                                              UnknownData_8CYT[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PowerStationManager.PowerStationManager_C.IsPlayerInPowerStation
	 */
	struct APowerStationManager_C_IsPlayerInPowerStation_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PowerStationManager.PowerStationManager_C.GetPowerStationID
	 */
	struct APowerStationManager_C_GetPowerStationID_Params
	{
	public:
		class APowerStation_Actor_C*                               PowerStation;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    PowerStationID;                                          // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PowerStationManager.PowerStationManager_C.GetPowerStationByID
	 */
	struct APowerStationManager_C_GetPowerStationByID_Params
	{
	public:
		int32_t                                                    PowerStationID;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TMI4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APowerStation_Actor_C*                               PowerStation;                                            // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PowerStationManager.PowerStationManager_C.Finish Power Station Event
	 */
	struct APowerStationManager_C_FinishPowerStationEvent_Params
	{	};

	/**
	 * Function PowerStationManager.PowerStationManager_C.Power Station Entered
	 */
	struct APowerStationManager_C_PowerStationEntered_Params
	{
	public:
		class APowerStation_Actor_C*                               PowerStation;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PowerStationManager.PowerStationManager_C.ExecuteUbergraph_PowerStationManager
	 */
	struct APowerStationManager_C_ExecuteUbergraph_PowerStationManager_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PMFM[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PowerStationManager.PowerStationManager_C.OnPowerStationEntered__DelegateSignature
	 */
	struct APowerStationManager_C_OnPowerStationEntered__DelegateSignature_Params
	{
	public:
		class APowerStation_Actor_C*                               PowerStation;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    PowerStationID;                                          // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
