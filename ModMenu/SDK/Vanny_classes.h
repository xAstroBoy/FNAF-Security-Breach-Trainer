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
	 * BlueprintGeneratedClass Vanny.Vanny_C
	 * Size -> 0x0034 (FullSize[0x0825] - InheritedSize[0x07F1])
	 */
	class AVanny_C : public AAISeeker_C
	{
	public:
		unsigned char                                              UnknownData_ZQDL[0x7];                                   // 0x07F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x07F8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UChildActorComponent*                                VannyDistortionActor;                                    // 0x0800(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      MaxDistanceForFX;                                        // 0x0808(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_YH12[0x4];                                   // 0x080C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         EncounterCurve;                                          // 0x0810(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AngleForLookAtDetection;                                 // 0x0818(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RunCounter;                                              // 0x081C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AmountOfTimeBeforeRunning;                               // 0x0820(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       EncounterMusicPlaying;                                   // 0x0824(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void On_Jumpscare(class AGregory_C* Gregory);
		void ReceiveTick(float DeltaSeconds);
		void ReceiveBeginPlay();
		void Jumpscare(class AActor* ActorToJumpscare);
		void Stun();
		void SetChaseMode(bool Chase, bool UseOverrideSpeed, float OverrideSpeed);
		void ReceiveDestroyed();
		void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
		void ExecuteUbergraph_Vanny(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
