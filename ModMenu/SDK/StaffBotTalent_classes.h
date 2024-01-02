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
	 * BlueprintGeneratedClass StaffBotTalent.StaffBotTalent_C
	 * Size -> 0x000A (FullSize[0x06A8] - InheritedSize[0x069E])
	 */
	class AStaffBotTalent_C : public AStaffBotBase_C
	{
	public:
		unsigned char                                              UnknownData_U6P7[0x2];                                   // 0x069E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x06A0(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void ChangeToComedyOrMagicStaffBotType(EStaffbotRig StaffBotType);
		void ExecuteUbergraph_StaffBotTalent(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
