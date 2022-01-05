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
	 * Function WI_Feedback.WI_Feedback_C.ForceKill
	 */
	struct UWI_Feedback_C_ForceKill_Params
	{
	public:
		bool                                                       Animate_;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function WI_Feedback.WI_Feedback_C.GameStart
	 */
	struct UWI_Feedback_C_GameStart_Params
	{
	};

	/**
	 * Function WI_Feedback.WI_Feedback_C.GameEnd
	 */
	struct UWI_Feedback_C_GameEnd_Params
	{
	};

	/**
	 * Function WI_Feedback.WI_Feedback_C.GameExit
	 */
	struct UWI_Feedback_C_GameExit_Params
	{
	};

	/**
	 * Function WI_Feedback.WI_Feedback_C.PlayerHit
	 */
	struct UWI_Feedback_C_PlayerHit_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

	};

	/**
	 * Function WI_Feedback.WI_Feedback_C.ShowFeedback
	 */
	struct UWI_Feedback_C_ShowFeedback_Params
	{
	public:
		int                                                        CurrentStreak;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function WI_Feedback.WI_Feedback_C.AreaCaptured_Event
	 */
	struct UWI_Feedback_C_AreaCaptured_Event_Params
	{
	};

	/**
	 * Function WI_Feedback.WI_Feedback_C.AreaLost_Event
	 */
	struct UWI_Feedback_C_AreaLost_Event_Params
	{
	};

	/**
	 * Function WI_Feedback.WI_Feedback_C.LaserHit
	 */
	struct UWI_Feedback_C_LaserHit_Params
	{
	public:
		class AEQ_LaserGun_C*                                      Gun;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          HitResult;                                               // 0x0008(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

	};

	/**
	 * Function WI_Feedback.WI_Feedback_C.ExecuteUbergraph_WI_Feedback
	 */
	struct UWI_Feedback_C_ExecuteUbergraph_WI_Feedback_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
