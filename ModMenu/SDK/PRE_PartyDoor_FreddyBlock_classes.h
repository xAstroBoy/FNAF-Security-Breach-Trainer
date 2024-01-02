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
	 * BlueprintGeneratedClass PRE_PartyDoor_FreddyBlock.PRE_PartyDoor_FreddyBlock_C
	 * Size -> 0x0027 (FullSize[0x0388] - InheritedSize[0x0361])
	 */
	class APRE_PartyDoor_FreddyBlock_C : public APRE_PartyDoor_Long_C
	{
	public:
		unsigned char                                              UnknownData_1VQP[0x7];                                   // 0x0361(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0368(0x0008) ZeroConstructor, Transient, DuplicateTransient
		float                                                      Partway_Door_Mover_DoorHeight_D0B842A04832977174A0E6A725A2879F; // 0x0370(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Partway_Door_Mover__Direction_D0B842A04832977174A0E6A725A2879F; // 0x0374(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_Z0E2[0x3];                                   // 0x0375(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  PartwayDoorMover;                                        // 0x0378(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAkAudioEvent*                                       StuckSound;                                              // 0x0380(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void PartwayDoorMover__FinishedFunc();
		void PartwayDoorMover__UpdateFunc();
		void OnDoorOpening();
		void OnDoorClosing();
		void ExecuteUbergraph_PRE_PartyDoor_FreddyBlock(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
