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

// BlueprintGeneratedClass BPITurnTowardsAudio.BPITurnTowardsAudio_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBPITurnTowardsAudio_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPITurnTowardsAudio.BPITurnTowardsAudio_C");
		return ptr;
	}



	void GetEndTurnTowardsEvent(class UAkAudioEvent** EndTurnTowards);
	void GetStartTurnTowardsEvent(class UAkAudioEvent** StartTurnTowards);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
