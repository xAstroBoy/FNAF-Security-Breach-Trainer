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
	 * BlueprintGeneratedClass MissionUpdateTrigger_WestArcade.MissionUpdateTrigger_WestArcade_C
	 * Size -> 0x0013 (FullSize[0x0270] - InheritedSize[0x025D])
	 */
	class AMissionUpdateTrigger_WestArcade_C : public AMissionUpdateTrigger_C
	{
	public:
		unsigned char                                              UnknownData_5OOT[0x3];                                   // 0x025D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class ASecurityOffice_WestArcade_C*                        Manager;                                                 // 0x0268(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void Attempt_Start_Mission();
		void ExecuteUbergraph_MissionUpdateTrigger_WestArcade(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
