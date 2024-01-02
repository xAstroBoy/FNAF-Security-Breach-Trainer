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
	 * Function BackstageOfficeLift.BackstageOfficeLift_C.GetLiftAccessTransform
	 */
	struct ABackstageOfficeLift_C_GetLiftAccessTransform_Params
	{
	public:
		bool                                                       Start;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RYU8[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          ReturnValue;                                             // 0x0010(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BackstageOfficeLift.BackstageOfficeLift_C.GetTargets
	 */
	struct ABackstageOfficeLift_C_GetTargets_Params
	{	};

	/**
	 * Function BackstageOfficeLift.BackstageOfficeLift_C.Fall down__FinishedFunc
	 */
	struct ABackstageOfficeLift_C_Falldown__FinishedFunc_Params
	{	};

	/**
	 * Function BackstageOfficeLift.BackstageOfficeLift_C.Fall down__UpdateFunc
	 */
	struct ABackstageOfficeLift_C_Falldown__UpdateFunc_Params
	{	};

	/**
	 * Function BackstageOfficeLift.BackstageOfficeLift_C.Setup Lift Targets
	 */
	struct ABackstageOfficeLift_C_SetupLiftTargets_Params
	{	};

	/**
	 * Function BackstageOfficeLift.BackstageOfficeLift_C.Target Hit
	 */
	struct ABackstageOfficeLift_C_TargetHit_Params
	{
	public:
		class UBackstageLiftTarget_C*                              LiftTarget;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BackstageOfficeLift.BackstageOfficeLift_C.Set Moving
	 */
	struct ABackstageOfficeLift_C_SetMoving_Params
	{
	public:
		bool                                                       MovingUp;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BackstageOfficeLift.BackstageOfficeLift_C.ReceiveBeginPlay
	 */
	struct ABackstageOfficeLift_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BackstageOfficeLift.BackstageOfficeLift_C.MoveMontyOnLift
	 */
	struct ABackstageOfficeLift_C_MoveMontyOnLift_Params
	{
	public:
		class AMoveableLift_C*                                     Lift;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Up;                                                      // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BackstageOfficeLift.BackstageOfficeLift_C.FallQuick
	 */
	struct ABackstageOfficeLift_C_FallQuick_Params
	{	};

	/**
	 * Function BackstageOfficeLift.BackstageOfficeLift_C.BndEvt__Target_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature
	 */
	struct ABackstageOfficeLift_C_BndEvt__Target_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          Hit;                                                     // 0x0024(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BackstageOfficeLift.BackstageOfficeLift_C.Teleport Freddy into office
	 */
	struct ABackstageOfficeLift_C_TeleportFreddyintooffice_Params
	{
	public:
		class AMoveableLift_C*                                     Lift;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Top;                                                     // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BackstageOfficeLift.BackstageOfficeLift_C.ExecuteUbergraph_BackstageOfficeLift
	 */
	struct ABackstageOfficeLift_C_ExecuteUbergraph_BackstageOfficeLift_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
