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
	 * Function GregoryOverlay.GregoryOverlay_C.LoadHud
	 */
	struct UGregoryOverlay_C_LoadHud_Params
	{
	};

	/**
	 * Function GregoryOverlay.GregoryOverlay_C.Construct
	 */
	struct UGregoryOverlay_C_Construct_Params
	{
	};

	/**
	 * Function GregoryOverlay.GregoryOverlay_C.ChangeBackgroundImage
	 */
	struct UGregoryOverlay_C_ChangeBackgroundImage_Params
	{
	public:
		class UImage*                                              New_Image;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

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
		bool                                                       HoldingFazerBlaster;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function GregoryOverlay.GregoryOverlay_C.ShowHeldItemWidget
	 */
	struct UGregoryOverlay_C_ShowHeldItemWidget_Params
	{
	};

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
