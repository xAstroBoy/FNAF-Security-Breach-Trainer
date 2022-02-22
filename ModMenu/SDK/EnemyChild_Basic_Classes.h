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
	 * BlueprintGeneratedClass EnemyChild_Basic.EnemyChild_Basic_C
	 * Size -> 0x0019 (FullSize[0x05B1] - InheritedSize[0x0598])
	 */
	class AEnemyChild_Basic_C : public AEnemyParent_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0598(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBoxComponent*                                       DamageBox;                                               // 0x05A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     EnemyBasicSFX;                                           // 0x05A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       AutoActivateBasicSFX;                                    // 0x05B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void ActivateSFX();
		void BasicAttack();
		void ReceiveTick(float DeltaSeconds);
		void ReceiveBeginPlay();
		void ReceiveActorBeginOverlap(class AActor* OtherActor);
		void ExecuteUbergraph_EnemyChild_Basic(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
