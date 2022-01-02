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

// BlueprintGeneratedClass MissionTextFormatter.MissionTextFormatter_C
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UMissionTextFormatter_C : public UObject
{
public:
	struct FName                                       MissionName;                                               // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass MissionTextFormatter.MissionTextFormatter_C");
		return ptr;
	}



	void GetFormattedText(const struct FText& TaskTitleText, const struct FFNAFMissionState& MissionState, int StateIndex, struct FText* FormattedTaskTitleText);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
