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
	 * Function BP_NoiseMakingTowerBase.BP_NoiseMakingTowerBase_C.GetCanDistract
	 */
	struct ABP_NoiseMakingTowerBase_C_GetCanDistract_Params
	{
	public:
		bool                                                       CanDistract;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NoiseMakingTowerBase.BP_NoiseMakingTowerBase_C.EnableOutOfOrder
	 */
	struct ABP_NoiseMakingTowerBase_C_EnableOutOfOrder_Params
	{	};

	/**
	 * Function BP_NoiseMakingTowerBase.BP_NoiseMakingTowerBase_C.SetCanDistract
	 */
	struct ABP_NoiseMakingTowerBase_C_SetCanDistract_Params
	{
	public:
		bool                                                       CanDistract;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NoiseMakingTowerBase.BP_NoiseMakingTowerBase_C.ReceiveBeginPlay
	 */
	struct ABP_NoiseMakingTowerBase_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_NoiseMakingTowerBase.BP_NoiseMakingTowerBase_C.BndEvt__Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_NoiseMakingTowerBase_C_BndEvt__Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MI9L[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_NoiseMakingTowerBase.BP_NoiseMakingTowerBase_C.On Triggered
	 */
	struct ABP_NoiseMakingTowerBase_C_OnTriggered_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       PlayAudio;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NoiseMakingTowerBase.BP_NoiseMakingTowerBase_C.Set Active
	 */
	struct ABP_NoiseMakingTowerBase_C_SetActive_Params
	{
	public:
		bool                                                       Active;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NoiseMakingTowerBase.BP_NoiseMakingTowerBase_C.BndEvt__Trigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct ABP_NoiseMakingTowerBase_C_BndEvt__Trigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NoiseMakingTowerBase.BP_NoiseMakingTowerBase_C.Reset
	 */
	struct ABP_NoiseMakingTowerBase_C_Reset_Params
	{	};

	/**
	 * Function BP_NoiseMakingTowerBase.BP_NoiseMakingTowerBase_C.TriggerNoiseMaker
	 */
	struct ABP_NoiseMakingTowerBase_C_TriggerNoiseMaker_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       PlayAudio;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NoiseMakingTowerBase.BP_NoiseMakingTowerBase_C.ExecuteUbergraph_BP_NoiseMakingTowerBase
	 */
	struct ABP_NoiseMakingTowerBase_C_ExecuteUbergraph_BP_NoiseMakingTowerBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NoiseMakingTowerBase.BP_NoiseMakingTowerBase_C.OnReset__DelegateSignature
	 */
	struct ABP_NoiseMakingTowerBase_C_OnReset__DelegateSignature_Params
	{
	public:
		class ABP_NoiseMakingTowerBase_C*                          NoiseMaker;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NoiseMakingTowerBase.BP_NoiseMakingTowerBase_C.OnToppled__DelegateSignature
	 */
	struct ABP_NoiseMakingTowerBase_C_OnToppled__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
