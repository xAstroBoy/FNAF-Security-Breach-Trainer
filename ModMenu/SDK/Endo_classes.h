﻿#pragma once

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
	 * BlueprintGeneratedClass Endo.Endo_C
	 * Size -> 0x008B (FullSize[0x08A4] - InheritedSize[0x0819])
	 */
	class AEndo_C : public AAISeeker_C
	{
	public:
		unsigned char                                              UnknownData_IGYR[0x7];                                   // 0x0819(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0820(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     RightFootVisual;                                         // 0x0828(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     LeftFootVisual;                                          // 0x0830(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     WaistVisual;                                             // 0x0838(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     RightVisual;                                             // 0x0840(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     LeftVisual;                                              // 0x0848(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class FName                                                BBIsBeingWatched;                                        // 0x0850(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class USceneComponent*>                             SightLocations;                                          // 0x0858(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class FName                                                BBState;                                                 // 0x0868(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              AIPatrolPath[0x28];                                      // 0x0870(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       StartHanging;                                            // 0x0898(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LI1P[0x3];                                   // 0x0899(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                CheckInventoryName;                                      // 0x089C(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void DeterminedBeingWatched();
		void ReceiveBeginPlay();
		void ReceiveTick(float DeltaSeconds);
		void WakeEndo();
		void EndoSleep();
		void ExecuteUbergraph_Endo(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
