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
	 * BlueprintGeneratedClass PRE_BadgeHolder_WestArcade.PRE_BadgeHolder_WestArcade_C
	 * Size -> 0x0015 (FullSize[0x0300] - InheritedSize[0x02EB])
	 */
	class APRE_BadgeHolder_WestArcade_C : public APRE_BadgeHolder_C
	{
	public:
		unsigned char                                              UnknownData_30DQ[0x5];                                   // 0x02EB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMissionStateCondition*                              DJ_Music_Man_Condition1;                                 // 0x02F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UMissionStateCondition*                              DJ_Music_Man_Condition;                                  // 0x02F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void CanPlayerInteract(bool* CanInteract, fnaf9_EConditionFailReason* CantReason);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
