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
	 * Function WI_Timer.WI_Timer_C.Update Timer Display
	 */
	struct UWI_Timer_C_Update_Timer_Display_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function WI_Timer.WI_Timer_C.LaserHit
	 */
	struct UWI_Timer_C_LaserHit_Params
	{
	public:
		class AEQ_LaserGun_C*                                      Gun;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          HitResult;                                               // 0x0008(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

	};

	/**
	 * Function WI_Timer.WI_Timer_C.ForceKill
	 */
	struct UWI_Timer_C_ForceKill_Params
	{
	public:
		bool                                                       Animate_;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function WI_Timer.WI_Timer_C.GameStart
	 */
	struct UWI_Timer_C_GameStart_Params
	{
	};

	/**
	 * Function WI_Timer.WI_Timer_C.GameExit
	 */
	struct UWI_Timer_C_GameExit_Params
	{
	};

	/**
	 * Function WI_Timer.WI_Timer_C.PlayerHit
	 */
	struct UWI_Timer_C_PlayerHit_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

	};

	/**
	 * Function WI_Timer.WI_Timer_C.UpdateTime
	 */
	struct UWI_Timer_C_UpdateTime_Params
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function WI_Timer.WI_Timer_C.GameEnd
	 */
	struct UWI_Timer_C_GameEnd_Params
	{
	};

	/**
	 * Function WI_Timer.WI_Timer_C.ShowTimer
	 */
	struct UWI_Timer_C_ShowTimer_Params
	{
	};

	/**
	 * Function WI_Timer.WI_Timer_C.HideTimer
	 */
	struct UWI_Timer_C_HideTimer_Params
	{
	};

	/**
	 * Function WI_Timer.WI_Timer_C.ExecuteUbergraph_WI_Timer
	 */
	struct UWI_Timer_C_ExecuteUbergraph_WI_Timer_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
