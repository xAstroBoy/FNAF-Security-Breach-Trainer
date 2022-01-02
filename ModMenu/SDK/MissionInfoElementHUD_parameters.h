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
// Parameters
//---------------------------------------------------------------------------

// Function MissionInfoElementHUD.MissionInfoElementHUD_C.Setup
struct UMissionInfoElementHUD_C_Setup_Params
{
	struct FText                                       MissionName;                                               // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       MissionDescription;                                        // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               ContainsIcon;                                              // 0x0030(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FText                                       LeftText;                                                  // 0x0038(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FName                                       KeyName;                                                   // 0x0050(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       RightText;                                                 // 0x0058(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function MissionInfoElementHUD.MissionInfoElementHUD_C.ExecuteUbergraph_MissionInfoElementHUD
struct UMissionInfoElementHUD_C_ExecuteUbergraph_MissionInfoElementHUD_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
