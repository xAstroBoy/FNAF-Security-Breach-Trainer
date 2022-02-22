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
	 * BlueprintGeneratedClass ShatteredChicaMissionTextFormatter.ShatteredChicaMissionTextFormatter_C
	 * Size -> 0x0014 (FullSize[0x0044] - InheritedSize[0x0030])
	 */
	class UShatteredChicaMissionTextFormatter_C : public UMissionTextFormatter_C
	{
	public:
		unsigned char                                              Generators[0x10];                                        // 0x0030(0x0010) UNKNOWN PROPERTY: ArrayProperty
		int32_t                                                    Count;                                                   // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetFormattedText(const class FText& TaskTitleText, const struct FFNAFMissionState& MissionState, int32_t StateIndex, class FText* FormattedTaskTitleText);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
