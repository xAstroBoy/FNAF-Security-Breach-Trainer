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

// BlueprintGeneratedClass BreakCannon.BreakCannon_C
// 0x0030 (FullSize[0x00D8] - InheritedSize[0x00A8])
class UBreakCannon_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                      BBCannon;                                                  // 0x00B0(0x0028) (Edit, BlueprintVisible)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BreakCannon.BreakCannon_C");
		return ptr;
	}



	void OnNotifyEnd_A710A0DA4C04A7D001CD6FABAB5A5E08(const struct FName& NotifyName);
	void OnNotifyBegin_A710A0DA4C04A7D001CD6FABAB5A5E08(const struct FName& NotifyName);
	void OnInterrupted_A710A0DA4C04A7D001CD6FABAB5A5E08(const struct FName& NotifyName);
	void OnBlendOut_A710A0DA4C04A7D001CD6FABAB5A5E08(const struct FName& NotifyName);
	void OnCompleted_A710A0DA4C04A7D001CD6FABAB5A5E08(const struct FName& NotifyName);
	void OnNotifyEnd_4BA8AEFF461D0D9538C45595C4F82DA5(const struct FName& NotifyName);
	void OnNotifyBegin_4BA8AEFF461D0D9538C45595C4F82DA5(const struct FName& NotifyName);
	void OnInterrupted_4BA8AEFF461D0D9538C45595C4F82DA5(const struct FName& NotifyName);
	void OnBlendOut_4BA8AEFF461D0D9538C45595C4F82DA5(const struct FName& NotifyName);
	void OnCompleted_4BA8AEFF461D0D9538C45595C4F82DA5(const struct FName& NotifyName);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BreakCannon(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
