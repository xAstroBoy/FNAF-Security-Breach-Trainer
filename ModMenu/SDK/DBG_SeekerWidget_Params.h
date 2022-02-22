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
	 * Function DBG_SeekerWidget.DBG_SeekerWidget_C.Get_CurrentRoomText_Text_1
	 */
	struct UDBG_SeekerWidget_C_Get_CurrentRoomText_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function DBG_SeekerWidget.DBG_SeekerWidget_C.Setup
	 */
	struct UDBG_SeekerWidget_C_Setup_Params
	{
	public:
		class AAISeeker_C*                                         AISeeker;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function DBG_SeekerWidget.DBG_SeekerWidget_C.ExecuteUbergraph_DBG_SeekerWidget
	 */
	struct UDBG_SeekerWidget_C_ExecuteUbergraph_DBG_SeekerWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
