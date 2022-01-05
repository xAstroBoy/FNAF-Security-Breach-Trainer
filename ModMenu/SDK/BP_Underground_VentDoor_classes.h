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
	 * BlueprintGeneratedClass BP_Underground_VentDoor.BP_Underground_VentDoor_C
	 * Size -> 0x0050 (FullSize[0x0278] - InheritedSize[0x0228])
	 */
	class ABP_Underground_VentDoor_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0228(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAkComponent*                                        Ak;                                                      // 0x0230(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UArrowComponent*                                     Arrow;                                                   // 0x0238(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UDoorComponent*                                      Door;                                                    // 0x0240(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       Collsion;                                                // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                MOD_VentHatch_Door;                                      // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                MOD_VentHatch_Trim;                                      // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Door_Open_Close_NewTrack_0_664AEC5E4E05BE570DBCE4AB183F755D; // 0x0268(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TEnumAsByte<Engine_ETimelineDirection>                     Door_Open_Close__Direction_664AEC5E4E05BE570DBCE4AB183F755D; // 0x026C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_F7D0[0x3];                                   // 0x026D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Door_Open_Close;                                         // 0x0270(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool HasDoorInitialized();
		bool IsDoorLockedForAI();
		bool IsDoorLockedForPlayer();
		bool IsDoorOpen();
		void Door_Open_Close__FinishedFunc();
		void Door_Open_Close__UpdateFunc();
		void SetDoorRequiredItem(const class FName& ItemName);
		void SetSecurityLevel(int NewSecurityLevel);
		void ForceDoorClose();
		void BndEvt__Door_K2Node_ComponentBoundEvent_0_OnInitialOpen__DelegateSignature();
		void BndEvt__Door_K2Node_ComponentBoundEvent_1_OnOpenCloseDoor__DelegateSignature(bool bIsPlayer);
		void BndEvt__Door_K2Node_ComponentBoundEvent_2_OnOpenCloseDoor__DelegateSignature(bool bIsPlayer);
		void ForceDoorOpen();
		void SetDoorLockAI(bool Lock);
		void SetDoorLockPlayer(bool Lock);
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BP_Underground_VentDoor(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
