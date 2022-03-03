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
	 * BlueprintGeneratedClass BackstageLiftHandler.BackstageLiftHandler_C
	 * Size -> 0x0034 (FullSize[0x025C] - InheritedSize[0x0228])
	 */
	class ABackstageLiftHandler_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0228(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0230(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              Lifts[0x10];                                             // 0x0238(0x0010) UNKNOWN PROPERTY: ArrayProperty
		TArray<class ABackstageOfficeLift_C*>                      BustedLifts;                                             // 0x0248(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash
		int32_t                                                    CurrentLiftIndex;                                        // 0x0258(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetCurrentLift(class ABackstageOfficeLift_C** CurrentLift);
		void Setup_Handler();
		void On_Lift_Stopped(class AMoveableLift_C* Lift);
		void ReceiveBeginPlay();
		void Debind_things(E_EndMiniGameType_E_EndMiniGameType EndType);
		void ExecuteUbergraph_BackstageLiftHandler(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
