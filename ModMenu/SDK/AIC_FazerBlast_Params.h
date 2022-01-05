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
	 * Function AIC_FazerBlast.AIC_FazerBlast_C.TickDisable
	 */
	struct AAIC_FazerBlast_C_TickDisable_Params
	{
	};

	/**
	 * Function AIC_FazerBlast.AIC_FazerBlast_C.NavHelper_Clear
	 */
	struct AAIC_FazerBlast_C_NavHelper_Clear_Params
	{
	};

	/**
	 * Function AIC_FazerBlast.AIC_FazerBlast_C.NavHelper_Update
	 */
	struct AAIC_FazerBlast_C_NavHelper_Update_Params
	{
	public:
		class UPrimitiveComponent*                                 I_OverlappedCompnent;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       I_IsDestination;                                         // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AA_FazerBlast_NavHelper_Spline_C*                    I_NavHelper;                                             // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function AIC_FazerBlast.AIC_FazerBlast_C.NavHelper_GetClosestBox
	 */
	struct AAIC_FazerBlast_C_NavHelper_GetClosestBox_Params
	{
	public:
		class AA_FazerBlast_NavHelper_Spline_C*                    I_NavHelper;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       End;                                                     // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Bot_Or_Player;                                           // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UBoxComponent*                                       ClosestBox;                                              // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ShortestDistance;                                        // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function AIC_FazerBlast.AIC_FazerBlast_C.NavHelper_GetDestination
	 */
	struct AAIC_FazerBlast_C_NavHelper_GetDestination_Params
	{
	public:
		class AA_FazerBlast_NavHelper_Spline_C*                    I_NavHelper;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UBoxComponent*                                       BoxDestination;                                          // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function AIC_FazerBlast.AIC_FazerBlast_C.NavHelper_CheckForOverlaps
	 */
	struct AAIC_FazerBlast_C_NavHelper_CheckForOverlaps_Params
	{
	};

	/**
	 * Function AIC_FazerBlast.AIC_FazerBlast_C.GetFleeLocationDirection
	 */
	struct AAIC_FazerBlast_C_GetFleeLocationDirection_Params
	{
	public:
		float                                                      FleeRadius;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      FleeHeight;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      LocationWeight;                                          // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      TargetWeight;                                            // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Debug;                                                   // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DebugTime;                                               // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             ReturnDirection;                                         // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function AIC_FazerBlast.AIC_FazerBlast_C.UpdateFleeArrayTargets
	 */
	struct AAIC_FazerBlast_C_UpdateFleeArrayTargets_Params
	{
	public:
		bool                                                       Reset;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             AddFleeLocation;                                         // 0x0004(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        ArrayLimit;                                              // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function AIC_FazerBlast.AIC_FazerBlast_C.UpdateFleeArrayLocations
	 */
	struct AAIC_FazerBlast_C_UpdateFleeArrayLocations_Params
	{
	public:
		bool                                                       Reset;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             AddFleeLocation;                                         // 0x0004(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        ArrayLimit;                                              // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function AIC_FazerBlast.AIC_FazerBlast_C.UpdateFleeArray
	 */
	struct AAIC_FazerBlast_C_UpdateFleeArray_Params
	{
	public:
		bool                                                       Reset;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             AddFleeLocation;                                         // 0x0004(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        ArrayLimit;                                              // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FVector>                                     TargetArray;                                             // 0x0018(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		bool                                                       Debug;                                                   // 0x0028(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function AIC_FazerBlast.AIC_FazerBlast_C.TickFlee
	 */
	struct AAIC_FazerBlast_C_TickFlee_Params
	{
	};

	/**
	 * Function AIC_FazerBlast.AIC_FazerBlast_C.BeginFlee
	 */
	struct AAIC_FazerBlast_C_BeginFlee_Params
	{
	};

	/**
	 * Function AIC_FazerBlast.AIC_FazerBlast_C.ProcessAISense
	 */
	struct AAIC_FazerBlast_C_ProcessAISense_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FAIStimulus                                         Stimulus;                                                // 0x0008(0x003C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

	};

	/**
	 * Function AIC_FazerBlast.AIC_FazerBlast_C.CompleteSenses
	 */
	struct AAIC_FazerBlast_C_CompleteSenses_Params
	{
	public:
		TArray<struct FAIStimulus>                                 Array;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

	};

	/**
	 * Function AIC_FazerBlast.AIC_FazerBlast_C.BndEvt__AIPerception_K2Node_ComponentBoundEvent_0_ActorPerceptionUpdatedDelegate__DelegateSignature
	 */
	struct AAIC_FazerBlast_C_BndEvt__AIPerception_K2Node_ComponentBoundEvent_0_ActorPerceptionUpdatedDelegate__DelegateSignature_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FAIStimulus                                         Stimulus;                                                // 0x0008(0x003C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

	};

	/**
	 * Function AIC_FazerBlast.AIC_FazerBlast_C.GameEnd
	 */
	struct AAIC_FazerBlast_C_GameEnd_Params
	{
	};

	/**
	 * Function AIC_FazerBlast.AIC_FazerBlast_C.GameStart
	 */
	struct AAIC_FazerBlast_C_GameStart_Params
	{
	};

	/**
	 * Function AIC_FazerBlast.AIC_FazerBlast_C.BndEvt__AIPerception_K2Node_ComponentBoundEvent_1_PerceptionUpdatedDelegate__DelegateSignature
	 */
	struct AAIC_FazerBlast_C_BndEvt__AIPerception_K2Node_ComponentBoundEvent_1_PerceptionUpdatedDelegate__DelegateSignature_Params
	{
	public:
		TArray<class AActor*>                                      UpdatedActors;                                           // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

	};

	/**
	 * Function AIC_FazerBlast.AIC_FazerBlast_C.ReceiveTick
	 */
	struct AAIC_FazerBlast_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function AIC_FazerBlast.AIC_FazerBlast_C.ReceiveBeginPlay
	 */
	struct AAIC_FazerBlast_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function AIC_FazerBlast.AIC_FazerBlast_C.PlayerHit
	 */
	struct AAIC_FazerBlast_C_PlayerHit_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

	};

	/**
	 * Function AIC_FazerBlast.AIC_FazerBlast_C.GameExit
	 */
	struct AAIC_FazerBlast_C_GameExit_Params
	{
	};

	/**
	 * Function AIC_FazerBlast.AIC_FazerBlast_C.ForceKill
	 */
	struct AAIC_FazerBlast_C_ForceKill_Params
	{
	public:
		bool                                                       Animate_;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function AIC_FazerBlast.AIC_FazerBlast_C.LaserHit
	 */
	struct AAIC_FazerBlast_C_LaserHit_Params
	{
	public:
		class AEQ_LaserGun_C*                                      Gun;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          HitResult;                                               // 0x0008(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

	};

	/**
	 * Function AIC_FazerBlast.AIC_FazerBlast_C.ExecuteUbergraph_AIC_FazerBlast
	 */
	struct AAIC_FazerBlast_C_ExecuteUbergraph_AIC_FazerBlast_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
