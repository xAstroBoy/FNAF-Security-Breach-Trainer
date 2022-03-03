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
	 * BlueprintGeneratedClass PRE_PartyDoor_Long_UnlockAfterMission.PRE_PartyDoor_Long_UnlockAfterMission_C
	 * Size -> 0x0017 (FullSize[0x0358] - InheritedSize[0x0341])
	 */
	class APRE_PartyDoor_Long_UnlockAfterMission_C : public APRE_PartyDoor_Long_C
	{
	public:
		unsigned char                                              UnknownData_JBM7[0x7];                                   // 0x0341(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0348(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UMissionStateHandler_C*                              MissionStateHandler;                                     // 0x0350(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void BndEvt__MissionStateHandler_K2Node_ComponentBoundEvent_0_OnMissionStateHit__DelegateSignature();
		void BndEvt__MissionStateHandler_K2Node_ComponentBoundEvent_1_OnMissionStateAleadyHit__DelegateSignature();
		void ExecuteUbergraph_PRE_PartyDoor_Long_UnlockAfterMission(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
