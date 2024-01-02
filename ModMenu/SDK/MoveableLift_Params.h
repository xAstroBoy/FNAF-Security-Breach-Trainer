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
	 * Function MoveableLift.MoveableLift_C.GetLiftAccessTransform
	 */
	struct AMoveableLift_C_GetLiftAccessTransform_Params
	{
	public:
		bool                                                       Start;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UW7I[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          ReturnValue;                                             // 0x0010(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MoveableLift.MoveableLift_C.Set Moving
	 */
	struct AMoveableLift_C_SetMoving_Params
	{
	public:
		bool                                                       MovingUp;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MoveableLift.MoveableLift_C.ReceiveTick
	 */
	struct AMoveableLift_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MoveableLift.MoveableLift_C.Stop Moving
	 */
	struct AMoveableLift_C_StopMoving_Params
	{	};

	/**
	 * Function MoveableLift.MoveableLift_C.ExecuteUbergraph_MoveableLift
	 */
	struct AMoveableLift_C_ExecuteUbergraph_MoveableLift_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MoveableLift.MoveableLift_C.LiftAlert__DelegateSignature
	 */
	struct AMoveableLift_C_LiftAlert__DelegateSignature_Params
	{	};

	/**
	 * Function MoveableLift.MoveableLift_C.OnDirectionChanged__DelegateSignature
	 */
	struct AMoveableLift_C_OnDirectionChanged__DelegateSignature_Params
	{
	public:
		class AMoveableLift_C*                                     Lift;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Up;                                                      // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MoveableLift.MoveableLift_C.OnLiftStopped__DelegateSignature
	 */
	struct AMoveableLift_C_OnLiftStopped__DelegateSignature_Params
	{
	public:
		class AMoveableLift_C*                                     Lift;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MoveableLift.MoveableLift_C.OnEndReached__DelegateSignature
	 */
	struct AMoveableLift_C_OnEndReached__DelegateSignature_Params
	{
	public:
		class AMoveableLift_C*                                     Lift;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Top;                                                     // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
