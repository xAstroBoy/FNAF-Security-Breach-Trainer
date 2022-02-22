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
	 * Function LMMSplineFollower.LMMSplineFollower_C.ReceiveBeginPlay
	 */
	struct ALMMSplineFollower_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function LMMSplineFollower.LMMSplineFollower_C.FollowSpline
	 */
	struct ALMMSplineFollower_C_FollowSpline_Params
	{
	public:
		class ASplinePathway_C*                                    Spline_Pathway;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function LMMSplineFollower.LMMSplineFollower_C.BndEvt__SplinePathwayMotionComponent_K2Node_ComponentBoundEvent_0_OnFinishedFollowingSplineDelegate__DelegateSignature
	 */
	struct ALMMSplineFollower_C_BndEvt__SplinePathwayMotionComponent_K2Node_ComponentBoundEvent_0_OnFinishedFollowingSplineDelegate__DelegateSignature_Params
	{
	};

	/**
	 * Function LMMSplineFollower.LMMSplineFollower_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ALMMSplineFollower_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params
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
	 * Function LMMSplineFollower.LMMSplineFollower_C.PauseFollowingSpline
	 */
	struct ALMMSplineFollower_C_PauseFollowingSpline_Params
	{
	};

	/**
	 * Function LMMSplineFollower.LMMSplineFollower_C.ResumeFollowingSpline
	 */
	struct ALMMSplineFollower_C_ResumeFollowingSpline_Params
	{
	};

	/**
	 * Function LMMSplineFollower.LMMSplineFollower_C.ReceiveTick
	 */
	struct ALMMSplineFollower_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function LMMSplineFollower.LMMSplineFollower_C.ExecuteUbergraph_LMMSplineFollower
	 */
	struct ALMMSplineFollower_C_ExecuteUbergraph_LMMSplineFollower_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function LMMSplineFollower.LMMSplineFollower_C.OnSplineEndReached__DelegateSignature
	 */
	struct ALMMSplineFollower_C_OnSplineEndReached__DelegateSignature_Params
	{
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
