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
	 * Function LMMSplineFollower.LMMSplineFollower_C.Completed_E29D545D43AE097D262AD79915112665
	 */
	struct ALMMSplineFollower_C_Completed_E29D545D43AE097D262AD79915112665_Params
	{
	public:
		int32_t                                                    PlayingID;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LMMSplineFollower.LMMSplineFollower_C.ReceiveBeginPlay
	 */
	struct ALMMSplineFollower_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function LMMSplineFollower.LMMSplineFollower_C.FollowSpline
	 */
	struct ALMMSplineFollower_C_FollowSpline_Params
	{
	public:
		class ASplinePathway_C*                                    SplinePathway;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LMMSplineFollower.LMMSplineFollower_C.BndEvt__SplinePathwayMotionComponent_K2Node_ComponentBoundEvent_0_OnFinishedFollowingSplineDelegate__DelegateSignature
	 */
	struct ALMMSplineFollower_C_BndEvt__SplinePathwayMotionComponent_K2Node_ComponentBoundEvent_0_OnFinishedFollowingSplineDelegate__DelegateSignature_Params
	{	};

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
		unsigned char                                              UnknownData_HV1X[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function LMMSplineFollower.LMMSplineFollower_C.PauseFollowingSpline
	 */
	struct ALMMSplineFollower_C_PauseFollowingSpline_Params
	{	};

	/**
	 * Function LMMSplineFollower.LMMSplineFollower_C.ResumeFollowingSpline
	 */
	struct ALMMSplineFollower_C_ResumeFollowingSpline_Params
	{	};

	/**
	 * Function LMMSplineFollower.LMMSplineFollower_C.ReceiveTick
	 */
	struct ALMMSplineFollower_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LMMSplineFollower.LMMSplineFollower_C.RandomFootstepsWhenOffCamera
	 */
	struct ALMMSplineFollower_C_RandomFootstepsWhenOffCamera_Params
	{	};

	/**
	 * Function LMMSplineFollower.LMMSplineFollower_C.JumpscareEvent
	 */
	struct ALMMSplineFollower_C_JumpscareEvent_Params
	{
	public:
		class AActor*                                              Gregory;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LMMSplineFollower.LMMSplineFollower_C.BndEvt__LMMSplineFollower_SplinePathwayMotionComponent_K2Node_ComponentBoundEvent_1_OnFinishedFollowingSplineDelegate__DelegateSignature
	 */
	struct ALMMSplineFollower_C_BndEvt__LMMSplineFollower_SplinePathwayMotionComponent_K2Node_ComponentBoundEvent_1_OnFinishedFollowingSplineDelegate__DelegateSignature_Params
	{	};

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
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
