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
	 * Function SplinePathwayManager.SplinePathwayManager_C.GetChildForkPaths
	 */
	struct ASplinePathwayManager_C_GetChildForkPaths_Params
	{
	public:
		class ASplinePathway_C*                                    SplineIn;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class ASplinePathFork_C*>                           ForksUsed;                                               // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		class ASplinePathFork_C*                                   OriginalFork;                                            // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class ASplinePathway_C*>                            OnesToCheck;                                             // 0x0020(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
		TArray<class ASplinePathFork_C*>                           OutForks;                                                // 0x0030(0x0010)  (Parm, OutParm, HasGetValueTypeHash)

	};

	/**
	 * Function SplinePathwayManager.SplinePathwayManager_C.FindClosestSplineAndPointSoftRef
	 */
	struct ASplinePathwayManager_C_FindClosestSplineAndPointSoftRef_Params
	{
	public:
		struct FVector                                             WorldLocation;                                           // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ASplinePathway_C*                                    Spline;                                                  // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             SplineLocation;                                          // 0x0028(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SplinePathwayManager.SplinePathwayManager_C.FindClosestSplineUsingForks
	 */
	struct ASplinePathwayManager_C_FindClosestSplineUsingForks_Params
	{
	public:
		struct FVector                                             WorldLocation;                                           // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class ASplinePathway_C*>                            Splines;                                                 // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		class ASplinePathway_C*                                    SplineOut;                                               // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ASplinePathFork_C*                                   ForkOut;                                                 // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SplinePathwayManager.SplinePathwayManager_C.SetupForks
	 */
	struct ASplinePathwayManager_C_SetupForks_Params
	{
	};

	/**
	 * Function SplinePathwayManager.SplinePathwayManager_C.SelectStartSpline
	 */
	struct ASplinePathwayManager_C_SelectStartSpline_Params
	{
	public:
		class ASplinePathway_C*                                    Start_Spline;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SplinePathwayManager.SplinePathwayManager_C.RecurseSpline
	 */
	struct ASplinePathwayManager_C_RecurseSpline_Params
	{
	};

	/**
	 * Function SplinePathwayManager.SplinePathwayManager_C.FindClosestDistAlongSpline
	 */
	struct ASplinePathwayManager_C_FindClosestDistAlongSpline_Params
	{
	public:
		class ASplinePathway_C*                                    Spline;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             WorldLocation;                                           // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      DistAlongSpline;                                         // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SplinePathwayManager.SplinePathwayManager_C.FindClosestSplineAndPoint
	 */
	struct ASplinePathwayManager_C_FindClosestSplineAndPoint_Params
	{
	public:
		struct FVector                                             WorldLocation;                                           // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class ASplinePathway_C*>                            Splines;                                                 // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		class ASplinePathway_C*                                    Spline;                                                  // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             SplineLocation;                                          // 0x0028(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SplinePathwayManager.SplinePathwayManager_C.SetupNewSplinePath
	 */
	struct ASplinePathwayManager_C_SetupNewSplinePath_Params
	{
	public:
		class ASplinePathway_C*                                    NextSpline;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSplineFollowerContext                              StructRef;                                               // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
		bool                                                       UseDistance;                                             // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Distance;                                                // 0x0024(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		SplineFollowDirection_ESplineFollowDirection               Direction;                                               // 0x0028(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SplinePathwayManager.SplinePathwayManager_C.GetPositionAtDistance
	 */
	struct ASplinePathwayManager_C_GetPositionAtDistance_Params
	{
	public:
		float                                                      DeltaDistance;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSplineFollowerContext                              Context;                                                 // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
		struct FVector                                             WorldLocation;                                           // 0x0020(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Forward;                                                 // 0x002C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SplinePathwayManager.SplinePathwayManager_C.UserConstructionScript
	 */
	struct ASplinePathwayManager_C_UserConstructionScript_Params
	{
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
