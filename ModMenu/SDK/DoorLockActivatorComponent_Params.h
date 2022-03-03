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
	 * Function DoorLockActivatorComponent.DoorLockActivatorComponent_C.CanDeactivate
	 */
	struct UDoorLockActivatorComponent_C_CanDeactivate_Params
	{
	public:
		bool                                                       CanDeactivate;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function DoorLockActivatorComponent.DoorLockActivatorComponent_C.GetActivatableState
	 */
	struct UDoorLockActivatorComponent_C_GetActivatableState_Params
	{
	public:
		class AActor*                                              Activator;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ActivatableState_EActivatableState                         CurrentState;                                            // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function DoorLockActivatorComponent.DoorLockActivatorComponent_C.CanActivate
	 */
	struct UDoorLockActivatorComponent_C_CanActivate_Params
	{
	public:
		class AActor*                                              Activator;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CanActivate;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		fnaf9_EConditionFailReason                                 CantReason;                                              // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function DoorLockActivatorComponent.DoorLockActivatorComponent_C.DetermineNewDoorLockStatus
	 */
	struct UDoorLockActivatorComponent_C_DetermineNewDoorLockStatus_Params
	{
	public:
		bool                                                       CurrentState;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function DoorLockActivatorComponent.DoorLockActivatorComponent_C.SetDoorLocks
	 */
	struct UDoorLockActivatorComponent_C_SetDoorLocks_Params
	{
	};

	/**
	 * Function DoorLockActivatorComponent.DoorLockActivatorComponent_C.OnActivatorDone
	 */
	struct UDoorLockActivatorComponent_C_OnActivatorDone_Params
	{
	public:
		class AActor*                                              Activator;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function DoorLockActivatorComponent.DoorLockActivatorComponent_C.SetActivated
	 */
	struct UDoorLockActivatorComponent_C_SetActivated_Params
	{
	};

	/**
	 * Function DoorLockActivatorComponent.DoorLockActivatorComponent_C.DeactivateObject
	 */
	struct UDoorLockActivatorComponent_C_DeactivateObject_Params
	{
	public:
		class AActor*                                              Deactivator;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function DoorLockActivatorComponent.DoorLockActivatorComponent_C.SetDeactivated
	 */
	struct UDoorLockActivatorComponent_C_SetDeactivated_Params
	{
	};

	/**
	 * Function DoorLockActivatorComponent.DoorLockActivatorComponent_C.ReceiveBeginPlay
	 */
	struct UDoorLockActivatorComponent_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function DoorLockActivatorComponent.DoorLockActivatorComponent_C.ActivateObject
	 */
	struct UDoorLockActivatorComponent_C_ActivateObject_Params
	{
	public:
		class AActor*                                              Activator;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function DoorLockActivatorComponent.DoorLockActivatorComponent_C.ExecuteUbergraph_DoorLockActivatorComponent
	 */
	struct UDoorLockActivatorComponent_C_ExecuteUbergraph_DoorLockActivatorComponent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
