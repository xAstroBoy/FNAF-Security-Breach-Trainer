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
	 * BlueprintGeneratedClass MissionTextFormatterFactory.MissionTextFormatterFactory_C
	 * Size -> 0x00A0 (FullSize[0x00C8] - InheritedSize[0x0028])
	 */
	class UMissionTextFormatterFactory_C : public UObject
	{
	public:
		TMap<class FName, class UClass*>                           MissionFormatterClasses;                                 // 0x0028(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		TMap<class FName, class UMissionTextFormatter_C*>          MissionFormatterInstances;                               // 0x0078(0x0050) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void GetFormattedMissionText(const class FName& MissionName, const struct FFNAFMissionState& MissionState, const struct FFNAFMissionInfo& MissionInfo, const struct FFNAFMissionTaskInfo& TaskInfo, int32_t StateIndex, class FText* FormattedText);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
