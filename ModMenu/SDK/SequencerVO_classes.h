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

// BlueprintGeneratedClass SequencerVO.SequencerVO_C
// 0x0038 (FullSize[0x0260] - InheritedSize[0x0228])
class ASequencerVO_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0228(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0230(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      LineSkipper[0x28];                                         // 0x0238(0x0028) UNKNOWN PROPERTY: SoftObjectProperty


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass SequencerVO.SequencerVO_C");
		return ptr;
	}



	void PlayVO(class UAkAudioEvent* VO, class AActor* Actor, bool Freddy, float MaxRadiusPercent);
	void ExecuteUbergraph_SequencerVO(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
