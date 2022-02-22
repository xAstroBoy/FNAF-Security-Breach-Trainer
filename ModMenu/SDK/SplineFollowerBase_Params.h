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
	 * Function SplineFollowerBase.SplineFollowerBase_C.GetSplineFollowerContext
	 */
	struct ASplineFollowerBase_C_GetSplineFollowerContext_Params
	{
	public:
		struct FSplineFollowerContext                              SplineFollowerContext;                                   // 0x0000(0x0018)  (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

	};

	/**
	 * Function SplineFollowerBase.SplineFollowerBase_C.GetPossibleSplinePaths
	 */
	struct ASplineFollowerBase_C_GetPossibleSplinePaths_Params
	{
	public:
		TArray<class ASplinePathway_C*>                            PossiblePaths;                                           // 0x0000(0x0010)  (Parm, OutParm, HasGetValueTypeHash)

	};

	/**
	 * Function SplineFollowerBase.SplineFollowerBase_C.PickRandomFork
	 */
	struct ASplineFollowerBase_C_PickRandomFork_Params
	{
	};

	/**
	 * Function SplineFollowerBase.SplineFollowerBase_C.ReceiveBeginPlay
	 */
	struct ASplineFollowerBase_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function SplineFollowerBase.SplineFollowerBase_C.Stop at Door
	 */
	struct ASplineFollowerBase_C_Stop_at_Door_Params
	{
	public:
		class ABP_DoorMaster_C*                                    Door;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SplineFollowerBase.SplineFollowerBase_C.Hit Fork
	 */
	struct ASplineFollowerBase_C_Hit_Fork_Params
	{
	};

	/**
	 * Function SplineFollowerBase.SplineFollowerBase_C.On Door Unlocked
	 */
	struct ASplineFollowerBase_C_On_Door_Unlocked_Params
	{
	public:
		class ABP_DoorMaster_C*                                    Door;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Locked;                                                  // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function SplineFollowerBase.SplineFollowerBase_C.SetSplineFollowerContext
	 */
	struct ASplineFollowerBase_C_SetSplineFollowerContext_Params
	{
	public:
		struct FSplineFollowerContext                              SplineFollowerContext;                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

	};

	/**
	 * Function SplineFollowerBase.SplineFollowerBase_C.ExecuteUbergraph_SplineFollowerBase
	 */
	struct ASplineFollowerBase_C_ExecuteUbergraph_SplineFollowerBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
