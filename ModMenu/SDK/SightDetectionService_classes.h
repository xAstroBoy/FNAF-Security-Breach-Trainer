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
	 * BlueprintGeneratedClass SightDetectionService.SightDetectionService_C
	 * Size -> 0x0009 (FullSize[0x00A1] - InheritedSize[0x0098])
	 */
	class USightDetectionService_C : public UBTService_BlueprintBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0098(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       WasSetup;                                                // 0x00A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		void On_Sight_Changed(class AActor* UpdatedActor, bool bVisible);
		void ReceiveDeactivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		void Sight_Setup(class USightComponent* SightComponent);
		void Sight_Cleanup(class USightComponent* SightComponent);
		void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
		void Internal_Sight_Setup(class APawn* ControlledPawn);
		void ExecuteUbergraph_SightDetectionService(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
