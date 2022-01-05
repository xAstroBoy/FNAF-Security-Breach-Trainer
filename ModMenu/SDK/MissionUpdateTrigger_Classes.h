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
	 * BlueprintGeneratedClass MissionUpdateTrigger.MissionUpdateTrigger_C
	 * Size -> 0x0014 (FullSize[0x025D] - InheritedSize[0x0249])
	 */
	class AMissionUpdateTrigger_C : public AMissionTriggerBase_C
	{
	public:
		unsigned char                                              UnknownData_KQ8V[0x7];                                   // 0x0249(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0250(0x0008) ZeroConstructor, Transient, DuplicateTransient
		int                                                        NewState;                                                // 0x0258(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       RequireMissionAlreadyStarted;                            // 0x025C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void CanUpdateMission(bool* Update_);
		void On_Update_Mission();
		void Attempt_Start_Mission();
		void ExecuteUbergraph_MissionUpdateTrigger(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
