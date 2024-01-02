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
	 * Function Staffbot_ABP_Security.Staffbot_ABP_Security_C.BlueprintUpdateAnimation
	 */
	struct UStaffbot_ABP_Security_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Staffbot_ABP_Security.Staffbot_ABP_Security_C.BlueprintBeginPlay
	 */
	struct UStaffbot_ABP_Security_C_BlueprintBeginPlay_Params
	{	};

	/**
	 * Function Staffbot_ABP_Security.Staffbot_ABP_Security_C.AimHead_Event
	 */
	struct UStaffbot_ABP_Security_C_AimHead_Event_Params
	{
	public:
		bool                                                       AimHead;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Staffbot_ABP_Security.Staffbot_ABP_Security_C.CanJumpscareEvent
	 */
	struct UStaffbot_ABP_Security_C_CanJumpscareEvent_Params
	{	};

	/**
	 * Function Staffbot_ABP_Security.Staffbot_ABP_Security_C.JumpscareEvent
	 */
	struct UStaffbot_ABP_Security_C_JumpscareEvent_Params
	{
	public:
		bool                                                       CanJumpscare;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Staffbot_ABP_Security.Staffbot_ABP_Security_C.ExecuteUbergraph_Staffbot_ABP_Security
	 */
	struct UStaffbot_ABP_Security_C_ExecuteUbergraph_Staffbot_ABP_Security_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
