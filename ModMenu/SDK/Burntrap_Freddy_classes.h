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
	 * BlueprintGeneratedClass Burntrap_Freddy.Burntrap_Freddy_C
	 * Size -> 0x0069 (FullSize[0x0981] - InheritedSize[0x0918])
	 */
	class ABurntrap_Freddy_C : public AFreddy_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0918(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBoxComponent*                                       PlayerCaptureTrigger;                                    // 0x0920(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       IsHacked;                                                // 0x0928(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_D0C4[0x3];                                   // 0x0929(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HackTimeMax;                                             // 0x092C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HackTime;                                                // 0x0930(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ChargeTimer;                                             // 0x0934(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ChargeTimerMax;                                          // 0x0938(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       HasGregory;                                              // 0x093C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LSAA[0x3];                                   // 0x093D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              RechargeStations[0x10];                                  // 0x093D(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              LineSkipper[0x28];                                       // 0x0950(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class AOGM_Underground_C*                                  Manager;                                                 // 0x0978(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Is_In_Recharge_Station;                                  // 0x0980(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void CanPlayerInteract(bool* CanInteract, fnaf9_EConditionFailReason* CantReason);
		void IsFreddyHacked(bool* NewParam);
		void ReceiveBeginPlay();
		void ReceiveTick(float DeltaSeconds);
		void HackFreddy();
		void UnhackFreddy();
		void BndEvt__PlayerCaptureTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void On_Capture_Overlap(class AActor* OtherActor);
		void Jump_Scare(class AGregory_C* Gregory);
		void Hide_Gregory(class AGregory_C* Gregory, class APlayerController* PlayerController, bool UseAnim, bool PlaySound);
		void Eject_Gregory(bool BypassAnim);
		void ResetChargeTimer();
		void FirstHack();
		void Use_Chica_Beak();
		void ExecuteUbergraph_Burntrap_Freddy(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
