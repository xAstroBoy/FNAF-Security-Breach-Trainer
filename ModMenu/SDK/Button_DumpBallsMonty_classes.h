﻿#pragma once

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
	 * BlueprintGeneratedClass Button_DumpBallsMonty.Button_DumpBallsMonty_C
	 * Size -> 0x0051 (FullSize[0x03E2] - InheritedSize[0x0391])
	 */
	class AButton_DumpBallsMonty_C : public APlaySequenceTrigger_C
	{
	public:
		unsigned char                                              UnknownData_78ZP[0x7];                                   // 0x0391(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0398(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UUpdateMissionComponent*                             Montys_Claws;                                            // 0x03A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UChildActorComponent*                                Button;                                                  // 0x03A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Cone;                                                    // 0x03B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              RefToManger[0x28];                                       // 0x03B8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       UseButton;                                               // 0x03E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       CanPlayerInteract;                                       // 0x03E1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void Enable_Dump_Ball_Button(bool Enabled);
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void OnTriggered();
		void On_Player_Interact();
		void On_Sequence_Stop_Event();
		void ExecuteUbergraph_Button_DumpBallsMonty(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
