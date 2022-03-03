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
	 * BlueprintGeneratedClass MoonmanDeathCharacter.MoonmanDeathCharacter_C
	 * Size -> 0x0020 (FullSize[0x04E0] - InheritedSize[0x04C0])
	 */
	class AMoonmanDeathCharacter_C : public ACharacter
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		float                                                      Time;                                                    // 0x04C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_SHOZ[0x4];                                   // 0x04CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMaterialInterface*>                          DBG_MaterialMapping;                                     // 0x04D0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash

	public:
		void OnMoveFinished_01A10D084E477107D60080A61618D4FF(AIModule_EPathFollowingResult Result, class AAIController* AIController);
		void OnRequestFailed_01A10D084E477107D60080A61618D4FF();
		void ReceiveBeginPlay();
		void ReceiveActorBeginOverlap(class AActor* OtherActor);
		void ReceiveTick(float DeltaSeconds);
		void OnDebugVis(bool enable);
		void ExecuteUbergraph_MoonmanDeathCharacter(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
