/**
 * Name: FNAFSB
 * Version: 1
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StaffbotBPInterface.StaffbotBPInterface_C.CanPerformEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStaffbotBPInterface_C::CanPerformEvent(bool Off)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffbotBPInterface.StaffbotBPInterface_C.CanPerformEvent");
		
		UStaffbotBPInterface_C_CanPerformEvent_Params params {};
		params.Off = Off;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StaffbotBPInterface.StaffbotBPInterface_C.SecurityTurnEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStaffbotBPInterface_C::SecurityTurnEvent(float Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffbotBPInterface.StaffbotBPInterface_C.SecurityTurnEvent");
		
		UStaffbotBPInterface_C_SecurityTurnEvent_Params params {};
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StaffbotBPInterface.StaffbotBPInterface_C.FazerblastDestroy_Event
	 * 		Flags  -> ()
	 */
	void UStaffbotBPInterface_C::FazerblastDestroy_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffbotBPInterface.StaffbotBPInterface_C.FazerblastDestroy_Event");
		
		UStaffbotBPInterface_C_FazerblastDestroy_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StaffbotBPInterface.StaffbotBPInterface_C.AlertEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isAlerting                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStaffbotBPInterface_C::AlertEvent(bool isAlerting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffbotBPInterface.StaffbotBPInterface_C.AlertEvent");
		
		UStaffbotBPInterface_C_AlertEvent_Params params {};
		params.isAlerting = isAlerting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StaffbotBPInterface.StaffbotBPInterface_C.PlayerSpendsPartyPass_Event
	 * 		Flags  -> ()
	 */
	void UStaffbotBPInterface_C::PlayerSpendsPartyPass_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffbotBPInterface.StaffbotBPInterface_C.PlayerSpendsPartyPass_Event");
		
		UStaffbotBPInterface_C_PlayerSpendsPartyPass_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StaffbotBPInterface.StaffbotBPInterface_C.PlayerHasPartyPass_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               HasPartyPass                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStaffbotBPInterface_C::PlayerHasPartyPass_Event(bool HasPartyPass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffbotBPInterface.StaffbotBPInterface_C.PlayerHasPartyPass_Event");
		
		UStaffbotBPInterface_C_PlayerHasPartyPass_Event_Params params {};
		params.HasPartyPass = HasPartyPass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StaffbotBPInterface.StaffbotBPInterface_C.isStunnedEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsStunned                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStaffbotBPInterface_C::isStunnedEvent(bool IsStunned)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffbotBPInterface.StaffbotBPInterface_C.isStunnedEvent");
		
		UStaffbotBPInterface_C_isStunnedEvent_Params params {};
		params.IsStunned = IsStunned;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StaffbotBPInterface.StaffbotBPInterface_C.R_IK_Arm_Target_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStaffbotBPInterface_C::R_IK_Arm_Target_Event(const struct FVector& Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffbotBPInterface.StaffbotBPInterface_C.R_IK_Arm_Target_Event");
		
		UStaffbotBPInterface_C_R_IK_Arm_Target_Event_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StaffbotBPInterface.StaffbotBPInterface_C.L_IK_Arm_Target_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStaffbotBPInterface_C::L_IK_Arm_Target_Event(const struct FVector& Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffbotBPInterface.StaffbotBPInterface_C.L_IK_Arm_Target_Event");
		
		UStaffbotBPInterface_C_L_IK_Arm_Target_Event_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StaffbotBPInterface.StaffbotBPInterface_C.R_IK_Arm_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsOn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStaffbotBPInterface_C::R_IK_Arm_Event(bool IsOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffbotBPInterface.StaffbotBPInterface_C.R_IK_Arm_Event");
		
		UStaffbotBPInterface_C_R_IK_Arm_Event_Params params {};
		params.IsOn = IsOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StaffbotBPInterface.StaffbotBPInterface_C.L_IK_Arm_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsON                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStaffbotBPInterface_C::L_IK_Arm_Event(bool IsON)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffbotBPInterface.StaffbotBPInterface_C.L_IK_Arm_Event");
		
		UStaffbotBPInterface_C_L_IK_Arm_Event_Params params {};
		params.IsON = IsON;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StaffbotBPInterface.StaffbotBPInterface_C.AimAtPlayerEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               AimAtPlayer                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStaffbotBPInterface_C::AimAtPlayerEvent(bool AimAtPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffbotBPInterface.StaffbotBPInterface_C.AimAtPlayerEvent");
		
		UStaffbotBPInterface_C_AimAtPlayerEvent_Params params {};
		params.AimAtPlayer = AimAtPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StaffbotBPInterface.StaffbotBPInterface_C.TaskEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               DoTask                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AStaffbotTaskPlacement_C*                    TargetTask                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStaffbotBPInterface_C::TaskEvent(bool DoTask, class AStaffbotTaskPlacement_C* TargetTask)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffbotBPInterface.StaffbotBPInterface_C.TaskEvent");
		
		UStaffbotBPInterface_C_TaskEvent_Params params {};
		params.DoTask = DoTask;
		params.TargetTask = TargetTask;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StaffbotBPInterface.StaffbotBPInterface_C.PerformEvent
	 * 		Flags  -> ()
	 */
	void UStaffbotBPInterface_C::PerformEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffbotBPInterface.StaffbotBPInterface_C.PerformEvent");
		
		UStaffbotBPInterface_C_PerformEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StaffbotBPInterface.StaffbotBPInterface_C.SellEvent
	 * 		Flags  -> ()
	 */
	void UStaffbotBPInterface_C::SellEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffbotBPInterface.StaffbotBPInterface_C.SellEvent");
		
		UStaffbotBPInterface_C_SellEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StaffbotBPInterface.StaffbotBPInterface_C.JumpscareEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CanJumpscare                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStaffbotBPInterface_C::JumpscareEvent(bool CanJumpscare)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffbotBPInterface.StaffbotBPInterface_C.JumpscareEvent");
		
		UStaffbotBPInterface_C_JumpscareEvent_Params params {};
		params.CanJumpscare = CanJumpscare;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StaffbotBPInterface.StaffbotBPInterface_C.WarningEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsWarning                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            WarningCount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStaffbotBPInterface_C::WarningEvent(bool IsWarning, int32_t WarningCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffbotBPInterface.StaffbotBPInterface_C.WarningEvent");
		
		UStaffbotBPInterface_C_WarningEvent_Params params {};
		params.IsWarning = IsWarning;
		params.WarningCount = WarningCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStaffbotBPInterface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStaffbotBPInterface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass StaffbotBPInterface.StaffbotBPInterface_C");
		return ptr;
	}

}


