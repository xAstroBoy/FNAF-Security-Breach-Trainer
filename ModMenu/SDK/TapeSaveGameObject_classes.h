#pragma once

// Name: FNAF Security Breach, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TapeSaveGameObject.TapeSaveGameObject_C
// 0x0074 (FullSize[0x009C] - InheritedSize[0x0028])
class UTapeSaveGameObject_C : public USaveGame
{
public:
	TMap<struct FName, bool>                           CollectedTapesData;                                        // 0x0028(0x0050) (Edit, BlueprintVisible)
	TArray<struct FName>                               TapesDonePlaying;                                          // 0x0078(0x0010) (Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<struct FName>                               InInventoryTapes;                                          // 0x0088(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	int                                                NoOfTapesDone;                                             // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TapeSaveGameObject.TapeSaveGameObject_C");
		return ptr;
	}



	void IncrementTapesPlayed();
	void GetNoOfTapesDone(int* NoOfTapesPlayed);
	void GetInventoryTapes(TArray<struct FName>* InInventoryTapes);
	void ClearAll();
	void GetTapesDonePlaying(TArray<struct FName>* TapesDonePlaying);
	void AddTapeDonePlaying(const struct FName& TapeDonePlaying);
	void SetCollectedTapesData(const struct FName& InventoryItemName, bool HasBeenCollected);
	void GetCollectedTapesData(const struct FName& InventoryItemName, bool* HasBeenCollected_);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
