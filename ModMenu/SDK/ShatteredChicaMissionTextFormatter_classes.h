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

// BlueprintGeneratedClass ShatteredChicaMissionTextFormatter.ShatteredChicaMissionTextFormatter_C
// 0x0014 (FullSize[0x0044] - InheritedSize[0x0030])
class UShatteredChicaMissionTextFormatter_C : public UMissionTextFormatter_C
{
public:
	unsigned char                                      Generators[0x10];                                          // 0x0030(0x0010) UNKNOWN PROPERTY: ArrayProperty
	int                                                Count;                                                     // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass ShatteredChicaMissionTextFormatter.ShatteredChicaMissionTextFormatter_C");
		return ptr;
	}



	void GetFormattedText(const struct FText& TaskTitleText, const struct FFNAFMissionState& MissionState, int StateIndex, struct FText* FormattedTaskTitleText);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
