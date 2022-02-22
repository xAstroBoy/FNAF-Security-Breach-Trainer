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
	 * BlueprintGeneratedClass SurvivalMissionTextFormatter.SurvivalMissionTextFormatter_C
	 * Size -> 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
	 */
	class USurvivalMissionTextFormatter_C : public UMissionTextFormatter_C
	{
	public:
		unsigned char                                              SurvivalRandomizer[0x28];                                // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

	public:
		void GetFormattedText(const class FText& TaskTitleText, const struct FFNAFMissionState& MissionState, int32_t StateIndex, class FText* FormattedTaskTitleText);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
