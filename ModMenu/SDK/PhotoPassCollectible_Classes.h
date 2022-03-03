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
	 * BlueprintGeneratedClass PhotoPassCollectible.PhotoPassCollectible_C
	 * Size -> 0x002B (FullSize[0x0304] - InheritedSize[0x02D9])
	 */
	class APhotoPassCollectible_C : public APresentCollectible_C
	{
	public:
		unsigned char                                              UnknownData_4HOW[0x7];                                   // 0x02D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02E0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USpotLightComponent*                                 SpotLight;                                               // 0x02E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UUpdateMissionOnCollect_C*                           UpdateMissionOnCollect;                                  // 0x02F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ID;                                                      // 0x02F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                MissionToUpdate;                                         // 0x02FC(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveBeginPlay();
		void On_Item_Collected(const class FName& ItemName, const struct FFNAFInventoryTableStruct& InventoryItemInfo);
		void On_Item_Removed(const class FName& ItemName, const struct FFNAFInventoryTableStruct& InventoryItemInfo);
		void ExecuteUbergraph_PhotoPassCollectible(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
