#pragma once

// Name: FNAF Security Breach, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DJMusicManTextFormatter.DJMusicManTextFormatter_C
// 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
class UDJMusicManTextFormatter_C : public UMissionTextFormatter_C
{
public:
	unsigned char                                      WestArcadeOffice[0x28];                                    // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass DJMusicManTextFormatter.DJMusicManTextFormatter_C");
		return ptr;
	}



	void GetFormattedText(const struct FText& TaskTitleText, const struct FFNAFMissionState& MissionState, int StateIndex, struct FText* FormattedTaskTitleText);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
