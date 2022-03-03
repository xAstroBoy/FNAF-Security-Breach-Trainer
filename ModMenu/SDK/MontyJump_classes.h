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
	 * BlueprintGeneratedClass MontyJump.MontyJump_C
	 * Size -> 0x00C8 (FullSize[0x0170] - InheritedSize[0x00A8])
	 */
	class UMontyJump_C : public UBTTask_BlueprintBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FBlackboardKeySelector                              JumpWaitTime;                                            // 0x00B0(0x0028) Edit, BlueprintVisible
		float                                                      fJumpWaitTime;                                           // 0x00D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_R2VZ[0x4];                                   // 0x00DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBlackboardKeySelector                              BBAllowJump;                                             // 0x00E0(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              BBTeleport_Location;                                     // 0x0108(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              BBJumpMarker;                                            // 0x0130(0x0028) Edit, BlueprintVisible
		bool                                                       Use_Jump_Marker;                                         // 0x0158(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_44U2[0x3];                                   // 0x0159(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Monty_Spawn_Offset;                                      // 0x015C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Max_Z;                                                   // 0x0168(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MinDistanceFromPlayer;                                   // 0x016C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void Jump_Check(class ACharacter* Object, bool* success);
		void OnNotifyEnd_95A8414241D4C3D70915AFB59A5B125F(const class FName& NotifyName);
		void OnNotifyBegin_95A8414241D4C3D70915AFB59A5B125F(const class FName& NotifyName);
		void OnInterrupted_95A8414241D4C3D70915AFB59A5B125F(const class FName& NotifyName);
		void OnBlendOut_95A8414241D4C3D70915AFB59A5B125F(const class FName& NotifyName);
		void OnCompleted_95A8414241D4C3D70915AFB59A5B125F(const class FName& NotifyName);
		void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		void ExecuteUbergraph_MontyJump(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
