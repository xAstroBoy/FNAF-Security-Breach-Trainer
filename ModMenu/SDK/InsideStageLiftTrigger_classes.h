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
	 * BlueprintGeneratedClass InsideStageLiftTrigger.InsideStageLiftTrigger_C
	 * Size -> 0x0060 (FullSize[0x02D8] - InheritedSize[0x0278])
	 */
	class AInsideStageLiftTrigger_C : public APlayerTriggerWithConditionComps
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UMissionStateCondition*                              MissionStateCondition;                                   // 0x0280(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              SequenceToPlay[0x28];                                    // 0x0288(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              LineSkipper[0x28];                                       // 0x02B0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

	public:
		void OnTriggered();
		void ExecuteUbergraph_InsideStageLiftTrigger(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
