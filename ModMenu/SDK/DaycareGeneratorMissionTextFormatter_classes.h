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
	 * BlueprintGeneratedClass DaycareGeneratorMissionTextFormatter.DaycareGeneratorMissionTextFormatter_C
	 * Size -> 0x002C (FullSize[0x005C] - InheritedSize[0x0030])
	 */
	class UDaycareGeneratorMissionTextFormatter_C : public UMissionTextFormatter_C
	{
	public:
		unsigned char                                              ActivatorTest[0x28];                                     // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		int32_t                                                    NumberActivators;                                        // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetFormattedText(const class FText& TaskTitleText, const struct FFNAFMissionState& MissionState, int32_t StateIndex, class FText* FormattedTaskTitleText);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
