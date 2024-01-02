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
	 * Function SSD_Backstage_Office.SSD_Backstage_Office_C.SwitchCamera
	 */
	struct ASSD_Backstage_Office_C_SwitchCamera_Params
	{
	public:
		int32_t                                                    CamIndex;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_83LX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SSD_Backstage_Office.SSD_Backstage_Office_C.ReceiveBeginPlay
	 */
	struct ASSD_Backstage_Office_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function SSD_Backstage_Office.SSD_Backstage_Office_C.ReceiveTick
	 */
	struct ASSD_Backstage_Office_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SSD_Backstage_Office.SSD_Backstage_Office_C.OnDoorOverlapped
	 */
	struct ASSD_Backstage_Office_C_OnDoorOverlapped_Params
	{	};

	/**
	 * Function SSD_Backstage_Office.SSD_Backstage_Office_C.ExecuteUbergraph_SSD_Backstage_Office
	 */
	struct ASSD_Backstage_Office_C_ExecuteUbergraph_SSD_Backstage_Office_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
