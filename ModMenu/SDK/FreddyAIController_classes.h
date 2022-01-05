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
	 * BlueprintGeneratedClass FreddyAIController.FreddyAIController_C
	 * Size -> 0x0080 (FullSize[0x03B0] - InheritedSize[0x0330])
	 */
	class AFreddyAIController_C : public AAIController
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0330(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class APowerStation_Actor_C*                               ClosestPowerStation_Actor;                               // 0x0338(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ClosestPowerStation_Distance;                            // 0x0340(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       FreddyShouldFollow;                                      // 0x0344(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_U6CB[0x3];                                   // 0x0345(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int                                                        FreddyRotationCounter;                                   // 0x0348(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int                                                        FreddyRotationAngle;                                     // 0x034C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int                                                        NumOfFreddyRotations;                                    // 0x0350(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       isFreddyNearStation;                                     // 0x0354(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HD8K[0x3];                                   // 0x0355(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                GregoryKey;                                              // 0x0358(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        FreddyPowerTimer;                                        // 0x0360(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class FName                                                StateKey;                                                // 0x0368(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBehaviorTree*                                       BehaviourTree;                                           // 0x0370(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       DeleteSelfOnReachedPowerStation;                         // 0x0378(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       InsideStation;                                           // 0x0379(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_R9SX[0x2];                                   // 0x037A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      deltaTime;                                               // 0x037C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TurnInPlaceLerpAlpha;                                    // 0x0380(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_KWU3[0x4];                                   // 0x0384(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AFreddy_C*                                           Freddy;                                                  // 0x0388(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             NewVar_1;                                                // 0x0390(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_HB0E[0x4];                                   // 0x039C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        AttemptDestroyTimer;                                     // 0x03A0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class FName                                                MoveToLocationKey;                                       // 0x03A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetIsNearRechargeStation(bool isFreddyNearStation);
		void SetAIState(TEnumAsByte<FreddyAIState_EFreddyAIState> State);
		void Setup_Freddy_Power_Loss_Timer();
		void On_World_State_Changed(fnaf9_EFNAFGameState NewState, fnaf9_EFNAFGameState PreviousState);
		void GetGregoryPawn(class AGregory_C** GregoryPawn);
		void OnNotifyEnd_30B75CD34307316BF7A1EF9DC900582F(const class FName& NotifyName);
		void OnNotifyBegin_30B75CD34307316BF7A1EF9DC900582F(const class FName& NotifyName);
		void OnInterrupted_30B75CD34307316BF7A1EF9DC900582F(const class FName& NotifyName);
		void OnBlendOut_30B75CD34307316BF7A1EF9DC900582F(const class FName& NotifyName);
		void OnCompleted_30B75CD34307316BF7A1EF9DC900582F(const class FName& NotifyName);
		void ReceiveUnPossess(class APawn* UnpossessedPawn);
		void SnapToPowerStation();
		void GoTo_PowerStation();
		void On_Tick_Freddy_Power();
		void Call_Freddy(class AGregory_C* GregoryPawn);
		void ReceiveTick(float DeltaSeconds);
		void ReceiveBeginPlay();
		void FreddyReachedPowerStation();
		void FreddyNearStation();
		void ReceivePossess(class APawn* PossessedPawn);
		void OrientFreddyNearStationEvent();
		void OrientFreddyInsideStationEvent(bool InsideStation);
		void MoveIntoPowerStation();
		void FreddyLeaveRechargeStation();
		void AttemptDestroy();
		void ExecuteUbergraph_FreddyAIController(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
