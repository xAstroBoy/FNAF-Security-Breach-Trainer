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

// BlueprintGeneratedClass Monty.Monty_C
// 0x0017 (FullSize[0x0808] - InheritedSize[0x07F1])
class AMonty_C : public AAISeeker_C
{
public:
	unsigned char                                      UnknownData_TIXI[0x7];                                     // 0x07F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x07F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UMissionStateCondition*                      MissionStateCondition;                                     // 0x0800(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Monty.Monty_C");
		return ptr;
	}



	void EnterHideMode(class AActor* HideActor);
	void ReceiveBeginPlay();
	void Stun();
	void ExecuteUbergraph_Monty(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
