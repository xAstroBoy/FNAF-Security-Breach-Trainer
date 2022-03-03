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
	 * Function RemoveAfterMissionComponent.RemoveAfterMissionComponent_C.ReceiveBeginPlay
	 */
	struct URemoveAfterMissionComponent_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function RemoveAfterMissionComponent.RemoveAfterMissionComponent_C.On Mission Completed
	 */
	struct URemoveAfterMissionComponent_C_On_Mission_Completed_Params
	{
	public:
		class FName                                                MissionName;                                             // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FFNAFMissionState                                   MissionState;                                            // 0x0008(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FFNAFMissionInfo                                    MissionInfo;                                             // 0x0028(0x0048)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

	};

	/**
	 * Function RemoveAfterMissionComponent.RemoveAfterMissionComponent_C.ExecuteUbergraph_RemoveAfterMissionComponent
	 */
	struct URemoveAfterMissionComponent_C_ExecuteUbergraph_RemoveAfterMissionComponent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
