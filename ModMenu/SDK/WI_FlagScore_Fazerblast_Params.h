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
	 * Function WI_FlagScore_Fazerblast.WI_FlagScore_Fazerblast_C.UpdateScore
	 */
	struct UWI_FlagScore_Fazerblast_C_UpdateScore_Params
	{
	public:
		int32_t                                                    UpdateScore;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function WI_FlagScore_Fazerblast.WI_FlagScore_Fazerblast_C.LaserHit
	 */
	struct UWI_FlagScore_Fazerblast_C_LaserHit_Params
	{
	public:
		class AEQ_LaserGun_C*                                      Gun;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          HitResult;                                               // 0x0008(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

	};

	/**
	 * Function WI_FlagScore_Fazerblast.WI_FlagScore_Fazerblast_C.ForceKill
	 */
	struct UWI_FlagScore_Fazerblast_C_ForceKill_Params
	{
	public:
		bool                                                       Animate_;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function WI_FlagScore_Fazerblast.WI_FlagScore_Fazerblast_C.GameExit
	 */
	struct UWI_FlagScore_Fazerblast_C_GameExit_Params
	{
	};

	/**
	 * Function WI_FlagScore_Fazerblast.WI_FlagScore_Fazerblast_C.PlayerHit
	 */
	struct UWI_FlagScore_Fazerblast_C_PlayerHit_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

	};

	/**
	 * Function WI_FlagScore_Fazerblast.WI_FlagScore_Fazerblast_C.Construct
	 */
	struct UWI_FlagScore_Fazerblast_C_Construct_Params
	{
	};

	/**
	 * Function WI_FlagScore_Fazerblast.WI_FlagScore_Fazerblast_C.FlagCaptured
	 */
	struct UWI_FlagScore_Fazerblast_C_FlagCaptured_Params
	{
	};

	/**
	 * Function WI_FlagScore_Fazerblast.WI_FlagScore_Fazerblast_C.GameEnd
	 */
	struct UWI_FlagScore_Fazerblast_C_GameEnd_Params
	{
	};

	/**
	 * Function WI_FlagScore_Fazerblast.WI_FlagScore_Fazerblast_C.GameStart
	 */
	struct UWI_FlagScore_Fazerblast_C_GameStart_Params
	{
	};

	/**
	 * Function WI_FlagScore_Fazerblast.WI_FlagScore_Fazerblast_C.ExecuteUbergraph_WI_FlagScore_Fazerblast
	 */
	struct UWI_FlagScore_Fazerblast_C_ExecuteUbergraph_WI_FlagScore_Fazerblast_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function WI_FlagScore_Fazerblast.WI_FlagScore_Fazerblast_C.GameWon__DelegateSignature
	 */
	struct UWI_FlagScore_Fazerblast_C_GameWon__DelegateSignature_Params
	{
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
