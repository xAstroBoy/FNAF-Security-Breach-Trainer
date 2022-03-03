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
	 * BlueprintGeneratedClass DoorManagerWithSave.DoorManagerWithSave_C
	 * Size -> 0x0017 (FullSize[0x02D0] - InheritedSize[0x02B9])
	 */
	class ADoorManagerWithSave_C : public ADoorManager_C
	{
	public:
		unsigned char                                              UnknownData_NDCE[0x7];                                   // 0x02B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWorldStateComponent*                                WorldState;                                              // 0x02C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void SetSaveState(bool bEnabled);
		void ForceDoorClose();
		void ForceDoorOpen();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_DoorManagerWithSave(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
