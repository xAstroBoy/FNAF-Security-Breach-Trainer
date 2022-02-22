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
	 * BlueprintGeneratedClass Monty.Monty_C
	 * Size -> 0x0017 (FullSize[0x0808] - InheritedSize[0x07F1])
	 */
	class AMonty_C : public AAISeeker_C
	{
	public:
		unsigned char                                              UnknownData_6JPK[0x7];                                   // 0x07F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x07F8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UMissionStateCondition*                              MissionStateCondition;                                   // 0x0800(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void EnterHideMode(class AActor* HideActor);
		void ReceiveBeginPlay();
		void Stun();
		void ExecuteUbergraph_Monty(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
