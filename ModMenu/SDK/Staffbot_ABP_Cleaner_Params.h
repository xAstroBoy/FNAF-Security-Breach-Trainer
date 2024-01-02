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
	 * Function Staffbot_ABP_Cleaner.Staffbot_ABP_Cleaner_C.BlueprintUpdateAnimation
	 */
	struct UStaffbot_ABP_Cleaner_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Staffbot_ABP_Cleaner.Staffbot_ABP_Cleaner_C.BlueprintBeginPlay
	 */
	struct UStaffbot_ABP_Cleaner_C_BlueprintBeginPlay_Params
	{	};

	/**
	 * Function Staffbot_ABP_Cleaner.Staffbot_ABP_Cleaner_C.isStunnedEvent
	 */
	struct UStaffbot_ABP_Cleaner_C_isStunnedEvent_Params
	{
	public:
		bool                                                       IsStunned;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Staffbot_ABP_Cleaner.Staffbot_ABP_Cleaner_C.WarningEvent
	 */
	struct UStaffbot_ABP_Cleaner_C_WarningEvent_Params
	{
	public:
		bool                                                       IsWarning;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NROQ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    WarningCount;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Staffbot_ABP_Cleaner.Staffbot_ABP_Cleaner_C.AlertEvent
	 */
	struct UStaffbot_ABP_Cleaner_C_AlertEvent_Params
	{
	public:
		bool                                                       isAlerting;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Staffbot_ABP_Cleaner.Staffbot_ABP_Cleaner_C.ExecuteUbergraph_Staffbot_ABP_Cleaner
	 */
	struct UStaffbot_ABP_Cleaner_C_ExecuteUbergraph_Staffbot_ABP_Cleaner_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
