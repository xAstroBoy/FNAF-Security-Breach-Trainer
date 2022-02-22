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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function MissionInfoElementHUD.MissionInfoElementHUD_C.Setup
	 */
	struct UMissionInfoElementHUD_C_Setup_Params
	{
	public:
		class FText                                                MissionName;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                MissionDescription;                                      // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       ContainsIcon;                                            // 0x0030(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FText                                                LeftText;                                                // 0x0038(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FName                                                KeyName;                                                 // 0x0050(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                RightText;                                               // 0x0058(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)

	};

	/**
	 * Function MissionInfoElementHUD.MissionInfoElementHUD_C.ExecuteUbergraph_MissionInfoElementHUD
	 */
	struct UMissionInfoElementHUD_C_ExecuteUbergraph_MissionInfoElementHUD_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
