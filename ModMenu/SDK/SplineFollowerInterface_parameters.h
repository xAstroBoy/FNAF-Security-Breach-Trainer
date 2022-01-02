#pragma once

// Name: FNAF Security Breach, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function SplineFollowerInterface.SplineFollowerInterface_C.SetSplineFollowerContext
struct USplineFollowerInterface_C_SetSplineFollowerContext_Params
{
	struct FSplineFollowerContext                      SplineFollowerContext;                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function SplineFollowerInterface.SplineFollowerInterface_C.GetSplineFollowerContext
struct USplineFollowerInterface_C_GetSplineFollowerContext_Params
{
	struct FSplineFollowerContext                      SplineFollowerContext;                                     // 0x0000(0x0018)  (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function SplineFollowerInterface.SplineFollowerInterface_C.GetPossibleSplinePaths
struct USplineFollowerInterface_C_GetPossibleSplinePaths_Params
{
	TArray<class ASplinePathway_C*>                    PossiblePaths;                                             // 0x0000(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
