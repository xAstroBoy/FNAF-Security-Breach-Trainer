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
	 * BlueprintGeneratedClass Chica.Chica_C
	 * Size -> 0x0024 (FullSize[0x083D] - InheritedSize[0x0819])
	 */
	class AChica_C : public AAISeeker_C
	{
	public:
		unsigned char                                              UnknownData_IYNA[0x7];                                   // 0x0819(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0820(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class FName                                                GarbageDetectedBB;                                       // 0x0828(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                GarbageLocationBB;                                       // 0x0830(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WalkFastSpeed;                                           // 0x0838(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       HeadRotating;                                            // 0x083C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void ReceiveBeginPlay();
		void OnGarbageDetected(const struct FVector& GarbageLocation);
		void SmashInCompactor();
		void SetCreepMode(bool enable);
		void StartHeadSpinTimer();
		void StopHeadSpinTimer();
		void SpinHead();
		void StopHeadSpin();
		void ExecuteUbergraph_Chica(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
