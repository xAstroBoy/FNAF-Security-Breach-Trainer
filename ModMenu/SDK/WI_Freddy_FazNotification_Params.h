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
	 * Function WI_Freddy_FazNotification.WI_Freddy_FazNotification_C.NewNotification
	 */
	struct UWI_Freddy_FazNotification_C_NewNotification_Params
	{	};

	/**
	 * Function WI_Freddy_FazNotification.WI_Freddy_FazNotification_C.TurnOffNotification
	 */
	struct UWI_Freddy_FazNotification_C_TurnOffNotification_Params
	{	};

	/**
	 * Function WI_Freddy_FazNotification.WI_Freddy_FazNotification_C.NewMissionAdded
	 */
	struct UWI_Freddy_FazNotification_C_NewMissionAdded_Params
	{
	public:
		class FName                                                MissionName;                                             // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FFNAFMissionState                                   MissionState;                                            // 0x0008(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FFNAFMissionInfo                                    MissionInfo;                                             // 0x0028(0x0048)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WI_Freddy_FazNotification.WI_Freddy_FazNotification_C.MissionUpdated
	 */
	struct UWI_Freddy_FazNotification_C_MissionUpdated_Params
	{
	public:
		class FName                                                MissionName;                                             // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FFNAFMissionState                                   MissionState;                                            // 0x0008(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FFNAFMissionInfo                                    MissionInfo;                                             // 0x0028(0x0048)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WI_Freddy_FazNotification.WI_Freddy_FazNotification_C.Construct
	 */
	struct UWI_Freddy_FazNotification_C_Construct_Params
	{	};

	/**
	 * Function WI_Freddy_FazNotification.WI_Freddy_FazNotification_C.EnemyOnCamera
	 */
	struct UWI_Freddy_FazNotification_C_EnemyOnCamera_Params
	{
	public:
		class ASecurityCamera*                                     SecurityCamera;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WI_Freddy_FazNotification.WI_Freddy_FazNotification_C.Lost Sight
	 */
	struct UWI_Freddy_FazNotification_C_LostSight_Params
	{
	public:
		class ASecurityCamera*                                     SecurityCamera;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WI_Freddy_FazNotification.WI_Freddy_FazNotification_C.NewMessageAdded
	 */
	struct UWI_Freddy_FazNotification_C_NewMessageAdded_Params
	{
	public:
		class FName                                                MessageName;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FFNAFMessageTableStruct                             MessageInfo;                                             // 0x0008(0x0068)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WI_Freddy_FazNotification.WI_Freddy_FazNotification_C.New Message
	 */
	struct UWI_Freddy_FazNotification_C_NewMessage_Params
	{	};

	/**
	 * Function WI_Freddy_FazNotification.WI_Freddy_FazNotification_C.UpdateFazWatchColor
	 */
	struct UWI_Freddy_FazNotification_C_UpdateFazWatchColor_Params
	{	};

	/**
	 * Function WI_Freddy_FazNotification.WI_Freddy_FazNotification_C.ExecuteUbergraph_WI_Freddy_FazNotification
	 */
	struct UWI_Freddy_FazNotification_C_ExecuteUbergraph_WI_Freddy_FazNotification_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
