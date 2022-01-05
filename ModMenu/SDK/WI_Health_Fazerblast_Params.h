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
	 * Function WI_Health_Fazerblast.WI_Health_Fazerblast_C.Update HealthProgressBar
	 */
	struct UWI_Health_Fazerblast_C_Update_HealthProgressBar_Params
	{
	};

	/**
	 * Function WI_Health_Fazerblast.WI_Health_Fazerblast_C.LaserHit
	 */
	struct UWI_Health_Fazerblast_C_LaserHit_Params
	{
	public:
		class AEQ_LaserGun_C*                                      Gun;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          HitResult;                                               // 0x0008(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

	};

	/**
	 * Function WI_Health_Fazerblast.WI_Health_Fazerblast_C.ForceKill
	 */
	struct UWI_Health_Fazerblast_C_ForceKill_Params
	{
	public:
		bool                                                       Animate_;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function WI_Health_Fazerblast.WI_Health_Fazerblast_C.GameExit
	 */
	struct UWI_Health_Fazerblast_C_GameExit_Params
	{
	};

	/**
	 * Function WI_Health_Fazerblast.WI_Health_Fazerblast_C.Construct
	 */
	struct UWI_Health_Fazerblast_C_Construct_Params
	{
	};

	/**
	 * Function WI_Health_Fazerblast.WI_Health_Fazerblast_C.PlayerHit
	 */
	struct UWI_Health_Fazerblast_C_PlayerHit_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

	};

	/**
	 * Function WI_Health_Fazerblast.WI_Health_Fazerblast_C.GameEnd
	 */
	struct UWI_Health_Fazerblast_C_GameEnd_Params
	{
	};

	/**
	 * Function WI_Health_Fazerblast.WI_Health_Fazerblast_C.EnemyHit
	 */
	struct UWI_Health_Fazerblast_C_EnemyHit_Params
	{
	public:
		int                                                        HitValue;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function WI_Health_Fazerblast.WI_Health_Fazerblast_C.Reset Health
	 */
	struct UWI_Health_Fazerblast_C_Reset_Health_Params
	{
	};

	/**
	 * Function WI_Health_Fazerblast.WI_Health_Fazerblast_C.GameStart
	 */
	struct UWI_Health_Fazerblast_C_GameStart_Params
	{
	};

	/**
	 * Function WI_Health_Fazerblast.WI_Health_Fazerblast_C.PreConstruct
	 */
	struct UWI_Health_Fazerblast_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function WI_Health_Fazerblast.WI_Health_Fazerblast_C.ExecuteUbergraph_WI_Health_Fazerblast
	 */
	struct UWI_Health_Fazerblast_C_ExecuteUbergraph_WI_Health_Fazerblast_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function WI_Health_Fazerblast.WI_Health_Fazerblast_C.OutOfHealth__DelegateSignature
	 */
	struct UWI_Health_Fazerblast_C_OutOfHealth__DelegateSignature_Params
	{
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
