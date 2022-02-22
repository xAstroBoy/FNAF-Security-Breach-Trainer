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
	 * Function PlayerControlledStaffBot_Kitchen.PlayerControlledStaffBot_Kitchen_C.ReturnToStart
	 */
	struct APlayerControlledStaffBot_Kitchen_C_ReturnToStart_Params
	{
	};

	/**
	 * Function PlayerControlledStaffBot_Kitchen.PlayerControlledStaffBot_Kitchen_C.ReceiveBeginPlay
	 */
	struct APlayerControlledStaffBot_Kitchen_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function PlayerControlledStaffBot_Kitchen.PlayerControlledStaffBot_Kitchen_C.OnJumped
	 */
	struct APlayerControlledStaffBot_Kitchen_C_OnJumped_Params
	{
	};

	/**
	 * Function PlayerControlledStaffBot_Kitchen.PlayerControlledStaffBot_Kitchen_C.ChangeLightState
	 */
	struct APlayerControlledStaffBot_Kitchen_C_ChangeLightState_Params
	{
	public:
		bool                                                       On;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function PlayerControlledStaffBot_Kitchen.PlayerControlledStaffBot_Kitchen_C.Setup
	 */
	struct APlayerControlledStaffBot_Kitchen_C_Setup_Params
	{
	public:
		class AOGM_Kitchen_C*                                      I_OGM_Kitchen;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerControlledStaffBot_Kitchen.PlayerControlledStaffBot_Kitchen_C.ReceiveTick
	 */
	struct APlayerControlledStaffBot_Kitchen_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerControlledStaffBot_Kitchen.PlayerControlledStaffBot_Kitchen_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_1
	 */
	struct APlayerControlledStaffBot_Kitchen_C_InpAxisEvt_Turn_K2Node_InputAxisEvent_1_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerControlledStaffBot_Kitchen.PlayerControlledStaffBot_Kitchen_C.ExecuteUbergraph_PlayerControlledStaffBot_Kitchen
	 */
	struct APlayerControlledStaffBot_Kitchen_C_ExecuteUbergraph_PlayerControlledStaffBot_Kitchen_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
