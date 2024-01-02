#pragma once

/**
 * Name: FNAFSB
 * Version: 1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass StaffBotCleaning.StaffBotCleaning_C
	 * Size -> 0x0042 (FullSize[0x06E0] - InheritedSize[0x069E])
	 */
	class AStaffBotCleaning_C : public AStaffBotBase_C
	{
	public:
		unsigned char                                              UnknownData_I5BQ[0x2];                                   // 0x069E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x06A0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		float                                                      WalkSpeed;                                               // 0x06A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_6ZN9[0x4];                                   // 0x06AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ASplinePathwayManager_C*                             SplineManager;                                           // 0x06B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		struct FSplineFollowerContext                              SplineFollowerContext;                                   // 0x06B8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash
		class FName                                                SplineMovementSpeedKey;                                  // 0x06D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                SplineManagerKey;                                        // 0x06D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetPossibleSplinePaths(TArray<class ASplinePathway_C*>* PossiblePaths);
		void GetSplineFollowerContext(struct FSplineFollowerContext* SplineFollowerContext);
		void ReceiveBeginPlay();
		void SetSplineFollowerContext(const struct FSplineFollowerContext& SplineFollowerContext);
		void ReceiveActorBeginOverlap(class AActor* OtherActor);
		void ExecuteUbergraph_StaffBotCleaning(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
