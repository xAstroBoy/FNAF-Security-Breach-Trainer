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
	 * Function PlayerUI.PlayerUI_C.Get_BunnyMaskCounterBox_Visibility
	 */
	struct UPlayerUI_C_Get_BunnyMaskCounterBox_Visibility_Params
	{
	public:
		UMG_ESlateVisibility                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerUI.PlayerUI_C.Get_BunnyPlushCounterBox_Visibility
	 */
	struct UPlayerUI_C_Get_BunnyPlushCounterBox_Visibility_Params
	{
	public:
		UMG_ESlateVisibility                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerUI.PlayerUI_C.BunnyMaskAnim_Counter
	 */
	struct UPlayerUI_C_BunnyMaskAnim_Counter_Params
	{
	public:
		struct FSlateBrush                                         ReturnValue;                                             // 0x0000(0x0088)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function PlayerUI.PlayerUI_C.BunnyMaskAnim
	 */
	struct UPlayerUI_C_BunnyMaskAnim_Params
	{
	public:
		struct FSlateBrush                                         ReturnValue;                                             // 0x0000(0x0088)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function PlayerUI.PlayerUI_C.BunnyPlushAnim
	 */
	struct UPlayerUI_C_BunnyPlushAnim_Params
	{
	public:
		struct FSlateBrush                                         ReturnValue;                                             // 0x0000(0x0088)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function PlayerUI.PlayerUI_C.BunnyPlushAnim_Counter
	 */
	struct UPlayerUI_C_BunnyPlushAnim_Counter_Params
	{
	public:
		struct FSlateBrush                                         ReturnValue;                                             // 0x0000(0x0088)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function PlayerUI.PlayerUI_C.GetBrush_1
	 */
	struct UPlayerUI_C_GetBrush_1_Params
	{
	public:
		struct FSlateBrush                                         ReturnValue;                                             // 0x0000(0x0088)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function PlayerUI.PlayerUI_C.AnimateSprite
	 */
	struct UPlayerUI_C_AnimateSprite_Params
	{
	public:
		class UPaperFlipbook*                                      SourceFlipbook;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Timer;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPaperSprite*                                        SpriteOutput;                                            // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerUI.PlayerUI_C.BossKeyAnim_Counter
	 */
	struct UPlayerUI_C_BossKeyAnim_Counter_Params
	{
	public:
		struct FSlateBrush                                         ReturnValue;                                             // 0x0000(0x0088)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function PlayerUI.PlayerUI_C.BossKeyAnim
	 */
	struct UPlayerUI_C_BossKeyAnim_Params
	{
	public:
		struct FSlateBrush                                         ReturnValue;                                             // 0x0000(0x0088)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function PlayerUI.PlayerUI_C.Get_BossKeyCounterBox_Visibility
	 */
	struct UPlayerUI_C_Get_BossKeyCounterBox_Visibility_Params
	{
	public:
		UMG_ESlateVisibility                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerUI.PlayerUI_C.Get_SmallKeyCounterBox_Visibility
	 */
	struct UPlayerUI_C_Get_SmallKeyCounterBox_Visibility_Params
	{
	public:
		UMG_ESlateVisibility                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerUI.PlayerUI_C.Get_NumberOfKeysText
	 */
	struct UPlayerUI_C_Get_NumberOfKeysText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function PlayerUI.PlayerUI_C.HideAllMessages
	 */
	struct UPlayerUI_C_HideAllMessages_Params
	{
	};

	/**
	 * Function PlayerUI.PlayerUI_C.Construct
	 */
	struct UPlayerUI_C_Construct_Params
	{
	};

	/**
	 * Function PlayerUI.PlayerUI_C.PickupHeartContainer
	 */
	struct UPlayerUI_C_PickupHeartContainer_Params
	{
	};

	/**
	 * Function PlayerUI.PlayerUI_C.SmallKeyPickup
	 */
	struct UPlayerUI_C_SmallKeyPickup_Params
	{
	};

	/**
	 * Function PlayerUI.PlayerUI_C.BossKeyPickup
	 */
	struct UPlayerUI_C_BossKeyPickup_Params
	{
	};

	/**
	 * Function PlayerUI.PlayerUI_C.TakeDamage
	 */
	struct UPlayerUI_C_TakeDamage_Params
	{
	};

	/**
	 * Function PlayerUI.PlayerUI_C.HealFull
	 */
	struct UPlayerUI_C_HealFull_Params
	{
	};

	/**
	 * Function PlayerUI.PlayerUI_C.BlinkHearts
	 */
	struct UPlayerUI_C_BlinkHearts_Params
	{
	public:
		float                                                      BlinkRate;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    BlinkAmount;                                             // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerUI.PlayerUI_C.PickupSingleHeart
	 */
	struct UPlayerUI_C_PickupSingleHeart_Params
	{
	};

	/**
	 * Function PlayerUI.PlayerUI_C.LockedDoorMsg
	 */
	struct UPlayerUI_C_LockedDoorMsg_Params
	{
	};

	/**
	 * Function PlayerUI.PlayerUI_C.OnInitialized
	 */
	struct UPlayerUI_C_OnInitialized_Params
	{
	};

	/**
	 * Function PlayerUI.PlayerUI_C.StoneDoorMsg
	 */
	struct UPlayerUI_C_StoneDoorMsg_Params
	{
	};

	/**
	 * Function PlayerUI.PlayerUI_C.GiveMessage
	 */
	struct UPlayerUI_C_GiveMessage_Params
	{
	};

	/**
	 * Function PlayerUI.PlayerUI_C.Tick
	 */
	struct UPlayerUI_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerUI.PlayerUI_C.BossMessage
	 */
	struct UPlayerUI_C_BossMessage_Params
	{
	};

	/**
	 * Function PlayerUI.PlayerUI_C.BunnyPlushPickup
	 */
	struct UPlayerUI_C_BunnyPlushPickup_Params
	{
	};

	/**
	 * Function PlayerUI.PlayerUI_C.BunnyMaskPickup
	 */
	struct UPlayerUI_C_BunnyMaskPickup_Params
	{
	};

	/**
	 * Function PlayerUI.PlayerUI_C.ExecuteUbergraph_PlayerUI
	 */
	struct UPlayerUI_C_ExecuteUbergraph_PlayerUI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
