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

// BlueprintGeneratedClass DeterminePlayerRange.DeterminePlayerRange_C
// 0x0032 (FullSize[0x00F2] - InheritedSize[0x00C0])
class UDeterminePlayerRange_C : public UNavDistanceServiceBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                      PlayerRangeKey;                                            // 0x00C8(0x0028) (Edit, BlueprintVisible)
	TEnumAsByte<AIPlayerRange_EAIPlayerRange>          InnerRangeEnum;                                            // 0x00F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<AIPlayerRange_EAIPlayerRange>          OuterRangeEnum;                                            // 0x00F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass DeterminePlayerRange.DeterminePlayerRange_C");
		return ptr;
	}



	void Determine_Range(class AActor* AIPawn);
	void ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ExecuteUbergraph_DeterminePlayerRange(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
