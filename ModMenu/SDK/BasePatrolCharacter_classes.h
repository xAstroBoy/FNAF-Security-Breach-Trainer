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
	 * BlueprintGeneratedClass BasePatrolCharacter.BasePatrolCharacter_C
	 * Size -> 0x0014 (FullSize[0x04EC] - InheritedSize[0x04D8])
	 */
	class ABasePatrolCharacter_C : public ADebuggableAICharacter_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04D8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class APatrolPath_C*                                       PatrolPoints;                                            // 0x04E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    StartingPoint;                                           // 0x04E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		int32_t GetCurrentPatrolPointIndex();
		void GetPatrolPath();
		void SetCurrentPatrolPointIndex(int32_t PatrolPointIndex);
		void SetPatrolPath();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BasePatrolCharacter(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
