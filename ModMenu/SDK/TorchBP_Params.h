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
	 * Function TorchBP.TorchBP_C.Timeline_0__FinishedFunc
	 */
	struct ATorchBP_C_Timeline_0__FinishedFunc_Params
	{
	};

	/**
	 * Function TorchBP.TorchBP_C.Timeline_0__UpdateFunc
	 */
	struct ATorchBP_C_Timeline_0__UpdateFunc_Params
	{
	};

	/**
	 * Function TorchBP.TorchBP_C.LightTorch
	 */
	struct ATorchBP_C_LightTorch_Params
	{
	};

	/**
	 * Function TorchBP.TorchBP_C.UnlightTorch
	 */
	struct ATorchBP_C_UnlightTorch_Params
	{
	};

	/**
	 * Function TorchBP.TorchBP_C.BndEvt__TorchBaseSprite_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ATorchBP_C_BndEvt__TorchBaseSprite_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params
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
	 * Function TorchBP.TorchBP_C.ReceiveTick
	 */
	struct ATorchBP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TorchBP.TorchBP_C.ReceiveBeginPlay
	 */
	struct ATorchBP_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function TorchBP.TorchBP_C.ExecuteUbergraph_TorchBP
	 */
	struct ATorchBP_C_ExecuteUbergraph_TorchBP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TorchBP.TorchBP_C.TorchLit__DelegateSignature
	 */
	struct ATorchBP_C_TorchLit__DelegateSignature_Params
	{
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
