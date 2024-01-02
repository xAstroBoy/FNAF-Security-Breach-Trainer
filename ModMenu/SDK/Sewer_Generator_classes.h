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
	 * BlueprintGeneratedClass Sewer_Generator.Sewer_Generator_C
	 * Size -> 0x0088 (FullSize[0x0340] - InheritedSize[0x02B8])
	 */
	class ASewer_Generator_C : public AGeneratorBase_BP_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class FName                                                MissiontoUpdate;                                         // 0x02C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              DoorControlled[0x28];                                    // 0x02C8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class AShatteredChicaSpawnActivatibleTrigger_C*            Trigger;                                                 // 0x02F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsActivated;                                             // 0x02F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8EIU[0x7];                                   // 0x02F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              DoorButton[0x28];                                        // 0x0300(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       ChangeLightState;                                        // 0x0328(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       UpdateMission;                                           // 0x0329(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3S40[0x6];                                   // 0x032A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              SpotLights[0x10];                                        // 0x0330(0x0010) UNKNOWN PROPERTY: ArrayProperty

	public:
		void ActivateChicaTrigger(bool Activate);
		void ReceiveBeginPlay();
		void SetActivated();
		void ActivateObject(class AActor* Activator);
		void ExecuteUbergraph_Sewer_Generator(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
