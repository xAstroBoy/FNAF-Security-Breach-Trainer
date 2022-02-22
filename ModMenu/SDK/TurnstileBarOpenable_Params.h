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
	 * Function TurnstileBarOpenable.TurnstileBarOpenable_C.HasDoorInitialized
	 */
	struct ATurnstileBarOpenable_C_HasDoorInitialized_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function TurnstileBarOpenable.TurnstileBarOpenable_C.IsDoorLockedForPlayer
	 */
	struct ATurnstileBarOpenable_C_IsDoorLockedForPlayer_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function TurnstileBarOpenable.TurnstileBarOpenable_C.IsDoorOpen
	 */
	struct ATurnstileBarOpenable_C_IsDoorOpen_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function TurnstileBarOpenable.TurnstileBarOpenable_C.IsDoorLockedForAI
	 */
	struct ATurnstileBarOpenable_C_IsDoorLockedForAI_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function TurnstileBarOpenable.TurnstileBarOpenable_C.GateOpen__FinishedFunc
	 */
	struct ATurnstileBarOpenable_C_GateOpen__FinishedFunc_Params
	{
	};

	/**
	 * Function TurnstileBarOpenable.TurnstileBarOpenable_C.GateOpen__UpdateFunc
	 */
	struct ATurnstileBarOpenable_C_GateOpen__UpdateFunc_Params
	{
	};

	/**
	 * Function TurnstileBarOpenable.TurnstileBarOpenable_C.SetDoorLockPlayer
	 */
	struct ATurnstileBarOpenable_C_SetDoorLockPlayer_Params
	{
	public:
		bool                                                       Lock;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function TurnstileBarOpenable.TurnstileBarOpenable_C.SetDoorRequiredItem
	 */
	struct ATurnstileBarOpenable_C_SetDoorRequiredItem_Params
	{
	public:
		class FName                                                ItemName;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TurnstileBarOpenable.TurnstileBarOpenable_C.SetSecurityLevel
	 */
	struct ATurnstileBarOpenable_C_SetSecurityLevel_Params
	{
	public:
		int32_t                                                    NewSecurityLevel;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TurnstileBarOpenable.TurnstileBarOpenable_C.ReceiveBeginPlay
	 */
	struct ATurnstileBarOpenable_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function TurnstileBarOpenable.TurnstileBarOpenable_C.SetDoorLockAI
	 */
	struct ATurnstileBarOpenable_C_SetDoorLockAI_Params
	{
	public:
		bool                                                       Lock;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function TurnstileBarOpenable.TurnstileBarOpenable_C.ForceDoorOpen
	 */
	struct ATurnstileBarOpenable_C_ForceDoorOpen_Params
	{
	};

	/**
	 * Function TurnstileBarOpenable.TurnstileBarOpenable_C.BndEvt__AIDetector_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ATurnstileBarOpenable_C_BndEvt__AIDetector_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
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
	 * Function TurnstileBarOpenable.TurnstileBarOpenable_C.BndEvt__AIDetector_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct ATurnstileBarOpenable_C_BndEvt__AIDetector_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TurnstileBarOpenable.TurnstileBarOpenable_C.Open For AI
	 */
	struct ATurnstileBarOpenable_C_Open_For_AI_Params
	{
	};

	/**
	 * Function TurnstileBarOpenable.TurnstileBarOpenable_C.Close For AI
	 */
	struct ATurnstileBarOpenable_C_Close_For_AI_Params
	{
	};

	/**
	 * Function TurnstileBarOpenable.TurnstileBarOpenable_C.Unblock Player
	 */
	struct ATurnstileBarOpenable_C_Unblock_Player_Params
	{
	};

	/**
	 * Function TurnstileBarOpenable.TurnstileBarOpenable_C.Set Gate Collision
	 */
	struct ATurnstileBarOpenable_C_Set_Gate_Collision_Params
	{
	};

	/**
	 * Function TurnstileBarOpenable.TurnstileBarOpenable_C.ForceDoorClose
	 */
	struct ATurnstileBarOpenable_C_ForceDoorClose_Params
	{
	};

	/**
	 * Function TurnstileBarOpenable.TurnstileBarOpenable_C.ExecuteUbergraph_TurnstileBarOpenable
	 */
	struct ATurnstileBarOpenable_C_ExecuteUbergraph_TurnstileBarOpenable_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
