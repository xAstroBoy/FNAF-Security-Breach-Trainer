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

// Function FirstAid_HidePoint.FirstAid_HidePoint_C.GetSkeletalMesh
struct AFirstAid_HidePoint_C_GetSkeletalMesh_Params
{
	class USkeletalMeshComponent*                      SkeletalMesh;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FirstAid_HidePoint.FirstAid_HidePoint_C.OnPlayerInteract
struct AFirstAid_HidePoint_C_OnPlayerInteract_Params
{
	class APawn*                                       PlayerPawn;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                           PlayerController;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FirstAid_HidePoint.FirstAid_HidePoint_C.OnPlayerLeave
struct AFirstAid_HidePoint_C_OnPlayerLeave_Params
{
};

// Function FirstAid_HidePoint.FirstAid_HidePoint_C.ExecuteUbergraph_FirstAid_HidePoint
struct AFirstAid_HidePoint_C_ExecuteUbergraph_FirstAid_HidePoint_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
