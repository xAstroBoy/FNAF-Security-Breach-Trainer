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
	 * BlueprintGeneratedClass Sewer_Generator.Sewer_Generator_C
	 * Size -> 0x0088 (FullSize[0x0340] - InheritedSize[0x02B8])
	 */
	class ASewer_Generator_C : public AGeneratorBase_BP_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class FName                                                Mission_to_Update;                                       // 0x02C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              Door_Controlled[0x28];                                   // 0x02C8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class AShatteredChicaSpawnActivatibleTrigger_C*            Trigger;                                                 // 0x02F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsActivated;                                             // 0x02F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SZTS[0x7];                                   // 0x02F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              Door_Button[0x28];                                       // 0x02F9(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       Change_Light_State;                                      // 0x0328(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       Update_Mission;                                          // 0x0329(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PX02[0x6];                                   // 0x032A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              SpotLights[0x10];                                        // 0x032A(0x0010) UNKNOWN PROPERTY: ArrayProperty

	public:
		void Activate_Chica_Trigger(bool Activate);
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
