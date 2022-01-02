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

// BlueprintGeneratedClass MissionTextFormatterFactory.MissionTextFormatterFactory_C
// 0x00A0 (FullSize[0x00C8] - InheritedSize[0x0028])
class UMissionTextFormatterFactory_C : public UObject
{
public:
	TMap<struct FName, class UClass*>                  MissionFormatterClasses;                                   // 0x0028(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<struct FName, class UMissionTextFormatter_C*> MissionFormatterInstances;                                 // 0x0078(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass MissionTextFormatterFactory.MissionTextFormatterFactory_C");
		return ptr;
	}



	void GetFormattedMissionText(const struct FName& MissionName, const struct FFNAFMissionState& MissionState, const struct FFNAFMissionInfo& MissionInfo, const struct FFNAFMissionTaskInfo& TaskInfo, int StateIndex, struct FText* FormattedText);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
