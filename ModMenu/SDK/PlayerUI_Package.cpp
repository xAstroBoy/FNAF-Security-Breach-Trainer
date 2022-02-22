/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PlayerUI.PlayerUI_C.Get_BunnyMaskCounterBox_Visibility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	UMG_ESlateVisibility UPlayerUI_C::Get_BunnyMaskCounterBox_Visibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerUI.PlayerUI_C.Get_BunnyMaskCounterBox_Visibility");
		
		UPlayerUI_C_Get_BunnyMaskCounterBox_Visibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PlayerUI.PlayerUI_C.Get_BunnyPlushCounterBox_Visibility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	UMG_ESlateVisibility UPlayerUI_C::Get_BunnyPlushCounterBox_Visibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerUI.PlayerUI_C.Get_BunnyPlushCounterBox_Visibility");
		
		UPlayerUI_C_Get_BunnyPlushCounterBox_Visibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PlayerUI.PlayerUI_C.BunnyMaskAnim_Counter
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FSlateBrush UPlayerUI_C::BunnyMaskAnim_Counter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerUI.PlayerUI_C.BunnyMaskAnim_Counter");
		
		UPlayerUI_C_BunnyMaskAnim_Counter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PlayerUI.PlayerUI_C.BunnyMaskAnim
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FSlateBrush UPlayerUI_C::BunnyMaskAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerUI.PlayerUI_C.BunnyMaskAnim");
		
		UPlayerUI_C_BunnyMaskAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PlayerUI.PlayerUI_C.BunnyPlushAnim
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FSlateBrush UPlayerUI_C::BunnyPlushAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerUI.PlayerUI_C.BunnyPlushAnim");
		
		UPlayerUI_C_BunnyPlushAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PlayerUI.PlayerUI_C.BunnyPlushAnim_Counter
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FSlateBrush UPlayerUI_C::BunnyPlushAnim_Counter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerUI.PlayerUI_C.BunnyPlushAnim_Counter");
		
		UPlayerUI_C_BunnyPlushAnim_Counter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PlayerUI.PlayerUI_C.GetBrush_1
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FSlateBrush UPlayerUI_C::GetBrush_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerUI.PlayerUI_C.GetBrush_1");
		
		UPlayerUI_C_GetBrush_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PlayerUI.PlayerUI_C.AnimateSprite
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPaperFlipbook*                              SourceFlipbook                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Timer                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPaperSprite*                                SpriteOutput                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerUI_C::AnimateSprite(class UPaperFlipbook* SourceFlipbook, float Timer, class UPaperSprite** SpriteOutput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerUI.PlayerUI_C.AnimateSprite");
		
		UPlayerUI_C_AnimateSprite_Params params {};
		params.SourceFlipbook = SourceFlipbook;
		params.Timer = Timer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SpriteOutput != nullptr)
			*SpriteOutput = params.SpriteOutput;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PlayerUI.PlayerUI_C.BossKeyAnim_Counter
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FSlateBrush UPlayerUI_C::BossKeyAnim_Counter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerUI.PlayerUI_C.BossKeyAnim_Counter");
		
		UPlayerUI_C_BossKeyAnim_Counter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PlayerUI.PlayerUI_C.BossKeyAnim
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FSlateBrush UPlayerUI_C::BossKeyAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerUI.PlayerUI_C.BossKeyAnim");
		
		UPlayerUI_C_BossKeyAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PlayerUI.PlayerUI_C.Get_BossKeyCounterBox_Visibility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	UMG_ESlateVisibility UPlayerUI_C::Get_BossKeyCounterBox_Visibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerUI.PlayerUI_C.Get_BossKeyCounterBox_Visibility");
		
		UPlayerUI_C_Get_BossKeyCounterBox_Visibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PlayerUI.PlayerUI_C.Get_SmallKeyCounterBox_Visibility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	UMG_ESlateVisibility UPlayerUI_C::Get_SmallKeyCounterBox_Visibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerUI.PlayerUI_C.Get_SmallKeyCounterBox_Visibility");
		
		UPlayerUI_C_Get_SmallKeyCounterBox_Visibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PlayerUI.PlayerUI_C.Get_NumberOfKeysText
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UPlayerUI_C::Get_NumberOfKeysText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerUI.PlayerUI_C.Get_NumberOfKeysText");
		
		UPlayerUI_C_Get_NumberOfKeysText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PlayerUI.PlayerUI_C.HideAllMessages
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPlayerUI_C::HideAllMessages()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerUI.PlayerUI_C.HideAllMessages");
		
		UPlayerUI_C_HideAllMessages_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PlayerUI.PlayerUI_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UPlayerUI_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerUI.PlayerUI_C.Construct");
		
		UPlayerUI_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PlayerUI.PlayerUI_C.PickupHeartContainer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPlayerUI_C::PickupHeartContainer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerUI.PlayerUI_C.PickupHeartContainer");
		
		UPlayerUI_C_PickupHeartContainer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PlayerUI.PlayerUI_C.SmallKeyPickup
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPlayerUI_C::SmallKeyPickup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerUI.PlayerUI_C.SmallKeyPickup");
		
		UPlayerUI_C_SmallKeyPickup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PlayerUI.PlayerUI_C.BossKeyPickup
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPlayerUI_C::BossKeyPickup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerUI.PlayerUI_C.BossKeyPickup");
		
		UPlayerUI_C_BossKeyPickup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PlayerUI.PlayerUI_C.TakeDamage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPlayerUI_C::TakeDamage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerUI.PlayerUI_C.TakeDamage");
		
		UPlayerUI_C_TakeDamage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PlayerUI.PlayerUI_C.HealFull
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPlayerUI_C::HealFull()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerUI.PlayerUI_C.HealFull");
		
		UPlayerUI_C_HealFull_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PlayerUI.PlayerUI_C.BlinkHearts
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              BlinkRate                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            BlinkAmount                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerUI_C::BlinkHearts(float BlinkRate, int32_t BlinkAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerUI.PlayerUI_C.BlinkHearts");
		
		UPlayerUI_C_BlinkHearts_Params params {};
		params.BlinkRate = BlinkRate;
		params.BlinkAmount = BlinkAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PlayerUI.PlayerUI_C.PickupSingleHeart
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPlayerUI_C::PickupSingleHeart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerUI.PlayerUI_C.PickupSingleHeart");
		
		UPlayerUI_C_PickupSingleHeart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PlayerUI.PlayerUI_C.LockedDoorMsg
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPlayerUI_C::LockedDoorMsg()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerUI.PlayerUI_C.LockedDoorMsg");
		
		UPlayerUI_C_LockedDoorMsg_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PlayerUI.PlayerUI_C.OnInitialized
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UPlayerUI_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerUI.PlayerUI_C.OnInitialized");
		
		UPlayerUI_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PlayerUI.PlayerUI_C.StoneDoorMsg
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPlayerUI_C::StoneDoorMsg()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerUI.PlayerUI_C.StoneDoorMsg");
		
		UPlayerUI_C_StoneDoorMsg_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PlayerUI.PlayerUI_C.GiveMessage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPlayerUI_C::GiveMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerUI.PlayerUI_C.GiveMessage");
		
		UPlayerUI_C_GiveMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PlayerUI.PlayerUI_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerUI_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerUI.PlayerUI_C.Tick");
		
		UPlayerUI_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PlayerUI.PlayerUI_C.BossMessage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPlayerUI_C::BossMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerUI.PlayerUI_C.BossMessage");
		
		UPlayerUI_C_BossMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PlayerUI.PlayerUI_C.BunnyPlushPickup
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPlayerUI_C::BunnyPlushPickup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerUI.PlayerUI_C.BunnyPlushPickup");
		
		UPlayerUI_C_BunnyPlushPickup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PlayerUI.PlayerUI_C.BunnyMaskPickup
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPlayerUI_C::BunnyMaskPickup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerUI.PlayerUI_C.BunnyMaskPickup");
		
		UPlayerUI_C_BunnyMaskPickup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PlayerUI.PlayerUI_C.ExecuteUbergraph_PlayerUI
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerUI_C::ExecuteUbergraph_PlayerUI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerUI.PlayerUI_C.ExecuteUbergraph_PlayerUI");
		
		UPlayerUI_C_ExecuteUbergraph_PlayerUI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UPlayerUI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerUI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PlayerUI.PlayerUI_C");
		return ptr;
	}

}


