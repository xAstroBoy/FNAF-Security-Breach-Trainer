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
	 * Function Vanny.Vanny_C.On Jumpscare
	 */
	struct AVanny_C_On_Jumpscare_Params
	{
	public:
		class AGregory_C*                                          Gregory;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Vanny.Vanny_C.ReceiveTick
	 */
	struct AVanny_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Vanny.Vanny_C.ReceiveBeginPlay
	 */
	struct AVanny_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function Vanny.Vanny_C.Jumpscare
	 */
	struct AVanny_C_Jumpscare_Params
	{
	public:
		class AActor*                                              ActorToJumpscare;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Vanny.Vanny_C.Stun
	 */
	struct AVanny_C_Stun_Params
	{
	};

	/**
	 * Function Vanny.Vanny_C.SetChaseMode
	 */
	struct AVanny_C_SetChaseMode_Params
	{
	public:
		bool                                                       Chase;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       UseOverrideSpeed;                                        // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      OverrideSpeed;                                           // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Vanny.Vanny_C.ReceiveDestroyed
	 */
	struct AVanny_C_ReceiveDestroyed_Params
	{
	};

	/**
	 * Function Vanny.Vanny_C.ReceiveEndPlay
	 */
	struct AVanny_C_ReceiveEndPlay_Params
	{
	public:
		Engine_EEndPlayReason                                      EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Vanny.Vanny_C.ExecuteUbergraph_Vanny
	 */
	struct AVanny_C_ExecuteUbergraph_Vanny_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
