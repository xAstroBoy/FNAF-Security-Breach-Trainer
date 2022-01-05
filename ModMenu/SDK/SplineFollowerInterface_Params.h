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
	 * Function SplineFollowerInterface.SplineFollowerInterface_C.SetSplineFollowerContext
	 */
	struct USplineFollowerInterface_C_SetSplineFollowerContext_Params
	{
	public:
		struct FSplineFollowerContext                              SplineFollowerContext;                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

	};

	/**
	 * Function SplineFollowerInterface.SplineFollowerInterface_C.GetSplineFollowerContext
	 */
	struct USplineFollowerInterface_C_GetSplineFollowerContext_Params
	{
	public:
		struct FSplineFollowerContext                              SplineFollowerContext;                                   // 0x0000(0x0018)  (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

	};

	/**
	 * Function SplineFollowerInterface.SplineFollowerInterface_C.GetPossibleSplinePaths
	 */
	struct USplineFollowerInterface_C_GetPossibleSplinePaths_Params
	{
	public:
		TArray<class ASplinePathway_C*>                            PossiblePaths;                                           // 0x0000(0x0010)  (Parm, OutParm, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
