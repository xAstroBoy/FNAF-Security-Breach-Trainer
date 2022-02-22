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
	 * BlueprintGeneratedClass AlerterInterface.AlerterInterface_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAlerterInterface_C : public UInterface
	{
	public:
		void SetAlertInfo(TArray<fnaf9_EFNAFAISpawnType> TypesToAlert, int32_t NumberOfAlerts);
		void GetAlertInfo(TArray<fnaf9_EFNAFAISpawnType>* TypesToAlert, int32_t* NumberOfAlerts);
		void IsWarningFinished(bool* Finished);
		void Stop_Warning();
		void Start_Warning(int32_t WarningCount);
		void Stop_Alert(const class FName& Alert);
		void Start_Alert(const class FName& Alert);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
