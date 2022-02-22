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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BallCannonLimitedShots.BallCannonLimitedShots_C
	 * Size -> 0x00A1 (FullSize[0x03C9] - InheritedSize[0x0328])
	 */
	class ABallCannonLimitedShots_C : public ABallCannon_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0328(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UPointLightComponent*                                SparkLight;                                              // 0x0330(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    AmmoWidget;                                              // 0x0338(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UNiagaraComponent*                                   SparksN;                                                 // 0x0340(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       Box;                                                     // 0x0348(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            Smoke;                                                   // 0x0350(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UArrowComponent*                                     Monty_Smash_Loc;                                         // 0x0358(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UArrowComponent*                                     BallShotTransform1;                                      // 0x0360(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              RIG_BallBlaster;                                         // 0x0368(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                MOD_BallBlaster_02;                                      // 0x0370(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USphereComponent*                                    Sphere;                                                  // 0x0378(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NumBalls;                                                // 0x0380(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DelayForBallCollect;                                     // 0x0384(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaxBallCount;                                            // 0x0388(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Reset_Threshold;                                         // 0x038C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              MontyBossManagerRef[0x28];                               // 0x0390(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class FName                                                BTKeyName;                                               // 0x03B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsBroken;                                                // 0x03C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GKCH[0x3];                                   // 0x03C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Max_Angle;                                               // 0x03C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Allow_Firing;                                            // 0x03C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void TickLimitAngle();
		void CanPlayerInteract(bool* CanInteract, fnaf9_EConditionFailReason* CantReason);
		void BreakGun();
		void CanFire(bool* CanFire);
		void UserConstructionScript();
		void OnNotifyEnd_FD1FE29642B1371D91AF25B1E0FFD2B1(const class FName& NotifyName);
		void OnNotifyBegin_FD1FE29642B1371D91AF25B1E0FFD2B1(const class FName& NotifyName);
		void OnInterrupted_FD1FE29642B1371D91AF25B1E0FFD2B1(const class FName& NotifyName);
		void OnBlendOut_FD1FE29642B1371D91AF25B1E0FFD2B1(const class FName& NotifyName);
		void OnCompleted_FD1FE29642B1371D91AF25B1E0FFD2B1(const class FName& NotifyName);
		void Shot_Fired();
		void Refresh_Balls();
		void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void OnBreakGun();
		void On_Target_Hit();
		void Fire(bool Perform_Cant_Fire_Logic);
		void ReceiveBeginPlay();
		void Sparks_Delay_Loop();
		void ReceiveTick(float DeltaSeconds);
		void Take_Control(class ABallCannonPawn_C* ControllingPawn);
		void OnExit();
		void ExecuteUbergraph_BallCannonLimitedShots(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
