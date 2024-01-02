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
	 * Function RRStaffBotManager.RRStaffBotManager_C.ReceiveBeginPlay
	 */
	struct ARRStaffBotManager_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function RRStaffBotManager.RRStaffBotManager_C.On Alert
	 */
	struct ARRStaffBotManager_C_OnAlert_Params
	{
	public:
		class FName                                                Alert;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Location;                                                // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RRStaffBotManager.RRStaffBotManager_C.BndEvt__TimeCheckComponent_K2Node_ComponentBoundEvent_0_MoonManTimeHit__DelegateSignature
	 */
	struct ARRStaffBotManager_C_BndEvt__TimeCheckComponent_K2Node_ComponentBoundEvent_0_MoonManTimeHit__DelegateSignature_Params
	{	};

	/**
	 * Function RRStaffBotManager.RRStaffBotManager_C.ExecuteUbergraph_RRStaffBotManager
	 */
	struct ARRStaffBotManager_C_ExecuteUbergraph_RRStaffBotManager_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
