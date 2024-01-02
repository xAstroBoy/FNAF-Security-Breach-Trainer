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
	 * BlueprintGeneratedClass AutosaveTrigger_Daycare.AutosaveTrigger_Daycare_C
	 * Size -> 0x000F (FullSize[0x0288] - InheritedSize[0x0279])
	 */
	class AAutosaveTrigger_Daycare_C : public AAutosaveTrigger_C
	{
	public:
		unsigned char                                              UnknownData_DG53[0x7];                                   // 0x0279(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void OnTriggered();
		void ExecuteUbergraph_AutosaveTrigger_Daycare(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
