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
	 * Function W_LaserOverLay.W_LaserOverLay_C.Show Bullet Hole On Right Side
	 */
	struct UW_LaserOverLay_C_Show_Bullet_Hole_On_Right_Side_Params
	{
	public:
		TArray<class UImage*>                                      BulletHoleArray;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)

	};

	/**
	 * Function W_LaserOverLay.W_LaserOverLay_C.Show Bullet Hole On Left Side
	 */
	struct UW_LaserOverLay_C_Show_Bullet_Hole_On_Left_Side_Params
	{
	public:
		TArray<class UImage*>                                      BulletHoleArray;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)

	};

	/**
	 * Function W_LaserOverLay.W_LaserOverLay_C.SetBulletHoleArrays
	 */
	struct UW_LaserOverLay_C_SetBulletHoleArrays_Params
	{
	};

	/**
	 * Function W_LaserOverLay.W_LaserOverLay_C.SetUiBoxes
	 */
	struct UW_LaserOverLay_C_SetUiBoxes_Params
	{
	};

	/**
	 * Function W_LaserOverLay.W_LaserOverLay_C.TimeToClock
	 */
	struct UW_LaserOverLay_C_TimeToClock_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function W_LaserOverLay.W_LaserOverLay_C.Finished_565209FF4FA8A1F49BEDA5817DE676B6
	 */
	struct UW_LaserOverLay_C_Finished_565209FF4FA8A1F49BEDA5817DE676B6_Params
	{
	};

	/**
	 * Function W_LaserOverLay.W_LaserOverLay_C.Finished_E74EDFA44B5A2D70CC1C6982C6122863
	 */
	struct UW_LaserOverLay_C_Finished_E74EDFA44B5A2D70CC1C6982C6122863_Params
	{
	};

	/**
	 * Function W_LaserOverLay.W_LaserOverLay_C.Finished_B5851330420BF607E3D4F8A157310C95
	 */
	struct UW_LaserOverLay_C_Finished_B5851330420BF607E3D4F8A157310C95_Params
	{
	};

	/**
	 * Function W_LaserOverLay.W_LaserOverLay_C.PlayerHit
	 */
	struct UW_LaserOverLay_C_PlayerHit_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

	};

	/**
	 * Function W_LaserOverLay.W_LaserOverLay_C.UpdateValues
	 */
	struct UW_LaserOverLay_C_UpdateValues_Params
	{
	};

	/**
	 * Function W_LaserOverLay.W_LaserOverLay_C.Hit
	 */
	struct UW_LaserOverLay_C_Hit_Params
	{
	};

	/**
	 * Function W_LaserOverLay.W_LaserOverLay_C.DamageIndicator
	 */
	struct UW_LaserOverLay_C_DamageIndicator_Params
	{
	};

	/**
	 * Function W_LaserOverLay.W_LaserOverLay_C.Construct
	 */
	struct UW_LaserOverLay_C_Construct_Params
	{
	};

	/**
	 * Function W_LaserOverLay.W_LaserOverLay_C.HideBullets_Left
	 */
	struct UW_LaserOverLay_C_HideBullets_Left_Params
	{
	};

	/**
	 * Function W_LaserOverLay.W_LaserOverLay_C.PreConstruct
	 */
	struct UW_LaserOverLay_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function W_LaserOverLay.W_LaserOverLay_C.HideBullets_Right
	 */
	struct UW_LaserOverLay_C_HideBullets_Right_Params
	{
	};

	/**
	 * Function W_LaserOverLay.W_LaserOverLay_C.GameEnd
	 */
	struct UW_LaserOverLay_C_GameEnd_Params
	{
	};

	/**
	 * Function W_LaserOverLay.W_LaserOverLay_C.ForceKill
	 */
	struct UW_LaserOverLay_C_ForceKill_Params
	{
	public:
		bool                                                       Animate_;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function W_LaserOverLay.W_LaserOverLay_C.LaserHit
	 */
	struct UW_LaserOverLay_C_LaserHit_Params
	{
	public:
		class AEQ_LaserGun_C*                                      Gun;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          HitResult;                                               // 0x0008(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

	};

	/**
	 * Function W_LaserOverLay.W_LaserOverLay_C.GameExit
	 */
	struct UW_LaserOverLay_C_GameExit_Params
	{
	};

	/**
	 * Function W_LaserOverLay.W_LaserOverLay_C.CapturedTheFlag
	 */
	struct UW_LaserOverLay_C_CapturedTheFlag_Params
	{
	};

	/**
	 * Function W_LaserOverLay.W_LaserOverLay_C.LostTheFlag
	 */
	struct UW_LaserOverLay_C_LostTheFlag_Params
	{
	};

	/**
	 * Function W_LaserOverLay.W_LaserOverLay_C.DestroyThisHUD
	 */
	struct UW_LaserOverLay_C_DestroyThisHUD_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function W_LaserOverLay.W_LaserOverLay_C.GameStart
	 */
	struct UW_LaserOverLay_C_GameStart_Params
	{
	};

	/**
	 * Function W_LaserOverLay.W_LaserOverLay_C.TriggerYouWin
	 */
	struct UW_LaserOverLay_C_TriggerYouWin_Params
	{
	};

	/**
	 * Function W_LaserOverLay.W_LaserOverLay_C.TriggerGameOver
	 */
	struct UW_LaserOverLay_C_TriggerGameOver_Params
	{
	};

	/**
	 * Function W_LaserOverLay.W_LaserOverLay_C.ExecuteUbergraph_W_LaserOverLay
	 */
	struct UW_LaserOverLay_C_ExecuteUbergraph_W_LaserOverLay_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
