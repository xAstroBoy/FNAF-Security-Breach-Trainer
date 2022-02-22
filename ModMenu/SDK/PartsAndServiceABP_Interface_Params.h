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
	 * Function PartsAndServiceABP_Interface.PartsAndServiceABP_Interface_C.Close
	 */
	struct UPartsAndServiceABP_Interface_C_Close_Params
	{
	public:
		bool                                                       Close;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function PartsAndServiceABP_Interface.PartsAndServiceABP_Interface_C.Off
	 */
	struct UPartsAndServiceABP_Interface_C_Off_Params
	{
	public:
		bool                                                       Off;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function PartsAndServiceABP_Interface.PartsAndServiceABP_Interface_C.Out
	 */
	struct UPartsAndServiceABP_Interface_C_Out_Params
	{
	public:
		bool                                                       In;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function PartsAndServiceABP_Interface.PartsAndServiceABP_Interface_C.VoiceBoxSwap
	 */
	struct UPartsAndServiceABP_Interface_C_VoiceBoxSwap_Params
	{
	public:
		bool                                                       Off;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function PartsAndServiceABP_Interface.PartsAndServiceABP_Interface_C.ResetFreddy
	 */
	struct UPartsAndServiceABP_Interface_C_ResetFreddy_Params
	{
	};

	/**
	 * Function PartsAndServiceABP_Interface.PartsAndServiceABP_Interface_C.TestButton_G
	 */
	struct UPartsAndServiceABP_Interface_C_TestButton_G_Params
	{
	};

	/**
	 * Function PartsAndServiceABP_Interface.PartsAndServiceABP_Interface_C.TestButton_Y
	 */
	struct UPartsAndServiceABP_Interface_C_TestButton_Y_Params
	{
	};

	/**
	 * Function PartsAndServiceABP_Interface.PartsAndServiceABP_Interface_C.TestButton_B
	 */
	struct UPartsAndServiceABP_Interface_C_TestButton_B_Params
	{
	};

	/**
	 * Function PartsAndServiceABP_Interface.PartsAndServiceABP_Interface_C.TestButton_R
	 */
	struct UPartsAndServiceABP_Interface_C_TestButton_R_Params
	{
	};

	/**
	 * Function PartsAndServiceABP_Interface.PartsAndServiceABP_Interface_C.PartsAndServiceGame
	 */
	struct UPartsAndServiceABP_Interface_C_PartsAndServiceGame_Params
	{
	public:
		PartsAndServiceAnimEnum_EPartsAndServiceAnimEnum           GameEnum;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
