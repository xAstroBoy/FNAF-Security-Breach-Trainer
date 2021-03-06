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
	 * Function WI_GameOver.WI_GameOver_C.LaserHit
	 */
	struct UWI_GameOver_C_LaserHit_Params
	{
	public:
		class AEQ_LaserGun_C*                                      Gun;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          HitResult;                                               // 0x0008(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

	};

	/**
	 * Function WI_GameOver.WI_GameOver_C.ForceKill
	 */
	struct UWI_GameOver_C_ForceKill_Params
	{
	public:
		bool                                                       Animate_;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function WI_GameOver.WI_GameOver_C.GameStart
	 */
	struct UWI_GameOver_C_GameStart_Params
	{
	};

	/**
	 * Function WI_GameOver.WI_GameOver_C.GameEnd
	 */
	struct UWI_GameOver_C_GameEnd_Params
	{
	};

	/**
	 * Function WI_GameOver.WI_GameOver_C.GameExit
	 */
	struct UWI_GameOver_C_GameExit_Params
	{
	};

	/**
	 * Function WI_GameOver.WI_GameOver_C.PlayerHit
	 */
	struct UWI_GameOver_C_PlayerHit_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

	};

	/**
	 * Function WI_GameOver.WI_GameOver_C.Construct
	 */
	struct UWI_GameOver_C_Construct_Params
	{
	};

	/**
	 * Function WI_GameOver.WI_GameOver_C.DestroyThisShowFinalScore
	 */
	struct UWI_GameOver_C_DestroyThisShowFinalScore_Params
	{
	};

	/**
	 * Function WI_GameOver.WI_GameOver_C.DisplayGameOver
	 */
	struct UWI_GameOver_C_DisplayGameOver_Params
	{
	};

	/**
	 * Function WI_GameOver.WI_GameOver_C.ExecuteUbergraph_WI_GameOver
	 */
	struct UWI_GameOver_C_ExecuteUbergraph_WI_GameOver_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
