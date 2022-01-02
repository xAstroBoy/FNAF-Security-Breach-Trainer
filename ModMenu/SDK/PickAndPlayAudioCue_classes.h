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

// BlueprintGeneratedClass PickAndPlayAudioCue.PickAndPlayAudioCue_C
// 0x0018 (FullSize[0x00C0] - InheritedSize[0x00A8])
class UPickAndPlayAudioCue_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<class USoundCue*>                           AudioCues;                                                 // 0x00B0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass PickAndPlayAudioCue.PickAndPlayAudioCue_C");
		return ptr;
	}



	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_PickAndPlayAudioCue(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif