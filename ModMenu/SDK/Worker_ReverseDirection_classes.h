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

// BlueprintGeneratedClass Worker_ReverseDirection.Worker_ReverseDirection_C
// 0x00E0 (FullSize[0x0188] - InheritedSize[0x00A8])
class UWorker_ReverseDirection_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               TP_Has_Prop;                                               // 0x00B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_DTUO[0x7];                                     // 0x00B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBlackboardKeySelector                      Forward_Along_Spline;                                      // 0x00B8(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      Direction_Along_Spline;                                    // 0x00E0(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      At_Start_Of_Spline;                                        // 0x0108(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      At_End_Of_Spline;                                          // 0x0130(0x0028) (Edit, BlueprintVisible)
	bool                                               InitialBool;                                               // 0x0158(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_GEF1[0x3];                                     // 0x0159(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              InitialFoat;                                               // 0x015C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBlackboardKeySelector                      PauseTask;                                                 // 0x0160(0x0028) (Edit, BlueprintVisible)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Worker_ReverseDirection.Worker_ReverseDirection_C");
		return ptr;
	}



	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_Worker_ReverseDirection(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
