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

// Function MontyDynamicsABP.MontyDynamicsABP_C.AnimGraph
struct UMontyDynamicsABP_C_AnimGraph_Params
{
	struct FPoseLink                                   InPose;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                                   AnimGraph;                                                 // 0x0010(0x0010)  (Parm, OutParm, NoDestructor)
};

// Function MontyDynamicsABP.MontyDynamicsABP_C.ExecuteUbergraph_MontyDynamicsABP
struct UMontyDynamicsABP_C_ExecuteUbergraph_MontyDynamicsABP_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
