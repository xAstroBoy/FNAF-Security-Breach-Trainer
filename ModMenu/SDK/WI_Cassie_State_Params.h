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
	 * Function WI_Cassie_State.WI_Cassie_State_C.CassieStateUpdate
	 */
	struct UWI_Cassie_State_C_CassieStateUpdate_Params
	{
	public:
		bool                                                       IsCrouched;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsRunning;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WI_Cassie_State.WI_Cassie_State_C.RunningToggle
	 */
	struct UWI_Cassie_State_C_RunningToggle_Params
	{
	public:
		bool                                                       On;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WI_Cassie_State.WI_Cassie_State_C.CrouchingToggle
	 */
	struct UWI_Cassie_State_C_CrouchingToggle_Params
	{
	public:
		bool                                                       On;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WI_Cassie_State.WI_Cassie_State_C.Finished_ABCF86A04A89A23C3A424D9E53D03C7D
	 */
	struct UWI_Cassie_State_C_Finished_ABCF86A04A89A23C3A424D9E53D03C7D_Params
	{	};

	/**
	 * Function WI_Cassie_State.WI_Cassie_State_C.FadeOutCassieState
	 */
	struct UWI_Cassie_State_C_FadeOutCassieState_Params
	{	};

	/**
	 * Function WI_Cassie_State.WI_Cassie_State_C.Construct
	 */
	struct UWI_Cassie_State_C_Construct_Params
	{	};

	/**
	 * Function WI_Cassie_State.WI_Cassie_State_C.ExecuteUbergraph_WI_Cassie_State
	 */
	struct UWI_Cassie_State_C_ExecuteUbergraph_WI_Cassie_State_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
