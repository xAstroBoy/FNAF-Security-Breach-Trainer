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

// BlueprintGeneratedClass Cinematic_Actor_Monty.Cinematic_Actor_Monty_C
// 0x003C (FullSize[0x0288] - InheritedSize[0x024C])
class ACinematic_Actor_Monty_C : public ACinematic_Actor_Base_C
{
public:
	unsigned char                                      UnknownData_L3OX[0x4];                                     // 0x024C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0250(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCharacterHourlyMaterialComponent_C*         CharacterHourlyMaterialComponent;                          // 0x0258(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      LineSkipper[0x28];                                         // 0x0260(0x0028) UNKNOWN PROPERTY: SoftObjectProperty


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Cinematic_Actor_Monty.Cinematic_Actor_Monty_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void PlayVO(class UAkAudioEvent* SubtitleEvent, bool SanitizeSubtitleKey, class UAkAudioEvent* AudioEvent);
	void ExecuteUbergraph_Cinematic_Actor_Monty(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
