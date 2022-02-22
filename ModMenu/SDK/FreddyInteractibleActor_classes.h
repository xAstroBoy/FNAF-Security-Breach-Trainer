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
	 * BlueprintGeneratedClass FreddyInteractibleActor.FreddyInteractibleActor_C
	 * Size -> 0x0068 (FullSize[0x0290] - InheritedSize[0x0228])
	 */
	class AFreddyInteractibleActor_C : public AActor
	{
	public:
		class UArrowComponent*                                     Arrow;                                                   // 0x0228(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBillboardComponent*                                 Billboard;                                               // 0x0230(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0238(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TMap<FreddyVOType_EFreddyVOType, struct FFreddyVOTypeArray> FreddyVO;                                                // 0x0240(0x0050) Edit, BlueprintVisible

	public:
		void GetFreddyVO(FreddyVOType_EFreddyVOType VOType, TArray<class UDialogueWave*>* FreddyDialog);
		void GetFreddyActionLocationAndRotation(struct FVector* Location, struct FRotator* Rotation);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
