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
	 * Function GregoryOverlay.GregoryOverlay_C.RunIconToggle
	 */
	struct UGregoryOverlay_C_RunIconToggle_Params
	{
	public:
		bool                                                       On;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_61T3[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function GregoryOverlay.GregoryOverlay_C.CrouchToggle
	 */
	struct UGregoryOverlay_C_CrouchToggle_Params
	{
	public:
		bool                                                       InputPin;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XAAB[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function GregoryOverlay.GregoryOverlay_C.GetCorrentPawnCrouchIcon
	 */
	struct UGregoryOverlay_C_GetCorrentPawnCrouchIcon_Params
	{
	public:
		class UUserWidget*                                         CrouchingIcon;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GregoryOverlay.GregoryOverlay_C.Construct
	 */
	struct UGregoryOverlay_C_Construct_Params
	{	};

	/**
	 * Function GregoryOverlay.GregoryOverlay_C.ChangeBackgroundImage
	 */
	struct UGregoryOverlay_C_ChangeBackgroundImage_Params
	{
	public:
		class UImage*                                              NewImage;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GregoryOverlay.GregoryOverlay_C.DestroyThisHUD
	 */
	struct UGregoryOverlay_C_DestroyThisHUD_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GregoryOverlay.GregoryOverlay_C.ToggleReticle
	 */
	struct UGregoryOverlay_C_ToggleReticle_Params
	{
	public:
		bool                                                       ShowRedDot;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GregoryOverlay.GregoryOverlay_C.ShowHeldItemWidget
	 */
	struct UGregoryOverlay_C_ShowHeldItemWidget_Params
	{
	public:
		class AEquippable_C*                                       Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GregoryOverlay.GregoryOverlay_C.Hide
	 */
	struct UGregoryOverlay_C_Hide_Params
	{
	public:
		bool                                                       HideProgressWheel;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GregoryOverlay.GregoryOverlay_C.Show
	 */
	struct UGregoryOverlay_C_Show_Params
	{	};

	/**
	 * Function GregoryOverlay.GregoryOverlay_C.ShowFlashlightPowerLevel
	 */
	struct UGregoryOverlay_C_ShowFlashlightPowerLevel_Params
	{	};

	/**
	 * Function GregoryOverlay.GregoryOverlay_C.ExecuteUbergraph_GregoryOverlay
	 */
	struct UGregoryOverlay_C_ExecuteUbergraph_GregoryOverlay_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
