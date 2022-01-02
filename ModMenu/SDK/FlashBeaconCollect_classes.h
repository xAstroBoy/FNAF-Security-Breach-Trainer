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

// BlueprintGeneratedClass FlashBeaconCollect.FlashBeaconCollect_C
// 0x003F (FullSize[0x0308] - InheritedSize[0x02C9])
class AFlashBeaconCollect_C : public APresentCollectible_C
{
public:
	unsigned char                                      UnknownData_CNQQ[0x7];                                     // 0x02C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTimeCheckComponent_C*                       CheckIfNotInOverTime;                                      // 0x02D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      LineSkipper[0x28];                                         // 0x02E0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass FlashBeaconCollect.FlashBeaconCollect_C");
		return ptr;
	}



	void OnCollect();
	void OnBeginCollect();
	void ExecuteUbergraph_FlashBeaconCollect(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
