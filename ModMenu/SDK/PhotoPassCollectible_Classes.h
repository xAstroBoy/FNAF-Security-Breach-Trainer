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
	 * BlueprintGeneratedClass PhotoPassCollectible.PhotoPassCollectible_C
	 * Size -> 0x002B (FullSize[0x0334] - InheritedSize[0x0309])
	 */
	class APhotoPassCollectible_C : public APresentCollectible_C
	{
	public:
		unsigned char                                              UnknownData_Z7BJ[0x7];                                   // 0x0309(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0310(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USpotLightComponent*                                 SpotLight_1;                                             // 0x0318(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UUpdateMissionOnCollect_C*                           UpdateMissionOnCollect;                                  // 0x0320(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ID;                                                      // 0x0328(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                MissionToUpdate;                                         // 0x032C(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveBeginPlay();
		void OnItemCollected(const class FName& ItemName, const struct FFNAFInventoryTableStruct& InventoryItemInfo);
		void OnItemRemoved(const class FName& ItemName, const struct FFNAFInventoryTableStruct& InventoryItemInfo);
		void ExecuteUbergraph_PhotoPassCollectible(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
