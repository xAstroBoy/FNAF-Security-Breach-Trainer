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
	 * BlueprintGeneratedClass DoorController.DoorController_C
	 * Size -> 0x0099 (FullSize[0x0302] - InheritedSize[0x0269])
	 */
	class ADoorController_C : public AActivatableBase_C
	{
	public:
		unsigned char                                              UnknownData_Y83N[0x7];                                   // 0x0269(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0270(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBoxComponent*                                       Box;                                                     // 0x0278(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              Door[0x28];                                              // 0x0280(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       DoorOpened;                                              // 0x02A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Playing;                                                 // 0x02A9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UDNN[0x6];                                   // 0x02AA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              PathBlockedByDoorTrigger[0x28];                          // 0x02B0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              DoorActor[0x28];                                         // 0x02D8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       ShouldBeOpenOnEnd;                                       // 0x0300(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       ForcedOpen;                                              // 0x0301(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void ReceiveBeginPlay();
		void SetActivated();
		void OnActivate();
		void OnGameStart();
		void OnGameEnd();
		void ForceOpen();
		void ExecuteUbergraph_DoorController(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
