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
	 * Function Stroller_HidePoint.Stroller_HidePoint_C.GetSkeletalMesh
	 */
	struct AStroller_HidePoint_C_GetSkeletalMesh_Params
	{
	public:
		class USkeletalMeshComponent*                              SkeletalMesh;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Stroller_HidePoint.Stroller_HidePoint_C.ReceiveBeginPlay
	 */
	struct AStroller_HidePoint_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Stroller_HidePoint.Stroller_HidePoint_C.OnPlayerLeave
	 */
	struct AStroller_HidePoint_C_OnPlayerLeave_Params
	{	};

	/**
	 * Function Stroller_HidePoint.Stroller_HidePoint_C.OnPlayerHide
	 */
	struct AStroller_HidePoint_C_OnPlayerHide_Params
	{
	public:
		class ACharacter*                                          PlayerCharacter;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Stroller_HidePoint.Stroller_HidePoint_C.ExecuteUbergraph_Stroller_HidePoint
	 */
	struct AStroller_HidePoint_C_ExecuteUbergraph_Stroller_HidePoint_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_I4L0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
