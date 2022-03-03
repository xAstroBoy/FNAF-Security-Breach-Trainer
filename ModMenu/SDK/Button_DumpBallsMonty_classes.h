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
	 * BlueprintGeneratedClass Button_DumpBallsMonty.Button_DumpBallsMonty_C
	 * Size -> 0x004E (FullSize[0x03EA] - InheritedSize[0x039C])
	 */
	class AButton_DumpBallsMonty_C : public APlaySequenceTrigger_C
	{
	public:
		unsigned char                                              UnknownData_OJI5[0x4];                                   // 0x039C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03A0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UUpdateMissionComponent*                             Montys_Claws;                                            // 0x03A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UChildActorComponent*                                Button;                                                  // 0x03B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Cone;                                                    // 0x03B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              RefToManger[0x28];                                       // 0x03C0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       UseButton;                                               // 0x03E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       CanPlayerInteract_1;                                     // 0x03E9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void Enable_Dump_Ball_Button(bool Enabled);
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void OnTriggered();
		void On_Player_Interact();
		void On_Sequence_Stop_Event();
		void ExecuteUbergraph_Button_DumpBallsMonty(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
