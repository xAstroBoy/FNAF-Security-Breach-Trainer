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
	 * BlueprintGeneratedClass TapeSaveGameObject.TapeSaveGameObject_C
	 * Size -> 0x0074 (FullSize[0x009C] - InheritedSize[0x0028])
	 */
	class UTapeSaveGameObject_C : public USaveGame
	{
	public:
		TMap<class FName, bool>                                    CollectedTapesData;                                      // 0x0028(0x0050) Edit, BlueprintVisible
		TArray<class FName>                                        TapesDonePlaying;                                        // 0x0078(0x0010) Edit, BlueprintVisible
		TArray<class FName>                                        InInventoryTapes;                                        // 0x0088(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    NoOfTapesDone;                                           // 0x0098(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void IncrementTapesPlayed();
		void GetNoOfTapesDone(int32_t* NoOfTapesPlayed);
		void GetInventoryTapes(TArray<class FName>* InInventoryTapes);
		void ClearAll();
		void GetTapesDonePlaying(TArray<class FName>* TapesDonePlaying);
		void AddTapeDonePlaying(const class FName& TapeDonePlaying);
		void SetCollectedTapesData(const class FName& InventoryItemName, bool HasBeenCollected);
		void GetCollectedTapesData(const class FName& InventoryItemName, bool* HasBeenCollected);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
