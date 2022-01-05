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
	 * Function ShootAtPlayer.ShootAtPlayer_C.OnNotifyEnd_022294D44C175E3582D1A1B99586A98E
	 */
	struct UShootAtPlayer_C_OnNotifyEnd_022294D44C175E3582D1A1B99586A98E_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ShootAtPlayer.ShootAtPlayer_C.OnNotifyBegin_022294D44C175E3582D1A1B99586A98E
	 */
	struct UShootAtPlayer_C_OnNotifyBegin_022294D44C175E3582D1A1B99586A98E_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ShootAtPlayer.ShootAtPlayer_C.OnInterrupted_022294D44C175E3582D1A1B99586A98E
	 */
	struct UShootAtPlayer_C_OnInterrupted_022294D44C175E3582D1A1B99586A98E_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ShootAtPlayer.ShootAtPlayer_C.OnBlendOut_022294D44C175E3582D1A1B99586A98E
	 */
	struct UShootAtPlayer_C_OnBlendOut_022294D44C175E3582D1A1B99586A98E_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ShootAtPlayer.ShootAtPlayer_C.OnCompleted_022294D44C175E3582D1A1B99586A98E
	 */
	struct UShootAtPlayer_C_OnCompleted_022294D44C175E3582D1A1B99586A98E_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ShootAtPlayer.ShootAtPlayer_C.LaserHit
	 */
	struct UShootAtPlayer_C_LaserHit_Params
	{
	public:
		class AEQ_LaserGun_C*                                      Gun;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          HitResult;                                               // 0x0008(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

	};

	/**
	 * Function ShootAtPlayer.ShootAtPlayer_C.ForceKill
	 */
	struct UShootAtPlayer_C_ForceKill_Params
	{
	public:
		bool                                                       Animate_;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function ShootAtPlayer.ShootAtPlayer_C.ReceiveExecuteAI
	 */
	struct UShootAtPlayer_C_ReceiveExecuteAI_Params
	{
	public:
		class AAIController*                                       OwnerController;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APawn*                                               ControlledPawn;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ShootAtPlayer.ShootAtPlayer_C.PlayerHit
	 */
	struct UShootAtPlayer_C_PlayerHit_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

	};

	/**
	 * Function ShootAtPlayer.ShootAtPlayer_C.GameExit
	 */
	struct UShootAtPlayer_C_GameExit_Params
	{
	};

	/**
	 * Function ShootAtPlayer.ShootAtPlayer_C.GameEnd
	 */
	struct UShootAtPlayer_C_GameEnd_Params
	{
	};

	/**
	 * Function ShootAtPlayer.ShootAtPlayer_C.GameStart
	 */
	struct UShootAtPlayer_C_GameStart_Params
	{
	};

	/**
	 * Function ShootAtPlayer.ShootAtPlayer_C.ExecuteUbergraph_ShootAtPlayer
	 */
	struct UShootAtPlayer_C_ExecuteUbergraph_ShootAtPlayer_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
