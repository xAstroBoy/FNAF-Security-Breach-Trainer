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
	 * Function MissionTriggerBase.MissionTriggerBase_C.ReceiveActorBeginOverlap
	 */
	struct AMissionTriggerBase_C_ReceiveActorBeginOverlap_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MissionTriggerBase.MissionTriggerBase_C.Start Mission
	 */
	struct AMissionTriggerBase_C_Start_Mission_Params
	{
	};

	/**
	 * Function MissionTriggerBase.MissionTriggerBase_C.Attempt Start Mission
	 */
	struct AMissionTriggerBase_C_Attempt_Start_Mission_Params
	{
	};

	/**
	 * Function MissionTriggerBase.MissionTriggerBase_C.ExecuteUbergraph_MissionTriggerBase
	 */
	struct AMissionTriggerBase_C_ExecuteUbergraph_MissionTriggerBase_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
