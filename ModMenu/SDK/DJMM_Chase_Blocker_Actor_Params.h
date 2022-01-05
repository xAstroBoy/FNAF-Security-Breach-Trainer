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
	 * Function DJMM_Chase_Blocker_Actor.DJMM_Chase_Blocker_Actor_C.GetHapticIntensityValue
	 */
	struct ADJMM_Chase_Blocker_Actor_C_GetHapticIntensityValue_Params
	{
	};

	/**
	 * Function DJMM_Chase_Blocker_Actor.DJMM_Chase_Blocker_Actor_C.GetDistance
	 */
	struct ADJMM_Chase_Blocker_Actor_C_GetDistance_Params
	{
	public:
		struct FVector                                             LandLocation;                                            // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Distance;                                                // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function DJMM_Chase_Blocker_Actor.DJMM_Chase_Blocker_Actor_C.SyncPlayrate
	 */
	struct ADJMM_Chase_Blocker_Actor_C_SyncPlayrate_Params
	{
	public:
		class USkeletalMeshComponent*                              SkeletalMesh;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function DJMM_Chase_Blocker_Actor.DJMM_Chase_Blocker_Actor_C.AssignAnims
	 */
	struct ADJMM_Chase_Blocker_Actor_C_AssignAnims_Params
	{
	public:
		class USkeletalMeshComponent*                              SkeletalMesh;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UAnimSequenceBase*                                   AnimInput;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function DJMM_Chase_Blocker_Actor.DJMM_Chase_Blocker_Actor_C.ReceiveTick
	 */
	struct ADJMM_Chase_Blocker_Actor_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function DJMM_Chase_Blocker_Actor.DJMM_Chase_Blocker_Actor_C.ReceiveBeginPlay
	 */
	struct ADJMM_Chase_Blocker_Actor_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function DJMM_Chase_Blocker_Actor.DJMM_Chase_Blocker_Actor_C.ExecuteUbergraph_DJMM_Chase_Blocker_Actor
	 */
	struct ADJMM_Chase_Blocker_Actor_C_ExecuteUbergraph_DJMM_Chase_Blocker_Actor_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
