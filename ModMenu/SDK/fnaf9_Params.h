#pragma once

/**
 * Name: FNAFSB
 * Version: 1
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
	 * Function fnaf9.AIDLC_RabbitComponent.UpdateDLC_RabbitValues
	 */
	struct UAIDLC_RabbitComponent_UpdateDLC_RabbitValues_Params
	{	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.UnregisterAnimation
	 */
	struct UAIDLC_RabbitSystem_UnregisterAnimation_Params
	{
	public:
		class AActor*                                              InterfaceImplementor;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.UnpauseTimers
	 */
	struct UAIDLC_RabbitSystem_UnpauseTimers_Params
	{	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.StopPsuedoAlert
	 */
	struct UAIDLC_RabbitSystem_StopPsuedoAlert_Params
	{	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.StartPsuedoAlert
	 */
	struct UAIDLC_RabbitSystem_StartPsuedoAlert_Params
	{
	public:
		struct FVector                                             TrackLocation;                                           // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.SetupQueryData
	 */
	struct UAIDLC_RabbitSystem_SetupQueryData_Params
	{
	public:
		class UEnvQuery*                                           InFindSpawnPointEQSA;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UEnvQuery*                                           InFindSpawnPointEQSB;                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UEnvQuery*                                           InFindSpawnPointEQSA_Close;                              // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UEnvQuery*                                           InFindSpawnPointEQSB_Close;                              // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDataTable*                                          InDLC_RabbitDataTable;                                   // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.SetTypesToAlert
	 */
	struct UAIDLC_RabbitSystem_SetTypesToAlert_Params
	{
	public:
		TArray<struct FAnimatronicTypeData>                        TypesToAlertIn;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.SetTrailSpeed
	 */
	struct UAIDLC_RabbitSystem_SetTrailSpeed_Params
	{
	public:
		float                                                      NewTrailSpeed;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.SetStareTime
	 */
	struct UAIDLC_RabbitSystem_SetStareTime_Params
	{
	public:
		float                                                      NewStareTime;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.SetSpawnTime
	 */
	struct UAIDLC_RabbitSystem_SetSpawnTime_Params
	{
	public:
		float                                                      NewSpawnTime;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.SetSpawnRadius
	 */
	struct UAIDLC_RabbitSystem_SetSpawnRadius_Params
	{
	public:
		float                                                      NewSpawnRadius;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.SetSpawnInViewChance
	 */
	struct UAIDLC_RabbitSystem_SetSpawnInViewChance_Params
	{
	public:
		float                                                      NewSpawnInViewChance;                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.SetSpawnCloseMaxDistance
	 */
	struct UAIDLC_RabbitSystem_SetSpawnCloseMaxDistance_Params
	{
	public:
		float                                                      NewSpawnCloseMaxDistance;                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.SetSpawnCloseChance
	 */
	struct UAIDLC_RabbitSystem_SetSpawnCloseChance_Params
	{
	public:
		float                                                      NewSpawnCloseChance;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.SetSpawnCloseAlertDelay
	 */
	struct UAIDLC_RabbitSystem_SetSpawnCloseAlertDelay_Params
	{
	public:
		float                                                      NewSpawnCloseAlertDelay;                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.SetSoftJumpscareTime
	 */
	struct UAIDLC_RabbitSystem_SetSoftJumpscareTime_Params
	{
	public:
		float                                                      NewSoftJumpscareTime;                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.SetSoftJumpscareChance
	 */
	struct UAIDLC_RabbitSystem_SetSoftJumpscareChance_Params
	{
	public:
		float                                                      NewSoftJumpscareChance;                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.SetPauseTime
	 */
	struct UAIDLC_RabbitSystem_SetPauseTime_Params
	{
	public:
		float                                                      NewPauseTime;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.SetPauseRate
	 */
	struct UAIDLC_RabbitSystem_SetPauseRate_Params
	{
	public:
		float                                                      NewPauseRate;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.SetOuterRange
	 */
	struct UAIDLC_RabbitSystem_SetOuterRange_Params
	{
	public:
		float                                                      NewOuterRange;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.SetNumberToAlert
	 */
	struct UAIDLC_RabbitSystem_SetNumberToAlert_Params
	{
	public:
		int32_t                                                    NumberToAlertIn;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.SetMoveLength
	 */
	struct UAIDLC_RabbitSystem_SetMoveLength_Params
	{
	public:
		float                                                      NewMoveLength;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.SetInnerRange
	 */
	struct UAIDLC_RabbitSystem_SetInnerRange_Params
	{
	public:
		float                                                      NewInnerRange;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.SetInhibitorRadius
	 */
	struct UAIDLC_RabbitSystem_SetInhibitorRadius_Params
	{
	public:
		float                                                      NewInhibitorRadius;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.SetHasBeenAgitatedByWalkieTalkie
	 */
	struct UAIDLC_RabbitSystem_SetHasBeenAgitatedByWalkieTalkie_Params
	{
	public:
		bool                                                       NewHasBeenAgitated;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.SetDLC_RabbitData
	 */
	struct UAIDLC_RabbitSystem_SetDLC_RabbitData_Params
	{
	public:
		struct FDLC_RabbitSaveData                                 Data;                                                    // 0x0000(0x005C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.SetDespawnTime
	 */
	struct UAIDLC_RabbitSystem_SetDespawnTime_Params
	{
	public:
		float                                                      NewDespawnTime;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.SetCooldownPhaseTwo
	 */
	struct UAIDLC_RabbitSystem_SetCooldownPhaseTwo_Params
	{
	public:
		float                                                      NewCooldownPhaseTwo;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.SetCooldownPhaseOne
	 */
	struct UAIDLC_RabbitSystem_SetCooldownPhaseOne_Params
	{
	public:
		float                                                      NewCooldownPhaseOne;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.SetARTrailSpeed
	 */
	struct UAIDLC_RabbitSystem_SetARTrailSpeed_Params
	{
	public:
		float                                                      NewTrailSpeed;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.SetARStareTime
	 */
	struct UAIDLC_RabbitSystem_SetARStareTime_Params
	{
	public:
		float                                                      NewARStareTime;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.SetARSpawnTime
	 */
	struct UAIDLC_RabbitSystem_SetARSpawnTime_Params
	{
	public:
		float                                                      NewARSpawnTime;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.SetARSpawnRadius
	 */
	struct UAIDLC_RabbitSystem_SetARSpawnRadius_Params
	{
	public:
		float                                                      NewARSpawnRadius;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.SetARSpawnInViewChance
	 */
	struct UAIDLC_RabbitSystem_SetARSpawnInViewChance_Params
	{
	public:
		float                                                      NewARSpawnInViewChance;                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.SetARSpawnCloseMaxDistance
	 */
	struct UAIDLC_RabbitSystem_SetARSpawnCloseMaxDistance_Params
	{
	public:
		float                                                      NewARSpawnCloseMaxDistance;                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.SetARSpawnCloseChance
	 */
	struct UAIDLC_RabbitSystem_SetARSpawnCloseChance_Params
	{
	public:
		float                                                      NewARSpawnCloseChance;                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.SetARSpawnCloseAlertDelay
	 */
	struct UAIDLC_RabbitSystem_SetARSpawnCloseAlertDelay_Params
	{
	public:
		float                                                      NewARSpawnCloseAlertDelay;                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.SetARSoftJumpscareTime
	 */
	struct UAIDLC_RabbitSystem_SetARSoftJumpscareTime_Params
	{
	public:
		float                                                      NewARSoftJumpscareTime;                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.SetARSoftJumpscareChance
	 */
	struct UAIDLC_RabbitSystem_SetARSoftJumpscareChance_Params
	{
	public:
		float                                                      NewARSoftJumpscareChance;                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.SetARPauseTime
	 */
	struct UAIDLC_RabbitSystem_SetARPauseTime_Params
	{
	public:
		float                                                      NewARPauseTime;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.SetARPauseRate
	 */
	struct UAIDLC_RabbitSystem_SetARPauseRate_Params
	{
	public:
		float                                                      NewARPauseRate;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.SetAROuterRange
	 */
	struct UAIDLC_RabbitSystem_SetAROuterRange_Params
	{
	public:
		float                                                      NewAROuterRange;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.SetARMoveLength
	 */
	struct UAIDLC_RabbitSystem_SetARMoveLength_Params
	{
	public:
		float                                                      NewARMoveLength;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.SetARInnerRange
	 */
	struct UAIDLC_RabbitSystem_SetARInnerRange_Params
	{
	public:
		float                                                      NewARInnerRange;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.SetARInhibitorRadius
	 */
	struct UAIDLC_RabbitSystem_SetARInhibitorRadius_Params
	{
	public:
		float                                                      NewARInhibitorRadius;                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.SetARHasBeenAgitatedByWalkieTalkie
	 */
	struct UAIDLC_RabbitSystem_SetARHasBeenAgitatedByWalkieTalkie_Params
	{
	public:
		bool                                                       NewARHasBeenAgitated;                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.SetARDLC_RabbitData
	 */
	struct UAIDLC_RabbitSystem_SetARDLC_RabbitData_Params
	{
	public:
		struct FDLC_RabbitSaveData                                 Data;                                                    // 0x0000(0x005C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.SetARDespawnTime
	 */
	struct UAIDLC_RabbitSystem_SetARDespawnTime_Params
	{
	public:
		float                                                      NewARDespawnTime;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.SetARCooldownPhaseTwo
	 */
	struct UAIDLC_RabbitSystem_SetARCooldownPhaseTwo_Params
	{
	public:
		float                                                      NewARCooldownPhaseTwo;                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.SetARCooldownPhaseOne
	 */
	struct UAIDLC_RabbitSystem_SetARCooldownPhaseOne_Params
	{
	public:
		float                                                      NewARCooldownPhaseOne;                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.SetARAnimatronicSpawnDistance
	 */
	struct UAIDLC_RabbitSystem_SetARAnimatronicSpawnDistance_Params
	{
	public:
		float                                                      NewARAnimatronicSpawnDistance;                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.SetARAnimatronicDespawnRadius
	 */
	struct UAIDLC_RabbitSystem_SetARAnimatronicDespawnRadius_Params
	{
	public:
		float                                                      NewARAnimatronicDespawnRadius;                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.SetARAlertPhaseLength
	 */
	struct UAIDLC_RabbitSystem_SetARAlertPhaseLength_Params
	{
	public:
		float                                                      NewARAlertPhaseLength;                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.SetAnimatronicSpawnDistance
	 */
	struct UAIDLC_RabbitSystem_SetAnimatronicSpawnDistance_Params
	{
	public:
		float                                                      NewAnimatronicSpawnDistance;                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.SetAnimatronicDespawnRadius
	 */
	struct UAIDLC_RabbitSystem_SetAnimatronicDespawnRadius_Params
	{
	public:
		float                                                      NewAnimatronicDespawnRadius;                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.SetAlertPhaseLength
	 */
	struct UAIDLC_RabbitSystem_SetAlertPhaseLength_Params
	{
	public:
		float                                                      NewAlertPhaseLength;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.RespawnRabbitAI
	 */
	struct UAIDLC_RabbitSystem_RespawnRabbitAI_Params
	{	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.RespawnAlertAI
	 */
	struct UAIDLC_RabbitSystem_RespawnAlertAI_Params
	{	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.ResetARDLC_RabbitValues
	 */
	struct UAIDLC_RabbitSystem_ResetARDLC_RabbitValues_Params
	{	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.RegisterDLC_RabbitActor
	 */
	struct UAIDLC_RabbitSystem_RegisterDLC_RabbitActor_Params
	{
	public:
		class AActor*                                              DLC_RabbitIn;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.RegisterAnimation
	 */
	struct UAIDLC_RabbitSystem_RegisterAnimation_Params
	{
	public:
		struct FDLC_RabbitEnemySequenceDataStruct                  DataIn;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.PauseTimers
	 */
	struct UAIDLC_RabbitSystem_PauseTimers_Params
	{	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.OnSwitch
	 */
	struct UAIDLC_RabbitSystem_OnSwitch_Params
	{
	public:
		bool                                                       NormalWorld;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.OnSoftJumpscareFinished
	 */
	struct UAIDLC_RabbitSystem_OnSoftJumpscareFinished_Params
	{	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.OnNormalWorldEntry
	 */
	struct UAIDLC_RabbitSystem_OnNormalWorldEntry_Params
	{	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.OnARWorldEntry
	 */
	struct UAIDLC_RabbitSystem_OnARWorldEntry_Params
	{	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.GetUseAlertDelay
	 */
	struct UAIDLC_RabbitSystem_GetUseAlertDelay_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.GetTypesToAlert
	 */
	struct UAIDLC_RabbitSystem_GetTypesToAlert_Params
	{
	public:
		TArray<struct FAnimatronicTypeData>                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.GetTrailSpeed
	 */
	struct UAIDLC_RabbitSystem_GetTrailSpeed_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.GetStareTime
	 */
	struct UAIDLC_RabbitSystem_GetStareTime_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.GetSpawnTime
	 */
	struct UAIDLC_RabbitSystem_GetSpawnTime_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.GetSpawnRadius
	 */
	struct UAIDLC_RabbitSystem_GetSpawnRadius_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.GetSpawnInViewChance
	 */
	struct UAIDLC_RabbitSystem_GetSpawnInViewChance_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.GetSpawnCloseMaxDistance
	 */
	struct UAIDLC_RabbitSystem_GetSpawnCloseMaxDistance_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.GetSpawnCloseChance
	 */
	struct UAIDLC_RabbitSystem_GetSpawnCloseChance_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.GetSpawnCloseAlertDelay
	 */
	struct UAIDLC_RabbitSystem_GetSpawnCloseAlertDelay_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.GetSoftJumpscareTime
	 */
	struct UAIDLC_RabbitSystem_GetSoftJumpscareTime_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.GetSoftJumpscareChance
	 */
	struct UAIDLC_RabbitSystem_GetSoftJumpscareChance_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.GetShouldSpawnBehind
	 */
	struct UAIDLC_RabbitSystem_GetShouldSpawnBehind_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.GetRemainingSpawnTimePercent
	 */
	struct UAIDLC_RabbitSystem_GetRemainingSpawnTimePercent_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.GetRemainingSpawnTime
	 */
	struct UAIDLC_RabbitSystem_GetRemainingSpawnTime_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.GetRemainingAlertTimePercent
	 */
	struct UAIDLC_RabbitSystem_GetRemainingAlertTimePercent_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.GetRemainingAlertTime
	 */
	struct UAIDLC_RabbitSystem_GetRemainingAlertTime_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.GetProximityPercent
	 */
	struct UAIDLC_RabbitSystem_GetProximityPercent_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.GetPauseTime
	 */
	struct UAIDLC_RabbitSystem_GetPauseTime_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.GetPauseRate
	 */
	struct UAIDLC_RabbitSystem_GetPauseRate_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.GetOuterRange
	 */
	struct UAIDLC_RabbitSystem_GetOuterRange_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.GetNumberToAlert
	 */
	struct UAIDLC_RabbitSystem_GetNumberToAlert_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.GetMoveLength
	 */
	struct UAIDLC_RabbitSystem_GetMoveLength_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.GetIsAlerted
	 */
	struct UAIDLC_RabbitSystem_GetIsAlerted_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.GetInnerRange
	 */
	struct UAIDLC_RabbitSystem_GetInnerRange_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.GetInhibitorRadius
	 */
	struct UAIDLC_RabbitSystem_GetInhibitorRadius_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.GetHasBeenAgitatedByWalkieTalkie
	 */
	struct UAIDLC_RabbitSystem_GetHasBeenAgitatedByWalkieTalkie_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.GetDLC_RabbitData
	 */
	struct UAIDLC_RabbitSystem_GetDLC_RabbitData_Params
	{
	public:
		struct FDLC_RabbitSaveData                                 ReturnValue;                                             // 0x0000(0x005C)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.GetDespawnTime
	 */
	struct UAIDLC_RabbitSystem_GetDespawnTime_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.GetCooldownPhaseTwo
	 */
	struct UAIDLC_RabbitSystem_GetCooldownPhaseTwo_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.GetCooldownPhaseOne
	 */
	struct UAIDLC_RabbitSystem_GetCooldownPhaseOne_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.GetARTrailSpeed
	 */
	struct UAIDLC_RabbitSystem_GetARTrailSpeed_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.GetARStareTime
	 */
	struct UAIDLC_RabbitSystem_GetARStareTime_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.GetARSpawnTime
	 */
	struct UAIDLC_RabbitSystem_GetARSpawnTime_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.GetARSpawnRadius
	 */
	struct UAIDLC_RabbitSystem_GetARSpawnRadius_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.GetARSpawnInViewChance
	 */
	struct UAIDLC_RabbitSystem_GetARSpawnInViewChance_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.GetARSpawnCloseMaxDistance
	 */
	struct UAIDLC_RabbitSystem_GetARSpawnCloseMaxDistance_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.GetARSpawnCloseChance
	 */
	struct UAIDLC_RabbitSystem_GetARSpawnCloseChance_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.GetARSpawnCloseAlertDelay
	 */
	struct UAIDLC_RabbitSystem_GetARSpawnCloseAlertDelay_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.GetARSoftJumpscareTime
	 */
	struct UAIDLC_RabbitSystem_GetARSoftJumpscareTime_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.GetARSoftJumpscareChance
	 */
	struct UAIDLC_RabbitSystem_GetARSoftJumpscareChance_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.GetARPauseTime
	 */
	struct UAIDLC_RabbitSystem_GetARPauseTime_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.GetARPauseRate
	 */
	struct UAIDLC_RabbitSystem_GetARPauseRate_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.GetAROuterRange
	 */
	struct UAIDLC_RabbitSystem_GetAROuterRange_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.GetARMoveLength
	 */
	struct UAIDLC_RabbitSystem_GetARMoveLength_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.GetARInnerRange
	 */
	struct UAIDLC_RabbitSystem_GetARInnerRange_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.GetARInhibitorRadius
	 */
	struct UAIDLC_RabbitSystem_GetARInhibitorRadius_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.GetARHasBeenAgitatedByWalkieTalkie
	 */
	struct UAIDLC_RabbitSystem_GetARHasBeenAgitatedByWalkieTalkie_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.GetARDLC_RabbitData
	 */
	struct UAIDLC_RabbitSystem_GetARDLC_RabbitData_Params
	{
	public:
		struct FDLC_RabbitSaveData                                 ReturnValue;                                             // 0x0000(0x005C)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.GetARDespawnTime
	 */
	struct UAIDLC_RabbitSystem_GetARDespawnTime_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.GetARCooldownPhaseTwo
	 */
	struct UAIDLC_RabbitSystem_GetARCooldownPhaseTwo_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.GetARCooldownPhaseOne
	 */
	struct UAIDLC_RabbitSystem_GetARCooldownPhaseOne_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.GetARAnimatronicSpawnDistance
	 */
	struct UAIDLC_RabbitSystem_GetARAnimatronicSpawnDistance_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.GetARAnimatronicDespawnRadius
	 */
	struct UAIDLC_RabbitSystem_GetARAnimatronicDespawnRadius_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.GetARAlertPhaseLength
	 */
	struct UAIDLC_RabbitSystem_GetARAlertPhaseLength_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.GetAnimatronicSpawnDistance
	 */
	struct UAIDLC_RabbitSystem_GetAnimatronicSpawnDistance_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.GetAnimatronicDespawnRadius
	 */
	struct UAIDLC_RabbitSystem_GetAnimatronicDespawnRadius_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.GetAlertPhaseLength
	 */
	struct UAIDLC_RabbitSystem_GetAlertPhaseLength_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.GetAlertedActors
	 */
	struct UAIDLC_RabbitSystem_GetAlertedActors_Params
	{
	public:
		TArray<class AActor*>                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.DoesDLC_RabbitExist
	 */
	struct UAIDLC_RabbitSystem_DoesDLC_RabbitExist_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.ConstructAlertedActorList
	 */
	struct UAIDLC_RabbitSystem_ConstructAlertedActorList_Params
	{	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.BanishRabbit
	 */
	struct UAIDLC_RabbitSystem_BanishRabbit_Params
	{	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.AlertFinished
	 */
	struct UAIDLC_RabbitSystem_AlertFinished_Params
	{	};

	/**
	 * Function fnaf9.AIDLC_RabbitSystem.Alert
	 */
	struct UAIDLC_RabbitSystem_Alert_Params
	{	};

	/**
	 * Function fnaf9.AIHiderInterface.ExitHideMode
	 */
	struct UAIHiderInterface_ExitHideMode_Params
	{
	public:
		class AActor*                                              HideActor;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIHiderInterface.EnterHideMode
	 */
	struct UAIHiderInterface_EnterHideMode_Params
	{
	public:
		class AActor*                                              HideActor;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIManagementSystem.UnregisterSeekerPath
	 */
	struct UAIManagementSystem_UnregisterSeekerPath_Params
	{	};

	/**
	 * Function fnaf9.AIManagementSystem.UnRegisterAI
	 */
	struct UAIManagementSystem_UnRegisterAI_Params
	{
	public:
		class APawn*                                               AIPawn;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIManagementSystem.UnpauseManager
	 */
	struct UAIManagementSystem_UnpauseManager_Params
	{	};

	/**
	 * Function fnaf9.AIManagementSystem.StoreEndoStates
	 */
	struct UAIManagementSystem_StoreEndoStates_Params
	{	};

	/**
	 * Function fnaf9.AIManagementSystem.StoreAnimatronicSpawnWithSubType
	 */
	struct UAIManagementSystem_StoreAnimatronicSpawnWithSubType_Params
	{
	public:
		EFNAFAISpawnType                                           AIType;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_HS4O[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                PathName;                                                // 0x0004(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EFNAFAISubType                                             AISubType;                                               // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIManagementSystem.StoreAnimatronicSpawn
	 */
	struct UAIManagementSystem_StoreAnimatronicSpawn_Params
	{
	public:
		EFNAFAISpawnType                                           AIType;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_C1IQ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                PathName;                                                // 0x0004(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsShattered;                                            // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIManagementSystem.StartManager
	 */
	struct UAIManagementSystem_StartManager_Params
	{	};

	/**
	 * Function fnaf9.AIManagementSystem.SpawnVannyOrVanessa
	 */
	struct UAIManagementSystem_SpawnVannyOrVanessa_Params
	{
	public:
		bool                                                       bSpawnVanny;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bOutSpawned;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_07UW[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FLatentActionInfo                                   LatentActionInfo;                                        // 0x0008(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIManagementSystem.SpawnSpecificAIOnPathWithSubType
	 */
	struct UAIManagementSystem_SpawnSpecificAIOnPathWithSubType_Params
	{
	public:
		EFNAFAISpawnType                                           AIType;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EFNAFAISubType                                             AISubType;                                               // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_8XT4[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                PathName;                                                // 0x0004(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_VEL1[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APawn*                                               ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIManagementSystem.SpawnSpecificAIOnPath
	 */
	struct UAIManagementSystem_SpawnSpecificAIOnPath_Params
	{
	public:
		EFNAFAISpawnType                                           AIType;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bForceShattered;                                         // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_NQF7[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                PathName;                                                // 0x0004(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_1IRD[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APawn*                                               ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIManagementSystem.SpawnSpecificAIAtSpawnPointWithSubType
	 */
	struct UAIManagementSystem_SpawnSpecificAIAtSpawnPointWithSubType_Params
	{
	public:
		class AFNAFAISpawnPoint*                                   SpawnPoint;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EFNAFAISpawnType                                           AIType;                                                  // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EFNAFAISubType                                             forceAISubType;                                          // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIManagementSystem.SpawnSpecificAIAtSpawnPoint
	 */
	struct UAIManagementSystem_SpawnSpecificAIAtSpawnPoint_Params
	{
	public:
		class AFNAFAISpawnPoint*                                   SpawnPoint;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EFNAFAISpawnType                                           AIType;                                                  // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ForceShattered;                                          // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIManagementSystem.SpawnAIWithTransformAndPathWithSubType
	 */
	struct UAIManagementSystem_SpawnAIWithTransformAndPathWithSubType_Params
	{
	public:
		EFNAFAISpawnType                                           AIType;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EFNAFAISubType                                             forceAISubType;                                          // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_D0GZ[0xE];                                   // 0x0002(0x000E) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          SpawnTransform;                                          // 0x0010(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		class FName                                                PathName;                                                // 0x0040(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APawn*                                               ReturnValue;                                             // 0x0048(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIManagementSystem.SpawnAIWithTransformAndPath
	 */
	struct UAIManagementSystem_SpawnAIWithTransformAndPath_Params
	{
	public:
		EFNAFAISpawnType                                           AIType;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bForceShattered;                                         // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_8UEX[0xE];                                   // 0x0002(0x000E) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          SpawnTransform;                                          // 0x0010(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		class FName                                                PathName;                                                // 0x0040(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APawn*                                               ReturnValue;                                             // 0x0048(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIManagementSystem.SpawnAITypeWithTransformWithSubType
	 */
	struct UAIManagementSystem_SpawnAITypeWithTransformWithSubType_Params
	{
	public:
		EFNAFAISpawnType                                           AIType;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_7LO3[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          SpawnTransform;                                          // 0x0010(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		EFNAFAISubType                                             forceAISubType;                                          // 0x0040(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESpawnActorCollisionHandlingMethod                         CollisionOverrideMethod;                                 // 0x0041(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_5SKM[0x6];                                   // 0x0042(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Owner;                                                   // 0x0048(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APawn*                                               ReturnValue;                                             // 0x0050(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIManagementSystem.SpawnAITypeWithTransformSafeWithSubType
	 */
	struct UAIManagementSystem_SpawnAITypeWithTransformSafeWithSubType_Params
	{
	public:
		EFNAFAISpawnType                                           AIType;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_3RVJ[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          SpawnTransform;                                          // 0x0010(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		EFNAFAISubType                                             forceAISubType;                                          // 0x0040(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       success;                                                 // 0x0041(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESpawnActorCollisionHandlingMethod                         CollisionOverrideMethod;                                 // 0x0042(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_W1YC[0x5];                                   // 0x0043(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Owner;                                                   // 0x0048(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bForceRespawn;                                           // 0x0050(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_SY4P[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APawn*                                               ReturnValue;                                             // 0x0058(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIManagementSystem.SpawnAITypeWithTransformSafe
	 */
	struct UAIManagementSystem_SpawnAITypeWithTransformSafe_Params
	{
	public:
		EFNAFAISpawnType                                           AIType;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_I5M5[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          SpawnTransform;                                          // 0x0010(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ForceShattered;                                          // 0x0040(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       success;                                                 // 0x0041(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESpawnActorCollisionHandlingMethod                         CollisionOverrideMethod;                                 // 0x0042(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_V7WI[0x5];                                   // 0x0043(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Owner;                                                   // 0x0048(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bForceRespawn;                                           // 0x0050(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_WF80[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APawn*                                               ReturnValue;                                             // 0x0058(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIManagementSystem.SpawnAITypeWithTransform
	 */
	struct UAIManagementSystem_SpawnAITypeWithTransform_Params
	{
	public:
		EFNAFAISpawnType                                           AIType;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_XTG3[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          SpawnTransform;                                          // 0x0010(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ForceShattered;                                          // 0x0040(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESpawnActorCollisionHandlingMethod                         CollisionOverrideMethod;                                 // 0x0041(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_HRR4[0x6];                                   // 0x0042(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Owner;                                                   // 0x0048(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APawn*                                               ReturnValue;                                             // 0x0050(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIManagementSystem.SpawnAITypeAtLocationWithSubType
	 */
	struct UAIManagementSystem_SpawnAITypeAtLocationWithSubType_Params
	{
	public:
		EFNAFAISpawnType                                           AIType;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_7M6P[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             SpawnLocation;                                           // 0x0004(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EFNAFAISubType                                             forceAISubType;                                          // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_SHZA[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APawn*                                               ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIManagementSystem.SpawnAITypeAtLocation
	 */
	struct UAIManagementSystem_SpawnAITypeAtLocation_Params
	{
	public:
		EFNAFAISpawnType                                           AIType;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_MEOK[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             SpawnLocation;                                           // 0x0004(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ForceShattered;                                          // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_5ART[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APawn*                                               ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIManagementSystem.SpawnAIOnPathWithSubType
	 */
	struct UAIManagementSystem_SpawnAIOnPathWithSubType_Params
	{
	public:
		EFNAFAISpawnType                                           AIType;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EFNAFAISubType                                             forceAISubType;                                          // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_89MK[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                PathName;                                                // 0x0004(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_V7U3[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APawn*                                               ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIManagementSystem.SpawnAIOnPathNearLocation
	 */
	struct UAIManagementSystem_SpawnAIOnPathNearLocation_Params
	{
	public:
		EFNAFAISpawnType                                           AIType;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_1IP0[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             Location;                                                // 0x0004(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                PathName;                                                // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APawn*                                               ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIManagementSystem.SpawnAIOnPath
	 */
	struct UAIManagementSystem_SpawnAIOnPath_Params
	{
	public:
		EFNAFAISpawnType                                           AIType;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bForceShattered;                                         // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_2ZE1[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                PathName;                                                // 0x0004(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_1AIU[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APawn*                                               ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIManagementSystem.SpawnAINearPlayer
	 */
	struct UAIManagementSystem_SpawnAINearPlayer_Params
	{	};

	/**
	 * Function fnaf9.AIManagementSystem.SpawnAIFar
	 */
	struct UAIManagementSystem_SpawnAIFar_Params
	{	};

	/**
	 * Function fnaf9.AIManagementSystem.SpawnAIAtSpawnPointWithSubType
	 */
	struct UAIManagementSystem_SpawnAIAtSpawnPointWithSubType_Params
	{
	public:
		class AFNAFAISpawnPoint*                                   SpawnPoint;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EFNAFAISubType                                             forceAISubType;                                          // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIManagementSystem.SpawnAIAtSpawnPoint
	 */
	struct UAIManagementSystem_SpawnAIAtSpawnPoint_Params
	{
	public:
		class AFNAFAISpawnPoint*                                   SpawnPoint;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bForceShattered;                                         // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIManagementSystem.SpawnAIAtDistance
	 */
	struct UAIManagementSystem_SpawnAIAtDistance_Params
	{
	public:
		float                                                      Distance;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIManagementSystem.SetWorldSpawnEnabled
	 */
	struct UAIManagementSystem_SetWorldSpawnEnabled_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIManagementSystem.SetVanessaSpawnEnable
	 */
	struct UAIManagementSystem_SetVanessaSpawnEnable_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIManagementSystem.SetUseStagedSpawns
	 */
	struct UAIManagementSystem_SetUseStagedSpawns_Params
	{
	public:
		bool                                                       enable;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIManagementSystem.SetSpawningEnabled
	 */
	struct UAIManagementSystem_SetSpawningEnabled_Params
	{
	public:
		bool                                                       enable;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIManagementSystem.SetExpectedAI
	 */
	struct UAIManagementSystem_SetExpectedAI_Params
	{
	public:
		TArray<struct FAnimatronicExpectedData>                    AITypes;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIManagementSystem.SetAllAIExpected
	 */
	struct UAIManagementSystem_SetAllAIExpected_Params
	{	};

	/**
	 * Function fnaf9.AIManagementSystem.SetAITeleportEnabled
	 */
	struct UAIManagementSystem_SetAITeleportEnabled_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIManagementSystem.SendVanessaAlert
	 */
	struct UAIManagementSystem_SendVanessaAlert_Params
	{
	public:
		TArray<EFNAFAISpawnType>                                   TypesToAlert;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		int32_t                                                    NumberToAlert;                                           // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIManagementSystem.SendGeneralAlert
	 */
	struct UAIManagementSystem_SendGeneralAlert_Params
	{
	public:
		struct FVector                                             AlertLocation;                                           // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_2JR9[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FAnimatronicTypeData>                        TypesToAlert;                                            // 0x0010(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		int32_t                                                    NumberToAlert;                                           // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIManagementSystem.RespawnEndos
	 */
	struct UAIManagementSystem_RespawnEndos_Params
	{	};

	/**
	 * Function fnaf9.AIManagementSystem.RespawnAnimatronics
	 */
	struct UAIManagementSystem_RespawnAnimatronics_Params
	{	};

	/**
	 * Function fnaf9.AIManagementSystem.RespawnAllAI
	 */
	struct UAIManagementSystem_RespawnAllAI_Params
	{	};

	/**
	 * Function fnaf9.AIManagementSystem.Reset
	 */
	struct UAIManagementSystem_Reset_Params
	{	};

	/**
	 * Function fnaf9.AIManagementSystem.RemoveExpectedAI
	 */
	struct UAIManagementSystem_RemoveExpectedAI_Params
	{
	public:
		EFNAFAISpawnType                                           AIType;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIManagementSystem.RemoveCharacterByType
	 */
	struct UAIManagementSystem_RemoveCharacterByType_Params
	{
	public:
		EFNAFAISpawnType                                           AIType;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIManagementSystem.RemoveAllCharacters
	 */
	struct UAIManagementSystem_RemoveAllCharacters_Params
	{	};

	/**
	 * Function fnaf9.AIManagementSystem.RegisterSeekerPath
	 */
	struct UAIManagementSystem_RegisterSeekerPath_Params
	{	};

	/**
	 * Function fnaf9.AIManagementSystem.RegisterAI
	 */
	struct UAIManagementSystem_RegisterAI_Params
	{
	public:
		class APawn*                                               AIPawn;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIManagementSystem.PawnExitedRoom
	 */
	struct UAIManagementSystem_PawnExitedRoom_Params
	{
	public:
		class APawn*                                               AIPawn;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ARoomAreaBase*                                       Room;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIManagementSystem.PawnEnteringRoom
	 */
	struct UAIManagementSystem_PawnEnteringRoom_Params
	{
	public:
		class APawn*                                               AIPawn;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ARoomAreaBase*                                       Room;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIManagementSystem.PawnEnteredRoom
	 */
	struct UAIManagementSystem_PawnEnteredRoom_Params
	{
	public:
		class APawn*                                               AIPawn;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ARoomAreaBase*                                       Room;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIManagementSystem.PauseManager
	 */
	struct UAIManagementSystem_PauseManager_Params
	{	};

	/**
	 * Function fnaf9.AIManagementSystem.OnWorldStateChanged
	 */
	struct UAIManagementSystem_OnWorldStateChanged_Params
	{
	public:
		EFNAFGameState                                             NewState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EFNAFGameState                                             OldState;                                                // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIManagementSystem.OnVannyPathsCollected
	 */
	struct UAIManagementSystem_OnVannyPathsCollected_Params
	{	};

	/**
	 * Function fnaf9.AIManagementSystem.OnPawnEndPlay
	 */
	struct UAIManagementSystem_OnPawnEndPlay_Params
	{
	public:
		class AActor*                                              DestroyedPawn;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EEndPlayReason                                             EndPlayReason;                                           // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIManagementSystem.OnAIFellOutOfWorld
	 */
	struct UAIManagementSystem_OnAIFellOutOfWorld_Params
	{
	public:
		class APawn*                                               AIPawn;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIManagementSystem.OnAIEnvQueryInfoLoaded
	 */
	struct UAIManagementSystem_OnAIEnvQueryInfoLoaded_Params
	{
	public:
		TArray<struct FAssetData>                                  AssetDataList;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIManagementSystem.OnAICharacterInfoLoaded
	 */
	struct UAIManagementSystem_OnAICharacterInfoLoaded_Params
	{
	public:
		TArray<struct FAssetData>                                  AssetDataList;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIManagementSystem.IsWorldSpawnEnabled
	 */
	struct UAIManagementSystem_IsWorldSpawnEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIManagementSystem.IsUsingStagedSpawns
	 */
	struct UAIManagementSystem_IsUsingStagedSpawns_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIManagementSystem.IsSpawningEnabled
	 */
	struct UAIManagementSystem_IsSpawningEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIManagementSystem.IsRoomOccupied
	 */
	struct UAIManagementSystem_IsRoomOccupied_Params
	{
	public:
		class ARoomAreaBase*                                       Room;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIManagementSystem.IsRoomBeingEntered
	 */
	struct UAIManagementSystem_IsRoomBeingEntered_Params
	{
	public:
		class ARoomAreaBase*                                       Room;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIManagementSystem.IsAITeleportEnabled
	 */
	struct UAIManagementSystem_IsAITeleportEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIManagementSystem.GetTimeSinceLastEncounter
	 */
	struct UAIManagementSystem_GetTimeSinceLastEncounter_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIManagementSystem.GetRoomDistancesToPlayer
	 */
	struct UAIManagementSystem_GetRoomDistancesToPlayer_Params
	{
	public:
		TMap<class APawn*, int32_t>                                ReturnValue;                                             // 0x0000(0x0050)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIManagementSystem.GetRoomAIPawnIsIn
	 */
	struct UAIManagementSystem_GetRoomAIPawnIsIn_Params
	{
	public:
		class APawn*                                               AIPawn;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ARoomAreaBase*                                       ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIManagementSystem.GetRoomAIPawnIsEntering
	 */
	struct UAIManagementSystem_GetRoomAIPawnIsEntering_Params
	{
	public:
		class APawn*                                               AIPawn;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ARoomAreaBase*                                       ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIManagementSystem.GetPawnForType
	 */
	struct UAIManagementSystem_GetPawnForType_Params
	{
	public:
		EFNAFAISpawnType                                           AIType;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_GA13[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APawn*                                               ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIManagementSystem.GetPawnClassForTypeAndSubType
	 */
	struct UAIManagementSystem_GetPawnClassForTypeAndSubType_Params
	{
	public:
		EFNAFAISpawnType                                           AIType;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EFNAFAISubType                                             forceAISubType;                                          // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_CPB4[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIManagementSystem.GetPawnClassForType
	 */
	struct UAIManagementSystem_GetPawnClassForType_Params
	{
	public:
		EFNAFAISpawnType                                           AIType;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bForceShattered;                                         // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_3W0J[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIManagementSystem.GetPathForAI
	 */
	struct UAIManagementSystem_GetPathForAI_Params
	{
	public:
		EFNAFAISpawnType                                           AIType;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_92ML[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                PathName;                                                // 0x0004(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_LQAD[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function fnaf9.AIManagementSystem.GetPathByNameForAI
	 */
	struct UAIManagementSystem_GetPathByNameForAI_Params
	{
	public:
		class FName                                                PathName;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIManagementSystem.GetExistingPawnTypes
	 */
	struct UAIManagementSystem_GetExistingPawnTypes_Params
	{
	public:
		TArray<EFNAFAISpawnType>                                   ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIManagementSystem.GetExistingPawn
	 */
	struct UAIManagementSystem_GetExistingPawn_Params
	{
	public:
		EFNAFAISpawnType                                           AIType;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       RequireShattered;                                        // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_YXIN[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APawn*                                               ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIManagementSystem.GetCurrentVannyMeterValuesAsPercentage
	 */
	struct UAIManagementSystem_GetCurrentVannyMeterValuesAsPercentage_Params
	{
	public:
		float                                                      OutCurrentValuePercent;                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      OutSoftMaxPercent;                                       // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIManagementSystem.GetCurrentVannyMeterValues
	 */
	struct UAIManagementSystem_GetCurrentVannyMeterValues_Params
	{
	public:
		float                                                      CurrentValue;                                            // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Max;                                                     // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      SoftMax;                                                 // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIManagementSystem.GetCurrentVannyMeterPercentage
	 */
	struct UAIManagementSystem_GetCurrentVannyMeterPercentage_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIManagementSystem.GetCachedDistances
	 */
	struct UAIManagementSystem_GetCachedDistances_Params
	{
	public:
		TArray<struct FAIDistanceResult>                           ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIManagementSystem.GetCachedDistanceFor
	 */
	struct UAIManagementSystem_GetCachedDistanceFor_Params
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bOutResultValid;                                         // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_JV0Z[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FAIDistanceResult                                   OutResult;                                               // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIManagementSystem.GetAllSpawnPointsFor
	 */
	struct UAIManagementSystem_GetAllSpawnPointsFor_Params
	{
	public:
		EFNAFAISpawnType                                           AIType;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_R3AU[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class AFNAFAISpawnPoint*>                           ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIManagementSystem.GetAllSpawnPoints
	 */
	struct UAIManagementSystem_GetAllSpawnPoints_Params
	{
	public:
		TArray<class AFNAFAISpawnPoint*>                           ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIManagementSystem.GetAllRegisteredAI
	 */
	struct UAIManagementSystem_GetAllRegisteredAI_Params
	{
	public:
		TArray<class APawn*>                                       ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIManagementSystem.GetAllAnimatronicPawns
	 */
	struct UAIManagementSystem_GetAllAnimatronicPawns_Params
	{
	public:
		TArray<class APawn*>                                       OutAnimatronicPawns;                                     // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIManagementSystem.GetAllAIInRoomAtMost
	 */
	struct UAIManagementSystem_GetAllAIInRoomAtMost_Params
	{
	public:
		int32_t                                                    numRooms;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_GOLS[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class APawn*>                                       ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIManagementSystem.GetAllAI
	 */
	struct UAIManagementSystem_GetAllAI_Params
	{
	public:
		TArray<class APawn*>                                       ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIManagementSystem.GetAIPawnsWithSightToPlayer
	 */
	struct UAIManagementSystem_GetAIPawnsWithSightToPlayer_Params
	{
	public:
		TArray<class APawn*>                                       ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIManagementSystem.GetAIPawnsEnteringRoom
	 */
	struct UAIManagementSystem_GetAIPawnsEnteringRoom_Params
	{
	public:
		class ARoomAreaBase*                                       Room;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class APawn*>                                       ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIManagementSystem.GetAIPawnInRoom
	 */
	struct UAIManagementSystem_GetAIPawnInRoom_Params
	{
	public:
		class ARoomAreaBase*                                       Room;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class APawn*>                                       ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIManagementSystem.FindSpawnPointClosestToDistance
	 */
	struct UAIManagementSystem_FindSpawnPointClosestToDistance_Params
	{
	public:
		float                                                      Distance;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_71Z3[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AFNAFAISpawnPoint*                                   ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIManagementSystem.FindSpawnNotVisibleAtDistance
	 */
	struct UAIManagementSystem_FindSpawnNotVisibleAtDistance_Params
	{
	public:
		float                                                      Distance;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EFNAFAISpawnType                                           SpawnType;                                               // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_9NP8[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APawn*                                               PawnForNavProperties;                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class AFNAFAISpawnPoint*>                           OutSpawnPointsResult;                                    // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<float>                                              OutDistances;                                            // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0030(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIManagementSystem.FindRandomPatrolPointOutOfView
	 */
	struct UAIManagementSystem_FindRandomPatrolPointOutOfView_Params
	{
	public:
		EFNAFAISpawnType                                           AIType;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_OFTV[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		unsigned char                                              UnknownData_NGZQ[0x17];                                  // 0x0001(0x0017) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             OutLocation;                                             // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIManagementSystem.FindFurthestSpawnPoint
	 */
	struct UAIManagementSystem_FindFurthestSpawnPoint_Params
	{
	public:
		class AFNAFAISpawnPoint*                                   ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIManagementSystem.FindClosestSpawnPoint
	 */
	struct UAIManagementSystem_FindClosestSpawnPoint_Params
	{
	public:
		class AFNAFAISpawnPoint*                                   ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIManagementSystem.FindClosestPatrolPointOutOfView
	 */
	struct UAIManagementSystem_FindClosestPatrolPointOutOfView_Params
	{
	public:
		class APawn*                                               AIPawn;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bOutResultValid;                                         // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_AE15[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		unsigned char                                              UnknownData_YJ1E[0x17];                                  // 0x0009(0x0017) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             OutLocation;                                             // 0x0020(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_JK3Q[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FLatentActionInfo                                   LatentActionInfo;                                        // 0x0030(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		int32_t                                                    OutPointIndex;                                           // 0x0048(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIManagementSystem.FindClosestPathPointForAI
	 */
	struct UAIManagementSystem_FindClosestPathPointForAI_Params
	{
	public:
		class APawn*                                               AIPawn;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       OutResultValid;                                          // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_D27H[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		unsigned char                                              UnknownData_6D4K[0x17];                                  // 0x0009(0x0017) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    OutPointIndex;                                           // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             OutLocation;                                             // 0x0024(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0030(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIManagementSystem.ExitedHiding
	 */
	struct UAIManagementSystem_ExitedHiding_Params
	{
	public:
		class APawn*                                               AIPawn;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIManagementSystem.DoNotDespawnAIDuringMoonmanPhase
	 */
	struct UAIManagementSystem_DoNotDespawnAIDuringMoonmanPhase_Params
	{
	public:
		bool                                                       bDoNotDestroy;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIManagementSystem.DestroyAllAINotVisible
	 */
	struct UAIManagementSystem_DestroyAllAINotVisible_Params
	{	};

	/**
	 * Function fnaf9.AIManagementSystem.DestroyAllAIInRoomsAtleast
	 */
	struct UAIManagementSystem_DestroyAllAIInRoomsAtleast_Params
	{
	public:
		int32_t                                                    RoomDist;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIManagementSystem.DestroyAllAI
	 */
	struct UAIManagementSystem_DestroyAllAI_Params
	{	};

	/**
	 * Function fnaf9.AIManagementSystem.ClearExpectedAI
	 */
	struct UAIManagementSystem_ClearExpectedAI_Params
	{	};

	/**
	 * Function fnaf9.AIManagementSystem.CalculateAllAIDistances
	 */
	struct UAIManagementSystem_CalculateAllAIDistances_Params
	{
	public:
		TArray<struct FAIDistanceResult>                           DistanceResults;                                         // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       bOutClosestIsValid;                                      // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_8R0V[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ClosestIndex;                                            // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0018(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIManagementSystem.ApplySound
	 */
	struct UAIManagementSystem_ApplySound_Params
	{
	public:
		float                                                      Strength;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             WorldLocation;                                           // 0x0004(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIManagementSystem.ApplyCollect
	 */
	struct UAIManagementSystem_ApplyCollect_Params
	{
	public:
		struct FVector                                             WorldLocation;                                           // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIManagementSystem.AnyPawnInPlayerRoom
	 */
	struct UAIManagementSystem_AnyPawnInPlayerRoom_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIManagementSystem.AISpottedPlayer
	 */
	struct UAIManagementSystem_AISpottedPlayer_Params
	{
	public:
		class APawn*                                               AIPawn;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIManagementSystem.AILostSightOfPlayer
	 */
	struct UAIManagementSystem_AILostSightOfPlayer_Params
	{
	public:
		class APawn*                                               AIPawn;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIManagementSystem.AdjustVannyMeter
	 */
	struct UAIManagementSystem_AdjustVannyMeter_Params
	{
	public:
		float                                                      Amount;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AIManagementSystem.AddExpectedAI
	 */
	struct UAIManagementSystem_AddExpectedAI_Params
	{
	public:
		struct FAnimatronicExpectedData                            AIType;                                                  // 0x0000(0x000C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.PathPointProvider.SetPointType
	 */
	struct UPathPointProvider_SetPointType_Params
	{
	public:
		int32_t                                                    PointIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    PointType;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.PathPointProvider.SetPointLocation
	 */
	struct UPathPointProvider_SetPointLocation_Params
	{
	public:
		int32_t                                                    PointIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Location;                                                // 0x0004(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.PathPointProvider.RemovePointConnection
	 */
	struct UPathPointProvider_RemovePointConnection_Params
	{
	public:
		int32_t                                                    PointIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    PointToDisconnectIndex;                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.PathPointProvider.RemovePoint
	 */
	struct UPathPointProvider_RemovePoint_Params
	{
	public:
		int32_t                                                    PointIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.PathPointProvider.GetPointType
	 */
	struct UPathPointProvider_GetPointType_Params
	{
	public:
		int32_t                                                    PointIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.PathPointProvider.GetPointsConnectedTo
	 */
	struct UPathPointProvider_GetPointsConnectedTo_Params
	{
	public:
		int32_t                                                    PointIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_TW8J[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<int32_t>                                            ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.PathPointProvider.GetPointLocation
	 */
	struct UPathPointProvider_GetPointLocation_Params
	{
	public:
		int32_t                                                    PointIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             ReturnValue;                                             // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.PathPointProvider.GetPointColor
	 */
	struct UPathPointProvider_GetPointColor_Params
	{
	public:
		int32_t                                                    PointIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                                        ReturnValue;                                             // 0x0004(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.PathPointProvider.GetNumberOfPathPoints
	 */
	struct UPathPointProvider_GetNumberOfPathPoints_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.PathPointProvider.GetAvailablePointTypes
	 */
	struct UPathPointProvider_GetAvailablePointTypes_Params
	{
	public:
		TArray<class FText>                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.PathPointProvider.AddPointConnection
	 */
	struct UPathPointProvider_AddPointConnection_Params
	{
	public:
		int32_t                                                    PointIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    PointToConnectIndex;                                     // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.PathPointProvider.AddPoint
	 */
	struct UPathPointProvider_AddPoint_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AISpawnSystem.OnRollChange
	 */
	struct AAISpawnSystem_OnRollChange_Params
	{	};

	/**
	 * Function fnaf9.PlayerTrigger.SetTriggerActive
	 */
	struct APlayerTrigger_SetTriggerActive_Params
	{
	public:
		bool                                                       bActive;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.PlayerTrigger.SaveActivated
	 */
	struct APlayerTrigger_SaveActivated_Params
	{	};

	/**
	 * Function fnaf9.PlayerTrigger.OnWorldObjectStateChanged
	 */
	struct APlayerTrigger_OnWorldObjectStateChanged_Params
	{
	public:
		class FName                                                ObjectName;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ObjectState;                                             // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.PlayerTrigger.OnTriggerStay
	 */
	struct APlayerTrigger_OnTriggerStay_Params
	{	};

	/**
	 * Function fnaf9.PlayerTrigger.OnTriggered
	 */
	struct APlayerTrigger_OnTriggered_Params
	{	};

	/**
	 * Function fnaf9.PlayerTrigger.IsTriggerStateSet
	 */
	struct APlayerTrigger_IsTriggerStateSet_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.PlayerTrigger.IsTriggerActive
	 */
	struct APlayerTrigger_IsTriggerActive_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.PlayerTrigger.ForceTrigger
	 */
	struct APlayerTrigger_ForceTrigger_Params
	{	};

	/**
	 * Function fnaf9.PlayerTrigger.CanTrigger
	 */
	struct APlayerTrigger_CanTrigger_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AISpawnTrigger.OnAISpawnedFailure
	 */
	struct AAISpawnTrigger_OnAISpawnedFailure_Params
	{
	public:
		class APawn*                                               SpawnedPawn;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AISpawnTrigger.OnAISpawned
	 */
	struct AAISpawnTrigger_OnAISpawned_Params
	{
	public:
		class APawn*                                               SpawnedPawn;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AudioUtil.RemoveWwiseListener
	 */
	struct UAudioUtil_RemoveWwiseListener_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AudioUtil.IsAudioForActorPlaying
	 */
	struct UAudioUtil_IsAudioForActorPlaying_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AudioUtil.GetWwiseListeners
	 */
	struct UAudioUtil_GetWwiseListeners_Params
	{	};

	/**
	 * Function fnaf9.AudioUtil.AddWwiseListener
	 */
	struct UAudioUtil_AddWwiseListener_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.CameraHelperFunctions.IsLocationInCameraView
	 */
	struct UCameraHelperFunctions_IsLocationInCameraView_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Location;                                                // 0x0008(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ECameraAngleFlags                                          CameraAngles;                                            // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_AHY1[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      OutHorizontalAngle;                                      // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      OutVerticalAngle;                                        // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.CameraHelperFunctions.GetLocationAnglesFromCamera
	 */
	struct UCameraHelperFunctions_GetLocationAnglesFromCamera_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Location;                                                // 0x0008(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      OutHorizontalAngle;                                      // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      OutVerticalAngle;                                        // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.CameraTrigger.GetAlertType
	 */
	struct UCameraTrigger_GetAlertType_Params
	{
	public:
		EAlertType                                                 ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.ChowdaDebugSubsystem.SpawnDLCRabbit
	 */
	struct UChowdaDebugSubsystem_SpawnDLCRabbit_Params
	{
	public:
		TArray<struct FAnimatronicTypeData>                        TypesToAlertIn;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.ChowdaDebugSubsystem.GoToThisArea
	 */
	struct UChowdaDebugSubsystem_GoToThisArea_Params
	{
	public:
		EMapArea                                                   MapArea;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.ChowdaPawnInterface_DLC.ForceEject
	 */
	struct UChowdaPawnInterface_DLC_ForceEject_Params
	{	};

	/**
	 * Function fnaf9.ChowdaUtils.ResetInputsToDefaults
	 */
	struct UChowdaUtils_ResetInputsToDefaults_Params
	{
	public:
		class UInputSettings*                                      ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.ChowdaUtils.IsPlayInEditor
	 */
	struct UChowdaUtils_IsPlayInEditor_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.ChowdaUtils.DoInputMappingsMatch
	 */
	struct UChowdaUtils_DoInputMappingsMatch_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.ConditionalCheckComponent.OnConditionUpdated
	 */
	struct UConditionalCheckComponent_OnConditionUpdated_Params
	{	};

	/**
	 * Function fnaf9.ConditionCheckInterface.UnbindConditionUpdatedDelegate
	 */
	struct UConditionCheckInterface_UnbindConditionUpdatedDelegate_Params
	{
	public:
		class FScriptDelegate                                      OnConditionResultUpdated;                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.ConditionCheckInterface.ConditionsMet
	 */
	struct UConditionCheckInterface_ConditionsMet_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.ConditionCheckInterface.BindConditionUpdatedDelegate
	 */
	struct UConditionCheckInterface_BindConditionUpdatedDelegate_Params
	{
	public:
		class FScriptDelegate                                      OnConditionResultUpdated;                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.ConditionFunctionLibrary.RemoveConditionDelegate
	 */
	struct UConditionFunctionLibrary_RemoveConditionDelegate_Params
	{
	public:
		struct FConditionResultDelegates                           DelegateHandle;                                          // 0x0000(0x0010)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Delegate;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.ConditionFunctionLibrary.HasMetComponentConditionsWithGet
	 */
	struct UConditionFunctionLibrary_HasMetComponentConditionsWithGet_Params
	{
	public:
		class AActor*                                              ActorToCheck;                                            // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bOutConditionsMet;                                       // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_RSIH[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		unsigned char                                              UnknownData_OA1V[0x17];                                  // 0x0009(0x0017) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function fnaf9.ConditionFunctionLibrary.HasMetComponentConditions
	 */
	struct UConditionFunctionLibrary_HasMetComponentConditions_Params
	{
	public:
		class AActor*                                              ActorToCheck;                                            // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.ConditionFunctionLibrary.HasMetAnyComponentConditions
	 */
	struct UConditionFunctionLibrary_HasMetAnyComponentConditions_Params
	{
	public:
		class AActor*                                              ActorToCheck;                                            // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.ConditionFunctionLibrary.CallConditionUpdate
	 */
	struct UConditionFunctionLibrary_CallConditionUpdate_Params
	{
	public:
		unsigned char                                              UnknownData_CUI0[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FConditionResultDelegates                           DelegateHandle;                                          // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.ConditionFunctionLibrary.AddConditionDelegate
	 */
	struct UConditionFunctionLibrary_AddConditionDelegate_Params
	{
	public:
		struct FConditionResultDelegates                           DelegateHandle;                                          // 0x0000(0x0010)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Delegate;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.CounterpartProviderInterface.GetCounterPart
	 */
	struct UCounterpartProviderInterface_GetCounterPart_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.DataTableUtils.GetAnimatronicVODataTable
	 */
	struct UDataTableUtils_GetAnimatronicVODataTable_Params
	{
	public:
		class FName                                                RowName;                                                 // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDataTable*                                          ReturnValue;                                             // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.DLC_RabbitAlertUI.ShowSoftJumpscare
	 */
	struct UDLC_RabbitAlertUI_ShowSoftJumpscare_Params
	{	};

	/**
	 * Function fnaf9.DLC_RabbitAlertUI.ShowRabbitFlicker
	 */
	struct UDLC_RabbitAlertUI_ShowRabbitFlicker_Params
	{	};

	/**
	 * Function fnaf9.DLC_RabbitAlertUI.ShowAlert
	 */
	struct UDLC_RabbitAlertUI_ShowAlert_Params
	{	};

	/**
	 * Function fnaf9.DLC_RabbitAlertUI.HideSoftJumpscare
	 */
	struct UDLC_RabbitAlertUI_HideSoftJumpscare_Params
	{	};

	/**
	 * Function fnaf9.DLC_RabbitAlertUI.HideAlert
	 */
	struct UDLC_RabbitAlertUI_HideAlert_Params
	{	};

	/**
	 * Function fnaf9.DLC_RabbitEnemySequence.RequestStop
	 */
	struct UDLC_RabbitEnemySequence_RequestStop_Params
	{	};

	/**
	 * Function fnaf9.DoorComponent.SetSecurityLevel
	 */
	struct UDoorComponent_SetSecurityLevel_Params
	{
	public:
		int32_t                                                    NewSecurityLevel;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.DoorComponent.SetPlayerBlocker
	 */
	struct UDoorComponent_SetPlayerBlocker_Params
	{
	public:
		class UPrimitiveComponent*                                 InPlayerBlocker;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.DoorComponent.SetLockedForPlayer
	 */
	struct UDoorComponent_SetLockedForPlayer_Params
	{
	public:
		bool                                                       bLocked;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.DoorComponent.SetLockedForAI
	 */
	struct UDoorComponent_SetLockedForAI_Params
	{
	public:
		bool                                                       bLocked;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.DoorComponent.SetAutomaticDoorEnableForPlayer
	 */
	struct UDoorComponent_SetAutomaticDoorEnableForPlayer_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.DoorComponent.SetAutomaticDoorEnableForAI
	 */
	struct UDoorComponent_SetAutomaticDoorEnableForAI_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.DoorComponent.PawnExitedDoor
	 */
	struct UDoorComponent_PawnExitedDoor_Params
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.DoorComponent.PawnEnteredDoor
	 */
	struct UDoorComponent_PawnEnteredDoor_Params
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.DoorComponent.IsLockedForPlayer
	 */
	struct UDoorComponent_IsLockedForPlayer_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.DoorComponent.IsLockedForAI
	 */
	struct UDoorComponent_IsLockedForAI_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.DoorComponent.HasMetConditions
	 */
	struct UDoorComponent_HasMetConditions_Params
	{
	public:
		class AFNAFBasePlayerCharacter*                            BasePlayerCharacter;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bConditionsMet;                                          // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EConditionFailReason                                       FailReason;                                              // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.DoorComponent.HasDoorInitialized
	 */
	struct UDoorComponent_HasDoorInitialized_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.DoorComponent.GetPawnsInDoor
	 */
	struct UDoorComponent_GetPawnsInDoor_Params
	{
	public:
		TArray<class APawn*>                                       ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.DoorComponent.GetIsAutomaticDoorEnabledForPlayer
	 */
	struct UDoorComponent_GetIsAutomaticDoorEnabledForPlayer_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.DoorComponent.GetIsAutomaticDoorEnabledForAI
	 */
	struct UDoorComponent_GetIsAutomaticDoorEnabledForAI_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.DoorComponent.GetDoorSideFromLocation
	 */
	struct UDoorComponent_GetDoorSideFromLocation_Params
	{
	public:
		struct FVector                                             WorldLocation;                                           // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EDoorSide                                                  ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.DoorComponent.GetDoorSideFromActor
	 */
	struct UDoorComponent_GetDoorSideFromActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EDoorSide                                                  ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.DoorComponent.GetCurrentRequirements
	 */
	struct UDoorComponent_GetCurrentRequirements_Params
	{
	public:
		struct FDoorEntryRequirements                              ReturnValue;                                             // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.DoorComponent.ForceOpen
	 */
	struct UDoorComponent_ForceOpen_Params
	{	};

	/**
	 * Function fnaf9.DoorComponent.ForceClose
	 */
	struct UDoorComponent_ForceClose_Params
	{	};

	/**
	 * Function fnaf9.DoorComponent.CopyConditions
	 */
	struct UDoorComponent_CopyConditions_Params
	{
	public:
		class UDoorComponent*                                      OtherDoorComponent;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.DoorComponent.CanPawnOpenDoor
	 */
	struct UDoorComponent_CanPawnOpenDoor_Params
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bOutConditionsMet;                                       // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EConditionFailReason                                       OutFailReason;                                           // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.DoorInteractor.OnOverlappedDoor
	 */
	struct UDoorInteractor_OnOverlappedDoor_Params
	{
	public:
		bool                                                       bCanEnterDoor;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EConditionFailReason                                       CantEnterReason;                                         // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_R8HA[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDoorComponent*                                      DoorComponent;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.DoorInteractor.OnEndOverlapDoor
	 */
	struct UDoorInteractor_OnEndOverlapDoor_Params
	{	};

	/**
	 * Function fnaf9.DoorInteractor.DoorEntryNotAllowed
	 */
	struct UDoorInteractor_DoorEntryNotAllowed_Params
	{
	public:
		class UDoorComponent*                                      DoorComponent;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.DownloadableContentHandler.HasMountedDLCPack
	 */
	struct UDownloadableContentHandler_HasMountedDLCPack_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.DownloadableContentHandler.HasDLC
	 */
	struct UDownloadableContentHandler_HasDLC_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.DownloadableContentHandler.GetDLCPurchases
	 */
	struct UDownloadableContentHandler_GetDLCPurchases_Params
	{
	public:
		TArray<class FString>                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.fnaf9GameModeBase.ToggleFullAIDisplay
	 */
	struct Afnaf9GameModeBase_ToggleFullAIDisplay_Params
	{	};

	/**
	 * Function fnaf9.fnaf9GameModeBase.StartRepairGame
	 */
	struct Afnaf9GameModeBase_StartRepairGame_Params
	{	};

	/**
	 * Function fnaf9.fnaf9GameModeBase.SetAIDisplay
	 */
	struct Afnaf9GameModeBase_SetAIDisplay_Params
	{
	public:
		bool                                                       enable;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.fnaf9GameModeBase.RoomHeatDisplay
	 */
	struct Afnaf9GameModeBase_RoomHeatDisplay_Params
	{
	public:
		bool                                                       enable;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.fnaf9GameModeBase.POIVisible
	 */
	struct Afnaf9GameModeBase_POIVisible_Params
	{
	public:
		bool                                                       bVisible;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.fnaf9GameModeBase.POIDetectionVisible
	 */
	struct Afnaf9GameModeBase_POIDetectionVisible_Params
	{
	public:
		bool                                                       bVisible;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.fnaf9GameModeBase.PlayerFlashlightVis
	 */
	struct Afnaf9GameModeBase_PlayerFlashlightVis_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.fnaf9GameModeBase.OnRoomHeatDisplayChanged
	 */
	struct Afnaf9GameModeBase_OnRoomHeatDisplayChanged_Params
	{
	public:
		bool                                                       enable;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.fnaf9GameModeBase.OnPlayerFlashlightVis
	 */
	struct Afnaf9GameModeBase_OnPlayerFlashlightVis_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.fnaf9GameModeBase.OnForceSpawnVanny
	 */
	struct Afnaf9GameModeBase_OnForceSpawnVanny_Params
	{	};

	/**
	 * Function fnaf9.fnaf9GameModeBase.OnAIPawnsVis
	 */
	struct Afnaf9GameModeBase_OnAIPawnsVis_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.fnaf9GameModeBase.IsAIDisplayOn
	 */
	struct Afnaf9GameModeBase_IsAIDisplayOn_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.fnaf9GameModeBase.ForceSpawnVanny
	 */
	struct Afnaf9GameModeBase_ForceSpawnVanny_Params
	{	};

	/**
	 * Function fnaf9.fnaf9GameModeBase.FinishRepairGame
	 */
	struct Afnaf9GameModeBase_FinishRepairGame_Params
	{	};

	/**
	 * Function fnaf9.fnaf9GameModeBase.AIPawnsVis
	 */
	struct Afnaf9GameModeBase_AIPawnsVis_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFAchievementUtils.GetAllAchievements
	 */
	struct UFNAFAchievementUtils_GetAllAchievements_Params
	{
	public:
		TArray<class FName>                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFAISpawnPoint.GetAIType
	 */
	struct AFNAFAISpawnPoint_GetAIType_Params
	{
	public:
		EFNAFAISpawnType                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AnimatronicTypeDataBlueprintFunctionLibrary.GetFNAFAISpawnTypeArrayFromAnimatronicTypeDataArray
	 */
	struct UAnimatronicTypeDataBlueprintFunctionLibrary_GetFNAFAISpawnTypeArrayFromAnimatronicTypeDataArray_Params
	{
	public:
		TArray<struct FAnimatronicTypeData>                        SpawnTypes;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<EFNAFAISpawnType>                                   ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.AnimatronicTypeDataBlueprintFunctionLibrary.GetAnimatronicTypeDataArrayFromFNAFAISpawnTypeArray
	 */
	struct UAnimatronicTypeDataBlueprintFunctionLibrary_GetAnimatronicTypeDataArrayFromFNAFAISpawnTypeArray_Params
	{
	public:
		TArray<EFNAFAISpawnType>                                   SpawnTypes;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		EFNAFAISubType                                             SpawnSubType;                                            // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_QD24[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FAnimatronicTypeData>                        ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFBaseCharacter.OnFellOutOfWorld
	 */
	struct AFNAFBaseCharacter_OnFellOutOfWorld_Params
	{	};

	/**
	 * Function fnaf9.FNAFBasePlayerCharacter.TeleportPlayerWithCameraLocation
	 */
	struct AFNAFBasePlayerCharacter_TeleportPlayerWithCameraLocation_Params
	{
	public:
		struct FVector                                             CameraWorldLocation;                                     // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Yaw;                                                     // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFBasePlayerCharacter.TeleportPlayer
	 */
	struct AFNAFBasePlayerCharacter_TeleportPlayer_Params
	{
	public:
		struct FVector                                             WorldLocation;                                           // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Yaw;                                                     // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFBasePlayerCharacter.OnKillZLevelsLoaded
	 */
	struct AFNAFBasePlayerCharacter_OnKillZLevelsLoaded_Params
	{	};

	/**
	 * Function fnaf9.FNAFBasePlayerCharacter.GetPlayerPawnType
	 */
	struct AFNAFBasePlayerCharacter_GetPlayerPawnType_Params
	{
	public:
		EPlayerPawnType                                            ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFBasePlayerCharacter.GetLastSavedLocationAndRotation
	 */
	struct AFNAFBasePlayerCharacter_GetLastSavedLocationAndRotation_Params
	{
	public:
		struct FVector                                             LastSavedLocation;                                       // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            LastSavedRotation;                                       // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFBasePlayerController.OnUsingGamepadChanged
	 */
	struct AFNAFBasePlayerController_OnUsingGamepadChanged_Params
	{	};

	/**
	 * Function fnaf9.FNAFBasePlayerController.OnUnlockEverything
	 */
	struct AFNAFBasePlayerController_OnUnlockEverything_Params
	{	};

	/**
	 * Function fnaf9.FNAFBasePlayerController.OnTriggerVannyScare
	 */
	struct AFNAFBasePlayerController_OnTriggerVannyScare_Params
	{	};

	/**
	 * Function fnaf9.FNAFBasePlayerController.OnToggleLocalizationQA
	 */
	struct AFNAFBasePlayerController_OnToggleLocalizationQA_Params
	{	};

	/**
	 * Function fnaf9.FNAFBasePlayerController.OnToggleFlightMode
	 */
	struct AFNAFBasePlayerController_OnToggleFlightMode_Params
	{	};

	/**
	 * Function fnaf9.FNAFBasePlayerController.OnToggleDevUI
	 */
	struct AFNAFBasePlayerController_OnToggleDevUI_Params
	{	};

	/**
	 * Function fnaf9.FNAFBasePlayerController.OnToggleCinemaMode
	 */
	struct AFNAFBasePlayerController_OnToggleCinemaMode_Params
	{	};

	/**
	 * Function fnaf9.FNAFBasePlayerController.OnDebugSequenceEntered
	 */
	struct AFNAFBasePlayerController_OnDebugSequenceEntered_Params
	{	};

	/**
	 * Function fnaf9.FNAFBasePlayerController.IsUsingGamepad
	 */
	struct AFNAFBasePlayerController_IsUsingGamepad_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFBasePlayerController.GiveVIPAchievement
	 */
	struct AFNAFBasePlayerController_GiveVIPAchievement_Params
	{	};

	/**
	 * Function fnaf9.FNAFBasePlayerController.GetCurrentKeysDown
	 */
	struct AFNAFBasePlayerController_GetCurrentKeysDown_Params
	{
	public:
		TArray<struct FKey>                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFBasePlayerController.AnyOtherKeysDown
	 */
	struct AFNAFBasePlayerController_AnyOtherKeysDown_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFCheatManager.UpgradeFreddy
	 */
	struct UFNAFCheatManager_UpgradeFreddy_Params
	{
	public:
		EFreddyUpgradeType                                         Type;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFCheatManager.ToggleDebugCloaking
	 */
	struct UFNAFCheatManager_ToggleDebugCloaking_Params
	{	};

	/**
	 * Function fnaf9.FNAFCheatManager.SetDebugCloaking
	 */
	struct UFNAFCheatManager_SetDebugCloaking_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFCheatManager.GetDebugCloaking
	 */
	struct UFNAFCheatManager_GetDebugCloaking_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFCheatManager.ApplyQualitySettings
	 */
	struct UFNAFCheatManager_ApplyQualitySettings_Params
	{
	public:
		int32_t                                                    VisualQualityLevel;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    RayTraceQualityLevel;                                    // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFSaveData.SetHourOfCheckpoint
	 */
	struct UFNAFSaveData_SetHourOfCheckpoint_Params
	{
	public:
		int32_t                                                    InHour;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFEventObject.TriggerEvent
	 */
	struct UFNAFEventObject_TriggerEvent_Params
	{	};

	/**
	 * Function fnaf9.FNAFEventObject.IsEventFinished
	 */
	struct UFNAFEventObject_IsEventFinished_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFEventObject.CanPlayEvent
	 */
	struct UFNAFEventObject_CanPlayEvent_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFEventSystem.UnpauseEventSystem
	 */
	struct UFNAFEventSystem_UnpauseEventSystem_Params
	{	};

	/**
	 * Function fnaf9.FNAFEventSystem.StoreEventTriggered
	 */
	struct UFNAFEventSystem_StoreEventTriggered_Params
	{
	public:
		class FName                                                EventTag;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFEventSystem.StopEventTimer
	 */
	struct UFNAFEventSystem_StopEventTimer_Params
	{	};

	/**
	 * Function fnaf9.FNAFEventSystem.StartEventTimer
	 */
	struct UFNAFEventSystem_StartEventTimer_Params
	{	};

	/**
	 * Function fnaf9.FNAFEventSystem.SetEventTimeSeconds
	 */
	struct UFNAFEventSystem_SetEventTimeSeconds_Params
	{
	public:
		float                                                      MinTimeBetweenEvents;                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MaxTimeBetweenEvents;                                    // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFEventSystem.SetEventActorWeight
	 */
	struct UFNAFEventSystem_SetEventActorWeight_Params
	{
	public:
		float                                                      NewWeight;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFEventSystem.SetCurrentAudioComponent
	 */
	struct UFNAFEventSystem_SetCurrentAudioComponent_Params
	{
	public:
		class UAudioComponent*                                     EventSoundCue;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFEventSystem.PauseEventSystem
	 */
	struct UFNAFEventSystem_PauseEventSystem_Params
	{	};

	/**
	 * Function fnaf9.FNAFEventSystem.OnAudioFinished
	 */
	struct UFNAFEventSystem_OnAudioFinished_Params
	{	};

	/**
	 * Function fnaf9.FNAFEventSystem.HasEventBeenTriggered
	 */
	struct UFNAFEventSystem_HasEventBeenTriggered_Params
	{
	public:
		class FName                                                EventTag;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFGameInstanceBase.StartGamePlay
	 */
	struct UFNAFGameInstanceBase_StartGamePlay_Params
	{
	public:
		EFNAFGameType                                              GameType;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFGameInstanceBase.SetVisualQualityLevel
	 */
	struct UFNAFGameInstanceBase_SetVisualQualityLevel_Params
	{
	public:
		int32_t                                                    Level;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFGameInstanceBase.SetSplashFinished
	 */
	struct UFNAFGameInstanceBase_SetSplashFinished_Params
	{
	public:
		bool                                                       bFinished;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFGameInstanceBase.SetRayTraceQualityLevel
	 */
	struct UFNAFGameInstanceBase_SetRayTraceQualityLevel_Params
	{
	public:
		int32_t                                                    Level;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFGameInstanceBase.SetPresenceForLocalPlayers
	 */
	struct UFNAFGameInstanceBase_SetPresenceForLocalPlayers_Params
	{
	public:
		class FString                                              StatusStr;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              PresenceData;                                            // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFGameInstanceBase.SetIsOnLoadingScreen
	 */
	struct UFNAFGameInstanceBase_SetIsOnLoadingScreen_Params
	{
	public:
		bool                                                       bOnLoadingScreen;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFGameInstanceBase.SetIsFromTitleForChowda
	 */
	struct UFNAFGameInstanceBase_SetIsFromTitleForChowda_Params
	{
	public:
		bool                                                       In_FromTitle;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFGameInstanceBase.SetAllPlayersFocusToViewport
	 */
	struct UFNAFGameInstanceBase_SetAllPlayersFocusToViewport_Params
	{	};

	/**
	 * Function fnaf9.FNAFGameInstanceBase.ProcessActivityIntent
	 */
	struct UFNAFGameInstanceBase_ProcessActivityIntent_Params
	{	};

	/**
	 * Function fnaf9.FNAFGameInstanceBase.OnPlayerLoginChanged
	 */
	struct UFNAFGameInstanceBase_OnPlayerLoginChanged_Params
	{
	public:
		bool                                                       bLoggedIn;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_YB2I[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    UserId;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFGameInstanceBase.OnPlayerControllerPairingChanged
	 */
	struct UFNAFGameInstanceBase_OnPlayerControllerPairingChanged_Params
	{	};

	/**
	 * Function fnaf9.FNAFGameInstanceBase.OnLoadingScreenStart
	 */
	struct UFNAFGameInstanceBase_OnLoadingScreenStart_Params
	{	};

	/**
	 * Function fnaf9.FNAFGameInstanceBase.OnLoadingScreenEnd
	 */
	struct UFNAFGameInstanceBase_OnLoadingScreenEnd_Params
	{	};

	/**
	 * Function fnaf9.FNAFGameInstanceBase.OnGameActivityLoadComplete
	 */
	struct UFNAFGameInstanceBase_OnGameActivityLoadComplete_Params
	{	};

	/**
	 * Function fnaf9.FNAFGameInstanceBase.OnControllerConnectionChanged
	 */
	struct UFNAFGameInstanceBase_OnControllerConnectionChanged_Params
	{	};

	/**
	 * Function fnaf9.FNAFGameInstanceBase.OnApplicationReactivated
	 */
	struct UFNAFGameInstanceBase_OnApplicationReactivated_Params
	{	};

	/**
	 * Function fnaf9.FNAFGameInstanceBase.OnApplicationDeactivated
	 */
	struct UFNAFGameInstanceBase_OnApplicationDeactivated_Params
	{	};

	/**
	 * Function fnaf9.FNAFGameInstanceBase.LogGameClockDelegates
	 */
	struct UFNAFGameInstanceBase_LogGameClockDelegates_Params
	{	};

	/**
	 * Function fnaf9.FNAFGameInstanceBase.LoadGameTips
	 */
	struct UFNAFGameInstanceBase_LoadGameTips_Params
	{
	public:
		EFNAFGameType                                              GameType;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFGameInstanceBase.IsOnLoadingScreen
	 */
	struct UFNAFGameInstanceBase_IsOnLoadingScreen_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFGameInstanceBase.IsNormalPlay
	 */
	struct UFNAFGameInstanceBase_IsNormalPlay_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFGameInstanceBase.IsLoadingActivity
	 */
	struct UFNAFGameInstanceBase_IsLoadingActivity_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFGameInstanceBase.IsFromTitle
	 */
	struct UFNAFGameInstanceBase_IsFromTitle_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFGameInstanceBase.HasSplashFinished
	 */
	struct UFNAFGameInstanceBase_HasSplashFinished_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFGameInstanceBase.GetVisualQualityLevel
	 */
	struct UFNAFGameInstanceBase_GetVisualQualityLevel_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFGameInstanceBase.GetRayTraceQualityLevel
	 */
	struct UFNAFGameInstanceBase_GetRayTraceQualityLevel_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFGameInstanceBase.GetPlayerName
	 */
	struct UFNAFGameInstanceBase_GetPlayerName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFGameInstanceBase.GetPlayerControllerID
	 */
	struct UFNAFGameInstanceBase_GetPlayerControllerID_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFGameInstanceBase.GetIsShippingConfig
	 */
	struct UFNAFGameInstanceBase_GetIsShippingConfig_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFGameInstanceBase.GetGPUBenchmarkResult
	 */
	struct UFNAFGameInstanceBase_GetGPUBenchmarkResult_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFGameInstanceBase.GetGameTipTextByIndexDLC
	 */
	struct UFNAFGameInstanceBase_GetGameTipTextByIndexDLC_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_G9FS[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                ReturnValue;                                             // 0x0008(0x0018)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFGameInstanceBase.GetGameTipTextByIndex
	 */
	struct UFNAFGameInstanceBase_GetGameTipTextByIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_98QD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                ReturnValue;                                             // 0x0008(0x0018)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFGameInstanceBase.GetCurrentGameType
	 */
	struct UFNAFGameInstanceBase_GetCurrentGameType_Params
	{
	public:
		EFNAFGameType                                              ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFGameInstanceBase.GetCPUBenchmarkResult
	 */
	struct UFNAFGameInstanceBase_GetCPUBenchmarkResult_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFGameInstanceBase.GetAllLoadedLevelsString
	 */
	struct UFNAFGameInstanceBase_GetAllLoadedLevelsString_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFGameInstanceBase.EndLoadingScreenDLC
	 */
	struct UFNAFGameInstanceBase_EndLoadingScreenDLC_Params
	{	};

	/**
	 * Function fnaf9.FNAFGameInstanceBase.EndLoadingScreen
	 */
	struct UFNAFGameInstanceBase_EndLoadingScreen_Params
	{	};

	/**
	 * Function fnaf9.FNAFGameInstanceBase.CheckForPlayerLoginChanged
	 */
	struct UFNAFGameInstanceBase_CheckForPlayerLoginChanged_Params
	{	};

	/**
	 * Function fnaf9.FNAFGameInstanceBase.ChangeLocalPlayerController
	 */
	struct UFNAFGameInstanceBase_ChangeLocalPlayerController_Params
	{
	public:
		int32_t                                                    UserId;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFGameInstanceBase.BeginLoadingScreenDLC
	 */
	struct UFNAFGameInstanceBase_BeginLoadingScreenDLC_Params
	{	};

	/**
	 * Function fnaf9.FNAFGameInstanceBase.BeginLoadingScreen
	 */
	struct UFNAFGameInstanceBase_BeginLoadingScreen_Params
	{	};

	/**
	 * Function fnaf9.FNAFGameInstanceBase.AsyncChowdaScan
	 */
	struct UFNAFGameInstanceBase_AsyncChowdaScan_Params
	{
	public:
		bool                                                       bUseless;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bOutFinished;                                            // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_7Y4X[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FLatentActionInfo                                   LatentActionInfo;                                        // 0x0008(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFInputDeviceSystem.GetCurrentInputDevice
	 */
	struct UFNAFInputDeviceSystem_GetCurrentInputDevice_Params
	{
	public:
		ESWGInputDeviceType                                        ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFInventorySystem.UsePartyPass
	 */
	struct UFNAFInventorySystem_UsePartyPass_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFInventorySystem.UseFlash
	 */
	struct UFNAFInventorySystem_UseFlash_Params
	{
	public:
		bool                                                       bOutFlashUsed;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFInventorySystem.SetupNewGame
	 */
	struct UFNAFInventorySystem_SetupNewGame_Params
	{	};

	/**
	 * Function fnaf9.FNAFInventorySystem.SetupGameMode
	 */
	struct UFNAFInventorySystem_SetupGameMode_Params
	{
	public:
		EFNAFGameType                                              GameType;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFInventorySystem.SetupDataTable
	 */
	struct UFNAFInventorySystem_SetupDataTable_Params
	{
	public:
		class UDataTable*                                          InDataTable;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFInventorySystem.SetSecurityLevel
	 */
	struct UFNAFInventorySystem_SetSecurityLevel_Params
	{
	public:
		int32_t                                                    NewSecurityLevel;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFInventorySystem.SetPowerLevel_Freddy
	 */
	struct UFNAFInventorySystem_SetPowerLevel_Freddy_Params
	{
	public:
		int32_t                                                    InPowerLevel;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFInventorySystem.SetPowerLevel_Fazwatch
	 */
	struct UFNAFInventorySystem_SetPowerLevel_Fazwatch_Params
	{
	public:
		int32_t                                                    InPowerLevel;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFInventorySystem.SetPartyLevel
	 */
	struct UFNAFInventorySystem_SetPartyLevel_Params
	{
	public:
		int32_t                                                    NewPartyLevel;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFInventorySystem.SetMessageViewed
	 */
	struct UFNAFInventorySystem_SetMessageViewed_Params
	{
	public:
		class FName                                                Message;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFInventorySystem.SetMaxPowerLevel_Freddy
	 */
	struct UFNAFInventorySystem_SetMaxPowerLevel_Freddy_Params
	{
	public:
		int32_t                                                    NewMax;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFInventorySystem.SetMaxPowerLevel_Fazwatch
	 */
	struct UFNAFInventorySystem_SetMaxPowerLevel_Fazwatch_Params
	{
	public:
		int32_t                                                    NewMax;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFInventorySystem.SetItemViewed
	 */
	struct UFNAFInventorySystem_SetItemViewed_Params
	{
	public:
		class FName                                                Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFInventorySystem.SetFlashlightStationID
	 */
	struct UFNAFInventorySystem_SetFlashlightStationID_Params
	{
	public:
		int32_t                                                    StationID;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFInventorySystem.SetCautionBotSoulsCollectedNumber
	 */
	struct UFNAFInventorySystem_SetCautionBotSoulsCollectedNumber_Params
	{
	public:
		int32_t                                                    inNumber;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFInventorySystem.ResetOnExitToMenu
	 */
	struct UFNAFInventorySystem_ResetOnExitToMenu_Params
	{	};

	/**
	 * Function fnaf9.FNAFInventorySystem.ResetFreddyPower
	 */
	struct UFNAFInventorySystem_ResetFreddyPower_Params
	{	};

	/**
	 * Function fnaf9.FNAFInventorySystem.ResetForChapterSelect
	 */
	struct UFNAFInventorySystem_ResetForChapterSelect_Params
	{
	public:
		TArray<class FName>                                        CollectedItems;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		int32_t                                                    chapterSelected;                                         // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFInventorySystem.ResetFlashlightPower
	 */
	struct UFNAFInventorySystem_ResetFlashlightPower_Params
	{	};

	/**
	 * Function fnaf9.FNAFInventorySystem.ResetFlashes
	 */
	struct UFNAFInventorySystem_ResetFlashes_Params
	{	};

	/**
	 * Function fnaf9.FNAFInventorySystem.RemoveMessage
	 */
	struct UFNAFInventorySystem_RemoveMessage_Params
	{
	public:
		class FName                                                Message;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFInventorySystem.RemoveItem
	 */
	struct UFNAFInventorySystem_RemoveItem_Params
	{
	public:
		class FName                                                Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFInventorySystem.RemoveEverything
	 */
	struct UFNAFInventorySystem_RemoveEverything_Params
	{	};

	/**
	 * Function fnaf9.FNAFInventorySystem.RemoveCautionBotSouls
	 */
	struct UFNAFInventorySystem_RemoveCautionBotSouls_Params
	{
	public:
		int32_t                                                    NumberOfSouls;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFInventorySystem.IsVIPItem
	 */
	struct UFNAFInventorySystem_IsVIPItem_Params
	{
	public:
		class FName                                                Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFInventorySystem.IsMessageValid
	 */
	struct UFNAFInventorySystem_IsMessageValid_Params
	{
	public:
		class FName                                                Message;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFInventorySystem.IsItemValid
	 */
	struct UFNAFInventorySystem_IsItemValid_Params
	{
	public:
		class FName                                                Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFInventorySystem.HasSecurityClearance
	 */
	struct UFNAFInventorySystem_HasSecurityClearance_Params
	{
	public:
		int32_t                                                    InSecurityLevel;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFInventorySystem.HasMessageBeenViewed
	 */
	struct UFNAFInventorySystem_HasMessageBeenViewed_Params
	{
	public:
		class FName                                                ItemOrMessage;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFInventorySystem.HasMessage
	 */
	struct UFNAFInventorySystem_HasMessage_Params
	{
	public:
		class FName                                                SearchMessage;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFInventorySystem.HasItemBeenViewed
	 */
	struct UFNAFInventorySystem_HasItemBeenViewed_Params
	{
	public:
		class FName                                                ItemOrMessage;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFInventorySystem.HasItem
	 */
	struct UFNAFInventorySystem_HasItem_Params
	{
	public:
		class FName                                                searchItem;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFInventorySystem.HasEnoughPower_Freddy
	 */
	struct UFNAFInventorySystem_HasEnoughPower_Freddy_Params
	{
	public:
		int32_t                                                    PowerRequired;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFInventorySystem.HasEnoughPower_Fazwatch
	 */
	struct UFNAFInventorySystem_HasEnoughPower_Fazwatch_Params
	{
	public:
		int32_t                                                    PowerRequired;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFInventorySystem.HasAvailablePartyPass
	 */
	struct UFNAFInventorySystem_HasAvailablePartyPass_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFInventorySystem.GetTapesListenedTo
	 */
	struct UFNAFInventorySystem_GetTapesListenedTo_Params
	{	};

	/**
	 * Function fnaf9.FNAFInventorySystem.GetStaminaUpgradeMultiplier
	 */
	struct UFNAFInventorySystem_GetStaminaUpgradeMultiplier_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFInventorySystem.GetNumberOfUnreadMessages
	 */
	struct UFNAFInventorySystem_GetNumberOfUnreadMessages_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFInventorySystem.GetMessageInfo
	 */
	struct UFNAFInventorySystem_GetMessageInfo_Params
	{
	public:
		class FName                                                MessageName;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FFNAFMessageTableStruct                             OutMessageInfo;                                          // 0x0008(0x0068)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       OutFound;                                                // 0x0070(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFInventorySystem.GetMaxFlashes
	 */
	struct UFNAFInventorySystem_GetMaxFlashes_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFInventorySystem.GetItemInfo
	 */
	struct UFNAFInventorySystem_GetItemInfo_Params
	{
	public:
		class FName                                                ItemName;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FFNAFInventoryTableStruct                           OutItemInfo;                                             // 0x0008(0x0058)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       OutFound;                                                // 0x0060(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFInventorySystem.GetFreddyUpgradeMutliplier
	 */
	struct UFNAFInventorySystem_GetFreddyUpgradeMutliplier_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFInventorySystem.GetFreddyMaxPower
	 */
	struct UFNAFInventorySystem_GetFreddyMaxPower_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFInventorySystem.GetFlashlightUpgradMultiplier
	 */
	struct UFNAFInventorySystem_GetFlashlightUpgradMultiplier_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFInventorySystem.GetFlashlightStationID
	 */
	struct UFNAFInventorySystem_GetFlashlightStationID_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFInventorySystem.GetFlashlightMaxPower
	 */
	struct UFNAFInventorySystem_GetFlashlightMaxPower_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFInventorySystem.GetCollectedPartyPasses
	 */
	struct UFNAFInventorySystem_GetCollectedPartyPasses_Params
	{
	public:
		TArray<class FName>                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFInventorySystem.GetChapterProgression
	 */
	struct UFNAFInventorySystem_GetChapterProgression_Params
	{
	public:
		int32_t                                                    Chapter;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_27HE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UFNAFSaveData*                                       SaveDataObject;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFInventorySystem.GetCautionBotSoulsCollectedNumber
	 */
	struct UFNAFInventorySystem_GetCautionBotSoulsCollectedNumber_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFInventorySystem.GetCandyCadetStoriesDone
	 */
	struct UFNAFInventorySystem_GetCandyCadetStoriesDone_Params
	{	};

	/**
	 * Function fnaf9.FNAFInventorySystem.GetAllSurvivalItemsOfType
	 */
	struct UFNAFInventorySystem_GetAllSurvivalItemsOfType_Params
	{
	public:
		EInventoryItemSurvivalCategory                             SurvivalCategory;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_DES9[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class FName>                                        ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFInventorySystem.GetAllItems
	 */
	struct UFNAFInventorySystem_GetAllItems_Params
	{
	public:
		TArray<class FName>                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFInventorySystem.GetAllCurrentInventoryItems
	 */
	struct UFNAFInventorySystem_GetAllCurrentInventoryItems_Params
	{
	public:
		TArray<class FName>                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFInventorySystem.ClearFlashlightStationID
	 */
	struct UFNAFInventorySystem_ClearFlashlightStationID_Params
	{	};

	/**
	 * Function fnaf9.FNAFInventorySystem.CanUseFlashBeacon
	 */
	struct UFNAFInventorySystem_CanUseFlashBeacon_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFInventorySystem.AwardMessage
	 */
	struct UFNAFInventorySystem_AwardMessage_Params
	{
	public:
		class FName                                                Message;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bNotify;                                                 // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFInventorySystem.AwardItem
	 */
	struct UFNAFInventorySystem_AwardItem_Params
	{
	public:
		class FName                                                Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bNotify;                                                 // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFInventorySystem.AwardCautionBotSoul
	 */
	struct UFNAFInventorySystem_AwardCautionBotSoul_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFInventorySystem.AdjustPower_Freddy
	 */
	struct UFNAFInventorySystem_AdjustPower_Freddy_Params
	{
	public:
		int32_t                                                    ChangeAmount;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFInventorySystem.AdjustPower_Fazwatch
	 */
	struct UFNAFInventorySystem_AdjustPower_Fazwatch_Params
	{
	public:
		int32_t                                                    ChangeAmount;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFInventorySystem.AddTapeListenedTo
	 */
	struct UFNAFInventorySystem_AddTapeListenedTo_Params
	{
	public:
		class FName                                                InTapeListenedTo;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFInventorySystem.AddEverything
	 */
	struct UFNAFInventorySystem_AddEverything_Params
	{	};

	/**
	 * Function fnaf9.FNAFInventorySystem.AddCandyCadetStoryDone
	 */
	struct UFNAFInventorySystem_AddCandyCadetStoryDone_Params
	{
	public:
		class FName                                                InStory;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFInventorySystem.AddBrokenPlate
	 */
	struct UFNAFInventorySystem_AddBrokenPlate_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFLevelManager.UnregisterStreamingSource
	 */
	struct UFNAFLevelManager_UnregisterStreamingSource_Params
	{
	public:
		class USceneComponent*                                     SceneComponent;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFLevelManager.UnregisterPawnStreamingSource
	 */
	struct UFNAFLevelManager_UnregisterPawnStreamingSource_Params
	{
	public:
		class USceneComponent*                                     SceneComponent;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFLevelManager.SetPlayerPawn
	 */
	struct UFNAFLevelManager_SetPlayerPawn_Params
	{
	public:
		class APawn*                                               PlayerPawn;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFLevelManager.SetLevelStreamingEnable
	 */
	struct UFNAFLevelManager_SetLevelStreamingEnable_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFLevelManager.RemoveLevelsFromStreamingSource
	 */
	struct UFNAFLevelManager_RemoveLevelsFromStreamingSource_Params
	{
	public:
		class USceneComponent*                                     StreamingSource;                                         // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFLevelManager.RemoveLevelArray
	 */
	struct UFNAFLevelManager_RemoveLevelArray_Params
	{
	public:
		TArray<class ULevelStreaming*>                             Levels;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFLevelManager.RemoveLevel
	 */
	struct UFNAFLevelManager_RemoveLevel_Params
	{
	public:
		class ULevelStreaming*                                     LevelToUnload;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFLevelManager.RemoveAllLevels
	 */
	struct UFNAFLevelManager_RemoveAllLevels_Params
	{	};

	/**
	 * Function fnaf9.FNAFLevelManager.RegisterStreamingSource
	 */
	struct UFNAFLevelManager_RegisterStreamingSource_Params
	{
	public:
		class USceneComponent*                                     SceneComponent;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFLevelManager.RegisterPawnStreamingSource
	 */
	struct UFNAFLevelManager_RegisterPawnStreamingSource_Params
	{
	public:
		class USceneComponent*                                     SceneComponent;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFLevelManager.IsLevelStreamingEnable
	 */
	struct UFNAFLevelManager_IsLevelStreamingEnable_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFLevelManager.GetStreamingSources
	 */
	struct UFNAFLevelManager_GetStreamingSources_Params
	{
	public:
		TArray<class USceneComponent*>                             ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFLevelManager.GetLevelNamesForComponent
	 */
	struct UFNAFLevelManager_GetLevelNamesForComponent_Params
	{
	public:
		class USceneComponent*                                     SceneComponent;                                          // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FName>                                        ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFLevelManager.AddLevelToLoad
	 */
	struct UFNAFLevelManager_AddLevelToLoad_Params
	{
	public:
		class ULevelStreaming*                                     LevelToLoad;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFLevelManager.AddLevelsFromStreamingSourceToLoad
	 */
	struct UFNAFLevelManager_AddLevelsFromStreamingSourceToLoad_Params
	{
	public:
		class USceneComponent*                                     StreamingSource;                                         // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFLevelManager.AddLevelArrayToLoad
	 */
	struct UFNAFLevelManager_AddLevelArrayToLoad_Params
	{
	public:
		TArray<class ULevelStreaming*>                             LevelsToLoad;                                            // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFManagedAI.TeleportAI
	 */
	struct UFNAFManagedAI_TeleportAI_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFManagedAI.StartMoveTo
	 */
	struct UFNAFManagedAI_StartMoveTo_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFManagedAI.SendVanessaAlert
	 */
	struct UFNAFManagedAI_SendVanessaAlert_Params
	{
	public:
		class APawn*                                               VanessaPawn;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFManagedAI.SendPositionalAlert
	 */
	struct UFNAFManagedAI_SendPositionalAlert_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFManagedAI.IsShatteredVersion
	 */
	struct UFNAFManagedAI_IsShatteredVersion_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFManagedAI.IsMeshVisible
	 */
	struct UFNAFManagedAI_IsMeshVisible_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFManagedAI.GetManagedAIType
	 */
	struct UFNAFManagedAI_GetManagedAIType_Params
	{
	public:
		EFNAFAISpawnType                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFManagedAI.GetCurrentPathName
	 */
	struct UFNAFManagedAI_GetCurrentPathName_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFManagedAI.ForceTrackToPlayer
	 */
	struct UFNAFManagedAI_ForceTrackToPlayer_Params
	{	};

	/**
	 * Function fnaf9.FNAFManagedAI.ForceJumpscarePlayer
	 */
	struct UFNAFManagedAI_ForceJumpscarePlayer_Params
	{	};

	/**
	 * Function fnaf9.FNAFManagedAI.EndTrackToPlayer
	 */
	struct UFNAFManagedAI_EndTrackToPlayer_Params
	{	};

	/**
	 * Function fnaf9.FNAFManagedAI.CanReceiveAlert
	 */
	struct UFNAFManagedAI_CanReceiveAlert_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFMissionSystem.SetupNewGame
	 */
	struct UFNAFMissionSystem_SetupNewGame_Params
	{	};

	/**
	 * Function fnaf9.FNAFMissionSystem.SetMissionInfoState
	 */
	struct UFNAFMissionSystem_SetMissionInfoState_Params
	{
	public:
		class FName                                                MissionName;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    InfoState;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFMissionSystem.RemoveActiveMission
	 */
	struct UFNAFMissionSystem_RemoveActiveMission_Params
	{
	public:
		class FName                                                MissionName;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFMissionSystem.NotifyMissionUpdate
	 */
	struct UFNAFMissionSystem_NotifyMissionUpdate_Params
	{
	public:
		class FName                                                MissionName;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFMissionSystem.IsValidMission
	 */
	struct UFNAFMissionSystem_IsValidMission_Params
	{
	public:
		class FName                                                MissionName;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFMissionSystem.IsMissionActiveOrCompleted
	 */
	struct UFNAFMissionSystem_IsMissionActiveOrCompleted_Params
	{
	public:
		class FName                                                MissionName;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFMissionSystem.IsInSurvivalMode
	 */
	struct UFNAFMissionSystem_IsInSurvivalMode_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFMissionSystem.IsCompletedMission
	 */
	struct UFNAFMissionSystem_IsCompletedMission_Params
	{
	public:
		class FName                                                MissionName;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFMissionSystem.IsActiveMission
	 */
	struct UFNAFMissionSystem_IsActiveMission_Params
	{
	public:
		class FName                                                MissionName;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFMissionSystem.GetTrackedMissions
	 */
	struct UFNAFMissionSystem_GetTrackedMissions_Params
	{
	public:
		TArray<struct FFNAFMissionState>                           ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFMissionSystem.GetTaskTable
	 */
	struct UFNAFMissionSystem_GetTaskTable_Params
	{
	public:
		class UDataTable*                                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFMissionSystem.GetTaskInfo
	 */
	struct UFNAFMissionSystem_GetTaskInfo_Params
	{
	public:
		class FName                                                TaskName;                                                // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FFNAFMissionTaskInfo                                OutMissionTaskInfo;                                      // 0x0008(0x00D8)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       OutValidTask;                                            // 0x00E0(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFMissionSystem.GetTaskByIndex
	 */
	struct UFNAFMissionSystem_GetTaskByIndex_Params
	{
	public:
		class FName                                                MissionName;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    TaskIndex;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_YF86[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FFNAFMissionTaskInfo                                OutMissionTaskInfo;                                      // 0x0010(0x00D8)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       OutValidTask;                                            // 0x00E8(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFMissionSystem.GetMissionTable
	 */
	struct UFNAFMissionSystem_GetMissionTable_Params
	{
	public:
		class UDataTable*                                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFMissionSystem.GetMissionState
	 */
	struct UFNAFMissionSystem_GetMissionState_Params
	{
	public:
		class FName                                                MissionName;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FFNAFMissionState                                   OutMissionState;                                         // 0x0008(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       OutValidMission;                                         // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFMissionSystem.GetMissionInfo
	 */
	struct UFNAFMissionSystem_GetMissionInfo_Params
	{
	public:
		class FName                                                MissionName;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FFNAFMissionInfo                                    OutMissionInfo;                                          // 0x0008(0x0048)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       OutValidMission;                                         // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFMissionSystem.GetMissionFromTask
	 */
	struct UFNAFMissionSystem_GetMissionFromTask_Params
	{
	public:
		class FName                                                TaskName;                                                // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FFNAFMissionInfo                                    OutMissionInfo;                                          // 0x0008(0x0048)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       OutValidMission;                                         // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFMissionSystem.GetMissionFromMessage
	 */
	struct UFNAFMissionSystem_GetMissionFromMessage_Params
	{
	public:
		class FName                                                MessageName;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                OutMissionName;                                          // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OutMissionStateIndex;                                    // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFMissionSystem.GetMarkersForMission
	 */
	struct UFNAFMissionSystem_GetMarkersForMission_Params
	{
	public:
		class FName                                                MissionName;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    MissionStateIndex;                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_LL4P[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class AMissionMarker*>                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFMissionSystem.GetCompletedMissions
	 */
	struct UFNAFMissionSystem_GetCompletedMissions_Params
	{
	public:
		TArray<struct FFNAFMissionState>                           ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFMissionSystem.GetAreaMarkerCounts
	 */
	struct UFNAFMissionSystem_GetAreaMarkerCounts_Params
	{
	public:
		TMap<ELevelArea, int32_t>                                  MapOfCounts;                                             // 0x0000(0x0050)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFMissionSystem.GetAllMissionNames
	 */
	struct UFNAFMissionSystem_GetAllMissionNames_Params
	{
	public:
		TArray<class FName>                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFMissionSystem.GetAllMissionMarkers
	 */
	struct UFNAFMissionSystem_GetAllMissionMarkers_Params
	{
	public:
		TArray<class AMissionMarker*>                              ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFMissionSystem.GetAllCurrentMarkers
	 */
	struct UFNAFMissionSystem_GetAllCurrentMarkers_Params
	{
	public:
		TArray<class AMissionMarker*>                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFMissionSystem.GetActiveMissions
	 */
	struct UFNAFMissionSystem_GetActiveMissions_Params
	{
	public:
		TArray<struct FFNAFMissionState>                           ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFMissionSystem.CompleteMissionTask
	 */
	struct UFNAFMissionSystem_CompleteMissionTask_Params
	{
	public:
		class FName                                                MissionName;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    TaskIndex;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFMissionSystem.CompleteMission
	 */
	struct UFNAFMissionSystem_CompleteMission_Params
	{
	public:
		class FName                                                MissionName;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFMissionSystem.BranchMissionStatus
	 */
	struct UFNAFMissionSystem_BranchMissionStatus_Params
	{
	public:
		class FName                                                MissionName;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EMissionStatus                                             Status;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFMissionSystem.AddActiveMission
	 */
	struct UFNAFMissionSystem_AddActiveMission_Params
	{
	public:
		class FName                                                MissionName;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFPawnTypeProviderInterface.GetPlayerPawnType
	 */
	struct UFNAFPawnTypeProviderInterface_GetPlayerPawnType_Params
	{
	public:
		EPlayerPawnType                                            ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFPS5ControllerUtils.TurnOffAdaptiveTrigger
	 */
	struct UFNAFPS5ControllerUtils_TurnOffAdaptiveTrigger_Params
	{
	public:
		int32_t                                                    ControllerId;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EFNAFPS5Trigger                                            Trigger;                                                 // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFPS5ControllerUtils.SetupTriggerVibration
	 */
	struct UFNAFPS5ControllerUtils_SetupTriggerVibration_Params
	{
	public:
		int32_t                                                    ControllerId;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EFNAFPS5Trigger                                            Trigger;                                                 // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              Position;                                                // 0x0005(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              Frequency;                                               // 0x0006(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              Amplitude;                                               // 0x0007(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFPS5ControllerUtils.SetupTriggerFeedback
	 */
	struct UFNAFPS5ControllerUtils_SetupTriggerFeedback_Params
	{
	public:
		int32_t                                                    ControllerId;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EFNAFPS5Trigger                                            Trigger;                                                 // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              Position;                                                // 0x0005(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              Strength;                                                // 0x0006(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFPS5ControllerUtils.SetupAdaptiveTrigger
	 */
	struct UFNAFPS5ControllerUtils_SetupAdaptiveTrigger_Params
	{
	public:
		int32_t                                                    ControllerId;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EFNAFPS5Trigger                                            Trigger;                                                 // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              StartPosition;                                           // 0x0005(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              EndPosition;                                             // 0x0006(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              Strength;                                                // 0x0007(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFSaveGameSystem.ToggleDLCCallToAction
	 */
	struct UFNAFSaveGameSystem_ToggleDLCCallToAction_Params
	{
	public:
		bool                                                       visible;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFSaveGameSystem.ShowAutoSaveIcon
	 */
	struct UFNAFSaveGameSystem_ShowAutoSaveIcon_Params
	{	};

	/**
	 * Function fnaf9.FNAFSaveGameSystem.SetUserIndex
	 */
	struct UFNAFSaveGameSystem_SetUserIndex_Params
	{
	public:
		int32_t                                                    NewUserIndex;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFSaveGameSystem.SetUseAutosaveMapArea
	 */
	struct UFNAFSaveGameSystem_SetUseAutosaveMapArea_Params
	{
	public:
		bool                                                       UseMapArea;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFSaveGameSystem.SetupPIE
	 */
	struct UFNAFSaveGameSystem_SetupPIE_Params
	{	};

	/**
	 * Function fnaf9.FNAFSaveGameSystem.SetupNewGameOnSlot
	 */
	struct UFNAFSaveGameSystem_SetupNewGameOnSlot_Params
	{
	public:
		class FString                                              originalSlotName;                                        // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFSaveGameSystem.SetupNewGame
	 */
	struct UFNAFSaveGameSystem_SetupNewGame_Params
	{	};

	/**
	 * Function fnaf9.FNAFSaveGameSystem.SetupNewChowdaGame
	 */
	struct UFNAFSaveGameSystem_SetupNewChowdaGame_Params
	{
	public:
		int32_t                                                    ProfileIndexIn;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFSaveGameSystem.SetLoadIntoChapter
	 */
	struct UFNAFSaveGameSystem_SetLoadIntoChapter_Params
	{
	public:
		bool                                                       Load;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFSaveGameSystem.SetIsSavingAllowed
	 */
	struct UFNAFSaveGameSystem_SetIsSavingAllowed_Params
	{
	public:
		bool                                                       IsSavingAllowed;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFSaveGameSystem.SetInChapterReplay
	 */
	struct UFNAFSaveGameSystem_SetInChapterReplay_Params
	{
	public:
		bool                                                       inReplay;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_EH1Z[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Chapter;                                                 // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFSaveGameSystem.SetChowdaProfileIndex
	 */
	struct UFNAFSaveGameSystem_SetChowdaProfileIndex_Params
	{
	public:
		int32_t                                                    profileIndex;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFSaveGameSystem.SaveCurrentGame
	 */
	struct UFNAFSaveGameSystem_SaveCurrentGame_Params
	{	};

	/**
	 * Function fnaf9.FNAFSaveGameSystem.SaveCheckpoint
	 */
	struct UFNAFSaveGameSystem_SaveCheckpoint_Params
	{	};

	/**
	 * Function fnaf9.FNAFSaveGameSystem.SaveArcade
	 */
	struct UFNAFSaveGameSystem_SaveArcade_Params
	{	};

	/**
	 * Function fnaf9.FNAFSaveGameSystem.Reset_SaveSlots
	 */
	struct UFNAFSaveGameSystem_Reset_SaveSlots_Params
	{	};

	/**
	 * Function fnaf9.FNAFSaveGameSystem.Rename_SaveSlot
	 */
	struct UFNAFSaveGameSystem_Rename_SaveSlot_Params
	{
	public:
		class FString                                              originalSlotName;                                        // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              renamedSlotName;                                         // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFSaveGameSystem.RemoveAutoSaveIcon
	 */
	struct UFNAFSaveGameSystem_RemoveAutoSaveIcon_Params
	{	};

	/**
	 * Function fnaf9.FNAFSaveGameSystem.PreviousSaveIsAuto
	 */
	struct UFNAFSaveGameSystem_PreviousSaveIsAuto_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFSaveGameSystem.LoadWorldTransitSave
	 */
	struct UFNAFSaveGameSystem_LoadWorldTransitSave_Params
	{	};

	/**
	 * Function fnaf9.FNAFSaveGameSystem.LoadSaveSlotData
	 */
	struct UFNAFSaveGameSystem_LoadSaveSlotData_Params
	{
	public:
		class FString                                              SlotName;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UFNAFSaveData*                                       ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFSaveGameSystem.LoadMasterSave
	 */
	struct UFNAFSaveGameSystem_LoadMasterSave_Params
	{	};

	/**
	 * Function fnaf9.FNAFSaveGameSystem.LoadChowdaAutoSaveData
	 */
	struct UFNAFSaveGameSystem_LoadChowdaAutoSaveData_Params
	{
	public:
		int32_t                                                    ProfileIndexIn;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_G1MT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UFNAFSaveData*                                       ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFSaveGameSystem.LoadChowdaAutoSave
	 */
	struct UFNAFSaveGameSystem_LoadChowdaAutoSave_Params
	{
	public:
		int32_t                                                    ProfileIndexIn;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFSaveGameSystem.LoadCheckpoint
	 */
	struct UFNAFSaveGameSystem_LoadCheckpoint_Params
	{	};

	/**
	 * Function fnaf9.FNAFSaveGameSystem.LoadAutoSave
	 */
	struct UFNAFSaveGameSystem_LoadAutoSave_Params
	{	};

	/**
	 * Function fnaf9.FNAFSaveGameSystem.LoadActivitySave
	 */
	struct UFNAFSaveGameSystem_LoadActivitySave_Params
	{
	public:
		class FString                                              InActivityId;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFSaveGameSystem.IsSavingAllowed
	 */
	struct UFNAFSaveGameSystem_IsSavingAllowed_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFSaveGameSystem.IsInChapterReplay
	 */
	struct UFNAFSaveGameSystem_IsInChapterReplay_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFSaveGameSystem.HasSaveData
	 */
	struct UFNAFSaveGameSystem_HasSaveData_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFSaveGameSystem.HasPreviousSave
	 */
	struct UFNAFSaveGameSystem_HasPreviousSave_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFSaveGameSystem.HasChowdaSaveGame
	 */
	struct UFNAFSaveGameSystem_HasChowdaSaveGame_Params
	{
	public:
		int32_t                                                    ProfileIndexIn;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFSaveGameSystem.HasAutoSave
	 */
	struct UFNAFSaveGameSystem_HasAutoSave_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFSaveGameSystem.HasActivitySave
	 */
	struct UFNAFSaveGameSystem_HasActivitySave_Params
	{
	public:
		class FString                                              InActivityId;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFSaveGameSystem.GetUserIndex
	 */
	struct UFNAFSaveGameSystem_GetUserIndex_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFSaveGameSystem.GetUseAutosaveMapArea
	 */
	struct UFNAFSaveGameSystem_GetUseAutosaveMapArea_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFSaveGameSystem.GetMapAreaToLoad
	 */
	struct UFNAFSaveGameSystem_GetMapAreaToLoad_Params
	{
	public:
		EMapArea                                                   ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFSaveGameSystem.GetLoadIntoChapter
	 */
	struct UFNAFSaveGameSystem_GetLoadIntoChapter_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFSaveGameSystem.GetLastSavedMapArea
	 */
	struct UFNAFSaveGameSystem_GetLastSavedMapArea_Params
	{
	public:
		EMapArea                                                   ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFSaveGameSystem.GetLastSavedChapter
	 */
	struct UFNAFSaveGameSystem_GetLastSavedChapter_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFSaveGameSystem.GetLastLoadedChowdaSlotName
	 */
	struct UFNAFSaveGameSystem_GetLastLoadedChowdaSlotName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFSaveGameSystem.GetGameIteration
	 */
	struct UFNAFSaveGameSystem_GetGameIteration_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFSaveGameSystem.GetCurrentChapter
	 */
	struct UFNAFSaveGameSystem_GetCurrentChapter_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFSaveGameSystem.GetChowdaProfileIndex
	 */
	struct UFNAFSaveGameSystem_GetChowdaProfileIndex_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFSaveGameSystem.Get_SaveSlotNameData
	 */
	struct UFNAFSaveGameSystem_Get_SaveSlotNameData_Params
	{
	public:
		TMap<class FString, class FString>                         SaveSlots_Map;                                           // 0x0000(0x0050)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFSaveGameSystem.Get_ChowdaSaveSlotNameData
	 */
	struct UFNAFSaveGameSystem_Get_ChowdaSaveSlotNameData_Params
	{
	public:
		TMap<class FString, class FString>                         SaveSlots_Map;                                           // 0x0000(0x0050)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFSaveGameSystem.FinalizeCheckpoint
	 */
	struct UFNAFSaveGameSystem_FinalizeCheckpoint_Params
	{	};

	/**
	 * Function fnaf9.FNAFSaveGameSystem.DLCCallToActionVisibility
	 */
	struct UFNAFSaveGameSystem_DLCCallToActionVisibility_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFSaveGameSystem.DeleteSaveGameByName
	 */
	struct UFNAFSaveGameSystem_DeleteSaveGameByName_Params
	{
	public:
		class FString                                              SlotName;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFSaveGameSystem.DeleteSavedGame_BySlot
	 */
	struct UFNAFSaveGameSystem_DeleteSavedGame_BySlot_Params
	{
	public:
		int32_t                                                    saveSlotNumber;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFSaveGameSystem.DeleteChowdaSaveGameByName
	 */
	struct UFNAFSaveGameSystem_DeleteChowdaSaveGameByName_Params
	{
	public:
		class FString                                              SlotName;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFSaveGameSystem.CreateWorldTransitSave
	 */
	struct UFNAFSaveGameSystem_CreateWorldTransitSave_Params
	{	};

	/**
	 * Function fnaf9.FNAFSaveGameSystem.CreatePotentialCheckpoint
	 */
	struct UFNAFSaveGameSystem_CreatePotentialCheckpoint_Params
	{	};

	/**
	 * Function fnaf9.FNAFSaveGameSystem.ClearChowdaAutoSaves
	 */
	struct UFNAFSaveGameSystem_ClearChowdaAutoSaves_Params
	{	};

	/**
	 * Function fnaf9.FNAFSaveGameSystem.ChowdaAutoSave
	 */
	struct UFNAFSaveGameSystem_ChowdaAutoSave_Params
	{
	public:
		int32_t                                                    Chapter;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EMapArea                                                   MapAreaToSave;                                           // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_C97N[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                SaveID;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFSaveGameSystem.AutoSave
	 */
	struct UFNAFSaveGameSystem_AutoSave_Params
	{	};

	/**
	 * Function fnaf9.FNAFSaveGameSystem.AsyncSaveGame
	 */
	struct UFNAFSaveGameSystem_AsyncSaveGame_Params
	{
	public:
		class FString                                              originalSlotName;                                        // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       isANewSlot;                                              // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       isCurrentSlot;                                           // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_OLWR[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Renamed_SaveSlot;                                        // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              internal_SlotName;                                       // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFSaveGameSystem.AsyncLoadGameLastLoaded
	 */
	struct UFNAFSaveGameSystem_AsyncLoadGameLastLoaded_Params
	{	};

	/**
	 * Function fnaf9.FNAFSaveGameSystem.AsyncLoadGame
	 */
	struct UFNAFSaveGameSystem_AsyncLoadGame_Params
	{
	public:
		class FString                                              originalSlotName;                                        // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       isContinueSelected;                                      // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_2G6S[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              internal_SlotName;                                       // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.FNAFSaveGameSystem.AsyncLoadChowdaLastLoaded
	 */
	struct UFNAFSaveGameSystem_AsyncLoadChowdaLastLoaded_Params
	{	};

	/**
	 * Function fnaf9.FNAFSightSystem.SetSightSystemDisplay
	 */
	struct UFNAFSightSystem_SetSightSystemDisplay_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.ForcedGCSubsystem.GetForceGCInProgrcess
	 */
	struct UForcedGCSubsystem_GetForceGCInProgrcess_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.ForcedGCSubsystem.ForceGC
	 */
	struct UForcedGCSubsystem_ForceGC_Params
	{	};

	/**
	 * Function fnaf9.GameClockSystem.StartNextHour
	 */
	struct UGameClockSystem_StartNextHour_Params
	{	};

	/**
	 * Function fnaf9.GameClockSystem.SetGameTimeEvent
	 */
	struct UGameClockSystem_SetGameTimeEvent_Params
	{
	public:
		class FScriptDelegate                                      Delegate;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
		int32_t                                                    Hour;                                                    // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Minute;                                                  // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.GameClockSystem.SetGameEndEvent
	 */
	struct UGameClockSystem_SetGameEndEvent_Params
	{
	public:
		class FScriptDelegate                                      Delegate;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.GameClockSystem.SetCurrentTime
	 */
	struct UGameClockSystem_SetCurrentTime_Params
	{
	public:
		int32_t                                                    Hour;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Minute;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bPlayDelegates;                                          // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.GameClockSystem.SetCurrentMinute
	 */
	struct UGameClockSystem_SetCurrentMinute_Params
	{
	public:
		int32_t                                                    Minute;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.GameClockSystem.SetCurrentHour
	 */
	struct UGameClockSystem_SetCurrentHour_Params
	{
	public:
		int32_t                                                    Hour;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.GameClockSystem.SetClockRunning
	 */
	struct UGameClockSystem_SetClockRunning_Params
	{
	public:
		bool                                                       bRunClock;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.GameClockSystem.SetClockRateInMinutesPerHour
	 */
	struct UGameClockSystem_SetClockRateInMinutesPerHour_Params
	{
	public:
		int32_t                                                    MinutesPerHour;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.GameClockSystem.SetClockRate
	 */
	struct UGameClockSystem_SetClockRate_Params
	{
	public:
		int32_t                                                    TotalRealHours;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.GameClockSystem.ResetTimeDelegatesUpTo
	 */
	struct UGameClockSystem_ResetTimeDelegatesUpTo_Params
	{
	public:
		int32_t                                                    Hour;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Minute;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.GameClockSystem.OnNormalModeTriggered
	 */
	struct UGameClockSystem_OnNormalModeTriggered_Params
	{	};

	/**
	 * Function fnaf9.GameClockSystem.OnMoonmanLiteTriggered
	 */
	struct UGameClockSystem_OnMoonmanLiteTriggered_Params
	{	};

	/**
	 * Function fnaf9.GameClockSystem.OnMoonmanIntermediateTriggered
	 */
	struct UGameClockSystem_OnMoonmanIntermediateTriggered_Params
	{	};

	/**
	 * Function fnaf9.GameClockSystem.OnMoonmanDangerTriggered
	 */
	struct UGameClockSystem_OnMoonmanDangerTriggered_Params
	{	};

	/**
	 * Function fnaf9.GameClockSystem.IsClockRunning
	 */
	struct UGameClockSystem_IsClockRunning_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.GameClockSystem.GetCurrentTimeInSeconds
	 */
	struct UGameClockSystem_GetCurrentTimeInSeconds_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.GameClockSystem.GetCurrentTime
	 */
	struct UGameClockSystem_GetCurrentTime_Params
	{
	public:
		int32_t                                                    Hour;                                                    // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Minute;                                                  // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.GameTypeCheckComponent.OnNotAllowedGameType
	 */
	struct UGameTypeCheckComponent_OnNotAllowedGameType_Params
	{	};

	/**
	 * Function fnaf9.GameTypeCheckComponent.OnAllowedGameType
	 */
	struct UGameTypeCheckComponent_OnAllowedGameType_Params
	{	};

	/**
	 * Function fnaf9.GameTypeCheckComponent.IsAllowed
	 */
	struct UGameTypeCheckComponent_IsAllowed_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.GlitchInteractibleInterface.SetupGlitchInteractible
	 */
	struct UGlitchInteractibleInterface_SetupGlitchInteractible_Params
	{
	public:
		class AGlitchRandomItem*                                   GlitchRandomItem;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              GlitchManager;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      GlitchRadius;                                            // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.GlitchManagerInterface.SetupGlitchActivators
	 */
	struct UGlitchManagerInterface_SetupGlitchActivators_Params
	{
	public:
		TArray<class AActor*>                                      GlitchActivators;                                        // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.GlitchRandomItem.GlitchFixed
	 */
	struct AGlitchRandomItem_GlitchFixed_Params
	{	};

	/**
	 * Function fnaf9.GlitchRandomItem.GetActors
	 */
	struct AGlitchRandomItem_GetActors_Params
	{	};

	/**
	 * Function fnaf9.HideObjectInterface.StartSearch
	 */
	struct UHideObjectInterface_StartSearch_Params
	{
	public:
		class APawn*                                               SearcherPawn;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.HideObjectInterface.PlayBotSearchSound
	 */
	struct UHideObjectInterface_PlayBotSearchSound_Params
	{
	public:
		class AActor*                                              SearcherActor;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.HideObjectInterface.OnPlayerLeave
	 */
	struct UHideObjectInterface_OnPlayerLeave_Params
	{	};

	/**
	 * Function fnaf9.HideObjectInterface.OnPlayerHide
	 */
	struct UHideObjectInterface_OnPlayerHide_Params
	{
	public:
		class ACharacter*                                          PlayerCharacter;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.HideObjectInterface.IsEnterExitPlaying
	 */
	struct UHideObjectInterface_IsEnterExitPlaying_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.HideObjectInterface.GetSearchLocation
	 */
	struct UHideObjectInterface_GetSearchLocation_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            Rotation;                                                // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.HideObjectInterface.GetHideType
	 */
	struct UHideObjectInterface_GetHideType_Params
	{
	public:
		EHideObjectType                                            ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.HideObjectInterface.GetHideLocation
	 */
	struct UHideObjectInterface_GetHideLocation_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.HideObjectInterface.GetHiddenPlayer
	 */
	struct UHideObjectInterface_GetHiddenPlayer_Params
	{
	public:
		class ACharacter*                                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.HideObjectInterface.EndSearch
	 */
	struct UHideObjectInterface_EndSearch_Params
	{	};

	/**
	 * Function fnaf9.HUDProviderInterface.ShowHUD
	 */
	struct UHUDProviderInterface_ShowHUD_Params
	{	};

	/**
	 * Function fnaf9.HUDProviderInterface.ShowCinimaticSkip
	 */
	struct UHUDProviderInterface_ShowCinimaticSkip_Params
	{	};

	/**
	 * Function fnaf9.HUDProviderInterface.HideHUD
	 */
	struct UHUDProviderInterface_HideHUD_Params
	{
	public:
		bool                                                       bHideProgressWheel;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.HUDProviderInterface.BeginCinimaticSkipFade
	 */
	struct UHUDProviderInterface_BeginCinimaticSkipFade_Params
	{
	public:
		float                                                      DelayDuration;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.InstructionCardRowBlueprintFunctionLibrary.GetControllerInstructionCard
	 */
	struct UInstructionCardRowBlueprintFunctionLibrary_GetControllerInstructionCard_Params
	{
	public:
		struct FInstructionCardRow                                 MyStructRef;                                             // 0x0000(0x0060)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class UTexture2D*                                          ReturnValue;                                             // 0x0060(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.InventoryConditionalComponent.SetNewConditions
	 */
	struct UInventoryConditionalComponent_SetNewConditions_Params
	{
	public:
		class FName                                                NewRequiredInventoryItem;                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    NewRequiredSecurityLevel;                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       NewRequiresPartyPass;                                    // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.InventoryConditionalComponent.OnMessageCollected
	 */
	struct UInventoryConditionalComponent_OnMessageCollected_Params
	{
	public:
		class FName                                                ItemName;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FFNAFMessageTableStruct                             MessageTableStruct;                                      // 0x0008(0x0068)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.InventoryConditionalComponent.OnItemCollected
	 */
	struct UInventoryConditionalComponent_OnItemCollected_Params
	{
	public:
		class FName                                                ItemName;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FFNAFInventoryTableStruct                           InventoryTableStruct;                                    // 0x0008(0x0058)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.InventoryConditionalComponent.HasMetConditions
	 */
	struct UInventoryConditionalComponent_HasMetConditions_Params
	{
	public:
		bool                                                       OutConditionsMet;                                        // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EConditionFailReason                                       OutFailReason;                                           // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.ItemCollectListenerComponent.SetEventsEnabled
	 */
	struct UItemCollectListenerComponent_SetEventsEnabled_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.ItemCollectListenerComponent.OnItemCollectedHandler
	 */
	struct UItemCollectListenerComponent_OnItemCollectedHandler_Params
	{
	public:
		class FName                                                ItemName;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FFNAFInventoryTableStruct                           InventoryItemInfo;                                       // 0x0008(0x0058)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.ItemCollectListenerComponent.GetEventsEnabled
	 */
	struct UItemCollectListenerComponent_GetEventsEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.JsonHandler.GenerateJsonStringFromStruct
	 */
	struct UJsonHandler_GenerateJsonStringFromStruct_Params
	{
	public:
		class UStruct*                                             Struct;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              OutJsonString;                                           // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.LevelLoaderComponent.UnLoadCurrentScenario
	 */
	struct ULevelLoaderComponent_UnLoadCurrentScenario_Params
	{	};

	/**
	 * Function fnaf9.LevelLoaderComponent.SetNextLightScenario
	 */
	struct ULevelLoaderComponent_SetNextLightScenario_Params
	{
	public:
		int32_t                                                    Scenario;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.LevelLoaderComponent.SetLevelsToUnLoad
	 */
	struct ULevelLoaderComponent_SetLevelsToUnLoad_Params
	{
	public:
		TArray<class FName>                                        UnloadedLevels;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<class FName>                                        ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.LevelLoaderComponent.SetLevelsToLoad
	 */
	struct ULevelLoaderComponent_SetLevelsToLoad_Params
	{
	public:
		TArray<class FName>                                        LoadedLevels;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<class FName>                                        ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.LevelLoaderComponent.LoadTheNextScenario
	 */
	struct ULevelLoaderComponent_LoadTheNextScenario_Params
	{	};

	/**
	 * Function fnaf9.LevelLoaderComponent.LoadTheNextArea
	 */
	struct ULevelLoaderComponent_LoadTheNextArea_Params
	{	};

	/**
	 * Function fnaf9.LevelLoaderComponent.GetLevelsToLoad
	 */
	struct ULevelLoaderComponent_GetLevelsToLoad_Params
	{
	public:
		TArray<class FName>                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.LevelLoaderComponent.DebugSkipToNextArea
	 */
	struct ULevelLoaderComponent_DebugSkipToNextArea_Params
	{	};

	/**
	 * Function fnaf9.LevelLoadSubsystem.LoadTheNextArea
	 */
	struct ULevelLoadSubsystem_LoadTheNextArea_Params
	{
	public:
		EMapArea                                                   MapArea;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.LevelLoadSubsystem.IsTickable
	 */
	struct ULevelLoadSubsystem_IsTickable_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.LevelLoadSubsystem.GetVisibleLevels
	 */
	struct ULevelLoadSubsystem_GetVisibleLevels_Params
	{
	public:
		TArray<class FName>                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.LevelLoadSubsystem.GetCurrentMapArea
	 */
	struct ULevelLoadSubsystem_GetCurrentMapArea_Params
	{
	public:
		EMapArea                                                   ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.LevelStreamViewpoint.SetStreamingEnable
	 */
	struct ULevelStreamViewpoint_SetStreamingEnable_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.LevelStreamViewpoint.OnLevelManagerUpdated
	 */
	struct ULevelStreamViewpoint_OnLevelManagerUpdated_Params
	{	};

	/**
	 * Function fnaf9.LevelStreamViewpoint.GetStreamingLevelNames
	 */
	struct ULevelStreamViewpoint_GetStreamingLevelNames_Params
	{
	public:
		TArray<class FName>                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.LevelStreamViewpoint.AnyLevelsLoaded
	 */
	struct ULevelStreamViewpoint_AnyLevelsLoaded_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.LevelStreamViewpoint.AllLevelsLoaded
	 */
	struct ULevelStreamViewpoint_AllLevelsLoaded_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.LevelStreamViewpointProvider.GetLevelStreamViewpoint
	 */
	struct ULevelStreamViewpointProvider_GetLevelStreamViewpoint_Params
	{
	public:
		class ULevelStreamViewpoint*                               ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.LightingMaterialManager.OnLevelVisible
	 */
	struct ALightingMaterialManager_OnLevelVisible_Params
	{	};

	/**
	 * Function fnaf9.LightingMaterialManager.OnBeginLightScenarioChange
	 */
	struct ALightingMaterialManager_OnBeginLightScenarioChange_Params
	{	};

	/**
	 * Function fnaf9.LightingMaterialManager.OnActivateSpecialLightingScenerio
	 */
	struct ALightingMaterialManager_OnActivateSpecialLightingScenerio_Params
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.LightScenarioManager.UnloadArea
	 */
	struct ULightScenarioManager_UnloadArea_Params
	{	};

	/**
	 * Function fnaf9.LightScenarioManager.UnbindOnEndScenarioChange
	 */
	struct ULightScenarioManager_UnbindOnEndScenarioChange_Params
	{
	public:
		class FScriptDelegate                                      Delegate;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.LightScenarioManager.UnbindOnBeginScenarioChange
	 */
	struct ULightScenarioManager_UnbindOnBeginScenarioChange_Params
	{
	public:
		class FScriptDelegate                                      Delegate;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.LightScenarioManager.SetInitialScenario
	 */
	struct ULightScenarioManager_SetInitialScenario_Params
	{
	public:
		int32_t                                                    Area;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ELightingScenario                                          Scenario;                                                // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.LightScenarioManager.OnUnloadFinished
	 */
	struct ULightScenarioManager_OnUnloadFinished_Params
	{	};

	/**
	 * Function fnaf9.LightScenarioManager.OnTick
	 */
	struct ULightScenarioManager_OnTick_Params
	{	};

	/**
	 * Function fnaf9.LightScenarioManager.OnPropagate
	 */
	struct ULightScenarioManager_OnPropagate_Params
	{	};

	/**
	 * Function fnaf9.LightScenarioManager.OnLoadFinished
	 */
	struct ULightScenarioManager_OnLoadFinished_Params
	{	};

	/**
	 * Function fnaf9.LightScenarioManager.OnFadeoutFinished
	 */
	struct ULightScenarioManager_OnFadeoutFinished_Params
	{	};

	/**
	 * Function fnaf9.LightScenarioManager.OnChangeAreaUnloadFinished
	 */
	struct ULightScenarioManager_OnChangeAreaUnloadFinished_Params
	{	};

	/**
	 * Function fnaf9.LightScenarioManager.OnChangeAreaLoadFinished
	 */
	struct ULightScenarioManager_OnChangeAreaLoadFinished_Params
	{	};

	/**
	 * Function fnaf9.LightScenarioManager.IsChangingScenario
	 */
	struct ULightScenarioManager_IsChangingScenario_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.LightScenarioManager.GetLightScenarioAreaFromMap
	 */
	struct ULightScenarioManager_GetLightScenarioAreaFromMap_Params
	{
	public:
		class FName                                                MapName;                                                 // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ELightScenarioArea                                         OutArea;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ELightingScenario                                          OutScenario;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.LightScenarioManager.GetLevelNameFromAreaScenario
	 */
	struct ULightScenarioManager_GetLevelNameFromAreaScenario_Params
	{
	public:
		int32_t                                                    Area;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ELightingScenario                                          Scenario;                                                // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_FRA0[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.LightScenarioManager.GetCurrentLightingScenario
	 */
	struct ULightScenarioManager_GetCurrentLightingScenario_Params
	{
	public:
		ELightingScenario                                          ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.LightScenarioManager.GetCurrentArea
	 */
	struct ULightScenarioManager_GetCurrentArea_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.LightScenarioManager.EndLoadSequence
	 */
	struct ULightScenarioManager_EndLoadSequence_Params
	{	};

	/**
	 * Function fnaf9.LightScenarioManager.ChangeScenario
	 */
	struct ULightScenarioManager_ChangeScenario_Params
	{
	public:
		ELightingScenario                                          NewScenario;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bUseFade;                                                // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.LightScenarioManager.ChangeArea
	 */
	struct ULightScenarioManager_ChangeArea_Params
	{
	public:
		int32_t                                                    Area;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.LightScenarioManager.BindOnEndScenarioChange
	 */
	struct ULightScenarioManager_BindOnEndScenarioChange_Params
	{
	public:
		class FScriptDelegate                                      Delegate;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.LightScenarioManager.BindOnBeginScenarioChange
	 */
	struct ULightScenarioManager_BindOnBeginScenarioChange_Params
	{
	public:
		class FScriptDelegate                                      Delegate;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.LightScenarioManager.BeginLoadSequence
	 */
	struct ULightScenarioManager_BeginLoadSequence_Params
	{	};

	/**
	 * Function fnaf9.LoadingScreenComponent.SetPlayerCollider
	 */
	struct ULoadingScreenComponent_SetPlayerCollider_Params
	{
	public:
		class UPrimitiveComponent*                                 InPlayerCollider;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.LoadingScreenComponent.SetLevelStreamViewpoints
	 */
	struct ULoadingScreenComponent_SetLevelStreamViewpoints_Params
	{
	public:
		class ULevelStreamViewpoint*                               Front;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ULevelStreamViewpoint*                               Back;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.LoadingScreenComponent.OnPlayerExit
	 */
	struct ULoadingScreenComponent_OnPlayerExit_Params
	{
	public:
		class AActor*                                              InPlayer;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.LoadingScreenComponent.OnPlayerEnter
	 */
	struct ULoadingScreenComponent_OnPlayerEnter_Params
	{
	public:
		class AActor*                                              InPlayer;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.Localization.GetLocalizationCultureFromSteam
	 */
	struct ULocalization_GetLocalizationCultureFromSteam_Params
	{
	public:
		ELocalizationCulture                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.Localization.GetLocalizationCulture
	 */
	struct ULocalization_GetLocalizationCulture_Params
	{
	public:
		ELocalizationCulture                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.Localization.ChangeLocalizationCulture
	 */
	struct ULocalization_ChangeLocalizationCulture_Params
	{
	public:
		ELocalizationCulture                                       Culture;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.MissionDisplayQueueLibrary.PushMissionUpdate
	 */
	struct UMissionDisplayQueueLibrary_PushMissionUpdate_Params
	{
	public:
		EMissionUpdateType                                         UpdateType;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_9R35[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                MissionName;                                             // 0x0004(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_QM2W[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FFNAFMissionInfo                                    MissionInfo;                                             // 0x0010(0x0048)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FFNAFMissionState                                   MissionState;                                            // 0x0058(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.MissionDisplayQueueLibrary.HasMissionUpdateInQueue
	 */
	struct UMissionDisplayQueueLibrary_HasMissionUpdateInQueue_Params
	{
	public:
		EMissionInQueue                                            MissionInQueue;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.MissionDisplayQueueLibrary.GetNextMissionUpdate
	 */
	struct UMissionDisplayQueueLibrary_GetNextMissionUpdate_Params
	{
	public:
		struct FMissionDisplayUpdateInfo                           ReturnValue;                                             // 0x0000(0x0078)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.MissionDisplayQueueLibrary.ClearMissionUpdateQueue
	 */
	struct UMissionDisplayQueueLibrary_ClearMissionUpdateQueue_Params
	{	};

	/**
	 * Function fnaf9.MissionMarker.GetStateIndex
	 */
	struct AMissionMarker_GetStateIndex_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.MissionMarker.GetMissionName
	 */
	struct AMissionMarker_GetMissionName_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.MissionStateCondition.OnMissionUpdated
	 */
	struct UMissionStateCondition_OnMissionUpdated_Params
	{
	public:
		class FName                                                InMissionName;                                           // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FFNAFMissionState                                   MissionState;                                            // 0x0008(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FFNAFMissionInfo                                    MissionInfo;                                             // 0x0028(0x0048)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.MissionStateCondition.HasMetConditions
	 */
	struct UMissionStateCondition_HasMetConditions_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.MoonmanManagementSystem.UnRegisterSpawn
	 */
	struct UMoonmanManagementSystem_UnRegisterSpawn_Params
	{
	public:
		class AMoonmanSpawnPoint*                                  InSpawnPoint;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.MoonmanManagementSystem.UnpauseMoonmanManager
	 */
	struct UMoonmanManagementSystem_UnpauseMoonmanManager_Params
	{	};

	/**
	 * Function fnaf9.MoonmanManagementSystem.StartMoonmanLiteManager
	 */
	struct UMoonmanManagementSystem_StartMoonmanLiteManager_Params
	{	};

	/**
	 * Function fnaf9.MoonmanManagementSystem.StartMoonmanDangerManager
	 */
	struct UMoonmanManagementSystem_StartMoonmanDangerManager_Params
	{	};

	/**
	 * Function fnaf9.MoonmanManagementSystem.RegisterSpawn
	 */
	struct UMoonmanManagementSystem_RegisterSpawn_Params
	{
	public:
		class AMoonmanSpawnPoint*                                  InSpawnPoint;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.MoonmanManagementSystem.PauseMoonmanManager
	 */
	struct UMoonmanManagementSystem_PauseMoonmanManager_Params
	{	};

	/**
	 * Function fnaf9.MoonmanManagementSystem.OnWorldStateChanged
	 */
	struct UMoonmanManagementSystem_OnWorldStateChanged_Params
	{
	public:
		EFNAFGameState                                             NewState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EFNAFGameState                                             PrevState;                                               // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.MoonmanManagementSystem.GetAllMMSpawnPointsFor
	 */
	struct UMoonmanManagementSystem_GetAllMMSpawnPointsFor_Params
	{
	public:
		EMMAnimCategory                                            MMAnimation;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_BGZF[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class AMoonmanSpawnPoint*>                          ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.MoonmanManagementSystem.GetAllMMSpawnPoints
	 */
	struct UMoonmanManagementSystem_GetAllMMSpawnPoints_Params
	{
	public:
		TArray<class AMoonmanSpawnPoint*>                          ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.MoonmanSpawnPoint.SetSpawnProbability
	 */
	struct AMoonmanSpawnPoint_SetSpawnProbability_Params
	{
	public:
		float                                                      tempProbability;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.MoonmanSpawnPoint.SetShouldFollowPlayer
	 */
	struct AMoonmanSpawnPoint_SetShouldFollowPlayer_Params
	{
	public:
		bool                                                       In;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.MoonmanSpawnPoint.SetMMAnimCategory
	 */
	struct AMoonmanSpawnPoint_SetMMAnimCategory_Params
	{
	public:
		EMMAnimCategory                                            In;                                                      // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.MoonmanSpawnPoint.SetIsTriggered
	 */
	struct AMoonmanSpawnPoint_SetIsTriggered_Params
	{
	public:
		bool                                                       isTriggered;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.MoonmanSpawnPoint.SetIsStationary
	 */
	struct AMoonmanSpawnPoint_SetIsStationary_Params
	{
	public:
		bool                                                       In;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.MoonmanSpawnPoint.SetIsSpawned
	 */
	struct AMoonmanSpawnPoint_SetIsSpawned_Params
	{
	public:
		bool                                                       IsSpawned;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.MoonmanSpawnPoint.SetIsSingleUse
	 */
	struct AMoonmanSpawnPoint_SetIsSingleUse_Params
	{
	public:
		bool                                                       In;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.MoonmanSpawnPoint.SetIsMMDetected
	 */
	struct AMoonmanSpawnPoint_SetIsMMDetected_Params
	{
	public:
		bool                                                       IsSkeletonDetected;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.MoonmanSpawnPoint.SetIsAnimLoop
	 */
	struct AMoonmanSpawnPoint_SetIsAnimLoop_Params
	{
	public:
		bool                                                       In;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.MoonmanSpawnPoint.SetHasSpawnedOnce
	 */
	struct AMoonmanSpawnPoint_SetHasSpawnedOnce_Params
	{
	public:
		bool                                                       HasSpawnedOnce;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.MoonmanSpawnPoint.SetHasLookedOnce
	 */
	struct AMoonmanSpawnPoint_SetHasLookedOnce_Params
	{
	public:
		bool                                                       HasLookedOnce;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.MoonmanSpawnPoint.SetCanSpawn
	 */
	struct AMoonmanSpawnPoint_SetCanSpawn_Params
	{
	public:
		bool                                                       canSpawn;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.MoonmanSpawnPoint.SetCanPopUp
	 */
	struct AMoonmanSpawnPoint_SetCanPopUp_Params
	{
	public:
		bool                                                       In;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.MoonmanSpawnPoint.SetAimHeadAtPlayer
	 */
	struct AMoonmanSpawnPoint_SetAimHeadAtPlayer_Params
	{
	public:
		bool                                                       In;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.MoonmanSpawnPoint.OnSetAIDisplay
	 */
	struct AMoonmanSpawnPoint_OnSetAIDisplay_Params
	{
	public:
		bool                                                       enable;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.MoonmanSpawnPoint.GetSpawnProbability
	 */
	struct AMoonmanSpawnPoint_GetSpawnProbability_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.MoonmanSpawnPoint.GetOriginalProbability
	 */
	struct AMoonmanSpawnPoint_GetOriginalProbability_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.MoonmanSpawnPoint.GetMMAnimSeq_Array
	 */
	struct AMoonmanSpawnPoint_GetMMAnimSeq_Array_Params
	{
	public:
		TArray<class UAnimSequence*>                               ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.MoonmanSpawnPoint.GetMMAnimCategory
	 */
	struct AMoonmanSpawnPoint_GetMMAnimCategory_Params
	{
	public:
		EMMAnimCategory                                            ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.MoonmanSpawnPoint.GetIsTriggered
	 */
	struct AMoonmanSpawnPoint_GetIsTriggered_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.MoonmanSpawnPoint.GetIsStationary
	 */
	struct AMoonmanSpawnPoint_GetIsStationary_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.MoonmanSpawnPoint.GetIsSpawned
	 */
	struct AMoonmanSpawnPoint_GetIsSpawned_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.MoonmanSpawnPoint.GetIsSingleUse
	 */
	struct AMoonmanSpawnPoint_GetIsSingleUse_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.MoonmanSpawnPoint.GetIsMMDetected
	 */
	struct AMoonmanSpawnPoint_GetIsMMDetected_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.MoonmanSpawnPoint.GetIsFollowPlayerTrue
	 */
	struct AMoonmanSpawnPoint_GetIsFollowPlayerTrue_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.MoonmanSpawnPoint.GetIsAnimLoop
	 */
	struct AMoonmanSpawnPoint_GetIsAnimLoop_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.MoonmanSpawnPoint.GetHasSpawnedOnce
	 */
	struct AMoonmanSpawnPoint_GetHasSpawnedOnce_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.MoonmanSpawnPoint.GetHasLookedOnce
	 */
	struct AMoonmanSpawnPoint_GetHasLookedOnce_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.MoonmanSpawnPoint.GetCanSpawn
	 */
	struct AMoonmanSpawnPoint_GetCanSpawn_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.MoonmanSpawnPoint.GetCanPopUp
	 */
	struct AMoonmanSpawnPoint_GetCanPopUp_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.MoonmanSpawnPoint.GetAimHeadAtPlayer
	 */
	struct AMoonmanSpawnPoint_GetAimHeadAtPlayer_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.MoonmanSpawnPoint.DetectTheSpawnPoint
	 */
	struct AMoonmanSpawnPoint_DetectTheSpawnPoint_Params
	{
	public:
		class AMoonmanSpawnPoint*                                  passed_HitActor;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       passed_bVisible;                                         // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.OptionsMenu.VolumeSliders
	 */
	struct UOptionsMenu_VolumeSliders_Params
	{
	public:
		float                                                      MasterVolume;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MusicVolume;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      VoiceVolume;                                             // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      JumpscareVolume;                                         // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      SFXVolume;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.OptionsMenu.UpdateSubtitles
	 */
	struct UOptionsMenu_UpdateSubtitles_Params
	{
	public:
		int32_t                                                    SubtitlesValue;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       SubtitlesOn;                                             // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       SubtitlesSmall;                                          // 0x0005(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       SubtitlesLarge;                                          // 0x0006(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0007(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.OptionsMenu.RestoreVideoSettings
	 */
	struct UOptionsMenu_RestoreVideoSettings_Params
	{
	public:
		EWindowMode                                                DefaultScreenMode;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_1TE3[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    DefaultRes;                                              // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    DefaultColorblind;                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    VisualQuality;                                           // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.OptionsMenu.RestoreAudioSettings
	 */
	struct UOptionsMenu_RestoreAudioSettings_Params
	{
	public:
		float                                                      MasterVolume;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MusicVolume;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      VoiceVolume;                                             // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      JumpscareVolume;                                         // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      SFXVolume;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    UISubtitlesValue;                                        // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       UISubtitlesOn;                                           // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       UISubtitlesSmall;                                        // 0x0019(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       UISubtitlesLarge;                                        // 0x001A(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.OptionsMenu.ResolutionSelection
	 */
	struct UOptionsMenu_ResolutionSelection_Params
	{
	public:
		int32_t                                                    UIValue;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.OptionsMenu.PSVideoSettings
	 */
	struct UOptionsMenu_PSVideoSettings_Params
	{	};

	/**
	 * Function fnaf9.OptionsMenu.ColorBlindSelection
	 */
	struct UOptionsMenu_ColorBlindSelection_Params
	{
	public:
		int32_t                                                    UIColorValue;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Severity;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.OptionsMenu.ApplyVideoSettings
	 */
	struct UOptionsMenu_ApplyVideoSettings_Params
	{
	public:
		int32_t                                                    UIResValue;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.PatrollerInterface.SetPatrolPath
	 */
	struct UPatrollerInterface_SetPatrolPath_Params
	{	};

	/**
	 * Function fnaf9.PatrollerInterface.SetCurrentPatrolPointIndex
	 */
	struct UPatrollerInterface_SetCurrentPatrolPointIndex_Params
	{
	public:
		int32_t                                                    PatrolPointIndex;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.PatrollerInterface.GetPatrolPath
	 */
	struct UPatrollerInterface_GetPatrolPath_Params
	{	};

	/**
	 * Function fnaf9.PatrollerInterface.GetCurrentPatrolPointIndex
	 */
	struct UPatrollerInterface_GetCurrentPatrolPointIndex_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.RaytracingUtils.SetSkeletalMeshRenderInRaytracing
	 */
	struct URaytracingUtils_SetSkeletalMeshRenderInRaytracing_Params
	{
	public:
		bool                                                       bRenderInRaytracing;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_NSKH[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USkeletalMeshComponent*                              MeshComponent;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.SaveHandlerInterface.PostSaveGame
	 */
	struct USaveHandlerInterface_PostSaveGame_Params
	{	};

	/**
	 * Function fnaf9.SaveHandlerInterface.PostGameLoad
	 */
	struct USaveHandlerInterface_PostGameLoad_Params
	{	};

	/**
	 * Function fnaf9.SaveHandlerInterface.OnStoreGameData
	 */
	struct USaveHandlerInterface_OnStoreGameData_Params
	{
	public:
		class UFNAFSaveData*                                       SaveDataObject;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.SaveHandlerInterface.OnGameDataLoaded
	 */
	struct USaveHandlerInterface_OnGameDataLoaded_Params
	{
	public:
		class UFNAFSaveData*                                       SaveDataObject;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.SaveHandlerInterface.OnCheckpointSave
	 */
	struct USaveHandlerInterface_OnCheckpointSave_Params
	{
	public:
		class UFNAFSaveData*                                       SaveDataObject;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.SaveHandlerInterface.OnCheckpointLoad
	 */
	struct USaveHandlerInterface_OnCheckpointLoad_Params
	{
	public:
		class UFNAFSaveData*                                       SaveDataObject;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.ScaledTimeSystem.UpdateScaledTimeDataRows
	 */
	struct UScaledTimeSystem_UpdateScaledTimeDataRows_Params
	{
	public:
		TMap<class FName, struct FScaledTimeDetails>               Rows;                                                    // 0x0000(0x0050)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.ScaledTimeSystem.UnpauseCurrentTimer
	 */
	struct UScaledTimeSystem_UnpauseCurrentTimer_Params
	{	};

	/**
	 * Function fnaf9.ScaledTimeSystem.StopCurrentTimer
	 */
	struct UScaledTimeSystem_StopCurrentTimer_Params
	{	};

	/**
	 * Function fnaf9.ScaledTimeSystem.StartTimerSeconds
	 */
	struct UScaledTimeSystem_StartTimerSeconds_Params
	{
	public:
		float                                                      Seconds;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.ScaledTimeSystem.StartTimerFromRowName
	 */
	struct UScaledTimeSystem_StartTimerFromRowName_Params
	{
	public:
		class FName                                                TimerRowName;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.ScaledTimeSystem.StartTimerFromNightNumber
	 */
	struct UScaledTimeSystem_StartTimerFromNightNumber_Params
	{
	public:
		int32_t                                                    NightNumber;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.ScaledTimeSystem.SetupNewGame
	 */
	struct UScaledTimeSystem_SetupNewGame_Params
	{	};

	/**
	 * Function fnaf9.ScaledTimeSystem.RestartCurrentTimer
	 */
	struct UScaledTimeSystem_RestartCurrentTimer_Params
	{	};

	/**
	 * Function fnaf9.ScaledTimeSystem.PauseCurrentTimer
	 */
	struct UScaledTimeSystem_PauseCurrentTimer_Params
	{	};

	/**
	 * Function fnaf9.ScaledTimeSystem.OnAntiVirusMoonmanTriggered
	 */
	struct UScaledTimeSystem_OnAntiVirusMoonmanTriggered_Params
	{	};

	/**
	 * Function fnaf9.ScaledTimeSystem.IsTimerActive
	 */
	struct UScaledTimeSystem_IsTimerActive_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.ScaledTimeSystem.GetTimeLeftSeconds
	 */
	struct UScaledTimeSystem_GetTimeLeftSeconds_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.ScaledTimeSystem.GetScaledTimeDataRows
	 */
	struct UScaledTimeSystem_GetScaledTimeDataRows_Params
	{
	public:
		TMap<class FName, struct FScaledTimeDetails>               ReturnValue;                                             // 0x0000(0x0050)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.ScaledTimeSystem.GetIsTimerPaused
	 */
	struct UScaledTimeSystem_GetIsTimerPaused_Params
	{	};

	/**
	 * Function fnaf9.SecurityCamera.StopOfficeMode
	 */
	struct ASecurityCamera_StopOfficeMode_Params
	{	};

	/**
	 * Function fnaf9.SecurityCamera.StartOfficeMode
	 */
	struct ASecurityCamera_StartOfficeMode_Params
	{	};

	/**
	 * Function fnaf9.SecurityCamera.SetPlayerDetectorEnabled
	 */
	struct ASecurityCamera_SetPlayerDetectorEnabled_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.SecurityCamera.SetEnemeyDetectorEnabled
	 */
	struct ASecurityCamera_SetEnemeyDetectorEnabled_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.SecurityCamera.OnPlayerDetectorSightChanged
	 */
	struct ASecurityCamera_OnPlayerDetectorSightChanged_Params
	{
	public:
		class AActor*                                              UpdatedActor;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bVisible;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.SecurityCamera.OnOfficeModeStarted
	 */
	struct ASecurityCamera_OnOfficeModeStarted_Params
	{	};

	/**
	 * Function fnaf9.SecurityCamera.OnEnemyDetectorSightChanged
	 */
	struct ASecurityCamera_OnEnemyDetectorSightChanged_Params
	{
	public:
		class AActor*                                              UpdatedActor;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bVisible;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.SecurityCamera.IsCameraUnlocked
	 */
	struct ASecurityCamera_IsCameraUnlocked_Params
	{
	public:
		bool                                                       OnlyShowCurrentMission;                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.SecurityCamera.HasDetectedEnemies
	 */
	struct ASecurityCamera_HasDetectedEnemies_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.SecurityCamera.GetVisibleEnemies
	 */
	struct ASecurityCamera_GetVisibleEnemies_Params
	{
	public:
		TArray<class AActor*>                                      ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.SecurityCamera.GetPlayerSceneCapture
	 */
	struct ASecurityCamera_GetPlayerSceneCapture_Params
	{
	public:
		class USceneCaptureComponent2D*                            ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.SecurityCamera.GetCaptureTarget
	 */
	struct ASecurityCamera_GetCaptureTarget_Params
	{
	public:
		class UTextureRenderTarget2D*                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.SecurityCamera.CaptureView
	 */
	struct ASecurityCamera_CaptureView_Params
	{	};

	/**
	 * Function fnaf9.SecurityCameraSystem.PlayerSpotted
	 */
	struct USecurityCameraSystem_PlayerSpotted_Params
	{
	public:
		class ASecurityCamera*                                     SecurityCamera;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.SecurityCameraSystem.GetAllSecurityCameras
	 */
	struct USecurityCameraSystem_GetAllSecurityCameras_Params
	{
	public:
		TArray<class ASecurityCamera*>                             ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.SecurityNodeComponent.DrawDebugGraph
	 */
	struct USecurityNodeComponent_DrawDebugGraph_Params
	{	};

	/**
	 * Function fnaf9.SecurityPuzzleJsonHandler.WriteAllPuzzleDataToFile
	 */
	struct USecurityPuzzleJsonHandler_WriteAllPuzzleDataToFile_Params
	{
	public:
		TArray<struct FSecurityNodePuzzle>                         Puzzles;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.SecurityPuzzleJsonHandler.ReadSecurityNodePuzzleData
	 */
	struct USecurityPuzzleJsonHandler_ReadSecurityNodePuzzleData_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.SecurityPuzzleJsonHandler.GenerateStructsArrayFromJsonStringSecurityNodePuzzle
	 */
	struct USecurityPuzzleJsonHandler_GenerateStructsArrayFromJsonStringSecurityNodePuzzle_Params
	{
	public:
		class FString                                              JsonString;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FSecurityNodePuzzle>                         Puzzles;                                                 // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.SeekerPatrolPath.GetSpawnType
	 */
	struct USeekerPatrolPath_GetSpawnType_Params
	{
	public:
		EFNAFAISpawnType                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.SeekerPatrolPath.GetPathName
	 */
	struct USeekerPatrolPath_GetPathName_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.SightComponent.SetSightType
	 */
	struct USightComponent_SetSightType_Params
	{
	public:
		ESightType                                                 InSightType;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.SightComponent.SetSightParams
	 */
	struct USightComponent_SetSightParams_Params
	{
	public:
		float                                                      Angle;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MinDistance;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MaxDistance;                                             // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.SightComponent.SetSightEnabled
	 */
	struct USightComponent_SetSightEnabled_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.SightComponent.SetSightAngle
	 */
	struct USightComponent_SetSightAngle_Params
	{
	public:
		float                                                      Angle;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.SightComponent.SetIncludeTags
	 */
	struct USightComponent_SetIncludeTags_Params
	{
	public:
		TArray<class FName>                                        InIgnoreTags;                                            // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.SightComponent.SetFrustumTypeParams
	 */
	struct USightComponent_SetFrustumTypeParams_Params
	{
	public:
		float                                                      InMinYaw;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InMaxYaw;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InMinPitch;                                              // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InMaxPitch;                                              // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.SightComponent.SetEndDistance
	 */
	struct USightComponent_SetEndDistance_Params
	{
	public:
		float                                                      Distance;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.SightComponent.SetAspectRatio
	 */
	struct USightComponent_SetAspectRatio_Params
	{
	public:
		float                                                      Ratio;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.SightComponent.OnVisualQueryResults
	 */
	struct USightComponent_OnVisualQueryResults_Params
	{
	public:
		TArray<TWeakObjectPtr<class UVisualSourceComponent>>       DetectedSources;                                         // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, UObjectWrapper, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.SightComponent.OnVisibleActorDestroyed
	 */
	struct USightComponent_OnVisibleActorDestroyed_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.SightComponent.OnMoonManQueryResults
	 */
	struct USightComponent_OnMoonManQueryResults_Params
	{
	public:
		TArray<TWeakObjectPtr<class AMoonmanSpawnPoint>>           MoonManSpawnPoints;                                      // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, UObjectWrapper, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.SightComponent.IsUsingConeSight
	 */
	struct USightComponent_IsUsingConeSight_Params
	{
	public:
		ESightType                                                 ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.SightComponent.IsSightEnabled
	 */
	struct USightComponent_IsSightEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.SightComponent.IsActorVisible
	 */
	struct USightComponent_IsActorVisible_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.SightComponent.GetVisibleActors
	 */
	struct USightComponent_GetVisibleActors_Params
	{
	public:
		TArray<class AActor*>                                      ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.SightComponent.GetStartDistance
	 */
	struct USightComponent_GetStartDistance_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.SightComponent.GetSightAngle
	 */
	struct USightComponent_GetSightAngle_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.SightComponent.GetMinYaw
	 */
	struct USightComponent_GetMinYaw_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.SightComponent.GetMinPitch
	 */
	struct USightComponent_GetMinPitch_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.SightComponent.GetMaxYaw
	 */
	struct USightComponent_GetMaxYaw_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.SightComponent.GetMaxPitch
	 */
	struct USightComponent_GetMaxPitch_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.SightComponent.GetIncludeTags
	 */
	struct USightComponent_GetIncludeTags_Params
	{
	public:
		TArray<class FName>                                        ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.SightComponent.GetFrustumTypeParams
	 */
	struct USightComponent_GetFrustumTypeParams_Params
	{
	public:
		float                                                      OutMinYaw;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      OutMaxYaw;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      OutMinPitch;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      OutMaxPitch;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.SightComponent.GetEndDistance
	 */
	struct USightComponent_GetEndDistance_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.SightComponent.GetAspectRatio
	 */
	struct USightComponent_GetAspectRatio_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.SplineFollowMovementComponent.StopFollowingSpline
	 */
	struct USplineFollowMovementComponent_StopFollowingSpline_Params
	{	};

	/**
	 * Function fnaf9.SplineFollowMovementComponent.StartFollowingSpline
	 */
	struct USplineFollowMovementComponent_StartFollowingSpline_Params
	{	};

	/**
	 * Function fnaf9.SplineFollowMovementComponent.SetSplineToFollow
	 */
	struct USplineFollowMovementComponent_SetSplineToFollow_Params
	{
	public:
		class USplineComponent*                                    Spline;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.SplineFollowMovementComponent.SetDistanceAlongSpline
	 */
	struct USplineFollowMovementComponent_SetDistanceAlongSpline_Params
	{
	public:
		float                                                      Distance;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.SplineFollowMovementComponent.SetDirectionAndSplineToFollow
	 */
	struct USplineFollowMovementComponent_SetDirectionAndSplineToFollow_Params
	{
	public:
		class USplineComponent*                                    Spline;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Direction;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.SplineFollowMovementComponent.IsFollowingSpline
	 */
	struct USplineFollowMovementComponent_IsFollowingSpline_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.SplineFollowMovementComponent.GetCurrentDistance
	 */
	struct USplineFollowMovementComponent_GetCurrentDistance_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.SplineUtils.GetApproxDistanceClosestToWorldLocation
	 */
	struct USplineUtils_GetApproxDistanceClosestToWorldLocation_Params
	{
	public:
		struct FVector                                             Pos_WS;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_H3EH[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USplineComponent*                                    Spline;                                                  // 0x0010(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.WorldStateComponent.SetObjectState
	 */
	struct UWorldStateComponent_SetObjectState_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.WorldStateComponent.HasValidSaveName
	 */
	struct UWorldStateComponent_HasValidSaveName_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.WorldStateComponent.GetObjectState
	 */
	struct UWorldStateComponent_GetObjectState_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.StoreActiveStateOnTrigger.OnActorTriggered
	 */
	struct UStoreActiveStateOnTrigger_OnActorTriggered_Params
	{
	public:
		class AActor*                                              OverlappedActor;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.StreamingLevelUtil.LoadStreamingLevelsAtLocation
	 */
	struct UStreamingLevelUtil_LoadStreamingLevelsAtLocation_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             WorldLocation;                                           // 0x0008(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bEnableVolumesAfterLoad;                                 // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_2Y8O[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0018(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.StreamingLevelUtil.GetAllStreamingVolumesAtLocation
	 */
	struct UStreamingLevelUtil_GetAllStreamingVolumesAtLocation_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             WorldLocation;                                           // 0x0008(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_STVL[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class ALevelStreamingVolume*>                       ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.StreamingLevelUtil.GetAllStreamingVolumes
	 */
	struct UStreamingLevelUtil_GetAllStreamingVolumes_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class ALevelStreamingVolume*>                       ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.StreamingLevelUtil.GetAllStreamingLevelsAtLocation
	 */
	struct UStreamingLevelUtil_GetAllStreamingLevelsAtLocation_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             WorldLocation;                                           // 0x0008(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ASD6[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class ULevelStreaming*>                             ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.StreamingLevelUtil.GetAllStreamingLevels
	 */
	struct UStreamingLevelUtil_GetAllStreamingLevels_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class ULevelStreaming*>                             ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.StreamingLevelUtil.GetAllLevels
	 */
	struct UStreamingLevelUtil_GetAllLevels_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class ULevel*>                                      ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.StreamingLevelUtil.EnableAllStreamingVolumes
	 */
	struct UStreamingLevelUtil_EnableAllStreamingVolumes_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bEnable;                                                 // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.StreamingLoadComponent.StartAsyncLoadForLocation
	 */
	struct UStreamingLoadComponent_StartAsyncLoadForLocation_Params
	{
	public:
		struct FVector                                             WorldLocation;                                           // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.StreamingLoadComponent.OnLevelLoaded
	 */
	struct UStreamingLoadComponent_OnLevelLoaded_Params
	{	};

	/**
	 * Function fnaf9.StreamingLoadComponent.IsStreamingLevels
	 */
	struct UStreamingLoadComponent_IsStreamingLevels_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.StreamingLoadComponent.EnableAllStreamingVolumes
	 */
	struct UStreamingLoadComponent_EnableAllStreamingVolumes_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.SurvivalItemPackage.OnSetup
	 */
	struct ASurvivalItemPackage_OnSetup_Params
	{	};

	/**
	 * Function fnaf9.SurvivalItemPackage.HasCollected
	 */
	struct ASurvivalItemPackage_HasCollected_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.SurvivalItemPackage.Collect
	 */
	struct ASurvivalItemPackage_Collect_Params
	{	};

	/**
	 * Function fnaf9.SurvivalItemRandomizer.RandomizeSurvivalItems
	 */
	struct ASurvivalItemRandomizer_RandomizeSurvivalItems_Params
	{
	public:
		bool                                                       bSpawnAllLocations;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.SurvivalItemRandomizer.HasCollected
	 */
	struct ASurvivalItemRandomizer_HasCollected_Params
	{
	public:
		class ASurvivalItemPackage*                                Package;                                                 // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.SurvivalItemRandomizer.GetPackagesSortedByDistance
	 */
	struct ASurvivalItemRandomizer_GetPackagesSortedByDistance_Params
	{
	public:
		TArray<class ASurvivalItemPackage*>                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.SurvivalItemRandomizer.GetGlitchMaterial
	 */
	struct ASurvivalItemRandomizer_GetGlitchMaterial_Params
	{
	public:
		class UMaterialInterface*                                  ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.TeleportationInterface.SpringArmEnabled
	 */
	struct UTeleportationInterface_SpringArmEnabled_Params
	{	};

	/**
	 * Function fnaf9.TeleportationInterface.SpringArmDisabled
	 */
	struct UTeleportationInterface_SpringArmDisabled_Params
	{	};

	/**
	 * Function fnaf9.TeleportationInterface.SpawnBlackRabbit
	 */
	struct UTeleportationInterface_SpawnBlackRabbit_Params
	{	};

	/**
	 * Function fnaf9.TeleportationInterface.SetMaskIconOverlayActive
	 */
	struct UTeleportationInterface_SetMaskIconOverlayActive_Params
	{
	public:
		bool                                                       Active;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.TeleportationInterface.PlayerFinishedTeleporting
	 */
	struct UTeleportationInterface_PlayerFinishedTeleporting_Params
	{	};

	/**
	 * Function fnaf9.TeleportationInterface.PlayerCannotTeleport
	 */
	struct UTeleportationInterface_PlayerCannotTeleport_Params
	{	};

	/**
	 * Function fnaf9.TeleportationInterface.MaskIconRemoveMask
	 */
	struct UTeleportationInterface_MaskIconRemoveMask_Params
	{	};

	/**
	 * Function fnaf9.TeleportationInterface.MaskIconNearBlocker
	 */
	struct UTeleportationInterface_MaskIconNearBlocker_Params
	{
	public:
		bool                                                       NearBlocker;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.TeleportationInterface.MaskIconDefault
	 */
	struct UTeleportationInterface_MaskIconDefault_Params
	{	};

	/**
	 * Function fnaf9.TeleportationInterface.MaskIconCantTeleport
	 */
	struct UTeleportationInterface_MaskIconCantTeleport_Params
	{	};

	/**
	 * Function fnaf9.TeleportationInterface.IsPlayerMoving
	 */
	struct UTeleportationInterface_IsPlayerMoving_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.TeleportationInterface.EnablePlayerInput
	 */
	struct UTeleportationInterface_EnablePlayerInput_Params
	{	};

	/**
	 * Function fnaf9.TeleportationInterface.DisablePlayerInput
	 */
	struct UTeleportationInterface_DisablePlayerInput_Params
	{	};

	/**
	 * Function fnaf9.TeleportationInterface.DeactivateGlitchUI
	 */
	struct UTeleportationInterface_DeactivateGlitchUI_Params
	{	};

	/**
	 * Function fnaf9.TeleportationInterface.CanAITeleport
	 */
	struct UTeleportationInterface_CanAITeleport_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.TeleportationInterface.AICapsuleHalfHeight
	 */
	struct UTeleportationInterface_AICapsuleHalfHeight_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.TeleportationInterface.ActivateTeleportFX
	 */
	struct UTeleportationInterface_ActivateTeleportFX_Params
	{	};

	/**
	 * Function fnaf9.TeleportationInterface.ActivateGlitchUI
	 */
	struct UTeleportationInterface_ActivateGlitchUI_Params
	{	};

	/**
	 * Function fnaf9.TeleportationSubsystem.TeleportAI
	 */
	struct UTeleportationSubsystem_TeleportAI_Params
	{
	public:
		class APawn*                                               AIPawn;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      CapsuleHeight;                                           // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.TeleportationSubsystem.SetPlayerSaveInNormal
	 */
	struct UTeleportationSubsystem_SetPlayerSaveInNormal_Params
	{
	public:
		bool                                                       PlayerSaveInNormal;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.TeleportationSubsystem.SetPlayerInNormalForChapterReplay
	 */
	struct UTeleportationSubsystem_SetPlayerInNormalForChapterReplay_Params
	{
	public:
		bool                                                       PlayerInNormal;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.TeleportationSubsystem.SetPlayerInNormal
	 */
	struct UTeleportationSubsystem_SetPlayerInNormal_Params
	{
	public:
		bool                                                       PlayerInNormal;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.TeleportationSubsystem.IsPlayerInNormal
	 */
	struct UTeleportationSubsystem_IsPlayerInNormal_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.TeleportationSubsystem.GetTeleportationDistance
	 */
	struct UTeleportationSubsystem_GetTeleportationDistance_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.TeleportationSubsystem.GetPlayerSaveInNormal
	 */
	struct UTeleportationSubsystem_GetPlayerSaveInNormal_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.TeleportationSubsystem.GetCurrentAIPawn
	 */
	struct UTeleportationSubsystem_GetCurrentAIPawn_Params
	{
	public:
		class APawn*                                               ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.TeleportationSubsystem.ForceTeleport
	 */
	struct UTeleportationSubsystem_ForceTeleport_Params
	{	};

	/**
	 * Function fnaf9.TeleportationSubsystem.CheckIfPlayerCanTeleport
	 */
	struct UTeleportationSubsystem_CheckIfPlayerCanTeleport_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.TeleportationSubsystem.CanTeleport
	 */
	struct UTeleportationSubsystem_CanTeleport_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.TemporarySnapshotSystem.SetUseSnapshot
	 */
	struct UTemporarySnapshotSystem_SetUseSnapshot_Params
	{
	public:
		bool                                                       UseSnapshot;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.TemporarySnapshotSystem.SetInitializeOnPost
	 */
	struct UTemporarySnapshotSystem_SetInitializeOnPost_Params
	{
	public:
		bool                                                       Initialize;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.TemporarySnapshotSystem.SetAlternativeTranform
	 */
	struct UTemporarySnapshotSystem_SetAlternativeTranform_Params
	{
	public:
		struct FTransform                                          AltTranform;                                             // 0x0000(0x0030)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.TemporarySnapshotSystem.GetUseSnapshot
	 */
	struct UTemporarySnapshotSystem_GetUseSnapshot_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.TemporarySnapshotSystem.GetTemporaryGameStateSnapshot
	 */
	struct UTemporarySnapshotSystem_GetTemporaryGameStateSnapshot_Params
	{
	public:
		struct FDLCSaveSnapshotData                                ReturnValue;                                             // 0x0000(0x00B8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.TemporarySnapshotSystem.CreateTemporaryGameStateSnapshot
	 */
	struct UTemporarySnapshotSystem_CreateTemporaryGameStateSnapshot_Params
	{	};

	/**
	 * Function fnaf9.UpdateMissionComponent.UpdateMission
	 */
	struct UUpdateMissionComponent_UpdateMission_Params
	{	};

	/**
	 * Function fnaf9.UpdateMissionComponent.IsMissionFinished
	 */
	struct UUpdateMissionComponent_IsMissionFinished_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.UpdateMissionComponent.HasMetCondition
	 */
	struct UUpdateMissionComponent_HasMetCondition_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.UpdateMissionComponent.GetMissionName
	 */
	struct UUpdateMissionComponent_GetMissionName_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.UVEmitterInterface.GetUVLight
	 */
	struct UUVEmitterInterface_GetUVLight_Params
	{
	public:
		struct FVector                                             InTargetLocation;                                        // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       InOverridePrecision;                                     // 0x000C(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_YIG7[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      InPrecisionOverrideValue;                                // 0x0010(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             OutLocation;                                             // 0x0014(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      OutStrength;                                             // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.UVLightReactionComponent.Setup
	 */
	struct UUVLightReactionComponent_Setup_Params
	{
	public:
		class UMaterialInstanceDynamic*                            InMaterial;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class USceneComponent*>                             InLocatorComponents;                                     // 0x0008(0x0010)  (Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.UVLightReactionComponent.RemoveActor
	 */
	struct UUVLightReactionComponent_RemoveActor_Params
	{
	public:
		class AActor*                                              ActorToRemove;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.UVLightReactionComponent.GetRadius
	 */
	struct UUVLightReactionComponent_GetRadius_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.UVLightReactionComponent.GetEmitterInRange
	 */
	struct UUVLightReactionComponent_GetEmitterInRange_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.UVLightReactionComponent.CalculateUV
	 */
	struct UUVLightReactionComponent_CalculateUV_Params
	{	};

	/**
	 * Function fnaf9.UVLightReactionComponent.AddActor
	 */
	struct UUVLightReactionComponent_AddActor_Params
	{
	public:
		class AActor*                                              ActorToAdd;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.UVLightReactionFromOverlap.OnOwnerEndOverlap
	 */
	struct UUVLightReactionFromOverlap_OnOwnerEndOverlap_Params
	{
	public:
		class AActor*                                              OverlappedActor;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.UVLightReactionFromOverlap.OnOwnerBeginOverlap
	 */
	struct UUVLightReactionFromOverlap_OnOwnerBeginOverlap_Params
	{
	public:
		class AActor*                                              OverlappedActor;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.VisualSourceComponent.SetVisualOffsetLocations
	 */
	struct UVisualSourceComponent_SetVisualOffsetLocations_Params
	{
	public:
		TArray<struct FVector>                                     InVisualOffsets;                                         // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.VisualSourceComponent.SetVisualOffset
	 */
	struct UVisualSourceComponent_SetVisualOffset_Params
	{
	public:
		int32_t                                                    PointIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             visualOffset;                                            // 0x0004(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.VisualSourceComponent.SetSourceVisibility
	 */
	struct UVisualSourceComponent_SetSourceVisibility_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.VisualSourceComponent.RemoveVisualOffset
	 */
	struct UVisualSourceComponent_RemoveVisualOffset_Params
	{
	public:
		int32_t                                                    PointIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.VisualSourceComponent.GetVisualOffsets
	 */
	struct UVisualSourceComponent_GetVisualOffsets_Params
	{
	public:
		TArray<struct FVector>                                     ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.VisualSourceComponent.GetVisualLocations
	 */
	struct UVisualSourceComponent_GetVisualLocations_Params
	{
	public:
		TArray<struct FVector>                                     ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.VisualSourceComponent.GetSourceVisibility
	 */
	struct UVisualSourceComponent_GetSourceVisibility_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.VisualSourceComponent.GetDetectedVisualLocation
	 */
	struct UVisualSourceComponent_GetDetectedVisualLocation_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.VisualSourceComponent.DetectTheSource
	 */
	struct UVisualSourceComponent_DetectTheSource_Params
	{
	public:
		struct FVector                                             VSLocation;                                              // 0x0000(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_6S0H[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              passed_HitActor;                                         // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       passed_bVisible;                                         // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.WorldStateHandlerComponent.SetObjectState
	 */
	struct UWorldStateHandlerComponent_SetObjectState_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.WorldStateHandlerComponent.OnObjectStateChangedHandle
	 */
	struct UWorldStateHandlerComponent_OnObjectStateChangedHandle_Params
	{
	public:
		class FName                                                ObjectName;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ObjectState;                                             // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.WorldStateHandlerComponent.OnObjectStateChangedEvent
	 */
	struct UWorldStateHandlerComponent_OnObjectStateChangedEvent_Params
	{	};

	/**
	 * Function fnaf9.WorldStateHandlerComponent.HasValidSaveName
	 */
	struct UWorldStateHandlerComponent_HasValidSaveName_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.WorldStateHandlerComponent.GetObjectState
	 */
	struct UWorldStateHandlerComponent_GetObjectState_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.WorldStateSystem.StartMinigame
	 */
	struct UWorldStateSystem_StartMinigame_Params
	{
	public:
		class FString                                              MinigameName;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EFNAFGameState                                             GameState;                                               // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_IUKF[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              MinigameActor;                                           // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.WorldStateSystem.SetWorldState
	 */
	struct UWorldStateSystem_SetWorldState_Params
	{
	public:
		EFNAFGameState                                             NewState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.WorldStateSystem.SetupNewGame
	 */
	struct UWorldStateSystem_SetupNewGame_Params
	{	};

	/**
	 * Function fnaf9.WorldStateSystem.SetSurvivalMaxDeaths
	 */
	struct UWorldStateSystem_SetSurvivalMaxDeaths_Params
	{
	public:
		int32_t                                                    MaxDeaths;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.WorldStateSystem.SetSurvivalDifficulty
	 */
	struct UWorldStateSystem_SetSurvivalDifficulty_Params
	{
	public:
		ESurvivalDifficulty                                        Difficulty;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.WorldStateSystem.SetRuinAIState
	 */
	struct UWorldStateSystem_SetRuinAIState_Params
	{
	public:
		struct FFNAFRuinAISaveData                                 InRuinAIState;                                           // 0x0000(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.WorldStateSystem.SetRandomSeed
	 */
	struct UWorldStateSystem_SetRandomSeed_Params
	{
	public:
		int32_t                                                    Seed;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.WorldStateSystem.SetPowerStationAvailable
	 */
	struct UWorldStateSystem_SetPowerStationAvailable_Params
	{
	public:
		bool                                                       bAvailable;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.WorldStateSystem.SetPlayerInPowerStation
	 */
	struct UWorldStateSystem_SetPlayerInPowerStation_Params
	{
	public:
		int32_t                                                    InPowerStationID;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.WorldStateSystem.SetPlayerInFreddy
	 */
	struct UWorldStateSystem_SetPlayerInFreddy_Params
	{
	public:
		bool                                                       bInFreddy;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.WorldStateSystem.SetPlayerHasUsedHidingSpot
	 */
	struct UWorldStateSystem_SetPlayerHasUsedHidingSpot_Params
	{	};

	/**
	 * Function fnaf9.WorldStateSystem.SetMazercisePanel
	 */
	struct UWorldStateSystem_SetMazercisePanel_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_7OUE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Location;                                                // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.WorldStateSystem.SetInstructionCardShown
	 */
	struct UWorldStateSystem_SetInstructionCardShown_Params
	{
	public:
		bool                                                       Shown;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.WorldStateSystem.SetGoalPathName
	 */
	struct UWorldStateSystem_SetGoalPathName_Params
	{
	public:
		class FName                                                inGoalPathName;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.WorldStateSystem.SetFreddySick
	 */
	struct UWorldStateSystem_SetFreddySick_Params
	{
	public:
		bool                                                       bIsSick;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.WorldStateSystem.SetFreddyPatrolPoint
	 */
	struct UWorldStateSystem_SetFreddyPatrolPoint_Params
	{
	public:
		int32_t                                                    PatrolPointIndex;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.WorldStateSystem.SetDeactivatedCautionBot_Map
	 */
	struct UWorldStateSystem_SetDeactivatedCautionBot_Map_Params
	{
	public:
		TMap<int32_t, bool>                                        In_DeactivatedCautionBots_Map;                           // 0x0000(0x0050)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.WorldStateSystem.SetCurrentActivityId
	 */
	struct UWorldStateSystem_SetCurrentActivityId_Params
	{
	public:
		class FString                                              InActivityId;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.WorldStateSystem.SetCanShowInstructionCards
	 */
	struct UWorldStateSystem_SetCanShowInstructionCards_Params
	{
	public:
		bool                                                       bCanShowInstructionCards;                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.WorldStateSystem.SetCanEnterExitFreddy
	 */
	struct UWorldStateSystem_SetCanEnterExitFreddy_Params
	{
	public:
		bool                                                       bCanEnterExit;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.WorldStateSystem.SetCanCallFreddy
	 */
	struct UWorldStateSystem_SetCanCallFreddy_Params
	{
	public:
		bool                                                       bCanCall;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.WorldStateSystem.SetArcadeState
	 */
	struct UWorldStateSystem_SetArcadeState_Params
	{
	public:
		struct FArcadeSaveData                                     InArcadeState;                                           // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.WorldStateSystem.SetAIState
	 */
	struct UWorldStateSystem_SetAIState_Params
	{
	public:
		struct FFNAFAISaveData                                     InAIState;                                               // 0x0000(0x0068)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.WorldStateSystem.ResetForChapterSelect
	 */
	struct UWorldStateSystem_ResetForChapterSelect_Params
	{
	public:
		TArray<class FName>                                        chapterActivatables;                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<class FName>                                        activatablesToKeepOnReplay;                              // 0x0010(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		int32_t                                                    chapterSelected;                                         // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.WorldStateSystem.RemoveDeactivatedCautionBot
	 */
	struct UWorldStateSystem_RemoveDeactivatedCautionBot_Params
	{
	public:
		int32_t                                                    CautionBotID;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       isDeactivated;                                           // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.WorldStateSystem.RemoveBonnieBowlMMMJumpscareSaveID
	 */
	struct UWorldStateSystem_RemoveBonnieBowlMMMJumpscareSaveID_Params
	{
	public:
		class FName                                                inSaveID;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.WorldStateSystem.RemoveActivated
	 */
	struct UWorldStateSystem_RemoveActivated_Params
	{
	public:
		class FName                                                ActivatableName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.WorldStateSystem.IsPowerStationAvailable
	 */
	struct UWorldStateSystem_IsPowerStationAvailable_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.WorldStateSystem.IsPlayerInFreddy
	 */
	struct UWorldStateSystem_IsPlayerInFreddy_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.WorldStateSystem.IsInstructionCardShown
	 */
	struct UWorldStateSystem_IsInstructionCardShown_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.WorldStateSystem.IsFreddySick
	 */
	struct UWorldStateSystem_IsFreddySick_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.WorldStateSystem.IsActivated
	 */
	struct UWorldStateSystem_IsActivated_Params
	{
	public:
		class FName                                                ActivatableName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.WorldStateSystem.HasPlayerUsedHidingSpot
	 */
	struct UWorldStateSystem_HasPlayerUsedHidingSpot_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.WorldStateSystem.GetWorldState
	 */
	struct UWorldStateSystem_GetWorldState_Params
	{
	public:
		EFNAFGameState                                             ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.WorldStateSystem.GetSurvivalMaxDeaths
	 */
	struct UWorldStateSystem_GetSurvivalMaxDeaths_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.WorldStateSystem.GetSurvivalDifficulty
	 */
	struct UWorldStateSystem_GetSurvivalDifficulty_Params
	{
	public:
		ESurvivalDifficulty                                        ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.WorldStateSystem.GetSavedPlayerLocationAndRotation
	 */
	struct UWorldStateSystem_GetSavedPlayerLocationAndRotation_Params
	{
	public:
		struct FVector                                             OutWorldLocation;                                        // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            OutWorldRotation;                                        // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.WorldStateSystem.GetSavedFreddyLocationAndRotation
	 */
	struct UWorldStateSystem_GetSavedFreddyLocationAndRotation_Params
	{
	public:
		bool                                                       OutFreddyInWorld;                                        // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_U5X4[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             OutWorldLocation;                                        // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            OutWorldRotation;                                        // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.WorldStateSystem.GetRuinAIState
	 */
	struct UWorldStateSystem_GetRuinAIState_Params
	{
	public:
		struct FFNAFRuinAISaveData                                 ReturnValue;                                             // 0x0000(0x0078)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.WorldStateSystem.GetRandomSeed
	 */
	struct UWorldStateSystem_GetRandomSeed_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.WorldStateSystem.GetPowerStationInfo
	 */
	struct UWorldStateSystem_GetPowerStationInfo_Params
	{
	public:
		bool                                                       OutPlayerInPowerStation;                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_XMME[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    OutPowerStationID;                                       // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.WorldStateSystem.GetMazercisePanel
	 */
	struct UWorldStateSystem_GetMazercisePanel_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_GLAQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.WorldStateSystem.GetLivesRemaining
	 */
	struct UWorldStateSystem_GetLivesRemaining_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.WorldStateSystem.GetGoalPathName
	 */
	struct UWorldStateSystem_GetGoalPathName_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.WorldStateSystem.GetFreddyPawn
	 */
	struct UWorldStateSystem_GetFreddyPawn_Params
	{
	public:
		class AFNAFBasePlayerCharacter*                            ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.WorldStateSystem.GetFreddyPatrolPoint
	 */
	struct UWorldStateSystem_GetFreddyPatrolPoint_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.WorldStateSystem.GetDeactivatedCautionBots_Map
	 */
	struct UWorldStateSystem_GetDeactivatedCautionBots_Map_Params
	{
	public:
		TMap<int32_t, bool>                                        ReturnValue;                                             // 0x0000(0x0050)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.WorldStateSystem.GetCurrentSpottedCount
	 */
	struct UWorldStateSystem_GetCurrentSpottedCount_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.WorldStateSystem.GetCurrentMinigameActor
	 */
	struct UWorldStateSystem_GetCurrentMinigameActor_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.WorldStateSystem.GetCurrentMinigame
	 */
	struct UWorldStateSystem_GetCurrentMinigame_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.WorldStateSystem.GetCurrentDeathCount
	 */
	struct UWorldStateSystem_GetCurrentDeathCount_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.WorldStateSystem.GetCurrentActivityId
	 */
	struct UWorldStateSystem_GetCurrentActivityId_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.WorldStateSystem.GetBonnieBowlMMMJumspscareData
	 */
	struct UWorldStateSystem_GetBonnieBowlMMMJumspscareData_Params
	{	};

	/**
	 * Function fnaf9.WorldStateSystem.GetArcadeState
	 */
	struct UWorldStateSystem_GetArcadeState_Params
	{
	public:
		struct FArcadeSaveData                                     ReturnValue;                                             // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.WorldStateSystem.GetAllCurrentActivables
	 */
	struct UWorldStateSystem_GetAllCurrentActivables_Params
	{
	public:
		TArray<class FName>                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.WorldStateSystem.GetAIState
	 */
	struct UWorldStateSystem_GetAIState_Params
	{
	public:
		struct FFNAFAISaveData                                     ReturnValue;                                             // 0x0000(0x0068)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.WorldStateSystem.EndMinigame
	 */
	struct UWorldStateSystem_EndMinigame_Params
	{	};

	/**
	 * Function fnaf9.WorldStateSystem.DebugSetPlayerHasUsedHidingSpot
	 */
	struct UWorldStateSystem_DebugSetPlayerHasUsedHidingSpot_Params
	{
	public:
		bool                                                       HasHid;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.WorldStateSystem.ClearPlayerInPowerStation
	 */
	struct UWorldStateSystem_ClearPlayerInPowerStation_Params
	{	};

	/**
	 * Function fnaf9.WorldStateSystem.CanStartMinigame
	 */
	struct UWorldStateSystem_CanStartMinigame_Params
	{
	public:
		bool                                                       CanStart;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ECantStartMinigameReason                                   reason;                                                  // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.WorldStateSystem.CanShowInstructionCards
	 */
	struct UWorldStateSystem_CanShowInstructionCards_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.WorldStateSystem.CanEnterExitFreddy
	 */
	struct UWorldStateSystem_CanEnterExitFreddy_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.WorldStateSystem.CanCallFreddy
	 */
	struct UWorldStateSystem_CanCallFreddy_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.WorldStateSystem.AddSpotted
	 */
	struct UWorldStateSystem_AddSpotted_Params
	{	};

	/**
	 * Function fnaf9.WorldStateSystem.AddDeath
	 */
	struct UWorldStateSystem_AddDeath_Params
	{
	public:
		int32_t                                                    OutRemainingLives;                                       // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.WorldStateSystem.AddDeactivatedCautionBot
	 */
	struct UWorldStateSystem_AddDeactivatedCautionBot_Params
	{
	public:
		int32_t                                                    CautionBotID;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       isDeactivated;                                           // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.WorldStateSystem.AddBonnieBowlMMMJumpscareSaveID
	 */
	struct UWorldStateSystem_AddBonnieBowlMMMJumpscareSaveID_Params
	{
	public:
		class FName                                                inSaveID;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.WorldStateSystem.AddActivated
	 */
	struct UWorldStateSystem_AddActivated_Params
	{
	public:
		class FName                                                ActivatableName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function fnaf9.XboxUtilities.XboxQuit
	 */
	struct UXboxUtilities_XboxQuit_Params
	{	};

	/**
	 * Function fnaf9.XSXUtilities.GetXSXConsoleType
	 */
	struct UXSXUtilities_GetXSXConsoleType_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
