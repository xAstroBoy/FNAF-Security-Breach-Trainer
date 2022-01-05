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
	 * Function PRE_PartyDoor_Long.PRE_PartyDoor_Long_C.CanDeactivate
	 */
	struct APRE_PartyDoor_Long_C_CanDeactivate_Params
	{
	public:
		bool                                                       CanDeactivate;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function PRE_PartyDoor_Long.PRE_PartyDoor_Long_C.GetActivatableState
	 */
	struct APRE_PartyDoor_Long_C_GetActivatableState_Params
	{
	public:
		class AActor*                                              Activator;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TEnumAsByte<ActivatableState_EActivatableState>            CurrentState;                                            // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PRE_PartyDoor_Long.PRE_PartyDoor_Long_C.CanActivate
	 */
	struct APRE_PartyDoor_Long_C_CanActivate_Params
	{
	public:
		class AActor*                                              Activator;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CanActivate;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		fnaf9_EConditionFailReason                                 CantReason;                                              // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PRE_PartyDoor_Long.PRE_PartyDoor_Long_C.HasDoorInitialized
	 */
	struct APRE_PartyDoor_Long_C_HasDoorInitialized_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function PRE_PartyDoor_Long.PRE_PartyDoor_Long_C.IsDoorLockedForPlayer
	 */
	struct APRE_PartyDoor_Long_C_IsDoorLockedForPlayer_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function PRE_PartyDoor_Long.PRE_PartyDoor_Long_C.IsDoorOpen
	 */
	struct APRE_PartyDoor_Long_C_IsDoorOpen_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function PRE_PartyDoor_Long.PRE_PartyDoor_Long_C.IsDoorLockedForAI
	 */
	struct APRE_PartyDoor_Long_C_IsDoorLockedForAI_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function PRE_PartyDoor_Long.PRE_PartyDoor_Long_C.ClearPlayerBlockers
	 */
	struct APRE_PartyDoor_Long_C_ClearPlayerBlockers_Params
	{
	};

	/**
	 * Function PRE_PartyDoor_Long.PRE_PartyDoor_Long_C.SetupPlayerBlockers
	 */
	struct APRE_PartyDoor_Long_C_SetupPlayerBlockers_Params
	{
	};

	/**
	 * Function PRE_PartyDoor_Long.PRE_PartyDoor_Long_C.UserConstructionScript
	 */
	struct APRE_PartyDoor_Long_C_UserConstructionScript_Params
	{
	};

	/**
	 * Function PRE_PartyDoor_Long.PRE_PartyDoor_Long_C.DoorMover__FinishedFunc
	 */
	struct APRE_PartyDoor_Long_C_DoorMover__FinishedFunc_Params
	{
	};

	/**
	 * Function PRE_PartyDoor_Long.PRE_PartyDoor_Long_C.DoorMover__UpdateFunc
	 */
	struct APRE_PartyDoor_Long_C_DoorMover__UpdateFunc_Params
	{
	};

	/**
	 * Function PRE_PartyDoor_Long.PRE_PartyDoor_Long_C.DoorMover__CloseImpact__EventFunc
	 */
	struct APRE_PartyDoor_Long_C_DoorMover__CloseImpact__EventFunc_Params
	{
	};

	/**
	 * Function PRE_PartyDoor_Long.PRE_PartyDoor_Long_C.ForceDoorOpen
	 */
	struct APRE_PartyDoor_Long_C_ForceDoorOpen_Params
	{
	};

	/**
	 * Function PRE_PartyDoor_Long.PRE_PartyDoor_Long_C.ForceDoorClose
	 */
	struct APRE_PartyDoor_Long_C_ForceDoorClose_Params
	{
	};

	/**
	 * Function PRE_PartyDoor_Long.PRE_PartyDoor_Long_C.ActivateObject
	 */
	struct APRE_PartyDoor_Long_C_ActivateObject_Params
	{
	public:
		class AActor*                                              Activator;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PRE_PartyDoor_Long.PRE_PartyDoor_Long_C.BndEvt__Door_Collision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct APRE_PartyDoor_Long_C_BndEvt__Door_Collision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PRE_PartyDoor_Long.PRE_PartyDoor_Long_C.BndEvt__Door_Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct APRE_PartyDoor_Long_C_BndEvt__Door_Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

	};

	/**
	 * Function PRE_PartyDoor_Long.PRE_PartyDoor_Long_C.SetDeactivated
	 */
	struct APRE_PartyDoor_Long_C_SetDeactivated_Params
	{
	};

	/**
	 * Function PRE_PartyDoor_Long.PRE_PartyDoor_Long_C.DeactivateObject
	 */
	struct APRE_PartyDoor_Long_C_DeactivateObject_Params
	{
	public:
		class AActor*                                              Deactivator;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PRE_PartyDoor_Long.PRE_PartyDoor_Long_C.SetActivated
	 */
	struct APRE_PartyDoor_Long_C_SetActivated_Params
	{
	};

	/**
	 * Function PRE_PartyDoor_Long.PRE_PartyDoor_Long_C.OnActivatorDone
	 */
	struct APRE_PartyDoor_Long_C_OnActivatorDone_Params
	{
	public:
		class AActor*                                              Activator;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PRE_PartyDoor_Long.PRE_PartyDoor_Long_C.On Door Opening
	 */
	struct APRE_PartyDoor_Long_C_On_Door_Opening_Params
	{
	};

	/**
	 * Function PRE_PartyDoor_Long.PRE_PartyDoor_Long_C.On Door Closing
	 */
	struct APRE_PartyDoor_Long_C_On_Door_Closing_Params
	{
	};

	/**
	 * Function PRE_PartyDoor_Long.PRE_PartyDoor_Long_C.ReceiveBeginPlay
	 */
	struct APRE_PartyDoor_Long_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function PRE_PartyDoor_Long.PRE_PartyDoor_Long_C.SetDoorLockPlayer
	 */
	struct APRE_PartyDoor_Long_C_SetDoorLockPlayer_Params
	{
	public:
		bool                                                       Lock;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function PRE_PartyDoor_Long.PRE_PartyDoor_Long_C.SetDoorLockAI
	 */
	struct APRE_PartyDoor_Long_C_SetDoorLockAI_Params
	{
	public:
		bool                                                       Lock;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function PRE_PartyDoor_Long.PRE_PartyDoor_Long_C.SetDoorRequiredItem
	 */
	struct APRE_PartyDoor_Long_C_SetDoorRequiredItem_Params
	{
	public:
		class FName                                                ItemName;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PRE_PartyDoor_Long.PRE_PartyDoor_Long_C.SetSecurityLevel
	 */
	struct APRE_PartyDoor_Long_C_SetSecurityLevel_Params
	{
	public:
		int                                                        NewSecurityLevel;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PRE_PartyDoor_Long.PRE_PartyDoor_Long_C.BndEvt__Door_K2Node_ComponentBoundEvent_0_OnOpenCloseDoor__DelegateSignature
	 */
	struct APRE_PartyDoor_Long_C_BndEvt__Door_K2Node_ComponentBoundEvent_0_OnOpenCloseDoor__DelegateSignature_Params
	{
	public:
		bool                                                       bIsPlayer;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function PRE_PartyDoor_Long.PRE_PartyDoor_Long_C.BndEvt__Door_K2Node_ComponentBoundEvent_1_OnOpenCloseDoor__DelegateSignature
	 */
	struct APRE_PartyDoor_Long_C_BndEvt__Door_K2Node_ComponentBoundEvent_1_OnOpenCloseDoor__DelegateSignature_Params
	{
	public:
		bool                                                       bIsPlayer;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function PRE_PartyDoor_Long.PRE_PartyDoor_Long_C.PlayOpenSoundCinematic
	 */
	struct APRE_PartyDoor_Long_C_PlayOpenSoundCinematic_Params
	{
	};

	/**
	 * Function PRE_PartyDoor_Long.PRE_PartyDoor_Long_C.PlayOpenedSoundCinematic
	 */
	struct APRE_PartyDoor_Long_C_PlayOpenedSoundCinematic_Params
	{
	};

	/**
	 * Function PRE_PartyDoor_Long.PRE_PartyDoor_Long_C.ExecuteUbergraph_PRE_PartyDoor_Long
	 */
	struct APRE_PartyDoor_Long_C_ExecuteUbergraph_PRE_PartyDoor_Long_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
