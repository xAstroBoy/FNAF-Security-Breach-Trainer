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

// BlueprintGeneratedClass BP_CinematicAudioEmitter.BP_CinematicAudioEmitter_C
// 0x0018 (FullSize[0x0240] - InheritedSize[0x0228])
class ABP_CinematicAudioEmitter_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0228(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAkComponent*                                Ak;                                                        // 0x0230(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0238(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_CinematicAudioEmitter.BP_CinematicAudioEmitter_C");
		return ptr;
	}



	void PlaySound();
	void PlayAkEvent(class UAkAudioEvent* AkEvent);
	void ExecuteUbergraph_BP_CinematicAudioEmitter(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
