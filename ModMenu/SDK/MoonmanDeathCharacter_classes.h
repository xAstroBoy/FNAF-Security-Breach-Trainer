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

// BlueprintGeneratedClass MoonmanDeathCharacter.MoonmanDeathCharacter_C
// 0x0028 (FullSize[0x04E0] - InheritedSize[0x04B8])
class AMoonmanDeathCharacter_C : public ACharacter
{
public:
	unsigned char                                      UnknownData_3LFG[0x8];                                     // 0x04B8(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x04C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              Time;                                                      // 0x04C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_LTXV[0x4];                                     // 0x04CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UMaterialInterface*>                  DBG_MaterialMapping;                                       // 0x04D0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass MoonmanDeathCharacter.MoonmanDeathCharacter_C");
		return ptr;
	}



	void OnMoveFinished_01A10D084E477107D60080A61618D4FF(TEnumAsByte<AIModule_EPathFollowingResult> Result, class AAIController* AIController);
	void OnRequestFailed_01A10D084E477107D60080A61618D4FF();
	void ReceiveBeginPlay();
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ReceiveTick(float DeltaSeconds);
	void OnDebugVis(bool enable);
	void ExecuteUbergraph_MoonmanDeathCharacter(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
