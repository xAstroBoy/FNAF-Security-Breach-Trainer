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
	 * Function PowerStation_Actor.PowerStation_Actor_C.GetPlayerInteractor
	 */
	struct APowerStation_Actor_C_GetPlayerInteractor_Params
	{
	public:
		class APowerStationPlayerInteractible_C*                   AsPower_Station_Player_Interactible;                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PowerStation_Actor.PowerStation_Actor_C.ForceEnterPowerStation
	 */
	struct APowerStation_Actor_C_ForceEnterPowerStation_Params
	{
	};

	/**
	 * Function PowerStation_Actor.PowerStation_Actor_C.SetPlayerCollision
	 */
	struct APowerStation_Actor_C_SetPlayerCollision_Params
	{
	public:
		bool                                                       enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function PowerStation_Actor.PowerStation_Actor_C.PlungerMovement__FinishedFunc
	 */
	struct APowerStation_Actor_C_PlungerMovement__FinishedFunc_Params
	{
	};

	/**
	 * Function PowerStation_Actor.PowerStation_Actor_C.PlungerMovement__UpdateFunc
	 */
	struct APowerStation_Actor_C_PlungerMovement__UpdateFunc_Params
	{
	};

	/**
	 * Function PowerStation_Actor.PowerStation_Actor_C.DoorMovement__FinishedFunc
	 */
	struct APowerStation_Actor_C_DoorMovement__FinishedFunc_Params
	{
	};

	/**
	 * Function PowerStation_Actor.PowerStation_Actor_C.DoorMovement__UpdateFunc
	 */
	struct APowerStation_Actor_C_DoorMovement__UpdateFunc_Params
	{
	};

	/**
	 * Function PowerStation_Actor.PowerStation_Actor_C.ReceiveBeginPlay
	 */
	struct APowerStation_Actor_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function PowerStation_Actor.PowerStation_Actor_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct APowerStation_Actor_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
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
	 * Function PowerStation_Actor.PowerStation_Actor_C.BndEvt__Box1_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct APowerStation_Actor_C_BndEvt__Box1_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params
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
	 * Function PowerStation_Actor.PowerStation_Actor_C.Setup From Load
	 */
	struct APowerStation_Actor_C_Setup_From_Load_Params
	{
	};

	/**
	 * Function PowerStation_Actor.PowerStation_Actor_C.PowerPump
	 */
	struct APowerStation_Actor_C_PowerPump_Params
	{
	};

	/**
	 * Function PowerStation_Actor.PowerStation_Actor_C.DoorOpenClose
	 */
	struct APowerStation_Actor_C_DoorOpenClose_Params
	{
	public:
		bool                                                       Open;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function PowerStation_Actor.PowerStation_Actor_C.TriggerFreddyPawnAnimation
	 */
	struct APowerStation_Actor_C_TriggerFreddyPawnAnimation_Params
	{
	};

	/**
	 * Function PowerStation_Actor.PowerStation_Actor_C.ReceiveTick
	 */
	struct APowerStation_Actor_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PowerStation_Actor.PowerStation_Actor_C.BndEvt__FreddyTrigger_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct APowerStation_Actor_C_BndEvt__FreddyTrigger_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PowerStation_Actor.PowerStation_Actor_C.BndEvt__WavingTrigger_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct APowerStation_Actor_C_BndEvt__WavingTrigger_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PowerStation_Actor.PowerStation_Actor_C.PlayDoorOpenSFXCinematic
	 */
	struct APowerStation_Actor_C_PlayDoorOpenSFXCinematic_Params
	{
	};

	/**
	 * Function PowerStation_Actor.PowerStation_Actor_C.PlayDoorCloseSFXCinematic
	 */
	struct APowerStation_Actor_C_PlayDoorCloseSFXCinematic_Params
	{
	};

	/**
	 * Function PowerStation_Actor.PowerStation_Actor_C.OnOverlapFreddyTrigger
	 */
	struct APowerStation_Actor_C_OnOverlapFreddyTrigger_Params
	{
	public:
		class AActor*                                              Other_Actor;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PowerStation_Actor.PowerStation_Actor_C.FreddyReachedPowerStation
	 */
	struct APowerStation_Actor_C_FreddyReachedPowerStation_Params
	{
	};

	/**
	 * Function PowerStation_Actor.PowerStation_Actor_C.ExecuteUbergraph_PowerStation_Actor
	 */
	struct APowerStation_Actor_C_ExecuteUbergraph_PowerStation_Actor_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
