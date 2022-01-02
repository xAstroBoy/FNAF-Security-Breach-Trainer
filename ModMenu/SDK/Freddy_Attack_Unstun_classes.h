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

// BlueprintGeneratedClass Freddy_Attack_Unstun.Freddy_Attack_Unstun_C
// 0x0008 (FullSize[0x00B0] - InheritedSize[0x00A8])
class UFreddy_Attack_Unstun_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Freddy_Attack_Unstun.Freddy_Attack_Unstun_C");
		return ptr;
	}



	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_Freddy_Attack_Unstun(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
