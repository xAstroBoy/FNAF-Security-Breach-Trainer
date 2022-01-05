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
	 * Function BP_Underground_VentDoor.BP_Underground_VentDoor_C.HasDoorInitialized
	 */
	struct ABP_Underground_VentDoor_C_HasDoorInitialized_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_Underground_VentDoor.BP_Underground_VentDoor_C.IsDoorLockedForAI
	 */
	struct ABP_Underground_VentDoor_C_IsDoorLockedForAI_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_Underground_VentDoor.BP_Underground_VentDoor_C.IsDoorLockedForPlayer
	 */
	struct ABP_Underground_VentDoor_C_IsDoorLockedForPlayer_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_Underground_VentDoor.BP_Underground_VentDoor_C.IsDoorOpen
	 */
	struct ABP_Underground_VentDoor_C_IsDoorOpen_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_Underground_VentDoor.BP_Underground_VentDoor_C.Door_Open_Close__FinishedFunc
	 */
	struct ABP_Underground_VentDoor_C_Door_Open_Close__FinishedFunc_Params
	{
	};

	/**
	 * Function BP_Underground_VentDoor.BP_Underground_VentDoor_C.Door_Open_Close__UpdateFunc
	 */
	struct ABP_Underground_VentDoor_C_Door_Open_Close__UpdateFunc_Params
	{
	};

	/**
	 * Function BP_Underground_VentDoor.BP_Underground_VentDoor_C.SetDoorRequiredItem
	 */
	struct ABP_Underground_VentDoor_C_SetDoorRequiredItem_Params
	{
	public:
		class FName                                                ItemName;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Underground_VentDoor.BP_Underground_VentDoor_C.SetSecurityLevel
	 */
	struct ABP_Underground_VentDoor_C_SetSecurityLevel_Params
	{
	public:
		int                                                        NewSecurityLevel;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Underground_VentDoor.BP_Underground_VentDoor_C.ForceDoorClose
	 */
	struct ABP_Underground_VentDoor_C_ForceDoorClose_Params
	{
	};

	/**
	 * Function BP_Underground_VentDoor.BP_Underground_VentDoor_C.BndEvt__Door_K2Node_ComponentBoundEvent_0_OnInitialOpen__DelegateSignature
	 */
	struct ABP_Underground_VentDoor_C_BndEvt__Door_K2Node_ComponentBoundEvent_0_OnInitialOpen__DelegateSignature_Params
	{
	};

	/**
	 * Function BP_Underground_VentDoor.BP_Underground_VentDoor_C.BndEvt__Door_K2Node_ComponentBoundEvent_1_OnOpenCloseDoor__DelegateSignature
	 */
	struct ABP_Underground_VentDoor_C_BndEvt__Door_K2Node_ComponentBoundEvent_1_OnOpenCloseDoor__DelegateSignature_Params
	{
	public:
		bool                                                       bIsPlayer;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_Underground_VentDoor.BP_Underground_VentDoor_C.BndEvt__Door_K2Node_ComponentBoundEvent_2_OnOpenCloseDoor__DelegateSignature
	 */
	struct ABP_Underground_VentDoor_C_BndEvt__Door_K2Node_ComponentBoundEvent_2_OnOpenCloseDoor__DelegateSignature_Params
	{
	public:
		bool                                                       bIsPlayer;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_Underground_VentDoor.BP_Underground_VentDoor_C.ForceDoorOpen
	 */
	struct ABP_Underground_VentDoor_C_ForceDoorOpen_Params
	{
	};

	/**
	 * Function BP_Underground_VentDoor.BP_Underground_VentDoor_C.SetDoorLockAI
	 */
	struct ABP_Underground_VentDoor_C_SetDoorLockAI_Params
	{
	public:
		bool                                                       Lock;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_Underground_VentDoor.BP_Underground_VentDoor_C.SetDoorLockPlayer
	 */
	struct ABP_Underground_VentDoor_C_SetDoorLockPlayer_Params
	{
	public:
		bool                                                       Lock;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_Underground_VentDoor.BP_Underground_VentDoor_C.ReceiveBeginPlay
	 */
	struct ABP_Underground_VentDoor_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function BP_Underground_VentDoor.BP_Underground_VentDoor_C.ExecuteUbergraph_BP_Underground_VentDoor
	 */
	struct ABP_Underground_VentDoor_C_ExecuteUbergraph_BP_Underground_VentDoor_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
