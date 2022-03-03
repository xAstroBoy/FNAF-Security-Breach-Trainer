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
	 * BlueprintGeneratedClass FreddyPositionAfterPhotoPass.FreddyPositionAfterPhotoPass_C
	 * Size -> 0x0048 (FullSize[0x0270] - InheritedSize[0x0228])
	 */
	class AFreddyPositionAfterPhotoPass_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0228(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UItemCollectListenerComponent*                       ItemCollectListener;                                     // 0x0230(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URemoveAfterMissionComponent_C*                      RemoveAfterMissionComponent;                             // 0x0238(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UArrowComponent*                                     Arrow;                                                   // 0x0240(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              DoorToOpen[0x28];                                        // 0x0248(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

	public:
		void BndEvt__ItemCollectListener_K2Node_ComponentBoundEvent_0_OnCorrectItemCollectedDelegate__DelegateSignature();
		void On_Pawn_Possessed(class APawn* PossessedPawn);
		void ExecuteUbergraph_FreddyPositionAfterPhotoPass(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
