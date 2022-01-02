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

// Function FreddyOffice.FreddyOffice_C.GetPossibleSplinePaths
struct AFreddyOffice_C_GetPossibleSplinePaths_Params
{
	TArray<class ASplinePathway_C*>                    PossiblePaths;                                             // 0x0000(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
};

// Function FreddyOffice.FreddyOffice_C.GetSplineFollowerContext
struct AFreddyOffice_C_GetSplineFollowerContext_Params
{
	struct FSplineFollowerContext                      SplineFollowerContext;                                     // 0x0000(0x0018)  (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function FreddyOffice.FreddyOffice_C.ReceiveBeginPlay
struct AFreddyOffice_C_ReceiveBeginPlay_Params
{
};

// Function FreddyOffice.FreddyOffice_C.SetSplineFollowerContext
struct AFreddyOffice_C_SetSplineFollowerContext_Params
{
	struct FSplineFollowerContext                      SplineFollowerContext;                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function FreddyOffice.FreddyOffice_C.ExecuteUbergraph_FreddyOffice
struct AFreddyOffice_C_ExecuteUbergraph_FreddyOffice_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
