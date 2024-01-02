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
	 * Function StaffBotCleaning.StaffBotCleaning_C.GetPossibleSplinePaths
	 */
	struct AStaffBotCleaning_C_GetPossibleSplinePaths_Params
	{
	public:
		TArray<class ASplinePathway_C*>                            PossiblePaths;                                           // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function StaffBotCleaning.StaffBotCleaning_C.GetSplineFollowerContext
	 */
	struct AStaffBotCleaning_C_GetSplineFollowerContext_Params
	{
	public:
		struct FSplineFollowerContext                              SplineFollowerContext;                                   // 0x0000(0x0018)  (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	};

	/**
	 * Function StaffBotCleaning.StaffBotCleaning_C.ReceiveBeginPlay
	 */
	struct AStaffBotCleaning_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function StaffBotCleaning.StaffBotCleaning_C.SetSplineFollowerContext
	 */
	struct AStaffBotCleaning_C_SetSplineFollowerContext_Params
	{
	public:
		struct FSplineFollowerContext                              SplineFollowerContext;                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	};

	/**
	 * Function StaffBotCleaning.StaffBotCleaning_C.ReceiveActorBeginOverlap
	 */
	struct AStaffBotCleaning_C_ReceiveActorBeginOverlap_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StaffBotCleaning.StaffBotCleaning_C.ExecuteUbergraph_StaffBotCleaning
	 */
	struct AStaffBotCleaning_C_ExecuteUbergraph_StaffBotCleaning_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DOQG[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
