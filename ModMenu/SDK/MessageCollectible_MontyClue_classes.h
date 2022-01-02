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

// BlueprintGeneratedClass MessageCollectible_MontyClue.MessageCollectible_MontyClue_C
// 0x0013 (FullSize[0x02C8] - InheritedSize[0x02B5])
class AMessageCollectible_MontyClue_C : public AMessageCollectible_C
{
public:
	unsigned char                                      UnknownData_ELBI[0x3];                                     // 0x02B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UUpdateMissionComponent*                     UpdateThrillSeekerMission;                                 // 0x02C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass MessageCollectible_MontyClue.MessageCollectible_MontyClue_C");
		return ptr;
	}



	void OnCollect();
	void ExecuteUbergraph_MessageCollectible_MontyClue(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
