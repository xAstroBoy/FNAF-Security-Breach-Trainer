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

// BlueprintGeneratedClass PizzaMakerManager.PizzaMakerManager_C
// 0x00B5 (FullSize[0x02DD] - InheritedSize[0x0228])
class APizzaMakerManager_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0228(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0230(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<PizzaStep_EPizzaStep>                  CurrentPizzaStep;                                          // 0x0238(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_7D1Z[0x7];                                     // 0x0239(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<TEnumAsByte<PizzaStep_EPizzaStep>, class UAkAudioEvent*> NextStep;                                                  // 0x0240(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	bool                                               PizzaCompleted;                                            // 0x0290(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_LGN4[0x7];                                     // 0x0291(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class AKitchenBotPizzaStation_C*>           PizzaStations;                                             // 0x0298(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                               OnlyShowCurrentStation;                                    // 0x02A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_TK75[0x7];                                     // 0x02A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      OGM_Kitchen[0x28];                                         // 0x02A9(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	float                                              Reset_Time;                                                // 0x02D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CanBake;                                                   // 0x02DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass PizzaMakerManager.PizzaMakerManager_C");
		return ptr;
	}



	void FinishStep(TEnumAsByte<PizzaStep_EPizzaStep> Step);
	void MoveToPizzaStep(TEnumAsByte<PizzaStep_EPizzaStep> Step);
	void ShowNextStationName();
	void Step_Completed(TEnumAsByte<PizzaStep_EPizzaStep> Step);
	void ReceiveBeginPlay();
	void PlayStepAudio();
	void ExecuteUbergraph_PizzaMakerManager(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
