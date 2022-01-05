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
	 * Function BallCannonLimitedShotsPawn.BallCannonLimitedShotsPawn_C.ReceiveBeginPlay
	 */
	struct ABallCannonLimitedShotsPawn_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function BallCannonLimitedShotsPawn.BallCannonLimitedShotsPawn_C.ReceiveTick
	 */
	struct ABallCannonLimitedShotsPawn_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BallCannonLimitedShotsPawn.BallCannonLimitedShotsPawn_C.BndEvt__MontySphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABallCannonLimitedShotsPawn_C_BndEvt__MontySphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
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
	 * Function BallCannonLimitedShotsPawn.BallCannonLimitedShotsPawn_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1
	 */
	struct ABallCannonLimitedShotsPawn_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BallCannonLimitedShotsPawn.BallCannonLimitedShotsPawn_C.ReceivePossessed
	 */
	struct ABallCannonLimitedShotsPawn_C_ReceivePossessed_Params
	{
	public:
		class AController*                                         NewController;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BallCannonLimitedShotsPawn.BallCannonLimitedShotsPawn_C.Fire
	 */
	struct ABallCannonLimitedShotsPawn_C_Fire_Params
	{
	};

	/**
	 * Function BallCannonLimitedShotsPawn.BallCannonLimitedShotsPawn_C.ExecuteUbergraph_BallCannonLimitedShotsPawn
	 */
	struct ABallCannonLimitedShotsPawn_C_ExecuteUbergraph_BallCannonLimitedShotsPawn_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
