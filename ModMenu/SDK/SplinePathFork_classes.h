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
	 * BlueprintGeneratedClass SplinePathFork.SplinePathFork_C
	 * Size -> 0x0041 (FullSize[0x0269] - InheritedSize[0x0228])
	 */
	class ASplinePathFork_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0228(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBoxComponent*                                       Trigger;                                                 // 0x0230(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UArrowComponent*                                     ForwardDirection;                                        // 0x0238(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              ForwardPaths[0x10];                                      // 0x0240(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              BackwardPaths[0x10];                                     // 0x0250(0x0010) UNKNOWN PROPERTY: ArrayProperty
		float                                                      Wait_Time;                                               // 0x0260(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Wait_Time_Deviation;                                     // 0x0264(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsPrizeCounterGame;                                      // 0x0268(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void GetPossibleForks(class AActor* SplineFollowerActor, TArray<class ASplinePathway_C*>* PossibleSplines);
		void On_Spline_Follower_Overlapped(class ASplineFollowerBase_C* SplineFollower);
		void ReceiveActorBeginOverlap(class AActor* OtherActor);
		void ReceiveActorEndOverlap(class AActor* OtherActor);
		void ExecuteUbergraph_SplinePathFork(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
