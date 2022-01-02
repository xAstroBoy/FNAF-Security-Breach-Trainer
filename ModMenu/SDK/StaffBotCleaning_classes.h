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

// BlueprintGeneratedClass StaffBotCleaning.StaffBotCleaning_C
// 0x0046 (FullSize[0x0698] - InheritedSize[0x0652])
class AStaffBotCleaning_C : public AStaffBotBase_C
{
public:
	unsigned char                                      UnknownData_8QG3[0x6];                                     // 0x0652(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0658(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              WalkSpeed;                                                 // 0x0660(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_4S7Z[0x4];                                     // 0x0664(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ASplinePathwayManager_C*                     SplineManager;                                             // 0x0668(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FSplineFollowerContext                      SplineFollowerContext;                                     // 0x0670(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FName                                       SplineMovementSpeedKey;                                    // 0x0688(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       SplineManagerKey;                                          // 0x0690(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass StaffBotCleaning.StaffBotCleaning_C");
		return ptr;
	}



	void GetPossibleSplinePaths(TArray<class ASplinePathway_C*>* PossiblePaths);
	void GetSplineFollowerContext(struct FSplineFollowerContext* SplineFollowerContext);
	void ReceiveBeginPlay();
	void SetSplineFollowerContext(const struct FSplineFollowerContext& SplineFollowerContext);
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ExecuteUbergraph_StaffBotCleaning(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
