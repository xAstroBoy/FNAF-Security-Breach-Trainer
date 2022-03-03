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
	 * BlueprintGeneratedClass UpdateMissionOnCollect.UpdateMissionOnCollect_C
	 * Size -> 0x0008 (FullSize[0x00C8] - InheritedSize[0x00C0])
	 */
	class UUpdateMissionOnCollect_C : public UUpdateMissionComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00C0(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void On_Item_Collected(const class FName& ItemName, const struct FFNAFInventoryTableStruct& InventoryItemInfo);
		void OnMessageAdded_Event_1(const class FName& MessageName, const struct FFNAFMessageTableStruct& MessageInfo);
		void ReceiveBeginPlay();
		void ExecuteUbergraph_UpdateMissionOnCollect(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
