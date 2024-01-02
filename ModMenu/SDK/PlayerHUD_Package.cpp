/**
 * Name: FNAFSB
 * Version: 1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.GetInteractViewLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Valid                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     WorldLocation                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerHUD_C::GetInteractViewLocation(bool* Valid, struct FVector* WorldLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.GetInteractViewLocation");
		
		UPlayerHUD_C_GetInteractViewLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Valid != nullptr)
			*Valid = params.Valid;
		if (WorldLocation != nullptr)
			*WorldLocation = params.WorldLocation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.GetInteractViewAngles
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECameraAngleFlags                                  AnglesToCheck                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerHUD_C::GetInteractViewAngles(ECameraAngleFlags* AnglesToCheck)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.GetInteractViewAngles");
		
		UPlayerHUD_C_GetInteractViewAngles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnglesToCheck != nullptr)
			*AnglesToCheck = params.AnglesToCheck;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.GetHUDInstruction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Instruction                                                (Parm, OutParm)
	 */
	void UPlayerHUD_C::GetHUDInstruction(class FText* Instruction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.GetHUDInstruction");
		
		UPlayerHUD_C_GetHUDInstruction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Instruction != nullptr)
			*Instruction = params.Instruction;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.GetInteractibleType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EInteractibleType                                  Type                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EInteractiblePressType                             PressType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerHUD_C::GetInteractibleType(EInteractibleType* Type, EInteractiblePressType* PressType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.GetInteractibleType");
		
		UPlayerHUD_C_GetInteractibleType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Type != nullptr)
			*Type = params.Type;
		if (PressType != nullptr)
			*PressType = params.PressType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.CanPlayerInteract
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CanInteract                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EConditionFailReason                               CantReason                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerHUD_C::CanPlayerInteract(bool* CanInteract, EConditionFailReason* CantReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.CanPlayerInteract");
		
		UPlayerHUD_C_CanPlayerInteract_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanInteract != nullptr)
			*CanInteract = params.CanInteract;
		if (CantReason != nullptr)
			*CantReason = params.CantReason;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.UpdateUIOnTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayerHUD_C::UpdateUIOnTick(bool* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.UpdateUIOnTick");
		
		UPlayerHUD_C_UpdateUIOnTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Output != nullptr)
			*Output = params.Output;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.GetInstructionOverride
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Instruction                                                (Parm, OutParm)
	 */
	void UPlayerHUD_C::GetInstructionOverride(class FText* Instruction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.GetInstructionOverride");
		
		UPlayerHUD_C_GetInstructionOverride_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Instruction != nullptr)
			*Instruction = params.Instruction;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.InteractIgnoresTrace
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IgnoreTrace                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayerHUD_C::InteractIgnoresTrace(bool* IgnoreTrace)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.InteractIgnoresTrace");
		
		UPlayerHUD_C_InteractIgnoresTrace_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IgnoreTrace != nullptr)
			*IgnoreTrace = params.IgnoreTrace;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.SequenceEvent__ENTRYPOINTPlayerHUD_1
	 * 		Flags  -> ()
	 */
	void UPlayerHUD_C::SequenceEvent__ENTRYPOINTPlayerHUD_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.SequenceEvent__ENTRYPOINTPlayerHUD_1");
		
		UPlayerHUD_C_SequenceEvent__ENTRYPOINTPlayerHUD_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.CheckPlayerPawnRestrictions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<EPlayerPawnType>                            TargetArray                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class FText                                        Result                                                     (Parm, OutParm)
	 */
	void UPlayerHUD_C::CheckPlayerPawnRestrictions(TArray<EPlayerPawnType> TargetArray, class FText* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.CheckPlayerPawnRestrictions");
		
		UPlayerHUD_C_CheckPlayerPawnRestrictions_Params params {};
		params.TargetArray = TargetArray;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.ResetProgressWheel
	 * 		Flags  -> ()
	 */
	void UPlayerHUD_C::ResetProgressWheel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.ResetProgressWheel");
		
		UPlayerHUD_C_ResetProgressWheel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.Get Stamina Percent
	 * 		Flags  -> ()
	 */
	float UPlayerHUD_C::GetStaminaPercent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.Get Stamina Percent");
		
		UPlayerHUD_C_GetStaminaPercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.GetItemOrMessageName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InputPin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        ItemDisplayName                                            (Parm, OutParm)
	 * 		class UTexture2D*                                  ItemDisplayIcon                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerHUD_C::GetItemOrMessageName(const class FName& InputPin, class FText* ItemDisplayName, class UTexture2D** ItemDisplayIcon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.GetItemOrMessageName");
		
		UPlayerHUD_C_GetItemOrMessageName_Params params {};
		params.InputPin = InputPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemDisplayName != nullptr)
			*ItemDisplayName = params.ItemDisplayName;
		if (ItemDisplayIcon != nullptr)
			*ItemDisplayIcon = params.ItemDisplayIcon;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.OnFailure_15B15A4D4874B9BBFB090A8E21833B77
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        WrittenAchievementName                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              WrittenProgress                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            WrittenUserTag                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerHUD_C::OnFailure_15B15A4D4874B9BBFB090A8E21833B77(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.OnFailure_15B15A4D4874B9BBFB090A8E21833B77");
		
		UPlayerHUD_C_OnFailure_15B15A4D4874B9BBFB090A8E21833B77_Params params {};
		params.WrittenAchievementName = WrittenAchievementName;
		params.WrittenProgress = WrittenProgress;
		params.WrittenUserTag = WrittenUserTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.OnSuccess_15B15A4D4874B9BBFB090A8E21833B77
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        WrittenAchievementName                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              WrittenProgress                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            WrittenUserTag                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerHUD_C::OnSuccess_15B15A4D4874B9BBFB090A8E21833B77(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.OnSuccess_15B15A4D4874B9BBFB090A8E21833B77");
		
		UPlayerHUD_C_OnSuccess_15B15A4D4874B9BBFB090A8E21833B77_Params params {};
		params.WrittenAchievementName = WrittenAchievementName;
		params.WrittenProgress = WrittenProgress;
		params.WrittenUserTag = WrittenUserTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.Finished_150D8164404ADE44D3D17D8F55A7B8A7
	 * 		Flags  -> ()
	 */
	void UPlayerHUD_C::Finished_150D8164404ADE44D3D17D8F55A7B8A7()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.Finished_150D8164404ADE44D3D17D8F55A7B8A7");
		
		UPlayerHUD_C_Finished_150D8164404ADE44D3D17D8F55A7B8A7_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.OnFailure_868BB5014224F3E09C1895B3C52D074E
	 * 		Flags  -> ()
	 */
	void UPlayerHUD_C::OnFailure_868BB5014224F3E09C1895B3C52D074E()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.OnFailure_868BB5014224F3E09C1895B3C52D074E");
		
		UPlayerHUD_C_OnFailure_868BB5014224F3E09C1895B3C52D074E_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.OnSuccess_868BB5014224F3E09C1895B3C52D074E
	 * 		Flags  -> ()
	 */
	void UPlayerHUD_C::OnSuccess_868BB5014224F3E09C1895B3C52D074E()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.OnSuccess_868BB5014224F3E09C1895B3C52D074E");
		
		UPlayerHUD_C_OnSuccess_868BB5014224F3E09C1895B3C52D074E_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.Finished_DB237C8C45C17E7AA2665584748A4975
	 * 		Flags  -> ()
	 */
	void UPlayerHUD_C::Finished_DB237C8C45C17E7AA2665584748A4975()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.Finished_DB237C8C45C17E7AA2665584748A4975");
		
		UPlayerHUD_C_Finished_DB237C8C45C17E7AA2665584748A4975_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.OnFailure_15B15A4D4874B9BBFB090A8EB394CA85
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        WrittenAchievementName                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              WrittenProgress                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            WrittenUserTag                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerHUD_C::OnFailure_15B15A4D4874B9BBFB090A8EB394CA85(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.OnFailure_15B15A4D4874B9BBFB090A8EB394CA85");
		
		UPlayerHUD_C_OnFailure_15B15A4D4874B9BBFB090A8EB394CA85_Params params {};
		params.WrittenAchievementName = WrittenAchievementName;
		params.WrittenProgress = WrittenProgress;
		params.WrittenUserTag = WrittenUserTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.OnSuccess_15B15A4D4874B9BBFB090A8EB394CA85
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        WrittenAchievementName                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              WrittenProgress                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            WrittenUserTag                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerHUD_C::OnSuccess_15B15A4D4874B9BBFB090A8EB394CA85(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.OnSuccess_15B15A4D4874B9BBFB090A8EB394CA85");
		
		UPlayerHUD_C_OnSuccess_15B15A4D4874B9BBFB090A8EB394CA85_Params params {};
		params.WrittenAchievementName = WrittenAchievementName;
		params.WrittenProgress = WrittenProgress;
		params.WrittenUserTag = WrittenUserTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.OnFailure_868BB5014224F3E09C1895B3573AF6BC
	 * 		Flags  -> ()
	 */
	void UPlayerHUD_C::OnFailure_868BB5014224F3E09C1895B3573AF6BC()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.OnFailure_868BB5014224F3E09C1895B3573AF6BC");
		
		UPlayerHUD_C_OnFailure_868BB5014224F3E09C1895B3573AF6BC_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.OnSuccess_868BB5014224F3E09C1895B3573AF6BC
	 * 		Flags  -> ()
	 */
	void UPlayerHUD_C::OnSuccess_868BB5014224F3E09C1895B3573AF6BC()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.OnSuccess_868BB5014224F3E09C1895B3573AF6BC");
		
		UPlayerHUD_C_OnSuccess_868BB5014224F3E09C1895B3573AF6BC_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.OnFailure_BF721F5A4230E920D7AB0496A5DE48C6
	 * 		Flags  -> ()
	 */
	void UPlayerHUD_C::OnFailure_BF721F5A4230E920D7AB0496A5DE48C6()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.OnFailure_BF721F5A4230E920D7AB0496A5DE48C6");
		
		UPlayerHUD_C_OnFailure_BF721F5A4230E920D7AB0496A5DE48C6_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.OnSuccess_BF721F5A4230E920D7AB0496A5DE48C6
	 * 		Flags  -> ()
	 */
	void UPlayerHUD_C::OnSuccess_BF721F5A4230E920D7AB0496A5DE48C6()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.OnSuccess_BF721F5A4230E920D7AB0496A5DE48C6");
		
		UPlayerHUD_C_OnSuccess_BF721F5A4230E920D7AB0496A5DE48C6_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.OnFailure_AB03661843CC503A6CB2D5BF99086A7C
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        WrittenAchievementName                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              WrittenProgress                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            WrittenUserTag                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerHUD_C::OnFailure_AB03661843CC503A6CB2D5BF99086A7C(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.OnFailure_AB03661843CC503A6CB2D5BF99086A7C");
		
		UPlayerHUD_C_OnFailure_AB03661843CC503A6CB2D5BF99086A7C_Params params {};
		params.WrittenAchievementName = WrittenAchievementName;
		params.WrittenProgress = WrittenProgress;
		params.WrittenUserTag = WrittenUserTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.OnSuccess_AB03661843CC503A6CB2D5BF99086A7C
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        WrittenAchievementName                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              WrittenProgress                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            WrittenUserTag                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerHUD_C::OnSuccess_AB03661843CC503A6CB2D5BF99086A7C(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.OnSuccess_AB03661843CC503A6CB2D5BF99086A7C");
		
		UPlayerHUD_C_OnSuccess_AB03661843CC503A6CB2D5BF99086A7C_Params params {};
		params.WrittenAchievementName = WrittenAchievementName;
		params.WrittenProgress = WrittenProgress;
		params.WrittenUserTag = WrittenUserTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.Finished_185BD7B94C5005FD6F01E39AB745E86F
	 * 		Flags  -> ()
	 */
	void UPlayerHUD_C::Finished_185BD7B94C5005FD6F01E39AB745E86F()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.Finished_185BD7B94C5005FD6F01E39AB745E86F");
		
		UPlayerHUD_C_Finished_185BD7B94C5005FD6F01E39AB745E86F_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.Finished_10D10B594F13742D8823F39890BDEC3D
	 * 		Flags  -> ()
	 */
	void UPlayerHUD_C::Finished_10D10B594F13742D8823F39890BDEC3D()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.Finished_10D10B594F13742D8823F39890BDEC3D");
		
		UPlayerHUD_C_Finished_10D10B594F13742D8823F39890BDEC3D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.Finished_7533C45845F3B117AD0CED818D58DFA6
	 * 		Flags  -> ()
	 */
	void UPlayerHUD_C::Finished_7533C45845F3B117AD0CED818D58DFA6()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.Finished_7533C45845F3B117AD0CED818D58DFA6");
		
		UPlayerHUD_C_Finished_7533C45845F3B117AD0CED818D58DFA6_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.Construct
	 * 		Flags  -> ()
	 */
	void UPlayerHUD_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.Construct");
		
		UPlayerHUD_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerHUD_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.Tick");
		
		UPlayerHUD_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.AllowShortcutCommand
	 * 		Flags  -> ()
	 */
	void UPlayerHUD_C::AllowShortcutCommand()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.AllowShortcutCommand");
		
		UPlayerHUD_C_AllowShortcutCommand_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.OnPlayerHoverExit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       PlayerPawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerHUD_C::OnPlayerHoverExit(class APawn* PlayerPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.OnPlayerHoverExit");
		
		UPlayerHUD_C_OnPlayerHoverExit_Params params {};
		params.PlayerPawn = PlayerPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.OnPlayerHoverEnter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       PlayerPawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerHUD_C::OnPlayerHoverEnter(class APawn* PlayerPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.OnPlayerHoverEnter");
		
		UPlayerHUD_C_OnPlayerHoverEnter_Params params {};
		params.PlayerPawn = PlayerPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.Update
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Level                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               HasRtx                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Has2080                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayerHUD_C::Update(int32_t Level, bool HasRtx, bool Has2080)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.Update");
		
		UPlayerHUD_C_Update_Params params {};
		params.Level = Level;
		params.HasRtx = HasRtx;
		params.Has2080 = Has2080;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.Setup Interactible Display
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Interactible                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerHUD_C::SetupInteractibleDisplay(class UObject* Interactible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.Setup Interactible Display");
		
		UPlayerHUD_C_SetupInteractibleDisplay_Params params {};
		params.Interactible = Interactible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.Setup Collected Display
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        CollectedItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerHUD_C::SetupCollectedDisplay(const class FName& CollectedItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.Setup Collected Display");
		
		UPlayerHUD_C_SetupCollectedDisplay_Params params {};
		params.CollectedItem = CollectedItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.On Information Anim Finished
	 * 		Flags  -> ()
	 */
	void UPlayerHUD_C::OnInformationAnimFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.On Information Anim Finished");
		
		UPlayerHUD_C_OnInformationAnimFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.Update Hold Progress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Percent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerHUD_C::UpdateHoldProgress(float Percent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.Update Hold Progress");
		
		UPlayerHUD_C_UpdateHoldProgress_Params params {};
		params.Percent = Percent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.Cancel Hold Progress
	 * 		Flags  -> ()
	 */
	void UPlayerHUD_C::CancelHoldProgress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.Cancel Hold Progress");
		
		UPlayerHUD_C_CancelHoldProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.Complete Hold Progress
	 * 		Flags  -> ()
	 */
	void UPlayerHUD_C::CompleteHoldProgress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.Complete Hold Progress");
		
		UPlayerHUD_C_CompleteHoldProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.Init Hold Progress
	 * 		Flags  -> ()
	 */
	void UPlayerHUD_C::InitHoldProgress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.Init Hold Progress");
		
		UPlayerHUD_C_InitHoldProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.On Security Level Updated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewLevel                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerHUD_C::OnSecurityLevelUpdated(int32_t NewLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.On Security Level Updated");
		
		UPlayerHUD_C_OnSecurityLevelUpdated_Params params {};
		params.NewLevel = NewLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.On Party Level Updated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewLevel                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerHUD_C::OnPartyLevelUpdated(int32_t NewLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.On Party Level Updated");
		
		UPlayerHUD_C_OnPartyLevelUpdated_Params params {};
		params.NewLevel = NewLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.On Party Pass Used
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewLevel                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerHUD_C::OnPartyPassUsed(int32_t NewLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.On Party Pass Used");
		
		UPlayerHUD_C_OnPartyPassUsed_Params params {};
		params.NewLevel = NewLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.On Begin Save
	 * 		Flags  -> ()
	 */
	void UPlayerHUD_C::OnBeginSave()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.On Begin Save");
		
		UPlayerHUD_C_OnBeginSave_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.On End Save
	 * 		Flags  -> ()
	 */
	void UPlayerHUD_C::OnEndSave()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.On End Save");
		
		UPlayerHUD_C_OnEndSave_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.On Trailer Mode Changed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               TrailerEnabled                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayerHUD_C::OnTrailerModeChanged(bool TrailerEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.On Trailer Mode Changed");
		
		UPlayerHUD_C_OnTrailerModeChanged_Params params {};
		params.TrailerEnabled = TrailerEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.Hide Objective List
	 * 		Flags  -> ()
	 */
	void UPlayerHUD_C::HideObjectiveList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.Hide Objective List");
		
		UPlayerHUD_C_HideObjectiveList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.Set Skip Info
	 * 		Flags  -> ()
	 */
	void UPlayerHUD_C::SetSkipInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.Set Skip Info");
		
		UPlayerHUD_C_SetSkipInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.SetRechargeStationText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               On                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayerHUD_C::SetRechargeStationText(bool On)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.SetRechargeStationText");
		
		UPlayerHUD_C_SetRechargeStationText_Params params {};
		params.On = On;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.On Item Collected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ItemName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FFNAFInventoryTableStruct                   InventoryItemInfo                                          (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UPlayerHUD_C::OnItemCollected(const class FName& ItemName, const struct FFNAFInventoryTableStruct& InventoryItemInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.On Item Collected");
		
		UPlayerHUD_C_OnItemCollected_Params params {};
		params.ItemName = ItemName;
		params.InventoryItemInfo = InventoryItemInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.Setup Requirement Display
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EConditionFailReason                               Requirements                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Interactable                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerHUD_C::SetupRequirementDisplay(EConditionFailReason Requirements, class UObject* Interactable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.Setup Requirement Display");
		
		UPlayerHUD_C_SetupRequirementDisplay_Params params {};
		params.Requirements = Requirements;
		params.Interactable = Interactable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.Stop Requirement Display
	 * 		Flags  -> ()
	 */
	void UPlayerHUD_C::StopRequirementDisplay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.Stop Requirement Display");
		
		UPlayerHUD_C_StopRequirementDisplay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.Set Informational Message
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UPlayerHUD_C::SetInformationalMessage(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.Set Informational Message");
		
		UPlayerHUD_C_SetInformationalMessage_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.Hide Informational Message
	 * 		Flags  -> ()
	 */
	void UPlayerHUD_C::HideInformationalMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.Hide Informational Message");
		
		UPlayerHUD_C_HideInformationalMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.On Stamina Depleted
	 * 		Flags  -> ()
	 */
	void UPlayerHUD_C::OnStaminaDepleted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.On Stamina Depleted");
		
		UPlayerHUD_C_OnStaminaDepleted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.On Stamina Replenished
	 * 		Flags  -> ()
	 */
	void UPlayerHUD_C::OnStaminaReplenished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.On Stamina Replenished");
		
		UPlayerHUD_C_OnStaminaReplenished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.ShowInstructions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_InstructionCard_Type                             Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerHUD_C::ShowInstructions(E_InstructionCard_Type Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.ShowInstructions");
		
		UPlayerHUD_C_ShowInstructions_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.HideInstructions
	 * 		Flags  -> ()
	 */
	void UPlayerHUD_C::HideInstructions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.HideInstructions");
		
		UPlayerHUD_C_HideInstructions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.PlayInstructionCardAnim
	 * 		Flags  -> ()
	 */
	void UPlayerHUD_C::PlayInstructionCardAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.PlayInstructionCardAnim");
		
		UPlayerHUD_C_PlayInstructionCardAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.Setup Objective Display
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UPlayerHUD_C::SetupObjectiveDisplay(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.Setup Objective Display");
		
		UPlayerHUD_C_SetupObjectiveDisplay_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.Stop Objective Display
	 * 		Flags  -> ()
	 */
	void UPlayerHUD_C::StopObjectiveDisplay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.Stop Objective Display");
		
		UPlayerHUD_C_StopObjectiveDisplay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.ShowCollectedItemDisplay
	 * 		Flags  -> ()
	 */
	void UPlayerHUD_C::ShowCollectedItemDisplay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.ShowCollectedItemDisplay");
		
		UPlayerHUD_C_ShowCollectedItemDisplay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.DebugStopShowingItemsCollected
	 * 		Flags  -> ()
	 */
	void UPlayerHUD_C::DebugStopShowingItemsCollected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.DebugStopShowingItemsCollected");
		
		UPlayerHUD_C_DebugStopShowingItemsCollected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.MoveMissionHUD
	 * 		Flags  -> ()
	 */
	void UPlayerHUD_C::MoveMissionHUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.MoveMissionHUD");
		
		UPlayerHUD_C_MoveMissionHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.OnPlayerInteract
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       PlayerPawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APlayerController*                           PlayerController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerHUD_C::OnPlayerInteract(class APawn* PlayerPawn, class APlayerController* PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.OnPlayerInteract");
		
		UPlayerHUD_C_OnPlayerInteract_Params params {};
		params.PlayerPawn = PlayerPawn;
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.OnPlayerInteractCancel
	 * 		Flags  -> ()
	 */
	void UPlayerHUD_C::OnPlayerInteractCancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.OnPlayerInteractCancel");
		
		UPlayerHUD_C_OnPlayerInteractCancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.HideRequirementPanel
	 * 		Flags  -> ()
	 */
	void UPlayerHUD_C::HideRequirementPanel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.HideRequirementPanel");
		
		UPlayerHUD_C_HideRequirementPanel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.BeginSkipFade
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DelayDuration                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerHUD_C::BeginSkipFade(float DelayDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.BeginSkipFade");
		
		UPlayerHUD_C_BeginSkipFade_Params params {};
		params.DelayDuration = DelayDuration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.ShowSkip
	 * 		Flags  -> ()
	 */
	void UPlayerHUD_C::ShowSkip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.ShowSkip");
		
		UPlayerHUD_C_ShowSkip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.ExecuteUbergraph_PlayerHUD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerHUD_C::ExecuteUbergraph_PlayerHUD(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.ExecuteUbergraph_PlayerHUD");
		
		UPlayerHUD_C_ExecuteUbergraph_PlayerHUD_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayerHUD_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerHUD_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PlayerHUD.PlayerHUD_C");
		return ptr;
	}

}


