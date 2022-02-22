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
	 * Function Cable_ABP.Cable_ABP_C.AnimGraph
	 */
	struct UCable_ABP_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)

	};

	/**
	 * Function Cable_ABP.Cable_ABP_C.Off
	 */
	struct UCable_ABP_C_Off_Params
	{
	public:
		bool                                                       Off;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Cable_ABP.Cable_ABP_C.Close
	 */
	struct UCable_ABP_C_Close_Params
	{
	public:
		bool                                                       Close;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Cable_ABP.Cable_ABP_C.TestButton_G
	 */
	struct UCable_ABP_C_TestButton_G_Params
	{
	};

	/**
	 * Function Cable_ABP.Cable_ABP_C.TestButton_Y
	 */
	struct UCable_ABP_C_TestButton_Y_Params
	{
	};

	/**
	 * Function Cable_ABP.Cable_ABP_C.TestButton_B
	 */
	struct UCable_ABP_C_TestButton_B_Params
	{
	};

	/**
	 * Function Cable_ABP.Cable_ABP_C.VoiceBoxSwap
	 */
	struct UCable_ABP_C_VoiceBoxSwap_Params
	{
	public:
		bool                                                       Off;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Cable_ABP.Cable_ABP_C.TestButton_R
	 */
	struct UCable_ABP_C_TestButton_R_Params
	{
	};

	/**
	 * Function Cable_ABP.Cable_ABP_C.PartsAndServiceGame
	 */
	struct UCable_ABP_C_PartsAndServiceGame_Params
	{
	public:
		PartsAndServiceAnimEnum_EPartsAndServiceAnimEnum           GameEnum;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Cable_ABP.Cable_ABP_C.ResetFreddy
	 */
	struct UCable_ABP_C_ResetFreddy_Params
	{
	};

	/**
	 * Function Cable_ABP.Cable_ABP_C.BlueprintUpdateAnimation
	 */
	struct UCable_ABP_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Cable_ABP.Cable_ABP_C.BlueprintBeginPlay
	 */
	struct UCable_ABP_C_BlueprintBeginPlay_Params
	{
	};

	/**
	 * Function Cable_ABP.Cable_ABP_C.Out
	 */
	struct UCable_ABP_C_Out_Params
	{
	public:
		bool                                                       In;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Cable_ABP.Cable_ABP_C.ExecuteUbergraph_Cable_ABP
	 */
	struct UCable_ABP_C_ExecuteUbergraph_Cable_ABP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
