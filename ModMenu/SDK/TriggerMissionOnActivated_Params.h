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
	 * Function TriggerMissionOnActivated.TriggerMissionOnActivated_C.CanDeactivate
	 */
	struct UTriggerMissionOnActivated_C_CanDeactivate_Params
	{
	public:
		bool                                                       CanDeactivate;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TriggerMissionOnActivated.TriggerMissionOnActivated_C.GetActivatableState
	 */
	struct UTriggerMissionOnActivated_C_GetActivatableState_Params
	{
	public:
		class AActor*                                              Activator;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EActivatableState                                          CurrentState;                                            // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TriggerMissionOnActivated.TriggerMissionOnActivated_C.CanActivate
	 */
	struct UTriggerMissionOnActivated_C_CanActivate_Params
	{
	public:
		class AActor*                                              Activator;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CanActivate;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EConditionFailReason                                       CantReason;                                              // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TriggerMissionOnActivated.TriggerMissionOnActivated_C.DeactivateObject
	 */
	struct UTriggerMissionOnActivated_C_DeactivateObject_Params
	{
	public:
		class AActor*                                              Deactivator;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TriggerMissionOnActivated.TriggerMissionOnActivated_C.SetDeactivated
	 */
	struct UTriggerMissionOnActivated_C_SetDeactivated_Params
	{	};

	/**
	 * Function TriggerMissionOnActivated.TriggerMissionOnActivated_C.ActivateObject
	 */
	struct UTriggerMissionOnActivated_C_ActivateObject_Params
	{
	public:
		class AActor*                                              Activator;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TriggerMissionOnActivated.TriggerMissionOnActivated_C.ReceiveBeginPlay
	 */
	struct UTriggerMissionOnActivated_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function TriggerMissionOnActivated.TriggerMissionOnActivated_C.ReceiveEndPlay
	 */
	struct UTriggerMissionOnActivated_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TriggerMissionOnActivated.TriggerMissionOnActivated_C.SetActivated
	 */
	struct UTriggerMissionOnActivated_C_SetActivated_Params
	{	};

	/**
	 * Function TriggerMissionOnActivated.TriggerMissionOnActivated_C.OnActivatorDone
	 */
	struct UTriggerMissionOnActivated_C_OnActivatorDone_Params
	{
	public:
		class AActor*                                              Activator;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TriggerMissionOnActivated.TriggerMissionOnActivated_C.ExecuteUbergraph_TriggerMissionOnActivated
	 */
	struct UTriggerMissionOnActivated_C_ExecuteUbergraph_TriggerMissionOnActivated_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_B944[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
