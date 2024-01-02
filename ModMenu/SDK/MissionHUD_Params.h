#pragma once

/**
 * Name: FNAFSB
 * Version: 1
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
	 * Function MissionHUD.MissionHUD_C.Finished_3BE9F8A34119AC1E38FAF1A6AA44332C
	 */
	struct UMissionHUD_C_Finished_3BE9F8A34119AC1E38FAF1A6AA44332C_Params
	{	};

	/**
	 * Function MissionHUD.MissionHUD_C.Construct
	 */
	struct UMissionHUD_C_Construct_Params
	{	};

	/**
	 * Function MissionHUD.MissionHUD_C.On New Mission
	 */
	struct UMissionHUD_C_OnNewMission_Params
	{
	public:
		class FName                                                MissionName;                                             // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FFNAFMissionState                                   MissionState;                                            // 0x0008(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FFNAFMissionInfo                                    MissionInfo;                                             // 0x0028(0x0048)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function MissionHUD.MissionHUD_C.On Active Mission Updated
	 */
	struct UMissionHUD_C_OnActiveMissionUpdated_Params
	{
	public:
		class FName                                                MissionName;                                             // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FFNAFMissionState                                   MissionState;                                            // 0x0008(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FFNAFMissionInfo                                    MissionInfo;                                             // 0x0028(0x0048)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function MissionHUD.MissionHUD_C.Start Display
	 */
	struct UMissionHUD_C_StartDisplay_Params
	{	};

	/**
	 * Function MissionHUD.MissionHUD_C.On Fadeout Finished
	 */
	struct UMissionHUD_C_OnFadeoutFinished_Params
	{	};

	/**
	 * Function MissionHUD.MissionHUD_C.On Mission Completed
	 */
	struct UMissionHUD_C_OnMissionCompleted_Params
	{
	public:
		class FName                                                MissionName;                                             // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FFNAFMissionState                                   MissionState;                                            // 0x0008(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FFNAFMissionInfo                                    MissionInfo;                                             // 0x0028(0x0048)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function MissionHUD.MissionHUD_C.ShortTermMissionDisplay
	 */
	struct UMissionHUD_C_ShortTermMissionDisplay_Params
	{
	public:
		class FText                                                MissionName;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                MissionDescription;                                      // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       UseVariablesBelow;                                       // 0x0030(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9YOV[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                LeftText;                                                // 0x0038(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FName                                                KeyName;                                                 // 0x0050(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                RightText;                                               // 0x0058(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function MissionHUD.MissionHUD_C.FadeOutMissionPrompt
	 */
	struct UMissionHUD_C_FadeOutMissionPrompt_Params
	{	};

	/**
	 * Function MissionHUD.MissionHUD_C.ExecuteUbergraph_MissionHUD
	 */
	struct UMissionHUD_C_ExecuteUbergraph_MissionHUD_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MissionHUD.MissionHUD_C.MoveFromCenterToTopLeft__DelegateSignature
	 */
	struct UMissionHUD_C_MoveFromCenterToTopLeft__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
