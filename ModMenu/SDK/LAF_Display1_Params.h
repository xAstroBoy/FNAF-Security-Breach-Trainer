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
	 * Function LAF_Display1.LAF_Display1_C.StopEmitter
	 */
	struct ALAF_Display1_C_StopEmitter_Params
	{
	};

	/**
	 * Function LAF_Display1.LAF_Display1_C.PlayEmitter
	 */
	struct ALAF_Display1_C_PlayEmitter_Params
	{
	};

	/**
	 * Function LAF_Display1.LAF_Display1_C.ToggleInRange
	 */
	struct ALAF_Display1_C_ToggleInRange_Params
	{
	public:
		bool                                                       InRange;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function LAF_Display1.LAF_Display1_C.ReceiveBeginPlay
	 */
	struct ALAF_Display1_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function LAF_Display1.LAF_Display1_C.Stop Video
	 */
	struct ALAF_Display1_C_Stop_Video_Params
	{
	};

	/**
	 * Function LAF_Display1.LAF_Display1_C.ExecuteUbergraph_LAF_Display1
	 */
	struct ALAF_Display1_C_ExecuteUbergraph_LAF_Display1_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
