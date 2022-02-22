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
	 * 		Name   -> Function Staffbot_Cleaner_LINK.Staffbot_Cleaner_LINK_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UStaffbot_Cleaner_LINK_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_Cleaner_LINK.Staffbot_Cleaner_LINK_C.AnimGraph");
		
		UStaffbot_Cleaner_LINK_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Staffbot_Cleaner_LINK.Staffbot_Cleaner_LINK_C.PlayerSpendsPartyPass_Event
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UStaffbot_Cleaner_LINK_C::PlayerSpendsPartyPass_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_Cleaner_LINK.Staffbot_Cleaner_LINK_C.PlayerSpendsPartyPass_Event");
		
		UStaffbot_Cleaner_LINK_C_PlayerSpendsPartyPass_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Staffbot_Cleaner_LINK.Staffbot_Cleaner_LINK_C.PlayerHasPartyPass_Event
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               HasPartyPass                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStaffbot_Cleaner_LINK_C::PlayerHasPartyPass_Event(bool HasPartyPass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_Cleaner_LINK.Staffbot_Cleaner_LINK_C.PlayerHasPartyPass_Event");
		
		UStaffbot_Cleaner_LINK_C_PlayerHasPartyPass_Event_Params params {};
		params.HasPartyPass = HasPartyPass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Staffbot_Cleaner_LINK.Staffbot_Cleaner_LINK_C.isStunnedEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsStunned                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStaffbot_Cleaner_LINK_C::isStunnedEvent(bool IsStunned)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_Cleaner_LINK.Staffbot_Cleaner_LINK_C.isStunnedEvent");
		
		UStaffbot_Cleaner_LINK_C_isStunnedEvent_Params params {};
		params.IsStunned = IsStunned;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Staffbot_Cleaner_LINK.Staffbot_Cleaner_LINK_C.AlertEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsAlerting                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStaffbot_Cleaner_LINK_C::AlertEvent(bool IsAlerting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_Cleaner_LINK.Staffbot_Cleaner_LINK_C.AlertEvent");
		
		UStaffbot_Cleaner_LINK_C_AlertEvent_Params params {};
		params.IsAlerting = IsAlerting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Staffbot_Cleaner_LINK.Staffbot_Cleaner_LINK_C.R_IK_Arm_Target_Event
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStaffbot_Cleaner_LINK_C::R_IK_Arm_Target_Event(const struct FVector& Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_Cleaner_LINK.Staffbot_Cleaner_LINK_C.R_IK_Arm_Target_Event");
		
		UStaffbot_Cleaner_LINK_C_R_IK_Arm_Target_Event_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Staffbot_Cleaner_LINK.Staffbot_Cleaner_LINK_C.L_IK_Arm_Target_Event
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStaffbot_Cleaner_LINK_C::L_IK_Arm_Target_Event(const struct FVector& Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_Cleaner_LINK.Staffbot_Cleaner_LINK_C.L_IK_Arm_Target_Event");
		
		UStaffbot_Cleaner_LINK_C_L_IK_Arm_Target_Event_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Staffbot_Cleaner_LINK.Staffbot_Cleaner_LINK_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_Cleaner_LINK_AnimGraphNode_Constraint_2520A5094B444F56489B55B2836AE1CB
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UStaffbot_Cleaner_LINK_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_Cleaner_LINK_AnimGraphNode_Constraint_2520A5094B444F56489B55B2836AE1CB()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_Cleaner_LINK.Staffbot_Cleaner_LINK_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_Cleaner_LINK_AnimGraphNode_Constraint_2520A5094B444F56489B55B2836AE1CB");
		
		UStaffbot_Cleaner_LINK_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_Cleaner_LINK_AnimGraphNode_Constraint_2520A5094B444F56489B55B2836AE1CB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Staffbot_Cleaner_LINK.Staffbot_Cleaner_LINK_C.R_IK_Arm_Event
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Is_ON                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStaffbot_Cleaner_LINK_C::R_IK_Arm_Event(bool Is_ON)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_Cleaner_LINK.Staffbot_Cleaner_LINK_C.R_IK_Arm_Event");
		
		UStaffbot_Cleaner_LINK_C_R_IK_Arm_Event_Params params {};
		params.Is_ON = Is_ON;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Staffbot_Cleaner_LINK.Staffbot_Cleaner_LINK_C.FazerblastDestroy_Event
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UStaffbot_Cleaner_LINK_C::FazerblastDestroy_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_Cleaner_LINK.Staffbot_Cleaner_LINK_C.FazerblastDestroy_Event");
		
		UStaffbot_Cleaner_LINK_C_FazerblastDestroy_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Staffbot_Cleaner_LINK.Staffbot_Cleaner_LINK_C.L_IK_Arm_Event
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsON                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStaffbot_Cleaner_LINK_C::L_IK_Arm_Event(bool IsON)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_Cleaner_LINK.Staffbot_Cleaner_LINK_C.L_IK_Arm_Event");
		
		UStaffbot_Cleaner_LINK_C_L_IK_Arm_Event_Params params {};
		params.IsON = IsON;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Staffbot_Cleaner_LINK.Staffbot_Cleaner_LINK_C.AimAtPlayerEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               AimAtPlayer                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStaffbot_Cleaner_LINK_C::AimAtPlayerEvent(bool AimAtPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_Cleaner_LINK.Staffbot_Cleaner_LINK_C.AimAtPlayerEvent");
		
		UStaffbot_Cleaner_LINK_C_AimAtPlayerEvent_Params params {};
		params.AimAtPlayer = AimAtPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Staffbot_Cleaner_LINK.Staffbot_Cleaner_LINK_C.SecurityTurnEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStaffbot_Cleaner_LINK_C::SecurityTurnEvent(float Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_Cleaner_LINK.Staffbot_Cleaner_LINK_C.SecurityTurnEvent");
		
		UStaffbot_Cleaner_LINK_C_SecurityTurnEvent_Params params {};
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Staffbot_Cleaner_LINK.Staffbot_Cleaner_LINK_C.TaskEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               DoTask                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AStaffbotTaskPlacement_C*                    TargetTask                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStaffbot_Cleaner_LINK_C::TaskEvent(bool DoTask, class AStaffbotTaskPlacement_C* TargetTask)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_Cleaner_LINK.Staffbot_Cleaner_LINK_C.TaskEvent");
		
		UStaffbot_Cleaner_LINK_C_TaskEvent_Params params {};
		params.DoTask = DoTask;
		params.TargetTask = TargetTask;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Staffbot_Cleaner_LINK.Staffbot_Cleaner_LINK_C.PerformEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UStaffbot_Cleaner_LINK_C::PerformEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_Cleaner_LINK.Staffbot_Cleaner_LINK_C.PerformEvent");
		
		UStaffbot_Cleaner_LINK_C_PerformEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Staffbot_Cleaner_LINK.Staffbot_Cleaner_LINK_C.CanPerformEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStaffbot_Cleaner_LINK_C::CanPerformEvent(bool Off)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_Cleaner_LINK.Staffbot_Cleaner_LINK_C.CanPerformEvent");
		
		UStaffbot_Cleaner_LINK_C_CanPerformEvent_Params params {};
		params.Off = Off;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Staffbot_Cleaner_LINK.Staffbot_Cleaner_LINK_C.SellEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UStaffbot_Cleaner_LINK_C::SellEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_Cleaner_LINK.Staffbot_Cleaner_LINK_C.SellEvent");
		
		UStaffbot_Cleaner_LINK_C_SellEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Staffbot_Cleaner_LINK.Staffbot_Cleaner_LINK_C.JumpscareEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CanJumpscare                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStaffbot_Cleaner_LINK_C::JumpscareEvent(bool CanJumpscare)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_Cleaner_LINK.Staffbot_Cleaner_LINK_C.JumpscareEvent");
		
		UStaffbot_Cleaner_LINK_C_JumpscareEvent_Params params {};
		params.CanJumpscare = CanJumpscare;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Staffbot_Cleaner_LINK.Staffbot_Cleaner_LINK_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStaffbot_Cleaner_LINK_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_Cleaner_LINK.Staffbot_Cleaner_LINK_C.BlueprintUpdateAnimation");
		
		UStaffbot_Cleaner_LINK_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Staffbot_Cleaner_LINK.Staffbot_Cleaner_LINK_C.WarningEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsWarning                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            WarningCount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStaffbot_Cleaner_LINK_C::WarningEvent(bool IsWarning, int32_t WarningCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_Cleaner_LINK.Staffbot_Cleaner_LINK_C.WarningEvent");
		
		UStaffbot_Cleaner_LINK_C_WarningEvent_Params params {};
		params.IsWarning = IsWarning;
		params.WarningCount = WarningCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Staffbot_Cleaner_LINK.Staffbot_Cleaner_LINK_C.ExecuteUbergraph_Staffbot_Cleaner_LINK
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStaffbot_Cleaner_LINK_C::ExecuteUbergraph_Staffbot_Cleaner_LINK(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_Cleaner_LINK.Staffbot_Cleaner_LINK_C.ExecuteUbergraph_Staffbot_Cleaner_LINK");
		
		UStaffbot_Cleaner_LINK_C_ExecuteUbergraph_Staffbot_Cleaner_LINK_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UStaffbot_Cleaner_LINK_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStaffbot_Cleaner_LINK_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Staffbot_Cleaner_LINK.Staffbot_Cleaner_LINK_C");
		return ptr;
	}

}


