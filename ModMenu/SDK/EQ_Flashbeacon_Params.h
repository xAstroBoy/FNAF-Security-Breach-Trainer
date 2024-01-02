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
	 * Function EQ_Flashbeacon.EQ_Flashbeacon_C.Get Anim Item Type
	 */
	struct AEQ_Flashbeacon_C_GetAnimItemType_Params
	{
	public:
		EGregoryAnimItemEnum                                       AnimType;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EQ_Flashbeacon.EQ_Flashbeacon_C.PutAway
	 */
	struct AEQ_Flashbeacon_C_PutAway_Params
	{	};

	/**
	 * Function EQ_Flashbeacon.EQ_Flashbeacon_C.PullOut
	 */
	struct AEQ_Flashbeacon_C_PullOut_Params
	{	};

	/**
	 * Function EQ_Flashbeacon.EQ_Flashbeacon_C.PrimaryAction
	 */
	struct AEQ_Flashbeacon_C_PrimaryAction_Params
	{	};

	/**
	 * Function EQ_Flashbeacon.EQ_Flashbeacon_C.ResetCamUse
	 */
	struct AEQ_Flashbeacon_C_ResetCamUse_Params
	{	};

	/**
	 * Function EQ_Flashbeacon.EQ_Flashbeacon_C.Recharging
	 */
	struct AEQ_Flashbeacon_C_Recharging_Params
	{	};

	/**
	 * Function EQ_Flashbeacon.EQ_Flashbeacon_C.RechargeDone
	 */
	struct AEQ_Flashbeacon_C_RechargeDone_Params
	{	};

	/**
	 * Function EQ_Flashbeacon.EQ_Flashbeacon_C.RemoveFazcam
	 */
	struct AEQ_Flashbeacon_C_RemoveFazcam_Params
	{	};

	/**
	 * Function EQ_Flashbeacon.EQ_Flashbeacon_C.ExecuteUbergraph_EQ_Flashbeacon
	 */
	struct AEQ_Flashbeacon_C_ExecuteUbergraph_EQ_Flashbeacon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_R7VP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
