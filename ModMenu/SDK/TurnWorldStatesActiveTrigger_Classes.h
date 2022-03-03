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
	 * BlueprintGeneratedClass TurnWorldStatesActiveTrigger.TurnWorldStatesActiveTrigger_C
	 * Size -> 0x0028 (FullSize[0x02A0] - InheritedSize[0x0278])
	 */
	class ATurnWorldStatesActiveTrigger_C : public APlayerTriggerWithConditionComps
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		TArray<class FName>                                        WorldStaesToActivate;                                    // 0x0280(0x0010) Edit, BlueprintVisible, HasGetValueTypeHash
		TArray<class FName>                                        WorldStatesToDeactivate;                                 // 0x0290(0x0010) Edit, BlueprintVisible, HasGetValueTypeHash

	public:
		void OnTriggered();
		void ExecuteUbergraph_TurnWorldStatesActiveTrigger(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
