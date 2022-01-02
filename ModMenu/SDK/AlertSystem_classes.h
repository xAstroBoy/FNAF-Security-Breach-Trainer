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

// BlueprintGeneratedClass AlertSystem.AlertSystem_C
// 0x0020 (FullSize[0x0248] - InheritedSize[0x0228])
class AAlertSystem_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0228(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0230(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnAlert;                                                   // 0x0238(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass AlertSystem.AlertSystem_C");
		return ptr;
	}



	void Send_Alert(const struct FName& Alert, const struct FVector& Location, TArray<fnaf9_EFNAFAISpawnType> TypesToAlert, int NumberToAlert);
	void ExecuteUbergraph_AlertSystem(int EntryPoint);
	void OnAlert__DelegateSignature(const struct FName& Alert, const struct FVector& Location);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
