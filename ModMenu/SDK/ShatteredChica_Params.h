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
	 * Function ShatteredChica.ShatteredChica_C.IsMeshVisible
	 */
	struct AShatteredChica_C_IsMeshVisible_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ShatteredChica.ShatteredChica_C.GetManagedAIType
	 */
	struct AShatteredChica_C_GetManagedAIType_Params
	{
	public:
		EFNAFAISpawnType                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShatteredChica.ShatteredChica_C.IsShatteredVersion
	 */
	struct AShatteredChica_C_IsShatteredVersion_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ShatteredChica.ShatteredChica_C.SetCanHeadRotate
	 */
	struct AShatteredChica_C_SetCanHeadRotate_Params
	{
	public:
		bool                                                       BoolValue;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZOU0[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ShatteredChica.ShatteredChica_C.ReceiveBeginPlay
	 */
	struct AShatteredChica_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function ShatteredChica.ShatteredChica_C.ReceiveTick
	 */
	struct AShatteredChica_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShatteredChica.ShatteredChica_C.Break Through Wall
	 */
	struct AShatteredChica_C_BreakThroughWall_Params
	{
	public:
		struct FVector                                             StartPosition;                                           // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             EndPosition;                                             // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShatteredChica.ShatteredChica_C.BndEvt__InterpMoveComponent_K2Node_ComponentBoundEvent_0_OnInterpFinished__DelegateSignature
	 */
	struct AShatteredChica_C_BndEvt__InterpMoveComponent_K2Node_ComponentBoundEvent_0_OnInterpFinished__DelegateSignature_Params
	{	};

	/**
	 * Function ShatteredChica.ShatteredChica_C.On Head Spin Time
	 */
	struct AShatteredChica_C_OnHeadSpinTime_Params
	{	};

	/**
	 * Function ShatteredChica.ShatteredChica_C.Stun
	 */
	struct AShatteredChica_C_Stun_Params
	{	};

	/**
	 * Function ShatteredChica.ShatteredChica_C.Unstun
	 */
	struct AShatteredChica_C_Unstun_Params
	{	};

	/**
	 * Function ShatteredChica.ShatteredChica_C.OnBreakThroughWall
	 */
	struct AShatteredChica_C_OnBreakThroughWall_Params
	{
	public:
		struct FVector                                             StartPosition;                                           // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             EndPosition;                                             // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShatteredChica.ShatteredChica_C.Start Head Spin Timer
	 */
	struct AShatteredChica_C_StartHeadSpinTimer_Params
	{	};

	/**
	 * Function ShatteredChica.ShatteredChica_C.Stop Head Spin Timer
	 */
	struct AShatteredChica_C_StopHeadSpinTimer_Params
	{	};

	/**
	 * Function ShatteredChica.ShatteredChica_C.Spin Head
	 */
	struct AShatteredChica_C_SpinHead_Params
	{	};

	/**
	 * Function ShatteredChica.ShatteredChica_C.Stop Head Spin
	 */
	struct AShatteredChica_C_StopHeadSpin_Params
	{	};

	/**
	 * Function ShatteredChica.ShatteredChica_C.ExecuteUbergraph_ShatteredChica
	 */
	struct AShatteredChica_C_ExecuteUbergraph_ShatteredChica_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
