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
	 * Function SSD_Backstage_Office.SSD_Backstage_Office_C.SwitchCamera
	 */
	struct ASSD_Backstage_Office_C_SwitchCamera_Params
	{
	public:
		int32_t                                                    Cam_Index;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SSD_Backstage_Office.SSD_Backstage_Office_C.ReceiveBeginPlay
	 */
	struct ASSD_Backstage_Office_C_ReceiveBeginPlay_Params
	{
	};

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
	{
	};

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
