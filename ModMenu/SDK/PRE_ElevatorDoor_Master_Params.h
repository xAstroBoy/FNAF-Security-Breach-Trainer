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
	 * Function PRE_ElevatorDoor_Master.PRE_ElevatorDoor_Master_C.HasDoorInitialized
	 */
	struct APRE_ElevatorDoor_Master_C_HasDoorInitialized_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function PRE_ElevatorDoor_Master.PRE_ElevatorDoor_Master_C.IsDoorLockedForAI
	 */
	struct APRE_ElevatorDoor_Master_C_IsDoorLockedForAI_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function PRE_ElevatorDoor_Master.PRE_ElevatorDoor_Master_C.IsDoorLockedForPlayer
	 */
	struct APRE_ElevatorDoor_Master_C_IsDoorLockedForPlayer_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function PRE_ElevatorDoor_Master.PRE_ElevatorDoor_Master_C.IsDoorOpen
	 */
	struct APRE_ElevatorDoor_Master_C_IsDoorOpen_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function PRE_ElevatorDoor_Master.PRE_ElevatorDoor_Master_C.TickDoor
	 */
	struct APRE_ElevatorDoor_Master_C_TickDoor_Params
	{
	};

	/**
	 * Function PRE_ElevatorDoor_Master.PRE_ElevatorDoor_Master_C.SetOpenPercent
	 */
	struct APRE_ElevatorDoor_Master_C_SetOpenPercent_Params
	{
	public:
		float                                                      P_CurrentOpenPercent;                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PRE_ElevatorDoor_Master.PRE_ElevatorDoor_Master_C.UserConstructionScript
	 */
	struct APRE_ElevatorDoor_Master_C_UserConstructionScript_Params
	{
	};

	/**
	 * Function PRE_ElevatorDoor_Master.PRE_ElevatorDoor_Master_C.SetDoorRequiredItem
	 */
	struct APRE_ElevatorDoor_Master_C_SetDoorRequiredItem_Params
	{
	public:
		class FName                                                ItemName;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PRE_ElevatorDoor_Master.PRE_ElevatorDoor_Master_C.SetSecurityLevel
	 */
	struct APRE_ElevatorDoor_Master_C_SetSecurityLevel_Params
	{
	public:
		int32_t                                                    NewSecurityLevel;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PRE_ElevatorDoor_Master.PRE_ElevatorDoor_Master_C.ReceiveBeginPlay
	 */
	struct APRE_ElevatorDoor_Master_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function PRE_ElevatorDoor_Master.PRE_ElevatorDoor_Master_C.ReceiveTick
	 */
	struct APRE_ElevatorDoor_Master_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PRE_ElevatorDoor_Master.PRE_ElevatorDoor_Master_C.ForceDoorOpen
	 */
	struct APRE_ElevatorDoor_Master_C_ForceDoorOpen_Params
	{
	};

	/**
	 * Function PRE_ElevatorDoor_Master.PRE_ElevatorDoor_Master_C.ForceDoorClose
	 */
	struct APRE_ElevatorDoor_Master_C_ForceDoorClose_Params
	{
	};

	/**
	 * Function PRE_ElevatorDoor_Master.PRE_ElevatorDoor_Master_C.OverlapBegin
	 */
	struct APRE_ElevatorDoor_Master_C_OverlapBegin_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

	};

	/**
	 * Function PRE_ElevatorDoor_Master.PRE_ElevatorDoor_Master_C.OverlapEnd
	 */
	struct APRE_ElevatorDoor_Master_C_OverlapEnd_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PRE_ElevatorDoor_Master.PRE_ElevatorDoor_Master_C.SetDoorLockPlayer
	 */
	struct APRE_ElevatorDoor_Master_C_SetDoorLockPlayer_Params
	{
	public:
		bool                                                       Lock;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function PRE_ElevatorDoor_Master.PRE_ElevatorDoor_Master_C.SetDoorLockAI
	 */
	struct APRE_ElevatorDoor_Master_C_SetDoorLockAI_Params
	{
	public:
		bool                                                       Lock;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function PRE_ElevatorDoor_Master.PRE_ElevatorDoor_Master_C.ExecuteUbergraph_PRE_ElevatorDoor_Master
	 */
	struct APRE_ElevatorDoor_Master_C_ExecuteUbergraph_PRE_ElevatorDoor_Master_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PRE_ElevatorDoor_Master.PRE_ElevatorDoor_Master_C.OnOverlapEnd__DelegateSignature
	 */
	struct APRE_ElevatorDoor_Master_C_OnOverlapEnd__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PRE_ElevatorDoor_Master.PRE_ElevatorDoor_Master_C.OnOverlapBegin__DelegateSignature
	 */
	struct APRE_ElevatorDoor_Master_C_OnOverlapBegin__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
