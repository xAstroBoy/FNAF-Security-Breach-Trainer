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
	 * BlueprintGeneratedClass Door_FreddyGreenRoomBack.Door_FreddyGreenRoomBack_C
	 * Size -> 0x001D (FullSize[0x040C] - InheritedSize[0x03EF])
	 */
	class ADoor_FreddyGreenRoomBack_C : public ABP_DoorMaster_C
	{
	public:
		unsigned char                                              UnknownData_RAQV[0x1];                                   // 0x03EF(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03F0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTimeCheckComponent_C*                               TimeCheckComponent;                                      // 0x03F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UDoorAutomaticOnWorldState_C*                        DoorAutomaticOnWorldState;                               // 0x0400(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		int32_t                                                    SecurityLevelAfter2;                                     // 0x0408(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void BndEvt__Door_K2Node_ComponentBoundEvent_0_OnPawnExitedDoor__DelegateSignature(class UDoorComponent* DoorComponent, class APawn* Pawn);
		void BndEvt__TimeCheckComponent_K2Node_ComponentBoundEvent_1_OnTimeStart__DelegateSignature();
		void BndEvt__TimeCheckComponent_K2Node_ComponentBoundEvent_2_OnTimeEnd__DelegateSignature();
		void ExecuteUbergraph_Door_FreddyGreenRoomBack(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
