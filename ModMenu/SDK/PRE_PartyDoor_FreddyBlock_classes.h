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
	 * BlueprintGeneratedClass PRE_PartyDoor_FreddyBlock.PRE_PartyDoor_FreddyBlock_C
	 * Size -> 0x0027 (FullSize[0x0368] - InheritedSize[0x0341])
	 */
	class APRE_PartyDoor_FreddyBlock_C : public APRE_PartyDoor_Long_C
	{
	public:
		unsigned char                                              UnknownData_DZ7N[0x7];                                   // 0x0341(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0348(0x0008) ZeroConstructor, Transient, DuplicateTransient
		float                                                      Partway_Door_Mover_DoorHeight_D0B842A04832977174A0E6A725A2879F; // 0x0350(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		Engine_ETimelineDirection                                  Partway_Door_Mover__Direction_D0B842A04832977174A0E6A725A2879F; // 0x0354(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_YD24[0x3];                                   // 0x0355(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Partway_Door_Mover;                                      // 0x0358(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAkAudioEvent*                                       StuckSound;                                              // 0x0360(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void Partway_Door_Mover__FinishedFunc();
		void Partway_Door_Mover__UpdateFunc();
		void On_Door_Opening();
		void On_Door_Closing();
		void ExecuteUbergraph_PRE_PartyDoor_FreddyBlock(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
