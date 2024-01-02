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
	 * BlueprintGeneratedClass RockstarRowCharacterRoom.RockstarRowCharacterRoom_C
	 * Size -> 0x006B (FullSize[0x0293] - InheritedSize[0x0228])
	 */
	class ARockstarRowCharacterRoom_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0228(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBoxComponent*                                       ChicaGuitarOverlap;                                      // 0x0230(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       RoxyVOOverlap;                                           // 0x0238(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Prop;                                                    // 0x0240(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UTimeCheckComponent_C*                               TimeCheckComponent;                                      // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              Rig;                                                     // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMesh*                                       RigToUse;                                                // 0x0260(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          SoundToPlay;                                             // 0x0268(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    HourToHide;                                              // 0x0270(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                AnimatronicType;                                         // 0x0274(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_U3GT[0x4];                                   // 0x027C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              AnimInstance;                                            // 0x0280(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                        MontageToPlay;                                           // 0x0288(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UseProp;                                                 // 0x0290(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       play_once_roxy;                                          // 0x0291(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       play_once_chica;                                         // 0x0292(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void OnNotifyEnd_146787EF4288FD6F7163ED9553BA52D4(const class FName& NotifyName);
		void OnNotifyBegin_146787EF4288FD6F7163ED9553BA52D4(const class FName& NotifyName);
		void OnInterrupted_146787EF4288FD6F7163ED9553BA52D4(const class FName& NotifyName);
		void OnBlendOut_146787EF4288FD6F7163ED9553BA52D4(const class FName& NotifyName);
		void OnCompleted_146787EF4288FD6F7163ED9553BA52D4(const class FName& NotifyName);
		void OnNotifyEnd_1CEDD0DC422405AC513B5D827A4E4BDD(const class FName& NotifyName);
		void OnNotifyBegin_1CEDD0DC422405AC513B5D827A4E4BDD(const class FName& NotifyName);
		void OnInterrupted_1CEDD0DC422405AC513B5D827A4E4BDD(const class FName& NotifyName);
		void OnBlendOut_1CEDD0DC422405AC513B5D827A4E4BDD(const class FName& NotifyName);
		void OnCompleted_1CEDD0DC422405AC513B5D827A4E4BDD(const class FName& NotifyName);
		void OnNotifyEnd_8EA2291F45D828AD1A6446A05905F376(const class FName& NotifyName);
		void OnNotifyBegin_8EA2291F45D828AD1A6446A05905F376(const class FName& NotifyName);
		void OnInterrupted_8EA2291F45D828AD1A6446A05905F376(const class FName& NotifyName);
		void OnBlendOut_8EA2291F45D828AD1A6446A05905F376(const class FName& NotifyName);
		void OnCompleted_8EA2291F45D828AD1A6446A05905F376(const class FName& NotifyName);
		void ReceiveBeginPlay();
		void BndEvt__TimeCheckComponent_K2Node_ComponentBoundEvent_0_OnTimeEnd__DelegateSignature();
		void ReceiveTick(float DeltaSeconds);
		void BndEvt__RoxyVOOverlap_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void BndEvt__ChicaGuitarOverlap_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void ExecuteUbergraph_RockstarRowCharacterRoom(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
