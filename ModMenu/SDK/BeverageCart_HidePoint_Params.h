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
	 * Function BeverageCart_HidePoint.BeverageCart_HidePoint_C.GetSkeletalMesh
	 */
	struct ABeverageCart_HidePoint_C_GetSkeletalMesh_Params
	{
	public:
		class USkeletalMeshComponent*                              SkeletalMesh;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BeverageCart_HidePoint.BeverageCart_HidePoint_C.OnPlayerInteract
	 */
	struct ABeverageCart_HidePoint_C_OnPlayerInteract_Params
	{
	public:
		class APawn*                                               PlayerPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BeverageCart_HidePoint.BeverageCart_HidePoint_C.OnPlayerLeave
	 */
	struct ABeverageCart_HidePoint_C_OnPlayerLeave_Params
	{
	};

	/**
	 * Function BeverageCart_HidePoint.BeverageCart_HidePoint_C.ExecuteUbergraph_BeverageCart_HidePoint
	 */
	struct ABeverageCart_HidePoint_C_ExecuteUbergraph_BeverageCart_HidePoint_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
