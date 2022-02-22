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
	 * Function SplinePathFork.SplinePathFork_C.GetPossibleForks
	 */
	struct ASplinePathFork_C_GetPossibleForks_Params
	{
	public:
		class AActor*                                              SplineFollowerActor;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class ASplinePathway_C*>                            PossibleSplines;                                         // 0x0008(0x0010)  (Parm, OutParm, HasGetValueTypeHash)

	};

	/**
	 * Function SplinePathFork.SplinePathFork_C.On Spline Follower Overlapped
	 */
	struct ASplinePathFork_C_On_Spline_Follower_Overlapped_Params
	{
	public:
		class ASplineFollowerBase_C*                               SplineFollower;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SplinePathFork.SplinePathFork_C.ReceiveActorBeginOverlap
	 */
	struct ASplinePathFork_C_ReceiveActorBeginOverlap_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SplinePathFork.SplinePathFork_C.ReceiveActorEndOverlap
	 */
	struct ASplinePathFork_C_ReceiveActorEndOverlap_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SplinePathFork.SplinePathFork_C.ExecuteUbergraph_SplinePathFork
	 */
	struct ASplinePathFork_C_ExecuteUbergraph_SplinePathFork_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
