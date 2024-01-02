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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class fnaf9.AIDLC_RabbitComponent
	 * Size -> 0x01F0 (FullSize[0x02A0] - InheritedSize[0x00B0])
	 */
	class UAIDLC_RabbitComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_MDC0[0xB8];                                  // 0x00B0(0x00B8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       ChangeSpawnTime;                                         // 0x0168(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ZV0W[0x3];                                   // 0x0169(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NewSpawnTime;                                            // 0x016C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       ChangeSpawnRadius;                                       // 0x0170(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_T6IO[0x3];                                   // 0x0171(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NewSpawnRadius;                                          // 0x0174(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       ChangeMoveLength;                                        // 0x0178(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BY6W[0x3];                                   // 0x0179(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NewMoveLength;                                           // 0x017C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       ChangePauseTime;                                         // 0x0180(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_VRUV[0x3];                                   // 0x0181(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NewPauseTime;                                            // 0x0184(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       ChangePauseRate;                                         // 0x0188(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       NewPauseRate;                                            // 0x0189(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       ChangeInnerRange;                                        // 0x018A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_92RO[0x1];                                   // 0x018B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NewInnerRange;                                           // 0x018C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       ChangeOuterRange;                                        // 0x0190(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6GLP[0x3];                                   // 0x0191(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NewOuterRange;                                           // 0x0194(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       ChangeStareTime;                                         // 0x0198(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_SKQH[0x3];                                   // 0x0199(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NewStareTime;                                            // 0x019C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       ChangeAlertPhaseLength;                                  // 0x01A0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_O2TK[0x3];                                   // 0x01A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NewAlertPhaseLength;                                     // 0x01A4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       ChangeAnimatronicSpawnDistance;                          // 0x01A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_XFC1[0x3];                                   // 0x01A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NewAnimatronicSpawnDistance;                             // 0x01AC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      NewAnimatronicDespawnRadius;                             // 0x01B0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       ChangeAnimatronicDespawnRadius;                          // 0x01B4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       ChangeCooldownPhaseOne;                                  // 0x01B5(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_P03O[0x2];                                   // 0x01B6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NewCooldownPhaseOne;                                     // 0x01B8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       ChangeCooldownPhaseTwo;                                  // 0x01BC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_F3MU[0x3];                                   // 0x01BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NewCooldownPhaseTwo;                                     // 0x01C0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      NewDespawnTime;                                          // 0x01C4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       ChangeDespawnTime;                                       // 0x01C8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_RH10[0x3];                                   // 0x01C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NewSoftJumpscareTime;                                    // 0x01CC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       ChangeSoftJumpscareTime;                                 // 0x01D0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_W5TQ[0x3];                                   // 0x01D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NewSoftJumpscareChance;                                  // 0x01D4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       ChangeSoftJumpscareChance;                               // 0x01D8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_YMJK[0x3];                                   // 0x01D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NewInhibitorRadius;                                      // 0x01DC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       ChangeInhibitorRadius;                                   // 0x01E0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_KPVJ[0x3];                                   // 0x01E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NewSpawnCloseChance;                                     // 0x01E4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       ChangeSpawnCloseChance;                                  // 0x01E8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_G5UK[0x3];                                   // 0x01E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NewSpawnCloseAlertDelay;                                 // 0x01EC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       ChangeSpawnCloseAlertDelay;                              // 0x01F0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_WDD6[0x3];                                   // 0x01F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NewSpawnCloseMaxDistance;                                // 0x01F4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       ChangeSpawnCloseMaxDistance;                             // 0x01F8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FCY3[0x3];                                   // 0x01F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NewTrailSpeed;                                           // 0x01FC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       ChangeTrailSpeed;                                        // 0x0200(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       ChangeARSpawnTime;                                       // 0x0201(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_PDLL[0x2];                                   // 0x0202(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NewARSpawnTime;                                          // 0x0204(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       ChangeARSpawnRadius;                                     // 0x0208(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_DGQE[0x3];                                   // 0x0209(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NewARSpawnRadius;                                        // 0x020C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       ChangeARMoveLength;                                      // 0x0210(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_DX4C[0x3];                                   // 0x0211(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NewARMoveLength;                                         // 0x0214(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       ChangeARPauseTime;                                       // 0x0218(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8X7F[0x3];                                   // 0x0219(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NewARPauseTime;                                          // 0x021C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       ChangeARPauseRate;                                       // 0x0220(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       NewARPauseRate;                                          // 0x0221(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       ChangeARInnerRange;                                      // 0x0222(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_SXZ9[0x1];                                   // 0x0223(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NewARInnerRange;                                         // 0x0224(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       ChangeAROuterRange;                                      // 0x0228(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_3Q8Z[0x3];                                   // 0x0229(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NewAROuterRange;                                         // 0x022C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       ChangeARStareTime;                                       // 0x0230(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FTVW[0x3];                                   // 0x0231(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NewARStareTime;                                          // 0x0234(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       ChangeARAlertPhaseLength;                                // 0x0238(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_CUE1[0x3];                                   // 0x0239(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NewARAlertPhaseLength;                                   // 0x023C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       ChangeARAnimatronicSpawnDistance;                        // 0x0240(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_UPRE[0x3];                                   // 0x0241(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NewARAnimatronicSpawnDistance;                           // 0x0244(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      NewARAnimatronicDespawnRadius;                           // 0x0248(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       ChangeARAnimatronicDespawnRadius;                        // 0x024C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       ChangeARCooldownPhaseOne;                                // 0x024D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_IS8B[0x2];                                   // 0x024E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NewARCooldownPhaseOne;                                   // 0x0250(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       ChangeARCooldownPhaseTwo;                                // 0x0254(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_U9OJ[0x3];                                   // 0x0255(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NewARCooldownPhaseTwo;                                   // 0x0258(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      NewARDespawnTime;                                        // 0x025C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       ChangeARDespawnTime;                                     // 0x0260(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_22MX[0x3];                                   // 0x0261(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NewARSoftJumpscareTime;                                  // 0x0264(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       ChangeARSoftJumpscareTime;                               // 0x0268(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_EKA6[0x3];                                   // 0x0269(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NewARSoftJumpscareChance;                                // 0x026C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       ChangeARSoftJumpscareChance;                             // 0x0270(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_R5X3[0x3];                                   // 0x0271(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NewARInhibitorRadius;                                    // 0x0274(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       ChangeARInhibitorRadius;                                 // 0x0278(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_GA7E[0x3];                                   // 0x0279(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NewARSpawnCloseChance;                                   // 0x027C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       ChangeARSpawnCloseChance;                                // 0x0280(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_XLS2[0x3];                                   // 0x0281(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NewARSpawnCloseAlertDelay;                               // 0x0284(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       ChangeARSpawnCloseAlertDelay;                            // 0x0288(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_G449[0x3];                                   // 0x0289(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NewARSpawnCloseMaxDistance;                              // 0x028C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       ChangeARSpawnCloseMaxDistance;                           // 0x0290(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_AIUV[0x3];                                   // 0x0291(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NewARTrailSpeed;                                         // 0x0294(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       ChangeARTrailSpeed;                                      // 0x0298(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_56G3[0x7];                                   // 0x0299(0x0007) MISSED OFFSET (PADDING)

	public:
		void UpdateDLC_RabbitValues();
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.AIDLC_RabbitSystem
	 * Size -> 0x01B0 (FullSize[0x01E0] - InheritedSize[0x0030])
	 */
	class UAIDLC_RabbitSystem : public UWorldSubsystem
	{
	public:
		unsigned char                                              UnknownData_PBYJ[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             onDLCRabbitTimerStarted;                                 // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnARValueUpdated;                                        // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnBanishRabbit;                                          // 0x0058(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CMQ4[0x178];                                 // 0x0068(0x0178) MISSED OFFSET (PADDING)

	public:
		void UnregisterAnimation(class AActor* InterfaceImplementor);
		void UnpauseTimers();
		void StopPsuedoAlert();
		void StartPsuedoAlert(const struct FVector& TrackLocation);
		void SetupQueryData(class UEnvQuery* InFindSpawnPointEQSA, class UEnvQuery* InFindSpawnPointEQSB, class UEnvQuery* InFindSpawnPointEQSA_Close, class UEnvQuery* InFindSpawnPointEQSB_Close, class UDataTable* InDLC_RabbitDataTable);
		void SetTypesToAlert(TArray<struct FAnimatronicTypeData> TypesToAlertIn);
		void SetTrailSpeed(float NewTrailSpeed);
		void SetStareTime(float NewStareTime);
		void SetSpawnTime(float NewSpawnTime);
		void SetSpawnRadius(float NewSpawnRadius);
		void SetSpawnInViewChance(float NewSpawnInViewChance);
		void SetSpawnCloseMaxDistance(float NewSpawnCloseMaxDistance);
		void SetSpawnCloseChance(float NewSpawnCloseChance);
		void SetSpawnCloseAlertDelay(float NewSpawnCloseAlertDelay);
		void SetSoftJumpscareTime(float NewSoftJumpscareTime);
		void SetSoftJumpscareChance(float NewSoftJumpscareChance);
		void SetPauseTime(float NewPauseTime);
		void SetPauseRate(float NewPauseRate);
		void SetOuterRange(float NewOuterRange);
		void SetNumberToAlert(int32_t NumberToAlertIn);
		void SetMoveLength(float NewMoveLength);
		void SetInnerRange(float NewInnerRange);
		void SetInhibitorRadius(float NewInhibitorRadius);
		void SetHasBeenAgitatedByWalkieTalkie(bool NewHasBeenAgitated);
		void SetDLC_RabbitData(const struct FDLC_RabbitSaveData& Data);
		void SetDespawnTime(float NewDespawnTime);
		void SetCooldownPhaseTwo(float NewCooldownPhaseTwo);
		void SetCooldownPhaseOne(float NewCooldownPhaseOne);
		void SetARTrailSpeed(float NewTrailSpeed);
		void SetARStareTime(float NewARStareTime);
		void SetARSpawnTime(float NewARSpawnTime);
		void SetARSpawnRadius(float NewARSpawnRadius);
		void SetARSpawnInViewChance(float NewARSpawnInViewChance);
		void SetARSpawnCloseMaxDistance(float NewARSpawnCloseMaxDistance);
		void SetARSpawnCloseChance(float NewARSpawnCloseChance);
		void SetARSpawnCloseAlertDelay(float NewARSpawnCloseAlertDelay);
		void SetARSoftJumpscareTime(float NewARSoftJumpscareTime);
		void SetARSoftJumpscareChance(float NewARSoftJumpscareChance);
		void SetARPauseTime(float NewARPauseTime);
		void SetARPauseRate(float NewARPauseRate);
		void SetAROuterRange(float NewAROuterRange);
		void SetARMoveLength(float NewARMoveLength);
		void SetARInnerRange(float NewARInnerRange);
		void SetARInhibitorRadius(float NewARInhibitorRadius);
		void SetARHasBeenAgitatedByWalkieTalkie(bool NewARHasBeenAgitated);
		void SetARDLC_RabbitData(const struct FDLC_RabbitSaveData& Data);
		void SetARDespawnTime(float NewARDespawnTime);
		void SetARCooldownPhaseTwo(float NewARCooldownPhaseTwo);
		void SetARCooldownPhaseOne(float NewARCooldownPhaseOne);
		void SetARAnimatronicSpawnDistance(float NewARAnimatronicSpawnDistance);
		void SetARAnimatronicDespawnRadius(float NewARAnimatronicDespawnRadius);
		void SetARAlertPhaseLength(float NewARAlertPhaseLength);
		void SetAnimatronicSpawnDistance(float NewAnimatronicSpawnDistance);
		void SetAnimatronicDespawnRadius(float NewAnimatronicDespawnRadius);
		void SetAlertPhaseLength(float NewAlertPhaseLength);
		void RespawnRabbitAI();
		void RespawnAlertAI();
		void ResetARDLC_RabbitValues();
		void RegisterDLC_RabbitActor(class AActor* DLC_RabbitIn);
		void RegisterAnimation(const struct FDLC_RabbitEnemySequenceDataStruct& DataIn);
		void PauseTimers();
		void OnSwitch(bool NormalWorld);
		void OnSoftJumpscareFinished();
		void OnNormalWorldEntry();
		void OnARWorldEntry();
		bool GetUseAlertDelay();
		TArray<struct FAnimatronicTypeData> GetTypesToAlert();
		float GetTrailSpeed();
		float GetStareTime();
		float GetSpawnTime();
		float GetSpawnRadius();
		float GetSpawnInViewChance();
		float GetSpawnCloseMaxDistance();
		float GetSpawnCloseChance();
		float GetSpawnCloseAlertDelay();
		float GetSoftJumpscareTime();
		float GetSoftJumpscareChance();
		bool GetShouldSpawnBehind();
		float GetRemainingSpawnTimePercent();
		float GetRemainingSpawnTime();
		float GetRemainingAlertTimePercent();
		float GetRemainingAlertTime();
		float GetProximityPercent();
		float GetPauseTime();
		float GetPauseRate();
		float GetOuterRange();
		int32_t GetNumberToAlert();
		float GetMoveLength();
		bool GetIsAlerted();
		float GetInnerRange();
		float GetInhibitorRadius();
		bool GetHasBeenAgitatedByWalkieTalkie();
		struct FDLC_RabbitSaveData GetDLC_RabbitData();
		float GetDespawnTime();
		float GetCooldownPhaseTwo();
		float GetCooldownPhaseOne();
		float GetARTrailSpeed();
		float GetARStareTime();
		float GetARSpawnTime();
		float GetARSpawnRadius();
		float GetARSpawnInViewChance();
		float GetARSpawnCloseMaxDistance();
		float GetARSpawnCloseChance();
		float GetARSpawnCloseAlertDelay();
		float GetARSoftJumpscareTime();
		float GetARSoftJumpscareChance();
		float GetARPauseTime();
		float GetARPauseRate();
		float GetAROuterRange();
		float GetARMoveLength();
		float GetARInnerRange();
		float GetARInhibitorRadius();
		bool GetARHasBeenAgitatedByWalkieTalkie();
		struct FDLC_RabbitSaveData GetARDLC_RabbitData();
		float GetARDespawnTime();
		float GetARCooldownPhaseTwo();
		float GetARCooldownPhaseOne();
		float GetARAnimatronicSpawnDistance();
		float GetARAnimatronicDespawnRadius();
		float GetARAlertPhaseLength();
		float GetAnimatronicSpawnDistance();
		float GetAnimatronicDespawnRadius();
		float GetAlertPhaseLength();
		TArray<class AActor*> GetAlertedActors();
		bool DoesDLC_RabbitExist();
		void ConstructAlertedActorList();
		void BanishRabbit();
		void AlertFinished();
		void Alert();
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.AIHiderInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAIHiderInterface : public UInterface
	{
	public:
		void ExitHideMode(class AActor* HideActor);
		void EnterHideMode(class AActor* HideActor);
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.AIEnvironmentQueryInfo
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UAIEnvironmentQueryInfo : public UPrimaryDataAsset
	{
	public:
		EFNAFAISpawnType                                           AIType;                                                  // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4CKU[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UEnvQuery*                                           EnvirontmentQuery;                                       // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.AIManagementSystem
	 * Size -> 0x0270 (FullSize[0x02A0] - InheritedSize[0x0030])
	 */
	class UAIManagementSystem : public UWorldSubsystem
	{
	public:
		unsigned char                                              UnknownData_CXWI[0x10];                                  // 0x0030(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       EnableDebugCloak;                                        // 0x0040(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WET2[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnAISpawned;                                             // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C7VD[0x190];                                 // 0x0058(0x0190) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<EFNAFAISpawnType, struct FFNAFAISettingInfo>          CharacterInfoDataMap;                                    // 0x01E8(0x0050) NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_9V4E[0x58];                                  // 0x0238(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UAIEnvironmentQueryInfo*>                     QueryData;                                               // 0x0290(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate

	public:
		void UnregisterSeekerPath();
		void UnRegisterAI(class APawn* AIPawn);
		void UnpauseManager();
		void StoreEndoStates();
		void StoreAnimatronicSpawnWithSubType(EFNAFAISpawnType AIType, const class FName& PathName, EFNAFAISubType AISubType);
		void StoreAnimatronicSpawn(EFNAFAISpawnType AIType, const class FName& PathName, bool bIsShattered);
		void StartManager();
		void SpawnVannyOrVanessa(bool bSpawnVanny, bool* bOutSpawned, const struct FLatentActionInfo& LatentActionInfo);
		class APawn* SpawnSpecificAIOnPathWithSubType(EFNAFAISpawnType AIType, EFNAFAISubType AISubType, const class FName& PathName);
		class APawn* SpawnSpecificAIOnPath(EFNAFAISpawnType AIType, bool bForceShattered, const class FName& PathName);
		void SpawnSpecificAIAtSpawnPointWithSubType(class AFNAFAISpawnPoint* SpawnPoint, EFNAFAISpawnType AIType, EFNAFAISubType forceAISubType);
		void SpawnSpecificAIAtSpawnPoint(class AFNAFAISpawnPoint* SpawnPoint, EFNAFAISpawnType AIType, bool ForceShattered);
		class APawn* SpawnAIWithTransformAndPathWithSubType(EFNAFAISpawnType AIType, EFNAFAISubType forceAISubType, const struct FTransform& SpawnTransform, const class FName& PathName);
		class APawn* SpawnAIWithTransformAndPath(EFNAFAISpawnType AIType, bool bForceShattered, const struct FTransform& SpawnTransform, const class FName& PathName);
		class APawn* SpawnAITypeWithTransformWithSubType(EFNAFAISpawnType AIType, const struct FTransform& SpawnTransform, EFNAFAISubType forceAISubType, ESpawnActorCollisionHandlingMethod CollisionOverrideMethod, class AActor* Owner);
		class APawn* SpawnAITypeWithTransformSafeWithSubType(EFNAFAISpawnType AIType, const struct FTransform& SpawnTransform, EFNAFAISubType forceAISubType, bool* success, ESpawnActorCollisionHandlingMethod CollisionOverrideMethod, class AActor* Owner, bool bForceRespawn);
		class APawn* SpawnAITypeWithTransformSafe(EFNAFAISpawnType AIType, const struct FTransform& SpawnTransform, bool ForceShattered, bool* success, ESpawnActorCollisionHandlingMethod CollisionOverrideMethod, class AActor* Owner, bool bForceRespawn);
		class APawn* SpawnAITypeWithTransform(EFNAFAISpawnType AIType, const struct FTransform& SpawnTransform, bool ForceShattered, ESpawnActorCollisionHandlingMethod CollisionOverrideMethod, class AActor* Owner);
		class APawn* SpawnAITypeAtLocationWithSubType(EFNAFAISpawnType AIType, const struct FVector& SpawnLocation, EFNAFAISubType forceAISubType);
		class APawn* SpawnAITypeAtLocation(EFNAFAISpawnType AIType, const struct FVector& SpawnLocation, bool ForceShattered);
		class APawn* SpawnAIOnPathWithSubType(EFNAFAISpawnType AIType, EFNAFAISubType forceAISubType, const class FName& PathName);
		class APawn* SpawnAIOnPathNearLocation(EFNAFAISpawnType AIType, const struct FVector& Location, const class FName& PathName);
		class APawn* SpawnAIOnPath(EFNAFAISpawnType AIType, bool bForceShattered, const class FName& PathName);
		void SpawnAINearPlayer();
		void SpawnAIFar();
		void SpawnAIAtSpawnPointWithSubType(class AFNAFAISpawnPoint* SpawnPoint, EFNAFAISubType forceAISubType);
		void SpawnAIAtSpawnPoint(class AFNAFAISpawnPoint* SpawnPoint, bool bForceShattered);
		void SpawnAIAtDistance(float Distance);
		void SetWorldSpawnEnabled(bool bEnable);
		void SetVanessaSpawnEnable(bool bEnable);
		void SetUseStagedSpawns(bool enable);
		void SetSpawningEnabled(bool enable);
		void SetExpectedAI(TArray<struct FAnimatronicExpectedData> AITypes);
		void SetAllAIExpected();
		void SetAITeleportEnabled(bool bEnable);
		void SendVanessaAlert(TArray<EFNAFAISpawnType> TypesToAlert, int32_t NumberToAlert);
		void SendGeneralAlert(const struct FVector& AlertLocation, TArray<struct FAnimatronicTypeData> TypesToAlert, int32_t NumberToAlert);
		void RespawnEndos();
		void RespawnAnimatronics();
		void RespawnAllAI();
		void Reset();
		void RemoveExpectedAI(EFNAFAISpawnType AIType);
		void RemoveCharacterByType(EFNAFAISpawnType AIType);
		void RemoveAllCharacters();
		void RegisterSeekerPath();
		void RegisterAI(class APawn* AIPawn);
		void PawnExitedRoom(class APawn* AIPawn, class ARoomAreaBase* Room);
		void PawnEnteringRoom(class APawn* AIPawn, class ARoomAreaBase* Room);
		void PawnEnteredRoom(class APawn* AIPawn, class ARoomAreaBase* Room);
		void PauseManager();
		void OnWorldStateChanged(EFNAFGameState NewState, EFNAFGameState OldState);
		void OnVannyPathsCollected();
		void OnPawnEndPlay(class AActor* DestroyedPawn, EEndPlayReason EndPlayReason);
		void OnAIFellOutOfWorld(class APawn* AIPawn);
		void OnAIEnvQueryInfoLoaded(TArray<struct FAssetData> AssetDataList);
		void OnAICharacterInfoLoaded(TArray<struct FAssetData> AssetDataList);
		bool IsWorldSpawnEnabled();
		bool IsUsingStagedSpawns();
		bool IsSpawningEnabled();
		bool IsRoomOccupied(class ARoomAreaBase* Room);
		bool IsRoomBeingEntered(class ARoomAreaBase* Room);
		bool IsAITeleportEnabled();
		float GetTimeSinceLastEncounter();
		TMap<class APawn*, int32_t> GetRoomDistancesToPlayer();
		class ARoomAreaBase* GetRoomAIPawnIsIn(class APawn* AIPawn);
		class ARoomAreaBase* GetRoomAIPawnIsEntering(class APawn* AIPawn);
		class APawn* GetPawnForType(EFNAFAISpawnType AIType);
		class UClass* GetPawnClassForTypeAndSubType(EFNAFAISpawnType AIType, EFNAFAISubType forceAISubType);
		class UClass* GetPawnClassForType(EFNAFAISpawnType AIType, bool bForceShattered);
		void GetPathForAI(EFNAFAISpawnType AIType, const class FName& PathName);
		void GetPathByNameForAI(const class FName& PathName);
		TArray<EFNAFAISpawnType> GetExistingPawnTypes();
		class APawn* GetExistingPawn(EFNAFAISpawnType AIType, bool RequireShattered);
		void GetCurrentVannyMeterValuesAsPercentage(float* OutCurrentValuePercent, float* OutSoftMaxPercent);
		void GetCurrentVannyMeterValues(float* CurrentValue, float* Max, float* SoftMax);
		float GetCurrentVannyMeterPercentage();
		TArray<struct FAIDistanceResult> GetCachedDistances();
		void GetCachedDistanceFor(class APawn* Pawn, bool* bOutResultValid, struct FAIDistanceResult* OutResult);
		TArray<class AFNAFAISpawnPoint*> GetAllSpawnPointsFor(EFNAFAISpawnType AIType);
		TArray<class AFNAFAISpawnPoint*> GetAllSpawnPoints();
		TArray<class APawn*> GetAllRegisteredAI();
		void GetAllAnimatronicPawns(TArray<class APawn*>* OutAnimatronicPawns);
		TArray<class APawn*> GetAllAIInRoomAtMost(int32_t numRooms);
		TArray<class APawn*> GetAllAI();
		TArray<class APawn*> GetAIPawnsWithSightToPlayer();
		TArray<class APawn*> GetAIPawnsEnteringRoom(class ARoomAreaBase* Room);
		TArray<class APawn*> GetAIPawnInRoom(class ARoomAreaBase* Room);
		class AFNAFAISpawnPoint* FindSpawnPointClosestToDistance(float Distance);
		void FindSpawnNotVisibleAtDistance(float Distance, EFNAFAISpawnType SpawnType, class APawn* PawnForNavProperties, TArray<class AFNAFAISpawnPoint*>* OutSpawnPointsResult, TArray<float>* OutDistances, const struct FLatentActionInfo& LatentInfo);
		bool FindRandomPatrolPointOutOfView(EFNAFAISpawnType AIType, struct FVector* OutLocation);
		class AFNAFAISpawnPoint* FindFurthestSpawnPoint();
		class AFNAFAISpawnPoint* FindClosestSpawnPoint();
		void FindClosestPatrolPointOutOfView(class APawn* AIPawn, bool* bOutResultValid, struct FVector* OutLocation, const struct FLatentActionInfo& LatentActionInfo, int32_t* OutPointIndex);
		void FindClosestPathPointForAI(class APawn* AIPawn, bool* OutResultValid, int32_t* OutPointIndex, struct FVector* OutLocation, const struct FLatentActionInfo& LatentInfo);
		void ExitedHiding(class APawn* AIPawn);
		void DoNotDespawnAIDuringMoonmanPhase(bool bDoNotDestroy);
		void DestroyAllAINotVisible();
		void DestroyAllAIInRoomsAtleast(int32_t RoomDist);
		void DestroyAllAI();
		void ClearExpectedAI();
		void CalculateAllAIDistances(TArray<struct FAIDistanceResult>* DistanceResults, bool* bOutClosestIsValid, int32_t* ClosestIndex, const struct FLatentActionInfo& LatentInfo);
		void ApplySound(float Strength, const struct FVector& WorldLocation);
		void ApplyCollect(const struct FVector& WorldLocation);
		bool AnyPawnInPlayerRoom();
		void AISpottedPlayer(class APawn* AIPawn);
		void AILostSightOfPlayer(class APawn* AIPawn);
		void AdjustVannyMeter(float Amount);
		void AddExpectedAI(const struct FAnimatronicExpectedData& AIType);
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.PathPointProvider
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPathPointProvider : public UInterface
	{
	public:
		void SetPointType(int32_t PointIndex, int32_t PointType);
		void SetPointLocation(int32_t PointIndex, const struct FVector& Location);
		void RemovePointConnection(int32_t PointIndex, int32_t PointToDisconnectIndex);
		void RemovePoint(int32_t PointIndex);
		int32_t GetPointType(int32_t PointIndex);
		TArray<int32_t> GetPointsConnectedTo(int32_t PointIndex);
		struct FVector GetPointLocation(int32_t PointIndex);
		struct FLinearColor GetPointColor(int32_t PointIndex);
		int32_t GetNumberOfPathPoints();
		TArray<class FText> GetAvailablePointTypes();
		void AddPointConnection(int32_t PointIndex, int32_t PointToConnectIndex);
		int32_t AddPoint(const struct FVector& Location);
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.AIPathComponent
	 * Size -> 0x0000 (FullSize[0x00B0] - InheritedSize[0x00B0])
	 */
	class UAIPathComponent : public UActorComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.AISpawnPointComponent
	 * Size -> 0x0000 (FullSize[0x0470] - InheritedSize[0x0470])
	 */
	class UAISpawnPointComponent : public UArrowComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.AISpawnSystem
	 * Size -> 0x0028 (FullSize[0x0250] - InheritedSize[0x0228])
	 */
	class AAISpawnSystem : public AActor
	{
	public:
		TArray<class APawn*>                                       ExistingAI;                                              // 0x0228(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WZ9P[0x18];                                  // 0x0238(0x0018) MISSED OFFSET (PADDING)

	public:
		void OnRollChange();
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.PlayerTrigger
	 * Size -> 0x0048 (FullSize[0x0270] - InheritedSize[0x0228])
	 */
	class APlayerTrigger : public AActor
	{
	public:
		unsigned char                                              UnknownData_PEY4[0x8];                                   // 0x0228(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPlayerTriggered;                                       // 0x0230(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UBoxComponent*                                       TriggerComponent;                                        // 0x0240(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseContinuousTrigger;                                   // 0x0248(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HPD6[0x3];                                   // 0x0249(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                SaveName;                                                // 0x024C(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSaveOnTrigger;                                          // 0x0254(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VHIT[0x3];                                   // 0x0255(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<EFNAFGameType>                                      ValidGameTypes;                                          // 0x0258(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bFixCollision;                                           // 0x0268(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTriggerOnActorOverlap;                                  // 0x0269(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E10B[0x6];                                   // 0x026A(0x0006) MISSED OFFSET (PADDING)

	public:
		void SetTriggerActive(bool bActive);
		void SaveActivated();
		void OnWorldObjectStateChanged(const class FName& ObjectName, bool ObjectState);
		void OnTriggerStay();
		void OnTriggered();
		bool IsTriggerStateSet();
		bool IsTriggerActive();
		void ForceTrigger();
		bool CanTrigger();
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.AISpawnTrigger
	 * Size -> 0x0040 (FullSize[0x02B0] - InheritedSize[0x0270])
	 */
	class AAISpawnTrigger : public APlayerTrigger
	{
	public:
		class FScriptMulticastDelegate                             OnAISpawnedDelegate;                                     // 0x0270(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnAISpawnedFailureDelegate;                              // 0x0280(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		bool                                                       SpawnAnyCharacter;                                       // 0x0290(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       ForceShattered;                                          // 0x0291(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_2CJ8[0x6];                                   // 0x0292(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<EFNAFAISpawnType>                                   SpawnCharacters;                                         // 0x0298(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		class UArrowComponent*                                     SpawnLocation;                                           // 0x02A8(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void OnAISpawnedFailure(class APawn* SpawnedPawn);
		void OnAISpawned(class APawn* SpawnedPawn);
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.AISystemSettings
	 * Size -> 0x0040 (FullSize[0x0078] - InheritedSize[0x0038])
	 */
	class UAISystemSettings : public UDeveloperSettings
	{
	public:
		float                                                      MinimumSpawnDistance;                                    // 0x0038(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaximumSpawnDistance;                                    // 0x003C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpawnDelayTime;                                          // 0x0040(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeBetweenSightings;                                    // 0x0044(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OutOfRangeDistance;                                      // 0x0048(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TeleportDistance;                                        // 0x004C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VannyMeterIncreasePerSecond;                             // 0x0050(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VannyMeterIncreasePerCampSecond;                         // 0x0054(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VannyMeterIncreasePerSoundUnit;                          // 0x0058(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VannyMeterIncreasePerGift;                               // 0x005C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VannyMeterLowAppear;                                     // 0x0060(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VannyMeterMax;                                           // 0x0064(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<float>                                              VannyMeterPerHourBase;                                   // 0x0068(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.FNAFAICharacterInfo
	 * Size -> 0x0068 (FullSize[0x0098] - InheritedSize[0x0030])
	 */
	class UFNAFAICharacterInfo : public UPrimaryDataAsset
	{
	public:
		EFNAFAISpawnType                                           AIType;                                                  // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0I2O[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFNAFAISettingInfo                                  SettingInfo;                                             // 0x0038(0x0060) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.AudioUtil
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAudioUtil : public UBlueprintFunctionLibrary
	{
	public:
		void RemoveWwiseListener(class AActor* Actor);
		bool IsAudioForActorPlaying(class UObject* WorldContextObject, class AActor* Actor);
		void GetWwiseListeners();
		void AddWwiseListener(class AActor* Actor);
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.BallPitVolume
	 * Size -> 0x0018 (FullSize[0x0240] - InheritedSize[0x0228])
	 */
	class ABallPitVolume : public AActor
	{
	public:
		class UBoxComponent*                                       Volume;                                                  // 0x0228(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class AActor*>                                      Balls;                                                   // 0x0230(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.CameraHelperFunctions
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCameraHelperFunctions : public UBlueprintFunctionLibrary
	{
	public:
		bool IsLocationInCameraView(class UObject* WorldContextObject, const struct FVector& Location, ECameraAngleFlags CameraAngles, float* OutHorizontalAngle, float* OutVerticalAngle);
		void GetLocationAnglesFromCamera(class UObject* WorldContextObject, const struct FVector& Location, float* OutHorizontalAngle, float* OutVerticalAngle);
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.CameraTrigger
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCameraTrigger : public UInterface
	{
	public:
		EAlertType GetAlertType();
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.ChowdaDebugSubsystem
	 * Size -> 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
	 */
	class UChowdaDebugSubsystem : public UWorldSubsystem
	{
	public:
		unsigned char                                              UnknownData_WFEU[0x28];                                  // 0x0030(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ULevelLoadSubsystem*                                 LevelLoader;                                             // 0x0058(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDataTable*                                          LevelSystemData;                                         // 0x0060(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                CurrentLocation;                                         // 0x0068(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void SpawnDLCRabbit(TArray<struct FAnimatronicTypeData> TypesToAlertIn);
		void GoToThisArea(EMapArea MapArea);
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.ChowdaPawnInterface_DLC
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UChowdaPawnInterface_DLC : public UInterface
	{
	public:
		void ForceEject();
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.ChowdaUtils
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UChowdaUtils : public UBlueprintFunctionLibrary
	{
	public:
		class UInputSettings* ResetInputsToDefaults();
		bool IsPlayInEditor();
		bool DoInputMappingsMatch();
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.ConditionalCheckComponent
	 * Size -> 0x0030 (FullSize[0x00E0] - InheritedSize[0x00B0])
	 */
	class UConditionalCheckComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_JXJA[0x8];                                   // 0x00B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnConditionalCheckUpdated;                               // 0x00B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		EConditionCheckType                                        ConditionCheck;                                          // 0x00C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VMBN[0x17];                                  // 0x00C9(0x0017) MISSED OFFSET (PADDING)

	public:
		void OnConditionUpdated();
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.ConditionCheckInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UConditionCheckInterface : public UInterface
	{
	public:
		void UnbindConditionUpdatedDelegate(const class FScriptDelegate& OnConditionResultUpdated);
		bool ConditionsMet();
		void BindConditionUpdatedDelegate(const class FScriptDelegate& OnConditionResultUpdated);
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.ConditionFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UConditionFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void RemoveConditionDelegate(struct FConditionResultDelegates* DelegateHandle, const class FScriptDelegate& Delegate);
		void HasMetComponentConditionsWithGet(class AActor* ActorToCheck, bool* bOutConditionsMet);
		bool HasMetComponentConditions(class AActor* ActorToCheck);
		bool HasMetAnyComponentConditions(class AActor* ActorToCheck);
		void CallConditionUpdate(const struct FConditionResultDelegates& DelegateHandle);
		void AddConditionDelegate(struct FConditionResultDelegates* DelegateHandle, const class FScriptDelegate& Delegate);
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.CounterpartProviderInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCounterpartProviderInterface : public UInterface
	{
	public:
		class AActor* GetCounterPart();
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.DarkModePostProcessVolume
	 * Size -> 0x0000 (FullSize[0x07E0] - InheritedSize[0x07E0])
	 */
	class ADarkModePostProcessVolume : public APostProcessVolume
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.DataTableUtils
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDataTableUtils : public UBlueprintFunctionLibrary
	{
	public:
		class UDataTable* GetAnimatronicVODataTable(const class FName& RowName);
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.DLC_RabbitAlertUI
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDLC_RabbitAlertUI : public UInterface
	{
	public:
		void ShowSoftJumpscare();
		void ShowRabbitFlicker();
		void ShowAlert();
		void HideSoftJumpscare();
		void HideAlert();
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.DLC_RabbitEnemySequence
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDLC_RabbitEnemySequence : public UInterface
	{
	public:
		void RequestStop();
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.DLC_RabbitForbiddenZone
	 * Size -> 0x0000 (FullSize[0x0228] - InheritedSize[0x0228])
	 */
	class ADLC_RabbitForbiddenZone : public AActor
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.DoorComponent
	 * Size -> 0x0150 (FullSize[0x0200] - InheritedSize[0x00B0])
	 */
	class UDoorComponent : public UActorComponent
	{
	public:
		struct FDoorEntryRequirements                              NormalDoorEntryRequirements;                             // 0x00B0(0x0038) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FDoorEntryRequirements                              ChowdaDoorEntryRequirements;                             // 0x00E8(0x0038) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		bool                                                       bIsOpen;                                                 // 0x0120(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FQN8[0x7];                                   // 0x0121(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPawnEnteredDoor;                                       // 0x0128(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPawnExitedDoor;                                        // 0x0138(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnInitialOpen;                                           // 0x0148(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnOpenDoor;                                              // 0x0158(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnCloseDoor;                                             // 0x0168(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPlayerLockStateChanged;                                // 0x0178(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnAILockStateChanged;                                    // 0x0188(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		bool                                                       bIsLockedForAI;                                          // 0x0198(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIsLockedForPlayer;                                      // 0x0199(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_YQ4Z[0x6];                                   // 0x019A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class APawn*, struct FPawnInDoorwayInfo>              PawnsInDoorway;                                          // 0x01A0(0x0050) Transient, NativeAccessSpecifierPrivate
		class UPrimitiveComponent*                                 PlayerBlocker;                                           // 0x01F0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_1JG0[0x8];                                   // 0x01F8(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetSecurityLevel(int32_t NewSecurityLevel);
		void SetPlayerBlocker(class UPrimitiveComponent* InPlayerBlocker);
		void SetLockedForPlayer(bool bLocked);
		void SetLockedForAI(bool bLocked);
		void SetAutomaticDoorEnableForPlayer(bool bEnable);
		void SetAutomaticDoorEnableForAI(bool bEnable);
		void PawnExitedDoor(class APawn* Pawn);
		void PawnEnteredDoor(class APawn* Pawn);
		bool IsLockedForPlayer();
		bool IsLockedForAI();
		void HasMetConditions(class AFNAFBasePlayerCharacter* BasePlayerCharacter, bool* bConditionsMet, EConditionFailReason* FailReason);
		bool HasDoorInitialized();
		TArray<class APawn*> GetPawnsInDoor();
		bool GetIsAutomaticDoorEnabledForPlayer();
		bool GetIsAutomaticDoorEnabledForAI();
		EDoorSide GetDoorSideFromLocation(const struct FVector& WorldLocation);
		EDoorSide GetDoorSideFromActor(class AActor* Actor);
		struct FDoorEntryRequirements GetCurrentRequirements();
		void ForceOpen();
		void ForceClose();
		void CopyConditions(class UDoorComponent* OtherDoorComponent);
		void CanPawnOpenDoor(class APawn* Pawn, bool* bOutConditionsMet, EConditionFailReason* OutFailReason);
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.DoorInteractor
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDoorInteractor : public UInterface
	{
	public:
		void OnOverlappedDoor(bool bCanEnterDoor, EConditionFailReason CantEnterReason, class UDoorComponent* DoorComponent);
		void OnEndOverlapDoor();
		bool DoorEntryNotAllowed(class UDoorComponent* DoorComponent);
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.DownloadableContentHandler
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDownloadableContentHandler : public UBlueprintFunctionLibrary
	{
	public:
		bool HasMountedDLCPack();
		bool HasDLC();
		TArray<class FString> GetDLCPurchases();
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.EnvQueryTest_DLC_RabbitForbiddenZone
	 * Size -> 0x0000 (FullSize[0x01F8] - InheritedSize[0x01F8])
	 */
	class UEnvQueryTest_DLC_RabbitForbiddenZone : public UEnvQueryTest
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.EnvQueryTest_ObjectSweep
	 * Size -> 0x0020 (FullSize[0x0218] - InheritedSize[0x01F8])
	 */
	class UEnvQueryTest_ObjectSweep : public UEnvQueryTest
	{
	public:
		class UClass*                                              Context;                                                 // 0x01F8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SphereRadius;                                            // 0x0200(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZQDE[0x4];                                   // 0x0204(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      ActorTypesToIgnore;                                      // 0x0208(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.fnaf9GameModeBase
	 * Size -> 0x0018 (FullSize[0x02E0] - InheritedSize[0x02C8])
	 */
	class Afnaf9GameModeBase : public AGameModeBase
	{
	public:
		class FScriptMulticastDelegate                             OnSetAIDisplay;                                          // 0x02C8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IKJE[0x8];                                   // 0x02D8(0x0008) MISSED OFFSET (PADDING)

	public:
		void ToggleFullAIDisplay();
		void StartRepairGame();
		void SetAIDisplay(bool enable);
		void RoomHeatDisplay(bool enable);
		void POIVisible(bool bVisible);
		void POIDetectionVisible(bool bVisible);
		void PlayerFlashlightVis(bool bEnable);
		void OnRoomHeatDisplayChanged(bool enable);
		void OnPlayerFlashlightVis(bool bEnable);
		void OnForceSpawnVanny();
		void OnAIPawnsVis(bool bEnable);
		bool IsAIDisplayOn();
		void ForceSpawnVanny();
		void FinishRepairGame();
		void AIPawnsVis(bool bEnable);
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.FNAFAchievementUtils
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFNAFAchievementUtils : public UObject
	{
	public:
		TArray<class FName> GetAllAchievements();
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.FNAFAISpawnPoint
	 * Size -> 0x0008 (FullSize[0x0258] - InheritedSize[0x0250])
	 */
	class AFNAFAISpawnPoint : public ANavigationObjectBase
	{
	public:
		bool                                                       bUseType;                                                // 0x0250(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EFNAFAISpawnType                                           AIType;                                                  // 0x0251(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIsStagedPoint;                                          // 0x0252(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_59JL[0x5];                                   // 0x0253(0x0005) MISSED OFFSET (PADDING)

	public:
		EFNAFAISpawnType GetAIType();
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.AnimatronicTypeDataBlueprintFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAnimatronicTypeDataBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		TArray<EFNAFAISpawnType> GetFNAFAISpawnTypeArrayFromAnimatronicTypeDataArray(TArray<struct FAnimatronicTypeData> SpawnTypes);
		TArray<struct FAnimatronicTypeData> GetAnimatronicTypeDataArrayFromFNAFAISpawnTypeArray(TArray<EFNAFAISpawnType> SpawnTypes, EFNAFAISubType SpawnSubType);
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.FNAFBaseCharacter
	 * Size -> 0x0008 (FullSize[0x04C0] - InheritedSize[0x04B8])
	 */
	class AFNAFBaseCharacter : public ACharacter
	{
	public:
		unsigned char                                              UnknownData_MZVJ[0x8];                                   // 0x04B8(0x0008) Fix Super Size

	public:
		void OnFellOutOfWorld();
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.FNAFBaseAICharacter
	 * Size -> 0x0000 (FullSize[0x04C0] - InheritedSize[0x04C0])
	 */
	class AFNAFBaseAICharacter : public AFNAFBaseCharacter
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.FNAFBasePlayerCharacter
	 * Size -> 0x0018 (FullSize[0x04D0] - InheritedSize[0x04B8])
	 */
	class AFNAFBasePlayerCharacter : public ACharacter
	{
	public:
		unsigned char                                              UnknownData_IIV3[0x8];                                   // 0x04B8(0x0008) Fix Super Size
		unsigned char                                              UnknownData_H5N6[0x8];                                   // 0x04C0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EPlayerPawnType                                            PawnType;                                                // 0x04C8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_OAZW[0x7];                                   // 0x04C9(0x0007) MISSED OFFSET (PADDING)

	public:
		void TeleportPlayerWithCameraLocation(const struct FVector& CameraWorldLocation, float Yaw);
		void TeleportPlayer(const struct FVector& WorldLocation, float Yaw);
		void OnKillZLevelsLoaded();
		EPlayerPawnType GetPlayerPawnType();
		void GetLastSavedLocationAndRotation(struct FVector* LastSavedLocation, struct FRotator* LastSavedRotation);
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.FNAFBasePlayerController
	 * Size -> 0x0048 (FullSize[0x05C0] - InheritedSize[0x0578])
	 */
	class AFNAFBasePlayerController : public APlayerController
	{
	public:
		class FScriptMulticastDelegate                             OnControlTypeChanged;                                    // 0x0578(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MEHI[0x38];                                  // 0x0588(0x0038) MISSED OFFSET (PADDING)

	public:
		void OnUsingGamepadChanged();
		void OnUnlockEverything();
		void OnTriggerVannyScare();
		void OnToggleLocalizationQA();
		void OnToggleFlightMode();
		void OnToggleDevUI();
		void OnToggleCinemaMode();
		void OnDebugSequenceEntered();
		bool IsUsingGamepad();
		void GiveVIPAchievement();
		TArray<struct FKey> GetCurrentKeysDown();
		bool AnyOtherKeysDown(const struct FKey& Key);
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.FNAFCheatManager
	 * Size -> 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
	 */
	class UFNAFCheatManager : public UCheatManager
	{
	public:
		void UpgradeFreddy(EFreddyUpgradeType Type);
		void ToggleDebugCloaking();
		void SetDebugCloaking(bool Value);
		bool GetDebugCloaking();
		void ApplyQualitySettings(int32_t VisualQualityLevel, int32_t RayTraceQualityLevel);
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.FNAFSaveData
	 * Size -> 0x02C0 (FullSize[0x02E8] - InheritedSize[0x0028])
	 */
	class UFNAFSaveData : public USaveGame
	{
	public:
		struct FFNAFEventSystemData                                EventSystemData;                                         // 0x0028(0x0050) BlueprintVisible, BlueprintReadOnly, SaveGame, NativeAccessSpecifierPublic
		struct FFNAFAISaveData                                     AISaveData;                                              // 0x0078(0x0068) BlueprintVisible, SaveGame, NativeAccessSpecifierPublic
		struct FFNAFWorldStateSaveData                             WorldStateData;                                          // 0x00E0(0x00D0) Edit, EditConst, SaveGame, NativeAccessSpecifierPublic
		struct FArcadeSaveData                                     ArcadeSaveData;                                          // 0x01B0(0x0030) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FFNAFInventorySaveData                              InventorySaveData;                                       // 0x01E0(0x0088) Edit, EditConst, SaveGame, NativeAccessSpecifierPublic
		struct FFNAFPowerSaveData                                  FazwatchPowerSaveData;                                   // 0x0268(0x0008) Edit, ZeroConstructor, EditConst, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FFNAFPowerSaveData                                  FreddyPowerSaveData;                                     // 0x0270(0x0008) Edit, ZeroConstructor, EditConst, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FFNAFMissionState>                           MissionState;                                            // 0x0278(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, NativeAccessSpecifierPublic
		struct FFreddyUpgradeState                                 FreddyUpgrades;                                          // 0x0288(0x0004) Edit, BlueprintVisible, EditConst, SaveGame, NoDestructor, NativeAccessSpecifierPublic
		struct FLightScenarioManagerData                           LightScenarioManagerData;                                // 0x028C(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YS2N[0x3];                                   // 0x028D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Hour;                                                    // 0x0290(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Minute;                                                  // 0x0294(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    GameIteration;                                           // 0x0298(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TotalTimePlayedInSeconds;                                // 0x029C(0x0004) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           RealtimeSaveTime;                                        // 0x02A0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PlayerLocation;                                          // 0x02A8(0x000C) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            PlayerRotation;                                          // 0x02B4(0x000C) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bInPowerStation;                                         // 0x02C0(0x0001) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UDU9[0x3];                                   // 0x02C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    PowerStationID;                                          // 0x02C4(0x0004) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FPowerStationSaveInfo>                       PowerStationsVisited;                                    // 0x02C8(0x0010) BlueprintVisible, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
		class FString                                              ActivityId;                                              // 0x02D8(0x0010) BlueprintVisible, ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void SetHourOfCheckpoint(int32_t InHour);
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.FNAFChowdaSaveData
	 * Size -> 0x01B0 (FullSize[0x0498] - InheritedSize[0x02E8])
	 */
	class UFNAFChowdaSaveData : public UFNAFSaveData
	{
	public:
		struct FFNAFRuinAISaveData                                 RuinAISaveData;                                          // 0x02E8(0x0078) BlueprintVisible, SaveGame, NativeAccessSpecifierPublic
		int32_t                                                    CollectedCautionBotSouls;                                // 0x0360(0x0004) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1HDH[0x4];                                   // 0x0364(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<int32_t, bool>                                        DeactivatedCautionBots_Map;                              // 0x0368(0x0050) BlueprintVisible, SaveGame, NativeAccessSpecifierPublic
		TArray<class FName>                                        LastLoadedLevels;                                        // 0x03B8(0x0010) BlueprintVisible, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
		EMapArea                                                   LastLoadedMapArea;                                       // 0x03C8(0x0001) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DHK8[0x3];                                   // 0x03C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    LastLoadedLightScenario;                                 // 0x03CC(0x0004) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                GoalPathName;                                            // 0x03D0(0x0008) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPlayerInNormal;                                         // 0x03D8(0x0001) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XSNN[0x3];                                   // 0x03D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Chapter;                                                 // 0x03DC(0x0004) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInChapterReplay;                                        // 0x03E0(0x0001) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WVAT[0x3];                                   // 0x03E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                LastAutoSaveID;                                          // 0x03E4(0x0008) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SQ9S[0x4];                                   // 0x03EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              CandyCadetStoriesDone[0x50];                             // 0x03F0(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              BonnieBowlMMMJumpscareSaveIDArray[0x50];                 // 0x0440(0x0050) UNKNOWN PROPERTY: SetProperty
		bool                                                       FirstSaveInChapter;                                      // 0x0490(0x0001) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ForceCrouchOnLoad;                                       // 0x0491(0x0001) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IA62[0x6];                                   // 0x0492(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.FNAFEventObject
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFNAFEventObject : public UInterface
	{
	public:
		void TriggerEvent();
		bool IsEventFinished();
		bool CanPlayEvent();
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.FNAFEventSystem
	 * Size -> 0x0098 (FullSize[0x00C8] - InheritedSize[0x0030])
	 */
	class UFNAFEventSystem : public UGameInstanceSubsystem
	{
	public:
		unsigned char                                              UnknownData_CX7K[0x98];                                  // 0x0030(0x0098) MISSED OFFSET (PADDING)

	public:
		void UnpauseEventSystem();
		void StoreEventTriggered(const class FName& EventTag);
		void StopEventTimer();
		void StartEventTimer();
		void SetEventTimeSeconds(float MinTimeBetweenEvents, float MaxTimeBetweenEvents);
		void SetEventActorWeight(float NewWeight);
		void SetCurrentAudioComponent(class UAudioComponent* EventSoundCue);
		void PauseEventSystem();
		void OnAudioFinished();
		bool HasEventBeenTriggered(const class FName& EventTag);
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.FNAFGameInstanceBase
	 * Size -> 0x0070 (FullSize[0x0218] - InheritedSize[0x01A8])
	 */
	class UFNAFGameInstanceBase : public UGameInstance
	{
	public:
		unsigned char                                              UnknownData_CSG4[0x70];                                  // 0x01A8(0x0070) MISSED OFFSET (PADDING)

	public:
		void StartGamePlay(EFNAFGameType GameType);
		void SetVisualQualityLevel(int32_t Level);
		void SetSplashFinished(bool bFinished);
		void SetRayTraceQualityLevel(int32_t Level);
		void SetPresenceForLocalPlayers(const class FString& StatusStr, const class FString& PresenceData);
		void SetIsOnLoadingScreen(bool bOnLoadingScreen);
		void SetIsFromTitleForChowda(bool In_FromTitle);
		void SetAllPlayersFocusToViewport();
		void ProcessActivityIntent();
		void OnPlayerLoginChanged(bool bLoggedIn, int32_t UserId);
		void OnPlayerControllerPairingChanged();
		void OnLoadingScreenStart();
		void OnLoadingScreenEnd();
		void OnGameActivityLoadComplete();
		void OnControllerConnectionChanged();
		void OnApplicationReactivated();
		void OnApplicationDeactivated();
		void LogGameClockDelegates();
		void LoadGameTips(EFNAFGameType GameType);
		bool IsOnLoadingScreen();
		bool IsNormalPlay();
		bool IsLoadingActivity();
		bool IsFromTitle();
		bool HasSplashFinished();
		int32_t GetVisualQualityLevel();
		int32_t GetRayTraceQualityLevel();
		class FString GetPlayerName();
		int32_t GetPlayerControllerID();
		bool GetIsShippingConfig();
		float GetGPUBenchmarkResult();
		class FText GetGameTipTextByIndexDLC(int32_t Index);
		class FText GetGameTipTextByIndex(int32_t Index);
		EFNAFGameType GetCurrentGameType();
		float GetCPUBenchmarkResult();
		class FString GetAllLoadedLevelsString();
		void EndLoadingScreenDLC();
		void EndLoadingScreen();
		void CheckForPlayerLoginChanged();
		void ChangeLocalPlayerController(int32_t UserId);
		void BeginLoadingScreenDLC();
		void BeginLoadingScreen();
		void AsyncChowdaScan(bool bUseless, bool* bOutFinished, const struct FLatentActionInfo& LatentActionInfo);
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.FNAFGameUserSettings
	 * Size -> 0x0008 (FullSize[0x0128] - InheritedSize[0x0120])
	 */
	class UFNAFGameUserSettings : public UGameUserSettings
	{
	public:
		int32_t                                                    VisualQualityLevel;                                      // 0x0120(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RayTraceQualityLevel;                                    // 0x0124(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.FNAFGeneralEditorSettings
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class UFNAFGeneralEditorSettings : public UDeveloperSettings
	{
	public:
		bool                                                       bSurvivalMode;                                           // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPIEUseIntro;                                            // 0x0039(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSurvivalAllLocations;                                   // 0x003A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_07ID[0x1];                                   // 0x003B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MinutesPerHour;                                          // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SurvivalSeed;                                            // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J82Y[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.FNAFInputDeviceSystem
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UFNAFInputDeviceSystem : public UGameInstanceSubsystem
	{
	public:
		class FScriptMulticastDelegate                             OnInputDeviceTypeChanged;                                // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		ESWGInputDeviceType GetCurrentInputDevice();
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.FNAFInputSystemDeveloperSettings
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UFNAFInputSystemDeveloperSettings : public UDeveloperSettings
	{
	public:
		bool                                                       bOverrideInputDevice;                                    // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESWGInputDeviceType                                        OverrideInputDevice;                                     // 0x0039(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QLDX[0x6];                                   // 0x003A(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.FNAFInventorySystem
	 * Size -> 0x01A0 (FullSize[0x01D0] - InheritedSize[0x0030])
	 */
	class UFNAFInventorySystem : public UGameInstanceSubsystem
	{
	public:
		unsigned char                                              UnknownData_6FY9[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnInventoryItemAdded;                                    // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnInventoryItemRemoved;                                  // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMessageAdded;                                          // 0x0058(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSecurityLevelUpdated;                                  // 0x0068(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPartyLevelUpdated;                                     // 0x0078(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPartyPassUsed;                                         // 0x0088(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D1QK[0x8];                                   // 0x0098(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDataTable*                                          InventoryDataTable;                                      // 0x00A0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDataTable*                                          MessageDataTable;                                        // 0x00A8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    FazwatchPowerLevel;                                      // 0x00B0(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    FazwatchMaxPowerLevel;                                   // 0x00B4(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    FreddyPowerLevel;                                        // 0x00B8(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    FreddyMaxPowerLevel;                                     // 0x00BC(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SecurityLevel;                                           // 0x00C0(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CollectedPartyPassCount;                                 // 0x00C4(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    UsedPartyPassCount;                                      // 0x00C8(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumAvailableFlash;                                       // 0x00CC(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUnlimitedFazwatchPower;                                 // 0x00D0(0x0001) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUnlimitedStamina;                                       // 0x00D1(0x0001) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G56J[0x6];                                   // 0x00D2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              TapesListenedTo[0x50];                                   // 0x00D8(0x0050) UNKNOWN PROPERTY: SetProperty
		int32_t                                                    NumDishesBroken;                                         // 0x0128(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3Q7I[0x3C];                                  // 0x012C(0x003C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              CandyCadetStoriesDone[0x50];                             // 0x0168(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              UnknownData_SEP2[0x8];                                   // 0x01B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnCautionBotSoulCountUpdated;                            // 0x01C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		bool UsePartyPass();
		void UseFlash(bool* bOutFlashUsed);
		void SetupNewGame();
		void SetupGameMode(EFNAFGameType GameType);
		void SetupDataTable(class UDataTable* InDataTable);
		void SetSecurityLevel(int32_t NewSecurityLevel);
		void SetPowerLevel_Freddy(int32_t InPowerLevel);
		void SetPowerLevel_Fazwatch(int32_t InPowerLevel);
		void SetPartyLevel(int32_t NewPartyLevel);
		void SetMessageViewed(const class FName& Message);
		void SetMaxPowerLevel_Freddy(int32_t NewMax);
		void SetMaxPowerLevel_Fazwatch(int32_t NewMax);
		void SetItemViewed(const class FName& Item);
		void SetFlashlightStationID(int32_t StationID);
		int32_t SetCautionBotSoulsCollectedNumber(int32_t inNumber);
		void ResetOnExitToMenu();
		void ResetFreddyPower();
		void ResetForChapterSelect(TArray<class FName> CollectedItems, int32_t chapterSelected);
		void ResetFlashlightPower();
		void ResetFlashes();
		void RemoveMessage(const class FName& Message);
		void RemoveItem(const class FName& Item);
		void RemoveEverything();
		int32_t RemoveCautionBotSouls(int32_t NumberOfSouls);
		bool IsVIPItem(const class FName& Item);
		bool IsMessageValid(const class FName& Message);
		bool IsItemValid(const class FName& Item);
		bool HasSecurityClearance(int32_t InSecurityLevel);
		bool HasMessageBeenViewed(const class FName& ItemOrMessage);
		bool HasMessage(const class FName& SearchMessage);
		bool HasItemBeenViewed(const class FName& ItemOrMessage);
		bool HasItem(const class FName& searchItem);
		bool HasEnoughPower_Freddy(int32_t PowerRequired);
		bool HasEnoughPower_Fazwatch(int32_t PowerRequired);
		bool HasAvailablePartyPass();
		void GetTapesListenedTo();
		float GetStaminaUpgradeMultiplier();
		int32_t GetNumberOfUnreadMessages();
		void GetMessageInfo(const class FName& MessageName, struct FFNAFMessageTableStruct* OutMessageInfo, bool* OutFound);
		int32_t GetMaxFlashes();
		void GetItemInfo(const class FName& ItemName, struct FFNAFInventoryTableStruct* OutItemInfo, bool* OutFound);
		float GetFreddyUpgradeMutliplier();
		int32_t GetFreddyMaxPower();
		float GetFlashlightUpgradMultiplier();
		int32_t GetFlashlightStationID();
		int32_t GetFlashlightMaxPower();
		TArray<class FName> GetCollectedPartyPasses();
		float GetChapterProgression(int32_t Chapter, class UFNAFSaveData* SaveDataObject);
		int32_t GetCautionBotSoulsCollectedNumber();
		void GetCandyCadetStoriesDone();
		TArray<class FName> GetAllSurvivalItemsOfType(EInventoryItemSurvivalCategory SurvivalCategory);
		TArray<class FName> GetAllItems();
		TArray<class FName> GetAllCurrentInventoryItems();
		void ClearFlashlightStationID();
		bool CanUseFlashBeacon();
		void AwardMessage(const class FName& Message, bool bNotify);
		void AwardItem(const class FName& Item, bool bNotify);
		int32_t AwardCautionBotSoul();
		bool AdjustPower_Freddy(int32_t ChangeAmount);
		bool AdjustPower_Fazwatch(int32_t ChangeAmount);
		void AddTapeListenedTo(const class FName& InTapeListenedTo);
		void AddEverything();
		void AddCandyCadetStoryDone(const class FName& InStory);
		int32_t AddBrokenPlate();
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.FNAFLevelManager
	 * Size -> 0x01F0 (FullSize[0x0220] - InheritedSize[0x0030])
	 */
	class UFNAFLevelManager : public UWorldSubsystem
	{
	public:
		unsigned char                                              UnknownData_DT46[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnlevelsUpdated;                                         // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3VV6[0x1D8];                                 // 0x0048(0x01D8) MISSED OFFSET (PADDING)

	public:
		void UnregisterStreamingSource(class USceneComponent* SceneComponent);
		void UnregisterPawnStreamingSource(class USceneComponent* SceneComponent);
		void SetPlayerPawn(class APawn* PlayerPawn);
		void SetLevelStreamingEnable(bool bEnable);
		void RemoveLevelsFromStreamingSource(class USceneComponent* StreamingSource);
		void RemoveLevelArray(TArray<class ULevelStreaming*> Levels);
		void RemoveLevel(class ULevelStreaming* LevelToUnload);
		void RemoveAllLevels();
		void RegisterStreamingSource(class USceneComponent* SceneComponent);
		void RegisterPawnStreamingSource(class USceneComponent* SceneComponent);
		bool IsLevelStreamingEnable();
		TArray<class USceneComponent*> GetStreamingSources();
		TArray<class FName> GetLevelNamesForComponent(class USceneComponent* SceneComponent);
		void AddLevelToLoad(class ULevelStreaming* LevelToLoad);
		void AddLevelsFromStreamingSourceToLoad(class USceneComponent* StreamingSource);
		void AddLevelArrayToLoad(TArray<class ULevelStreaming*> LevelsToLoad);
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.FNAFManagedAI
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFNAFManagedAI : public UInterface
	{
	public:
		void TeleportAI(const struct FVector& Location);
		void StartMoveTo(const struct FVector& Location);
		void SendVanessaAlert(class APawn* VanessaPawn);
		void SendPositionalAlert(const struct FVector& Location);
		bool IsShatteredVersion();
		bool IsMeshVisible();
		EFNAFAISpawnType GetManagedAIType();
		class FName GetCurrentPathName();
		void ForceTrackToPlayer();
		void ForceJumpscarePlayer();
		void EndTrackToPlayer();
		bool CanReceiveAlert();
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.FNAFMasterData
	 * Size -> 0x0158 (FullSize[0x0180] - InheritedSize[0x0028])
	 */
	class UFNAFMasterData : public USaveGame
	{
	public:
		int32_t                                                    newSaveSlotNumber;                                       // 0x0028(0x0004) Edit, ZeroConstructor, EditConst, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W6QY[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              lastSavedSlotName;                                       // 0x0030(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              lastLoadedSlotName;                                      // 0x0040(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ActivitySaveSlot;                                        // 0x0050(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FString, class FString>                         SaveGameSlotNames_Map;                                   // 0x0060(0x0050) Edit, EditConst, SaveGame, NativeAccessSpecifierPublic
		bool                                                       InvertedGamepad;                                         // 0x00B0(0x0001) Edit, ZeroConstructor, EditConst, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLastSaveWasAuto;                                        // 0x00B1(0x0001) Edit, ZeroConstructor, EditConst, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UN5K[0x6];                                   // 0x00B2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FString, class FString>                         ActivityIdSaveSlotNamesMap;                              // 0x00B8(0x0050) Edit, EditConst, SaveGame, NativeAccessSpecifierPublic
		class FString                                              lastSavedChowdaSlotName;                                 // 0x0108(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              lastLoadedChowdaSlotName;                                // 0x0118(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FString, class FString>                         ChowdaSaveGameSlotNames_Map;                             // 0x0128(0x0050) Edit, EditConst, SaveGame, NativeAccessSpecifierPublic
		bool                                                       RuinCallToActionVisible;                                 // 0x0178(0x0001) Edit, ZeroConstructor, EditConst, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5DJP[0x7];                                   // 0x0179(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.FNAFMissionSystem
	 * Size -> 0x00B8 (FullSize[0x00E8] - InheritedSize[0x0030])
	 */
	class UFNAFMissionSystem : public UGameInstanceSubsystem
	{
	public:
		unsigned char                                              UnknownData_EZSB[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnNewActiveMissionAdded;                                 // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnActiveMissionRemoved;                                  // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnActiveMissionUpdated;                                  // 0x0058(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMissionCompleted;                                      // 0x0068(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UDataTable*                                          MissionDataTable;                                        // 0x0078(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDataTable*                                          MissionTaskDataTable;                                    // 0x0080(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_HDU4[0x60];                                  // 0x0088(0x0060) MISSED OFFSET (PADDING)

	public:
		void SetupNewGame();
		void SetMissionInfoState(const class FName& MissionName, int32_t InfoState);
		void RemoveActiveMission(const class FName& MissionName);
		void NotifyMissionUpdate(const class FName& MissionName);
		bool IsValidMission(const class FName& MissionName);
		bool IsMissionActiveOrCompleted(const class FName& MissionName);
		bool IsInSurvivalMode();
		bool IsCompletedMission(const class FName& MissionName);
		bool IsActiveMission(const class FName& MissionName);
		TArray<struct FFNAFMissionState> GetTrackedMissions();
		class UDataTable* GetTaskTable();
		void GetTaskInfo(const class FName& TaskName, struct FFNAFMissionTaskInfo* OutMissionTaskInfo, bool* OutValidTask);
		void GetTaskByIndex(const class FName& MissionName, int32_t TaskIndex, struct FFNAFMissionTaskInfo* OutMissionTaskInfo, bool* OutValidTask);
		class UDataTable* GetMissionTable();
		void GetMissionState(const class FName& MissionName, struct FFNAFMissionState* OutMissionState, bool* OutValidMission);
		void GetMissionInfo(const class FName& MissionName, struct FFNAFMissionInfo* OutMissionInfo, bool* OutValidMission);
		void GetMissionFromTask(const class FName& TaskName, struct FFNAFMissionInfo* OutMissionInfo, bool* OutValidMission);
		void GetMissionFromMessage(const class FName& MessageName, class FName* OutMissionName, int32_t* OutMissionStateIndex);
		TArray<class AMissionMarker*> GetMarkersForMission(const class FName& MissionName, int32_t MissionStateIndex);
		TArray<struct FFNAFMissionState> GetCompletedMissions();
		void GetAreaMarkerCounts(TMap<ELevelArea, int32_t>* MapOfCounts);
		TArray<class FName> GetAllMissionNames();
		TArray<class AMissionMarker*> GetAllMissionMarkers();
		TArray<class AMissionMarker*> GetAllCurrentMarkers();
		TArray<struct FFNAFMissionState> GetActiveMissions();
		void CompleteMissionTask(const class FName& MissionName, int32_t TaskIndex);
		void CompleteMission(const class FName& MissionName);
		void BranchMissionStatus(const class FName& MissionName, EMissionStatus* Status);
		void AddActiveMission(const class FName& MissionName);
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.FNAFPawnTypeProviderInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFNAFPawnTypeProviderInterface : public UInterface
	{
	public:
		EPlayerPawnType GetPlayerPawnType();
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.FNAFPS5ControllerUtils
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFNAFPS5ControllerUtils : public UBlueprintFunctionLibrary
	{
	public:
		void TurnOffAdaptiveTrigger(int32_t ControllerId, EFNAFPS5Trigger Trigger);
		void SetupTriggerVibration(int32_t ControllerId, EFNAFPS5Trigger Trigger, unsigned char Position, unsigned char Frequency, unsigned char Amplitude);
		void SetupTriggerFeedback(int32_t ControllerId, EFNAFPS5Trigger Trigger, unsigned char Position, unsigned char Strength);
		void SetupAdaptiveTrigger(int32_t ControllerId, EFNAFPS5Trigger Trigger, unsigned char StartPosition, unsigned char EndPosition, unsigned char Strength);
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.FNAFSaveGameSystem
	 * Size -> 0x01F0 (FullSize[0x0220] - InheritedSize[0x0030])
	 */
	class UFNAFSaveGameSystem : public UGameInstanceSubsystem
	{
	public:
		class UFNAFSaveData*                                       SaveDataObject;                                          // 0x0030(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UFNAFSaveData*                                       TempSaveDataObject;                                      // 0x0038(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UFNAFSaveData*                                       WorldTransitDataObject;                                  // 0x0040(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UFNAFMasterData*                                     MasterDataObject;                                        // 0x0048(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_2TGW[0x60];                                  // 0x0050(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnSaveGameBegin;                                         // 0x00B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSaveGameComplete;                                      // 0x00C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnLoadGameComplete;                                      // 0x00D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             AutoSaveTriggered;                                       // 0x00E0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		TMap<class FString, class FString>                         SaveSlotNames_Data;                                      // 0x00F0(0x0050) Edit, BlueprintVisible, EditConst, NativeAccessSpecifierPublic
		class FString                                              MasterDataSlotName;                                      // 0x0140(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SaveSlotName;                                            // 0x0150(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   UserIndex;                                               // 0x0160(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ChowdaProfileIndex;                                      // 0x0164(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6TN8[0x4];                                   // 0x0168(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bIsSavingAllowed;                                        // 0x016C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInvertedGamepad;                                        // 0x016D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SZ04[0x2];                                   // 0x016E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxChowdaSaveSlots;                                      // 0x0170(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YXHK[0x4];                                   // 0x0174(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ChowdaSaveSlotName;                                      // 0x0178(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UOMI[0x98];                                  // 0x0188(0x0098) MISSED OFFSET (PADDING)

	public:
		void ToggleDLCCallToAction(bool visible);
		void ShowAutoSaveIcon();
		void SetUserIndex(int32_t NewUserIndex);
		void SetUseAutosaveMapArea(bool UseMapArea);
		void SetupPIE();
		void SetupNewGameOnSlot(const class FString& originalSlotName);
		void SetupNewGame();
		void SetupNewChowdaGame(int32_t ProfileIndexIn);
		void SetLoadIntoChapter(bool Load);
		void SetIsSavingAllowed(bool IsSavingAllowed);
		void SetInChapterReplay(bool inReplay, int32_t Chapter);
		void SetChowdaProfileIndex(int32_t profileIndex);
		void SaveCurrentGame();
		void SaveCheckpoint();
		void SaveArcade();
		void Reset_SaveSlots();
		void Rename_SaveSlot(const class FString& originalSlotName, const class FString& renamedSlotName);
		void RemoveAutoSaveIcon();
		bool PreviousSaveIsAuto();
		void LoadWorldTransitSave();
		class UFNAFSaveData* LoadSaveSlotData(const class FString& SlotName);
		void LoadMasterSave();
		class UFNAFSaveData* LoadChowdaAutoSaveData(int32_t ProfileIndexIn);
		void LoadChowdaAutoSave(int32_t ProfileIndexIn);
		void LoadCheckpoint();
		void LoadAutoSave();
		void LoadActivitySave(const class FString& InActivityId);
		bool IsSavingAllowed();
		bool IsInChapterReplay();
		bool HasSaveData();
		bool HasPreviousSave();
		bool HasChowdaSaveGame(int32_t ProfileIndexIn);
		bool HasAutoSave();
		bool HasActivitySave(const class FString& InActivityId);
		int32_t GetUserIndex();
		bool GetUseAutosaveMapArea();
		EMapArea GetMapAreaToLoad();
		bool GetLoadIntoChapter();
		EMapArea GetLastSavedMapArea();
		int32_t GetLastSavedChapter();
		class FString GetLastLoadedChowdaSlotName();
		int32_t GetGameIteration();
		int32_t GetCurrentChapter();
		int32_t GetChowdaProfileIndex();
		void Get_SaveSlotNameData(TMap<class FString, class FString>* SaveSlots_Map);
		void Get_ChowdaSaveSlotNameData(TMap<class FString, class FString>* SaveSlots_Map);
		void FinalizeCheckpoint();
		bool DLCCallToActionVisibility();
		void DeleteSaveGameByName(const class FString& SlotName);
		void DeleteSavedGame_BySlot(int32_t saveSlotNumber);
		void DeleteChowdaSaveGameByName(const class FString& SlotName);
		void CreateWorldTransitSave();
		void CreatePotentialCheckpoint();
		void ClearChowdaAutoSaves();
		void ChowdaAutoSave(int32_t Chapter, EMapArea MapAreaToSave, const class FName& SaveID);
		void AutoSave();
		void AsyncSaveGame(const class FString& originalSlotName, bool isANewSlot, bool isCurrentSlot, const class FString& Renamed_SaveSlot, class FString* internal_SlotName);
		void AsyncLoadGameLastLoaded();
		void AsyncLoadGame(const class FString& originalSlotName, bool isContinueSelected, class FString* internal_SlotName);
		void AsyncLoadChowdaLastLoaded();
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.FNAFSightSystem
	 * Size -> 0x00D8 (FullSize[0x0108] - InheritedSize[0x0030])
	 */
	class UFNAFSightSystem : public UWorldSubsystem
	{
	public:
		unsigned char                                              UnknownData_ZS2W[0xD8];                                  // 0x0030(0x00D8) MISSED OFFSET (PADDING)

	public:
		void SetSightSystemDisplay(bool bEnable);
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.ForcedGCSubsystem
	 * Size -> 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
	 */
	class UForcedGCSubsystem : public UTickableWorldSubsystem
	{
	public:
		int32_t                                                    ForceGCRequests;                                         // 0x0040(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HLB6[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)

	public:
		bool GetForceGCInProgrcess();
		void ForceGC();
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.GameClockSettings
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class UGameClockSettings : public UDeveloperSettings
	{
	public:
		float                                                      TotalGameTimeHours;                                      // 0x0038(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TotalRealTimeHours;                                      // 0x003C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TickRate;                                                // 0x0040(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MQ1Y[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.GameClockSystem
	 * Size -> 0x00D0 (FullSize[0x0100] - InheritedSize[0x0030])
	 */
	class UGameClockSystem : public UGameInstanceSubsystem
	{
	public:
		unsigned char                                              UnknownData_J8VD[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnGameClockStateChange;                                  // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      NormalModeDelegate;                                      // 0x0048(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      MoonmanLiteDelegate;                                     // 0x0058(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      MoonmanIntermediateDelegate;                             // 0x0068(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      MoonmanDangerDelegate;                                   // 0x0078(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnGameClockTick;                                         // 0x0088(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnGameClockTimeChanged;                                  // 0x0098(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnGameClockTickDelta;                                    // 0x00A8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3FUI[0x48];                                  // 0x00B8(0x0048) MISSED OFFSET (PADDING)

	public:
		void StartNextHour();
		void SetGameTimeEvent(const class FScriptDelegate& Delegate, int32_t Hour, int32_t Minute);
		void SetGameEndEvent(const class FScriptDelegate& Delegate);
		void SetCurrentTime(int32_t Hour, int32_t Minute, bool bPlayDelegates);
		void SetCurrentMinute(int32_t Minute);
		void SetCurrentHour(int32_t Hour);
		void SetClockRunning(bool bRunClock);
		void SetClockRateInMinutesPerHour(int32_t MinutesPerHour);
		void SetClockRate(int32_t TotalRealHours);
		void ResetTimeDelegatesUpTo(int32_t Hour, int32_t Minute);
		void OnNormalModeTriggered();
		void OnMoonmanLiteTriggered();
		void OnMoonmanIntermediateTriggered();
		void OnMoonmanDangerTriggered();
		bool IsClockRunning();
		float GetCurrentTimeInSeconds();
		void GetCurrentTime(int32_t* Hour, int32_t* Minute);
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.GameTypeCheckComponent
	 * Size -> 0x0030 (FullSize[0x00E0] - InheritedSize[0x00B0])
	 */
	class UGameTypeCheckComponent : public UActorComponent
	{
	public:
		TArray<EFNAFGameType>                                      AllowedGameTypes;                                        // 0x00B0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnGameTypeAllowed;                                       // 0x00C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnGameTypeNotAllowed;                                    // 0x00D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnNotAllowedGameType();
		void OnAllowedGameType();
		bool IsAllowed();
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.GameTypeCheckDestroy
	 * Size -> 0x0000 (FullSize[0x00E0] - InheritedSize[0x00E0])
	 */
	class UGameTypeCheckDestroy : public UGameTypeCheckComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.GlitchInteractibleInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGlitchInteractibleInterface : public UInterface
	{
	public:
		void SetupGlitchInteractible(class AGlitchRandomItem* GlitchRandomItem, class AActor* GlitchManager, float GlitchRadius);
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.GlitchManagerInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGlitchManagerInterface : public UInterface
	{
	public:
		void SetupGlitchActivators(TArray<class AActor*> GlitchActivators);
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.GlitchRandomItem
	 * Size -> 0x00A8 (FullSize[0x02D0] - InheritedSize[0x0228])
	 */
	class AGlitchRandomItem : public ARandomItemGroup
	{
	public:
		EMinigameType                                              Minigame;                                                // 0x0228(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T87D[0x7];                                   // 0x0229(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              ActorReferences[0x50];                                   // 0x0230(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              UnknownData_SI46[0x50];                                  // 0x0280(0x0050) MISSED OFFSET (PADDING)

	public:
		void GlitchFixed();
		void GetActors();
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.GlobalAIPerception
	 * Size -> 0x0008 (FullSize[0x0230] - InheritedSize[0x0228])
	 */
	class AGlobalAIPerception : public AActor
	{
	public:
		unsigned char                                              UnknownData_E330[0x8];                                   // 0x0228(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.HideObjectInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UHideObjectInterface : public UInterface
	{
	public:
		void StartSearch(class APawn* SearcherPawn);
		void PlayBotSearchSound(class AActor* SearcherActor);
		void OnPlayerLeave();
		void OnPlayerHide(class ACharacter* PlayerCharacter);
		bool IsEnterExitPlaying();
		void GetSearchLocation(struct FVector* Location, struct FRotator* Rotation);
		EHideObjectType GetHideType();
		struct FVector GetHideLocation();
		class ACharacter* GetHiddenPlayer();
		void EndSearch();
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.HUDProviderInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UHUDProviderInterface : public UInterface
	{
	public:
		void ShowHUD();
		void ShowCinimaticSkip();
		void HideHUD(bool bHideProgressWheel);
		void BeginCinimaticSkipFade(float DelayDuration);
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.InstructionCardRowBlueprintFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UInstructionCardRowBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		class UTexture2D* GetControllerInstructionCard(struct FInstructionCardRow* MyStructRef);
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.InventoryConditionalComponent
	 * Size -> 0x0028 (FullSize[0x00D8] - InheritedSize[0x00B0])
	 */
	class UInventoryConditionalComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_EHTQ[0x18];                                  // 0x00B0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                RequiredInventoryItem;                                   // 0x00C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RequiredSecurityLevel;                                   // 0x00D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RequiresPartyPass;                                       // 0x00D4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPlayerPawnType                                            RequiresPawn;                                            // 0x00D5(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPlayerPawnType                                            PawnTypeIgnoresConditions;                               // 0x00D6(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E0SR[0x1];                                   // 0x00D7(0x0001) MISSED OFFSET (PADDING)

	public:
		void SetNewConditions(const class FName& NewRequiredInventoryItem, int32_t NewRequiredSecurityLevel, bool NewRequiresPartyPass);
		void OnMessageCollected(const class FName& ItemName, const struct FFNAFMessageTableStruct& MessageTableStruct);
		void OnItemCollected(const class FName& ItemName, const struct FFNAFInventoryTableStruct& InventoryTableStruct);
		void HasMetConditions(bool* OutConditionsMet, EConditionFailReason* OutFailReason);
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.ItemCollectListenerComponent
	 * Size -> 0x0030 (FullSize[0x00E0] - InheritedSize[0x00B0])
	 */
	class UItemCollectListenerComponent : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             OnItemCollected;                                         // 0x00B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnItemAlreadyCollected;                                  // 0x00C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FName                                                InventoryItem;                                           // 0x00D0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bEventsEnabled;                                          // 0x00D8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FN85[0x7];                                   // 0x00D9(0x0007) MISSED OFFSET (PADDING)

	public:
		void SetEventsEnabled(bool bEnable);
		void OnItemCollectedHandler(const class FName& ItemName, const struct FFNAFInventoryTableStruct& InventoryItemInfo);
		bool GetEventsEnabled();
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.JsonHandler
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UJsonHandler : public UBlueprintFunctionLibrary
	{
	public:
		void GenerateJsonStringFromStruct(class UStruct* Struct, class FString* OutJsonString);
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.LevelLoaderComponent
	 * Size -> 0x0068 (FullSize[0x0118] - InheritedSize[0x00B0])
	 */
	class ULevelLoaderComponent : public UActorComponent
	{
	public:
		bool                                                       UnloadScenarioOnly;                                      // 0x00B0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SNKF[0x7];                                   // 0x00B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UChowdaDebugSubsystem*                               ChowdaDebuger;                                           // 0x00B8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class ULevelStreaming*                                     CurrentLevel;                                            // 0x00C0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class ULevelStreaming*                                     LightingMap;                                             // 0x00C8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class ULightScenarioManager*                               LightScenarioManager;                                    // 0x00D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class FName>                                        LevelsToLoad;                                            // 0x00D8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<class FName>                                        LevelsToUnload;                                          // 0x00E8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		int32_t                                                    NextLightScenario;                                       // 0x00F8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    LoadCount;                                               // 0x00FC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    UnloadCount;                                             // 0x0100(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       OldLevelsAreUnLoaded;                                    // 0x0104(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       NextLevelsAreVisible;                                    // 0x0105(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_2DJE[0x2];                                   // 0x0106(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                LightMapToUnload;                                        // 0x0108(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                LightMapToLoad;                                          // 0x0110(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void UnLoadCurrentScenario();
		int32_t SetNextLightScenario(int32_t Scenario);
		TArray<class FName> SetLevelsToUnLoad(TArray<class FName> UnloadedLevels);
		TArray<class FName> SetLevelsToLoad(TArray<class FName> LoadedLevels);
		void LoadTheNextScenario();
		void LoadTheNextArea();
		TArray<class FName> GetLevelsToLoad();
		void DebugSkipToNextArea();
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.LevelLoadSubsystem
	 * Size -> 0x0090 (FullSize[0x00D0] - InheritedSize[0x0040])
	 */
	class ULevelLoadSubsystem : public UTickableWorldSubsystem
	{
	public:
		unsigned char                                              UnknownData_BFGL[0x8];                                   // 0x0040(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             LoadCompleted;                                           // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MOXK[0x10];                                  // 0x0058(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ULevelStreaming*                                     CurrentLevel;                                            // 0x0068(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class FName>                                        LoadedLevels;                                            // 0x0070(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<class FName>                                        UnloadedLevels;                                          // 0x0080(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		class UDataTable*                                          LevelSystemData;                                         // 0x0090(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_1UM6[0x28];                                  // 0x0098(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    LightScenario;                                           // 0x00C0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    LoadCount;                                               // 0x00C4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    UnloadCount;                                             // 0x00C8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       OldLevelsAreUnLoaded;                                    // 0x00CC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       NextLevelsAreVisible;                                    // 0x00CD(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       CanTick;                                                 // 0x00CE(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_CUEP[0x1];                                   // 0x00CF(0x0001) MISSED OFFSET (PADDING)

	public:
		void LoadTheNextArea(EMapArea MapArea);
		bool IsTickable();
		TArray<class FName> GetVisibleLevels();
		EMapArea GetCurrentMapArea();
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.LevelStreamViewpoint
	 * Size -> 0x0018 (FullSize[0x0210] - InheritedSize[0x01F8])
	 */
	class ULevelStreamViewpoint : public USceneComponent
	{
	public:
		class FScriptMulticastDelegate                             OnLevelsLoaded;                                          // 0x01F8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		bool                                                       bStreamingEnable;                                        // 0x0208(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableStreamOnActivePawn;                               // 0x0209(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_90DU[0x6];                                   // 0x020A(0x0006) MISSED OFFSET (PADDING)

	public:
		void SetStreamingEnable(bool bEnable);
		void OnLevelManagerUpdated();
		TArray<class FName> GetStreamingLevelNames();
		bool AnyLevelsLoaded();
		bool AllLevelsLoaded();
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.LevelStreamViewpointProvider
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class ULevelStreamViewpointProvider : public UInterface
	{
	public:
		class ULevelStreamViewpoint* GetLevelStreamViewpoint();
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.LightingMaterialManager
	 * Size -> 0x0010 (FullSize[0x0238] - InheritedSize[0x0228])
	 */
	class ALightingMaterialManager : public AActor
	{
	public:
		TArray<struct FLightMeshMaterialInfo>                      MeshMaterials;                                           // 0x0228(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		void OnLevelVisible();
		void OnBeginLightScenarioChange();
		void OnActivateSpecialLightingScenerio(const class FString& Key);
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.LightScenarioManager
	 * Size -> 0x0080 (FullSize[0x00B0] - InheritedSize[0x0030])
	 */
	class ULightScenarioManager : public UWorldSubsystem
	{
	public:
		unsigned char                                              UnknownData_LGSG[0x80];                                  // 0x0030(0x0080) MISSED OFFSET (PADDING)

	public:
		void UnloadArea();
		void UnbindOnEndScenarioChange(const class FScriptDelegate& Delegate);
		void UnbindOnBeginScenarioChange(const class FScriptDelegate& Delegate);
		void SetInitialScenario(int32_t Area, ELightingScenario Scenario);
		void OnUnloadFinished();
		void OnTick();
		void OnPropagate();
		void OnLoadFinished();
		void OnFadeoutFinished();
		void OnChangeAreaUnloadFinished();
		void OnChangeAreaLoadFinished();
		bool IsChangingScenario();
		void GetLightScenarioAreaFromMap(const class FName& MapName, ELightScenarioArea* OutArea, ELightingScenario* OutScenario);
		class FName GetLevelNameFromAreaScenario(int32_t Area, ELightingScenario Scenario);
		ELightingScenario GetCurrentLightingScenario();
		int32_t GetCurrentArea();
		void EndLoadSequence();
		void ChangeScenario(ELightingScenario NewScenario, bool bUseFade);
		void ChangeArea(int32_t Area);
		void BindOnEndScenarioChange(const class FScriptDelegate& Delegate);
		void BindOnBeginScenarioChange(const class FScriptDelegate& Delegate);
		void BeginLoadSequence();
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.LightScenarioManagerSettings
	 * Size -> 0x00A0 (FullSize[0x00D8] - InheritedSize[0x0038])
	 */
	class ULightScenarioManagerSettings : public UDeveloperSettings
	{
	public:
		TMap<ELightScenarioArea, struct FLightScenarioAreaInfo>    LightScenarioInfo;                                       // 0x0038(0x0050) Edit, Config, NativeAccessSpecifierPublic
		TMap<class FName, struct FLightScenarioAreaMapInfo>        LightScenarioMap;                                        // 0x0088(0x0050) Edit, Config, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.LightStreamingVolume
	 * Size -> 0x0008 (FullSize[0x0268] - InheritedSize[0x0260])
	 */
	class ALightStreamingVolume : public AVolume
	{
	public:
		int32_t                                                    LightScenarioArea;                                       // 0x0260(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GNW7[0x4];                                   // 0x0264(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.LoadingScreenComponent
	 * Size -> 0x0040 (FullSize[0x00F0] - InheritedSize[0x00B0])
	 */
	class ULoadingScreenComponent : public UActorComponent
	{
	public:
		class ULevelStreamViewpoint*                               FrontViewpoint;                                          // 0x00B0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ULevelStreamViewpoint*                               BackViewpoint;                                           // 0x00B8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ULevelStreamViewpoint*                               LevelStreamViewpoint;                                    // 0x00C0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPrimitiveComponent*                                 BoxCollider;                                             // 0x00C8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9THF[0x20];                                  // 0x00D0(0x0020) MISSED OFFSET (PADDING)

	public:
		void SetPlayerCollider(class UPrimitiveComponent* InPlayerCollider);
		void SetLevelStreamViewpoints(class ULevelStreamViewpoint* Front, class ULevelStreamViewpoint* Back);
		void OnPlayerExit(class AActor* InPlayer);
		void OnPlayerEnter(class AActor* InPlayer);
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.LoadingScreenComponent_DLC
	 * Size -> 0x0010 (FullSize[0x00C0] - InheritedSize[0x00B0])
	 */
	class ULoadingScreenComponent_DLC : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_RUA0[0x10];                                  // 0x00B0(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.Localization
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class ULocalization : public UBlueprintFunctionLibrary
	{
	public:
		ELocalizationCulture GetLocalizationCultureFromSteam();
		ELocalizationCulture GetLocalizationCulture();
		void ChangeLocalizationCulture(ELocalizationCulture Culture);
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.MissionDisplayQueueLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMissionDisplayQueueLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void PushMissionUpdate(EMissionUpdateType UpdateType, const class FName& MissionName, const struct FFNAFMissionInfo& MissionInfo, const struct FFNAFMissionState& MissionState);
		void HasMissionUpdateInQueue(EMissionInQueue* MissionInQueue);
		struct FMissionDisplayUpdateInfo GetNextMissionUpdate();
		void ClearMissionUpdateQueue();
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.MissionMarker
	 * Size -> 0x0010 (FullSize[0x0238] - InheritedSize[0x0228])
	 */
	class AMissionMarker : public AActor
	{
	public:
		class FName                                                MissionName;                                             // 0x0228(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    MissionStateIndex;                                       // 0x0230(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_OFQZ[0x4];                                   // 0x0234(0x0004) MISSED OFFSET (PADDING)

	public:
		int32_t GetStateIndex();
		class FName GetMissionName();
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.MissionStateCondition
	 * Size -> 0x0060 (FullSize[0x0110] - InheritedSize[0x00B0])
	 */
	class UMissionStateCondition : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_D0TH[0x8];                                   // 0x00B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnMissionConditionMet;                                   // 0x00B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMissionConditionAlreadyMet;                            // 0x00C8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMissionConditionUnMet;                                 // 0x00D8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FName                                                MissionName;                                             // 0x00E8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMissionStatus                                             MissionStatus;                                           // 0x00F0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AKSA[0x3];                                   // 0x00F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MinMissionState;                                         // 0x00F4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxMissionState;                                         // 0x00F8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0QVJ[0x14];                                  // 0x00FC(0x0014) MISSED OFFSET (PADDING)

	public:
		void OnMissionUpdated(const class FName& InMissionName, const struct FFNAFMissionState& MissionState, const struct FFNAFMissionInfo& MissionInfo);
		bool HasMetConditions();
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.MoonmanManagementSystem
	 * Size -> 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
	 */
	class UMoonmanManagementSystem : public UWorldSubsystem
	{
	public:
		class FScriptMulticastDelegate                             OnMMRegisterSpawn;                                       // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMMUnregisterSpawn;                                     // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S711[0x18];                                  // 0x0050(0x0018) MISSED OFFSET (PADDING)

	public:
		void UnRegisterSpawn(class AMoonmanSpawnPoint* InSpawnPoint);
		void UnpauseMoonmanManager();
		void StartMoonmanLiteManager();
		void StartMoonmanDangerManager();
		void RegisterSpawn(class AMoonmanSpawnPoint* InSpawnPoint);
		void PauseMoonmanManager();
		void OnWorldStateChanged(EFNAFGameState NewState, EFNAFGameState PrevState);
		TArray<class AMoonmanSpawnPoint*> GetAllMMSpawnPointsFor(EMMAnimCategory MMAnimation);
		TArray<class AMoonmanSpawnPoint*> GetAllMMSpawnPoints();
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.MoonmanSpawnPoint
	 * Size -> 0x0070 (FullSize[0x02C0] - InheritedSize[0x0250])
	 */
	class AMoonmanSpawnPoint : public ANavigationObjectBase
	{
	public:
		unsigned char                                              UnknownData_Q3TK[0x10];                                  // 0x0250(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBillboardComponent*                                 BillboardComponent;                                      // 0x0260(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UVisualSourceComponent*                              VisualSource;                                            // 0x0268(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMMDetected;                                            // 0x0270(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		bool                                                       b_CanSpawn;                                              // 0x0280(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EMMAnimCategory                                            MMAnimCategory;                                          // 0x0281(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_OVC0[0x6];                                   // 0x0282(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UAnimSequence*>                               MMAnimSeq_Array;                                         // 0x0288(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		bool                                                       bShouldFollowPlayer;                                     // 0x0298(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_DIMX[0x2];                                   // 0x0299(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bIsStationary;                                           // 0x029B(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bAnimLoop;                                               // 0x029C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bAimHeadAtPlayer;                                        // 0x029D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bCanPopUp;                                               // 0x029E(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIsSingleUse;                                            // 0x029F(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_9SHU[0x8];                                   // 0x02A0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ATriggerBox*>                                 MMColliderActors;                                        // 0x02A8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		float                                                      probabilityOfSpawn;                                      // 0x02B8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      originalProbabilityOfSpawn;                              // 0x02BC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void SetSpawnProbability(float tempProbability);
		void SetShouldFollowPlayer(bool In);
		void SetMMAnimCategory(EMMAnimCategory In);
		void SetIsTriggered(bool isTriggered);
		void SetIsStationary(bool In);
		void SetIsSpawned(bool IsSpawned);
		void SetIsSingleUse(bool In);
		void SetIsMMDetected(bool IsSkeletonDetected);
		void SetIsAnimLoop(bool In);
		void SetHasSpawnedOnce(bool HasSpawnedOnce);
		void SetHasLookedOnce(bool HasLookedOnce);
		void SetCanSpawn(bool canSpawn);
		void SetCanPopUp(bool In);
		void SetAimHeadAtPlayer(bool In);
		void OnSetAIDisplay(bool enable);
		float GetSpawnProbability();
		float GetOriginalProbability();
		TArray<class UAnimSequence*> GetMMAnimSeq_Array();
		EMMAnimCategory GetMMAnimCategory();
		bool GetIsTriggered();
		bool GetIsStationary();
		bool GetIsSpawned();
		bool GetIsSingleUse();
		bool GetIsMMDetected();
		bool GetIsFollowPlayerTrue();
		bool GetIsAnimLoop();
		bool GetHasSpawnedOnce();
		bool GetHasLookedOnce();
		bool GetCanSpawn();
		bool GetCanPopUp();
		bool GetAimHeadAtPlayer();
		void DetectTheSpawnPoint(class AMoonmanSpawnPoint* passed_HitActor, bool passed_bVisible);
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.OptionsMenu
	 * Size -> 0x0000 (FullSize[0x0260] - InheritedSize[0x0260])
	 */
	class UOptionsMenu : public UUserWidget
	{
	public:
		void VolumeSliders(float MasterVolume, float MusicVolume, float VoiceVolume, float JumpscareVolume, float SFXVolume);
		bool UpdateSubtitles(int32_t SubtitlesValue, bool SubtitlesOn, bool SubtitlesSmall, bool SubtitlesLarge);
		void RestoreVideoSettings(EWindowMode DefaultScreenMode, int32_t DefaultRes, int32_t DefaultColorblind, int32_t VisualQuality);
		void RestoreAudioSettings(float MasterVolume, float MusicVolume, float VoiceVolume, float JumpscareVolume, float SFXVolume, int32_t UISubtitlesValue, bool UISubtitlesOn, bool UISubtitlesSmall, bool UISubtitlesLarge);
		void ResolutionSelection(int32_t UIValue);
		void PSVideoSettings();
		void ColorBlindSelection(int32_t UIColorValue, float Severity);
		void ApplyVideoSettings(int32_t UIResValue);
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.PatrollerInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPatrollerInterface : public UInterface
	{
	public:
		void SetPatrolPath();
		void SetCurrentPatrolPointIndex(int32_t PatrolPointIndex);
		void GetPatrolPath();
		int32_t GetCurrentPatrolPointIndex();
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.PlayerTriggerWithConditionComps
	 * Size -> 0x0008 (FullSize[0x0278] - InheritedSize[0x0270])
	 */
	class APlayerTriggerWithConditionComps : public APlayerTrigger
	{
	public:
		EConditionCheckType                                        ConditionCheck;                                          // 0x0270(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9C7M[0x7];                                   // 0x0271(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.RaytracingUtils
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class URaytracingUtils : public UBlueprintFunctionLibrary
	{
	public:
		void SetSkeletalMeshRenderInRaytracing(bool bRenderInRaytracing, class USkeletalMeshComponent* MeshComponent);
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.RichTextControlButtonDecorator
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class URichTextControlButtonDecorator : public URichTextBlockDecorator
	{
	public:
		class UDataTable*                                          ButtonSet;                                               // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.SaveHandlerInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USaveHandlerInterface : public UInterface
	{
	public:
		void PostSaveGame();
		void PostGameLoad();
		void OnStoreGameData(class UFNAFSaveData* SaveDataObject);
		void OnGameDataLoaded(class UFNAFSaveData* SaveDataObject);
		void OnCheckpointSave(class UFNAFSaveData* SaveDataObject);
		void OnCheckpointLoad(class UFNAFSaveData* SaveDataObject);
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.ScaledTimeSystem
	 * Size -> 0x0090 (FullSize[0x00C0] - InheritedSize[0x0030])
	 */
	class UScaledTimeSystem : public UGameInstanceSubsystem
	{
	public:
		class FScriptDelegate                                      MoonmanKillDelegate;                                     // 0x0030(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1IMQ[0x80];                                  // 0x0040(0x0080) MISSED OFFSET (PADDING)

	public:
		void UpdateScaledTimeDataRows(TMap<class FName, struct FScaledTimeDetails> Rows);
		void UnpauseCurrentTimer();
		void StopCurrentTimer();
		bool StartTimerSeconds(float Seconds);
		bool StartTimerFromRowName(const class FName& TimerRowName);
		bool StartTimerFromNightNumber(int32_t NightNumber);
		void SetupNewGame();
		void RestartCurrentTimer();
		void PauseCurrentTimer();
		void OnAntiVirusMoonmanTriggered();
		bool IsTimerActive();
		float GetTimeLeftSeconds();
		TMap<class FName, struct FScaledTimeDetails> GetScaledTimeDataRows();
		void GetIsTimerPaused();
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.SecurityCamera
	 * Size -> 0x0068 (FullSize[0x0290] - InheritedSize[0x0228])
	 */
	class ASecurityCamera : public AActor
	{
	public:
		class USceneComponent*                                     CameraPivot;                                             // 0x0228(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USightComponent*                                     PlayerDetector;                                          // 0x0230(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USceneComponent*                                     PlayerControlledPivot;                                   // 0x0238(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USightComponent*                                     EnemyDetector;                                           // 0x0240(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                CameraInventoryName;                                     // 0x0248(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       FazwatchAccessible;                                      // 0x0250(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPlayerDetectorStartsOn;                                 // 0x0251(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnemyDetectorStartsOn;                                  // 0x0252(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPlayerDetected;                                         // 0x0253(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IEMR[0x4];                                   // 0x0254(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                CameraName;                                              // 0x0258(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		float                                                      PanMin;                                                  // 0x0270(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PanMax;                                                  // 0x0274(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TiltMin;                                                 // 0x0278(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TiltMax;                                                 // 0x027C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q2JA[0x10];                                  // 0x0280(0x0010) MISSED OFFSET (PADDING)

	public:
		void StopOfficeMode();
		void StartOfficeMode();
		void SetPlayerDetectorEnabled(bool bEnable);
		void SetEnemeyDetectorEnabled(bool bEnable);
		void OnPlayerDetectorSightChanged(class AActor* UpdatedActor, bool bVisible);
		void OnOfficeModeStarted();
		void OnEnemyDetectorSightChanged(class AActor* UpdatedActor, bool bVisible);
		bool IsCameraUnlocked(bool OnlyShowCurrentMission);
		bool HasDetectedEnemies();
		TArray<class AActor*> GetVisibleEnemies();
		class USceneCaptureComponent2D* GetPlayerSceneCapture();
		class UTextureRenderTarget2D* GetCaptureTarget();
		void CaptureView();
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.SecurityCameraSystem
	 * Size -> 0x0060 (FullSize[0x0090] - InheritedSize[0x0030])
	 */
	class USecurityCameraSystem : public UWorldSubsystem
	{
	public:
		class FScriptMulticastDelegate                             OnCameraAlert;                                           // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnCameraRegistered;                                      // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnCameraUnregistered;                                    // 0x0050(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnCameraTriggerAlert;                                    // 0x0060(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnCameraTriggerLostAlert;                                // 0x0070(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4NZM[0x10];                                  // 0x0080(0x0010) MISSED OFFSET (PADDING)

	public:
		void PlayerSpotted(class ASecurityCamera* SecurityCamera);
		TArray<class ASecurityCamera*> GetAllSecurityCameras();
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.SecurityNodeComponent
	 * Size -> 0x0000 (FullSize[0x00B0] - InheritedSize[0x00B0])
	 */
	class USecurityNodeComponent : public UActorComponent
	{
	public:
		void DrawDebugGraph();
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.SecurityPuzzleJsonHandler
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USecurityPuzzleJsonHandler : public UBlueprintFunctionLibrary
	{
	public:
		bool WriteAllPuzzleDataToFile(TArray<struct FSecurityNodePuzzle> Puzzles);
		class FString ReadSecurityNodePuzzleData();
		void GenerateStructsArrayFromJsonStringSecurityNodePuzzle(const class FString& JsonString, TArray<struct FSecurityNodePuzzle>* Puzzles);
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.SeekerPatrolPath
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USeekerPatrolPath : public UInterface
	{
	public:
		EFNAFAISpawnType GetSpawnType();
		class FName GetPathName();
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.SightComponent
	 * Size -> 0x0088 (FullSize[0x0280] - InheritedSize[0x01F8])
	 */
	class USightComponent : public USceneComponent
	{
	public:
		class FScriptMulticastDelegate                             OnSightChanged;                                          // 0x01F8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		float                                                      SightAngle;                                              // 0x0208(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      StartDistance;                                           // 0x020C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      EndDistance;                                             // 0x0210(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		ESightType                                                 SightType;                                               // 0x0214(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_VUBF[0x3];                                   // 0x0215(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AspectRatio;                                             // 0x0218(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      MinYaw;                                                  // 0x021C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      MaxYaw;                                                  // 0x0220(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      MinPitch;                                                // 0x0224(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      MaxPitch;                                                // 0x0228(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    ThetaSteps;                                              // 0x022C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    PhiSteps;                                                // 0x0230(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_KK1B[0x4];                                   // 0x0234(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      VisibleActors;                                           // 0x0238(0x0010) Edit, ZeroConstructor, Transient, EditConst, NativeAccessSpecifierPrivate
		TArray<class AMoonmanSpawnPoint*>                          VisibleMMActors;                                         // 0x0248(0x0010) Edit, ZeroConstructor, Transient, EditConst, NativeAccessSpecifierPrivate
		bool                                                       bSightDetectionEnabled;                                  // 0x0258(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bShowVisionDebug;                                        // 0x0259(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6ELR[0x6];                                   // 0x025A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        IncludeTags;                                             // 0x0260(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_0GPG[0x10];                                  // 0x0270(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetSightType(ESightType InSightType);
		void SetSightParams(float Angle, float MinDistance, float MaxDistance);
		void SetSightEnabled(bool bEnable);
		void SetSightAngle(float Angle);
		void SetIncludeTags(TArray<class FName> InIgnoreTags);
		void SetFrustumTypeParams(float InMinYaw, float InMaxYaw, float InMinPitch, float InMaxPitch);
		void SetEndDistance(float Distance);
		void SetAspectRatio(float Ratio);
		void OnVisualQueryResults(TArray<TWeakObjectPtr<class UVisualSourceComponent>> DetectedSources);
		void OnVisibleActorDestroyed(class AActor* DestroyedActor);
		void OnMoonManQueryResults(TArray<TWeakObjectPtr<class AMoonmanSpawnPoint>> MoonManSpawnPoints);
		ESightType IsUsingConeSight();
		bool IsSightEnabled();
		bool IsActorVisible(class AActor* Actor);
		TArray<class AActor*> GetVisibleActors();
		float GetStartDistance();
		float GetSightAngle();
		float GetMinYaw();
		float GetMinPitch();
		float GetMaxYaw();
		float GetMaxPitch();
		TArray<class FName> GetIncludeTags();
		void GetFrustumTypeParams(float* OutMinYaw, float* OutMaxYaw, float* OutMinPitch, float* OutMaxPitch);
		float GetEndDistance();
		float GetAspectRatio();
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.SplineFollowMovementComponent
	 * Size -> 0x0040 (FullSize[0x00F0] - InheritedSize[0x00B0])
	 */
	class USplineFollowMovementComponent : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             OnFinishedFollowingSpline;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSplineLost;                                            // 0x00C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		float                                                      MovementSpeed;                                           // 0x00D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ME6W[0x4];                                   // 0x00D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USplineComponent*                                    SplineToFollow;                                          // 0x00D8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOrientToTangent;                                        // 0x00E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForward;                                                // 0x00E1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutoMove;                                               // 0x00E2(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IUK5[0xD];                                   // 0x00E3(0x000D) MISSED OFFSET (PADDING)

	public:
		void StopFollowingSpline();
		void StartFollowingSpline();
		void SetSplineToFollow(class USplineComponent* Spline);
		void SetDistanceAlongSpline(float Distance);
		void SetDirectionAndSplineToFollow(class USplineComponent* Spline, bool Direction);
		bool IsFollowingSpline();
		float GetCurrentDistance();
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.SplineUtils
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USplineUtils : public UBlueprintFunctionLibrary
	{
	public:
		float GetApproxDistanceClosestToWorldLocation(const struct FVector& Pos_WS, class USplineComponent* Spline);
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.WorldStateComponent
	 * Size -> 0x0010 (FullSize[0x00C0] - InheritedSize[0x00B0])
	 */
	class UWorldStateComponent : public UActorComponent
	{
	public:
		class FName                                                SaveName;                                                // 0x00B0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSaveOnStateChange;                                      // 0x00B8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S8KW[0x7];                                   // 0x00B9(0x0007) MISSED OFFSET (PADDING)

	public:
		void SetObjectState(bool bEnabled);
		bool HasValidSaveName();
		bool GetObjectState();
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.StoreActiveStateOnTrigger
	 * Size -> 0x0018 (FullSize[0x00D8] - InheritedSize[0x00C0])
	 */
	class UStoreActiveStateOnTrigger : public UWorldStateComponent
	{
	public:
		class FScriptMulticastDelegate                             OnPlayerTriggered;                                       // 0x00C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		EPlayerPawnType                                            PlayerType;                                              // 0x00D0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_MJVM[0x7];                                   // 0x00D1(0x0007) MISSED OFFSET (PADDING)

	public:
		void OnActorTriggered(class AActor* OverlappedActor, class AActor* OtherActor);
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.StreamingLevelUtil
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UStreamingLevelUtil : public UBlueprintFunctionLibrary
	{
	public:
		void LoadStreamingLevelsAtLocation(class UObject* WorldContextObject, const struct FVector& WorldLocation, bool bEnableVolumesAfterLoad, const struct FLatentActionInfo& LatentInfo);
		TArray<class ALevelStreamingVolume*> GetAllStreamingVolumesAtLocation(class UObject* WorldContextObject, const struct FVector& WorldLocation);
		TArray<class ALevelStreamingVolume*> GetAllStreamingVolumes(class UObject* WorldContextObject);
		TArray<class ULevelStreaming*> GetAllStreamingLevelsAtLocation(class UObject* WorldContextObject, const struct FVector& WorldLocation);
		TArray<class ULevelStreaming*> GetAllStreamingLevels(class UObject* WorldContextObject);
		TArray<class ULevel*> GetAllLevels(class UObject* WorldContextObject);
		void EnableAllStreamingVolumes(class UObject* WorldContextObject, bool bEnable);
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.StreamingLoadComponent
	 * Size -> 0x0030 (FullSize[0x00E0] - InheritedSize[0x00B0])
	 */
	class UStreamingLoadComponent : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             OnLevelStreamingFinished;                                // 0x00B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		bool                                                       bTurnVolumesOnAfterLoad;                                 // 0x00C0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ITV8[0x1F];                                  // 0x00C1(0x001F) MISSED OFFSET (PADDING)

	public:
		void StartAsyncLoadForLocation(const struct FVector& WorldLocation);
		void OnLevelLoaded();
		bool IsStreamingLevels();
		void EnableAllStreamingVolumes(bool bEnable);
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.SurvivalDoorConditionManager
	 * Size -> 0x0030 (FullSize[0x0258] - InheritedSize[0x0228])
	 */
	class ASurvivalDoorConditionManager : public AActor
	{
	public:
		unsigned char                                              DoorList[0x10];                                          // 0x0228(0x0010) UNKNOWN PROPERTY: ArrayProperty
		int32_t                                                    SecurityLevel;                                           // 0x0238(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                RequiredItem;                                            // 0x023C(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LBE2[0x14];                                  // 0x0244(0x0014) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.SurvivalItemPackage
	 * Size -> 0x0018 (FullSize[0x0240] - InheritedSize[0x0228])
	 */
	class ASurvivalItemPackage : public AActor
	{
	public:
		class FName                                                ItemName;                                                // 0x0228(0x0008) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ASurvivalItemRandomizer*                             SurvivalRandomizer;                                      // 0x0230(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YTMN[0x8];                                   // 0x0238(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnSetup();
		bool HasCollected();
		void Collect();
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.SurvivalItemRandomizer
	 * Size -> 0x0188 (FullSize[0x03B0] - InheritedSize[0x0228])
	 */
	class ASurvivalItemRandomizer : public AItemRandomizer
	{
	public:
		TArray<class ASurvivalItemPackage*>                        RemainingPackages;                                       // 0x0228(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M4WV[0x8];                                   // 0x0238(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              SurvivalPackageClass[0x28];                              // 0x0240(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              GlitchClass[0x28];                                       // 0x0268(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              GlitchManagerClass[0x28];                                // 0x0290(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		class UMaterialInterface*                                  GlitchMaterial;                                          // 0x02B8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      RadiusForGlitchInteract;                                 // 0x02C0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_18FS[0xEC];                                  // 0x02C4(0x00EC) MISSED OFFSET (PADDING)

	public:
		void RandomizeSurvivalItems(bool bSpawnAllLocations);
		bool HasCollected(class ASurvivalItemPackage* Package);
		TArray<class ASurvivalItemPackage*> GetPackagesSortedByDistance();
		class UMaterialInterface* GetGlitchMaterial();
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.SurvivalRandomItem
	 * Size -> 0x0000 (FullSize[0x0238] - InheritedSize[0x0238])
	 */
	class ASurvivalRandomItem : public ARandomItemGroupWithLocations
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.TeleportationInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTeleportationInterface : public UInterface
	{
	public:
		void SpringArmEnabled();
		void SpringArmDisabled();
		void SpawnBlackRabbit();
		void SetMaskIconOverlayActive(bool Active);
		void PlayerFinishedTeleporting();
		void PlayerCannotTeleport();
		void MaskIconRemoveMask();
		void MaskIconNearBlocker(bool NearBlocker);
		void MaskIconDefault();
		void MaskIconCantTeleport();
		bool IsPlayerMoving();
		void EnablePlayerInput();
		void DisablePlayerInput();
		void DeactivateGlitchUI();
		bool CanAITeleport();
		float AICapsuleHalfHeight();
		void ActivateTeleportFX();
		void ActivateGlitchUI();
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.TeleportationSubsystem
	 * Size -> 0x00D0 (FullSize[0x0100] - InheritedSize[0x0030])
	 */
	class UTeleportationSubsystem : public UWorldSubsystem
	{
	public:
		unsigned char                                              UnknownData_C0Q1[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bIsTeleporting;                                          // 0x0038(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDisableRestrictions;                                    // 0x0039(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInATeleportZone;                                        // 0x003A(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_05FN[0x5];                                   // 0x003B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ANavigationData*                                     NavData;                                                 // 0x0040(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              FilterClass;                                             // 0x0048(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             NormalGlitchSwapDelegate;                                // 0x0050(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             SwapFailedDelegate;                                      // 0x0060(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		bool                                                       bPlayerInNormal;                                         // 0x0070(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bPlayerSaveInNormal;                                     // 0x0071(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bAIInNormal;                                             // 0x0072(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_9BHV[0x1];                                   // 0x0073(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TeleportDistance;                                        // 0x0074(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      CoolDownTime;                                            // 0x0078(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      AICapsule;                                               // 0x007C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      CassieCapsule;                                           // 0x0080(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       IsCoolDownComplete;                                      // 0x0084(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bNavMeshBlocked;                                         // 0x0085(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_OU2I[0x7A];                                  // 0x0086(0x007A) MISSED OFFSET (PADDING)

	public:
		void TeleportAI(class APawn* AIPawn, float CapsuleHeight);
		void SetPlayerSaveInNormal(bool PlayerSaveInNormal);
		void SetPlayerInNormalForChapterReplay(bool PlayerInNormal);
		void SetPlayerInNormal(bool PlayerInNormal);
		bool IsPlayerInNormal();
		float GetTeleportationDistance();
		bool GetPlayerSaveInNormal();
		class APawn* GetCurrentAIPawn();
		void ForceTeleport();
		bool CheckIfPlayerCanTeleport();
		bool CanTeleport();
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.TemporarySnapshotSystem
	 * Size -> 0x0100 (FullSize[0x0130] - InheritedSize[0x0030])
	 */
	class UTemporarySnapshotSystem : public UGameInstanceSubsystem
	{
	public:
		unsigned char                                              UnknownData_WETS[0x100];                                 // 0x0030(0x0100) MISSED OFFSET (PADDING)

	public:
		void SetUseSnapshot(bool UseSnapshot);
		void SetInitializeOnPost(bool Initialize);
		void SetAlternativeTranform(const struct FTransform& AltTranform);
		bool GetUseSnapshot();
		struct FDLCSaveSnapshotData GetTemporaryGameStateSnapshot();
		void CreateTemporaryGameStateSnapshot();
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.UpdateMissionComponent
	 * Size -> 0x0010 (FullSize[0x00C0] - InheritedSize[0x00B0])
	 */
	class UUpdateMissionComponent : public UActorComponent
	{
	public:
		class FName                                                MissionName;                                             // 0x00B0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    MissionStateIndex;                                       // 0x00B8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bShouldComplete;                                         // 0x00BC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bShouldSave;                                             // 0x00BD(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_38FU[0x2];                                   // 0x00BE(0x0002) MISSED OFFSET (PADDING)

	public:
		void UpdateMission();
		bool IsMissionFinished();
		bool HasMetCondition();
		class FName GetMissionName();
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.UVEmitterInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UUVEmitterInterface : public UInterface
	{
	public:
		void GetUVLight(const struct FVector& InTargetLocation, bool InOverridePrecision, float InPrecisionOverrideValue, struct FVector* OutLocation, float* OutStrength);
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.UVLightReactionComponent
	 * Size -> 0x0040 (FullSize[0x00F0] - InheritedSize[0x00B0])
	 */
	class UUVLightReactionComponent : public UActorComponent
	{
	public:
		class UMaterialInstanceDynamic*                            Material;                                                // 0x00B0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      DistanceExponent;                                        // 0x00B8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      ProjectExponent;                                         // 0x00BC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      Radius;                                                  // 0x00C0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8US9[0x25];                                  // 0x00C4(0x0025) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       OverrideUVLightPrecision;                                // 0x00E9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_7E92[0x2];                                   // 0x00EA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      OverrideUVLightPrecisionValue;                           // 0x00EC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void Setup(class UMaterialInstanceDynamic* InMaterial, TArray<class USceneComponent*> InLocatorComponents);
		void RemoveActor(class AActor* ActorToRemove);
		float GetRadius();
		bool GetEmitterInRange();
		void CalculateUV();
		void AddActor(class AActor* ActorToAdd);
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.UVLightReactionFromOverlap
	 * Size -> 0x0000 (FullSize[0x00F0] - InheritedSize[0x00F0])
	 */
	class UUVLightReactionFromOverlap : public UUVLightReactionComponent
	{
	public:
		void OnOwnerEndOverlap(class AActor* OverlappedActor, class AActor* OtherActor);
		void OnOwnerBeginOverlap(class AActor* OverlappedActor, class AActor* OtherActor);
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.VisualSourceComponent
	 * Size -> 0x0030 (FullSize[0x00E0] - InheritedSize[0x00B0])
	 */
	class UVisualSourceComponent : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             OnSourceDetected;                                        // 0x00B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     VisualOffsets;                                           // 0x00C0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		bool                                                       bIsVisibilityEnabled;                                    // 0x00D0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_4YL0[0xF];                                   // 0x00D1(0x000F) MISSED OFFSET (PADDING)

	public:
		void SetVisualOffsetLocations(TArray<struct FVector> InVisualOffsets);
		void SetVisualOffset(int32_t PointIndex, const struct FVector& visualOffset);
		void SetSourceVisibility(bool bEnable);
		void RemoveVisualOffset(int32_t PointIndex);
		TArray<struct FVector> GetVisualOffsets();
		TArray<struct FVector> GetVisualLocations();
		bool GetSourceVisibility();
		struct FVector GetDetectedVisualLocation();
		void DetectTheSource(const struct FVector& VSLocation, class AActor* passed_HitActor, bool passed_bVisible);
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.WorldStateHandlerComponent
	 * Size -> 0x0040 (FullSize[0x00F0] - InheritedSize[0x00B0])
	 */
	class UWorldStateHandlerComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_D10N[0x8];                                   // 0x00B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnObjectStateChanged;                                    // 0x00B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FName                                                ObjectStateName;                                         // 0x00C8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bConditionMetOnStateSet;                                 // 0x00D0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0DIF[0x1F];                                  // 0x00D1(0x001F) MISSED OFFSET (PADDING)

	public:
		void SetObjectState(bool bEnable);
		void OnObjectStateChangedHandle(const class FName& ObjectName, bool ObjectState);
		void OnObjectStateChangedEvent();
		bool HasValidSaveName();
		bool GetObjectState();
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.WorldStateSystem
	 * Size -> 0x0388 (FullSize[0x03B8] - InheritedSize[0x0030])
	 */
	class UWorldStateSystem : public UGameInstanceSubsystem
	{
	public:
		unsigned char                                              UnknownData_UI97[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnWorldStateChanged;                                     // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnObjectStateChanged;                                    // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		struct FFreddyUpgradeState                                 FreddyState;                                             // 0x0058(0x0004) BlueprintVisible, Transient, NoDestructor, NativeAccessSpecifierPublic
		struct FRandomStream                                       SeededRandomStream;                                      // 0x005C(0x0008) BlueprintVisible, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic
		EFNAFGameState                                             WorldState;                                              // 0x0064(0x0001) Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_X4SX[0x3];                                   // 0x0065(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              ActivatedObjects[0x50];                                  // 0x0068(0x0050) UNKNOWN PROPERTY: SetProperty
		struct FFNAFAISaveData                                     AIState;                                                 // 0x00B8(0x0068) Edit, Transient, EditConst, NativeAccessSpecifierPrivate
		struct FFNAFRuinAISaveData                                 RuinAIState;                                             // 0x0120(0x0078) Edit, Transient, EditConst, NativeAccessSpecifierPrivate
		struct FArcadeSaveData                                     ArcadeState;                                             // 0x0198(0x0030) Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		class FString                                              CurrentMinigameName;                                     // 0x01C8(0x0010) Edit, ZeroConstructor, Transient, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AActor*                                              CurrentMinigameActor;                                    // 0x01D8(0x0008) Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TMap<int32_t, class FString>                               MazercisePanelLocations;                                 // 0x01E0(0x0050) Edit, Transient, EditConst, NativeAccessSpecifierPrivate
		ESurvivalDifficulty                                        SurvivalDifficulty;                                      // 0x0230(0x0001) Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_KUQ2[0x7];                                   // 0x0231(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CurrentActivityId;                                       // 0x0238(0x0010) Edit, ZeroConstructor, Transient, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_3WTZ[0x170];                                 // 0x0248(0x0170) MISSED OFFSET (PADDING)

	public:
		void StartMinigame(const class FString& MinigameName, EFNAFGameState GameState, class AActor* MinigameActor);
		void SetWorldState(EFNAFGameState NewState);
		void SetupNewGame();
		void SetSurvivalMaxDeaths(int32_t MaxDeaths);
		void SetSurvivalDifficulty(ESurvivalDifficulty Difficulty);
		void SetRuinAIState(const struct FFNAFRuinAISaveData& InRuinAIState);
		void SetRandomSeed(int32_t Seed);
		void SetPowerStationAvailable(bool bAvailable);
		void SetPlayerInPowerStation(int32_t InPowerStationID);
		void SetPlayerInFreddy(bool bInFreddy);
		void SetPlayerHasUsedHidingSpot();
		void SetMazercisePanel(int32_t Index, const class FString& Location);
		void SetInstructionCardShown(bool Shown);
		void SetGoalPathName(const class FName& inGoalPathName);
		void SetFreddySick(bool bIsSick);
		void SetFreddyPatrolPoint(int32_t PatrolPointIndex);
		void SetDeactivatedCautionBot_Map(TMap<int32_t, bool> In_DeactivatedCautionBots_Map);
		void SetCurrentActivityId(const class FString& InActivityId);
		void SetCanShowInstructionCards(bool bCanShowInstructionCards);
		void SetCanEnterExitFreddy(bool bCanEnterExit);
		void SetCanCallFreddy(bool bCanCall);
		void SetArcadeState(const struct FArcadeSaveData& InArcadeState);
		void SetAIState(const struct FFNAFAISaveData& InAIState);
		void ResetForChapterSelect(TArray<class FName> chapterActivatables, TArray<class FName> activatablesToKeepOnReplay, int32_t chapterSelected);
		void RemoveDeactivatedCautionBot(int32_t CautionBotID, bool isDeactivated);
		void RemoveBonnieBowlMMMJumpscareSaveID(const class FName& inSaveID);
		void RemoveActivated(const class FName& ActivatableName);
		bool IsPowerStationAvailable();
		bool IsPlayerInFreddy();
		bool IsInstructionCardShown();
		bool IsFreddySick();
		bool IsActivated(const class FName& ActivatableName);
		bool HasPlayerUsedHidingSpot();
		EFNAFGameState GetWorldState();
		int32_t GetSurvivalMaxDeaths();
		ESurvivalDifficulty GetSurvivalDifficulty();
		void GetSavedPlayerLocationAndRotation(struct FVector* OutWorldLocation, struct FRotator* OutWorldRotation);
		void GetSavedFreddyLocationAndRotation(bool* OutFreddyInWorld, struct FVector* OutWorldLocation, struct FRotator* OutWorldRotation);
		struct FFNAFRuinAISaveData GetRuinAIState();
		int32_t GetRandomSeed();
		void GetPowerStationInfo(bool* OutPlayerInPowerStation, int32_t* OutPowerStationID);
		class FString GetMazercisePanel(int32_t Index);
		int32_t GetLivesRemaining();
		class FName GetGoalPathName();
		class AFNAFBasePlayerCharacter* GetFreddyPawn();
		int32_t GetFreddyPatrolPoint();
		TMap<int32_t, bool> GetDeactivatedCautionBots_Map();
		int32_t GetCurrentSpottedCount();
		class AActor* GetCurrentMinigameActor();
		class FString GetCurrentMinigame();
		int32_t GetCurrentDeathCount();
		class FString GetCurrentActivityId();
		void GetBonnieBowlMMMJumspscareData();
		struct FArcadeSaveData GetArcadeState();
		TArray<class FName> GetAllCurrentActivables();
		struct FFNAFAISaveData GetAIState();
		void EndMinigame();
		void DebugSetPlayerHasUsedHidingSpot(bool HasHid);
		void ClearPlayerInPowerStation();
		void CanStartMinigame(bool* CanStart, ECantStartMinigameReason* reason);
		bool CanShowInstructionCards();
		bool CanEnterExitFreddy();
		bool CanCallFreddy();
		void AddSpotted();
		void AddDeath(int32_t* OutRemainingLives);
		void AddDeactivatedCautionBot(int32_t CautionBotID, bool isDeactivated);
		void AddBonnieBowlMMMJumpscareSaveID(const class FName& inSaveID);
		void AddActivated(const class FName& ActivatableName);
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.XboxUtilities
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UXboxUtilities : public UBlueprintFunctionLibrary
	{
	public:
		void XboxQuit();
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.XSXUtilities
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UXSXUtilities : public UBlueprintFunctionLibrary
	{
	public:
		class FString GetXSXConsoleType();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
