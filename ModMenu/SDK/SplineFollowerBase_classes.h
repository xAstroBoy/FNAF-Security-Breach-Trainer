#pragma once

/**
 * Name: FNAF Security Breach
 * Version: 2
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
	 * BlueprintGeneratedClass SplineFollowerBase.SplineFollowerBase_C
	 * Size -> 0x0098 (FullSize[0x0558] - InheritedSize[0x04C0])
	 */
	class ASplineFollowerBase_C : public ACharacter
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTextRenderComponent*                                ForTesting;                                              // 0x04C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAlwaysFaceCameraComponent_C*                        AlwaysFaceCameraComponent;                               // 0x04D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       ObstructionDetector;                                     // 0x04D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              SplineManager[0x28];                                     // 0x04E0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		struct FSplineFollowerContext                              SplineFollowContext;                                     // 0x0508(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash
		float                                                      MovementSpeed;                                           // 0x0520(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       MoveForward;                                             // 0x0524(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YUL0[0x3];                                   // 0x0525(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Direction;                                               // 0x0528(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                MovementSpeedKey;                                        // 0x052C(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                SplineManagerKey;                                        // 0x0534(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                PathBlockedKey;                                          // 0x053C(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_NNTK[0x4];                                   // 0x0544(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ASplinePathway_C*>                            PossiblePaths;                                           // 0x0548(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash

	public:
		void GetSplineFollowerContext(struct FSplineFollowerContext* SplineFollowerContext);
		void GetPossibleSplinePaths(TArray<class ASplinePathway_C*>* PossiblePaths);
		void PickRandomFork();
		void ReceiveBeginPlay();
		void Stop_at_Door(class ABP_DoorMaster_C* Door);
		void Hit_Fork();
		void On_Door_Unlocked(class ABP_DoorMaster_C* Door, bool Locked);
		void SetSplineFollowerContext(const struct FSplineFollowerContext& SplineFollowerContext);
		void ExecuteUbergraph_SplineFollowerBase(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
