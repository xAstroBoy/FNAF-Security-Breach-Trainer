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
	 * Function C_FazerBlast_Bot.C_FazerBlast_Bot_C.GetCurrentPatrolPointIndex
	 */
	struct AC_FazerBlast_Bot_C_GetCurrentPatrolPointIndex_Params
	{
	public:
		int                                                        ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function C_FazerBlast_Bot.C_FazerBlast_Bot_C.GetPatrolPath
	 */
	struct AC_FazerBlast_Bot_C_GetPatrolPath_Params
	{
	};

	/**
	 * Function C_FazerBlast_Bot.C_FazerBlast_Bot_C.StopFeedbackAnimation
	 */
	struct AC_FazerBlast_Bot_C_StopFeedbackAnimation_Params
	{
	};

	/**
	 * Function C_FazerBlast_Bot.C_FazerBlast_Bot_C.EnableFlee
	 */
	struct AC_FazerBlast_Bot_C_EnableFlee_Params
	{
	};

	/**
	 * Function C_FazerBlast_Bot.C_FazerBlast_Bot_C.HandleHit
	 */
	struct AC_FazerBlast_Bot_C_HandleHit_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
		bool                                                       Valid_hit;                                               // 0x0088(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function C_FazerBlast_Bot.C_FazerBlast_Bot_C.FindNearestPoint
	 */
	struct AC_FazerBlast_Bot_C_FindNearestPoint_Params
	{
	};

	/**
	 * Function C_FazerBlast_Bot.C_FazerBlast_Bot_C.SetCurrentPatrolPointIndex
	 */
	struct AC_FazerBlast_Bot_C_SetCurrentPatrolPointIndex_Params
	{
	public:
		int                                                        PatrolPointIndex;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function C_FazerBlast_Bot.C_FazerBlast_Bot_C.ReceiveBeginPlay
	 */
	struct AC_FazerBlast_Bot_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function C_FazerBlast_Bot.C_FazerBlast_Bot_C.LaserHit
	 */
	struct AC_FazerBlast_Bot_C_LaserHit_Params
	{
	public:
		class AEQ_LaserGun_C*                                      Gun;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          HitResult;                                               // 0x0008(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

	};

	/**
	 * Function C_FazerBlast_Bot.C_FazerBlast_Bot_C.GameEnd
	 */
	struct AC_FazerBlast_Bot_C_GameEnd_Params
	{
	};

	/**
	 * Function C_FazerBlast_Bot.C_FazerBlast_Bot_C.ReceiveTick
	 */
	struct AC_FazerBlast_Bot_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function C_FazerBlast_Bot.C_FazerBlast_Bot_C.DestroySelf
	 */
	struct AC_FazerBlast_Bot_C_DestroySelf_Params
	{
	};

	/**
	 * Function C_FazerBlast_Bot.C_FazerBlast_Bot_C.SetPatrolPath
	 */
	struct AC_FazerBlast_Bot_C_SetPatrolPath_Params
	{
	};

	/**
	 * Function C_FazerBlast_Bot.C_FazerBlast_Bot_C.PlayVO
	 */
	struct AC_FazerBlast_Bot_C_PlayVO_Params
	{
	public:
		class FName                                                LineName;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function C_FazerBlast_Bot.C_FazerBlast_Bot_C.ExecuteUbergraph_C_FazerBlast_Bot
	 */
	struct AC_FazerBlast_Bot_C_ExecuteUbergraph_C_FazerBlast_Bot_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
