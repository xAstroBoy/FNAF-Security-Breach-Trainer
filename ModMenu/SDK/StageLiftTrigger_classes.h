﻿#pragma once

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
	 * BlueprintGeneratedClass StageLiftTrigger.StageLiftTrigger_C
	 * Size -> 0x0038 (FullSize[0x02B0] - InheritedSize[0x0278])
	 */
	class AStageLiftTrigger_C : public APlayerTriggerWithConditionComps
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UMissionStateCondition*                              MissionStateCondition;                                   // 0x0280(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              LineSkipper[0x28];                                       // 0x0288(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

	public:
		void OnTriggered();
		void ExecuteUbergraph_StageLiftTrigger(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
