﻿#pragma once

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

// BlueprintGeneratedClass PRE_SM_Fridge_01a.PRE_SM_Fridge_01a_C
// 0x0049 (FullSize[0x0271] - InheritedSize[0x0228])
class APRE_SM_Fridge_01a_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0228(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAmbientAudio_C*                             AmbientAudio;                                              // 0x0230(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        StaticMesh;                                                // 0x0238(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0240(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      OcclusionTrace[0x28];                                      // 0x0248(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	bool                                               EmitterPlaying;                                            // 0x0270(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass PRE_SM_Fridge_01a.PRE_SM_Fridge_01a_C");
		return ptr;
	}



	void ReceiveTick(float DeltaSeconds);
	void PlayEmitter();
	void StopEmitter();
	void ToggleInRange(bool InRange);
	void ExecuteUbergraph_PRE_SM_Fridge_01a(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
