/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "Staffbot_ABP_Racer_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UStaffbot_ABP_Racer_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.AnimGraph");
		
		UStaffbot_ABP_Racer_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.Aim Func
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              InterpSpeed                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    Variable                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        InSocketName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FRotator UStaffbot_ABP_Racer_C::Aim_Func(float InterpSpeed, const struct FRotator& Variable, const class FName& InSocketName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.Aim Func");
		
		UStaffbot_ABP_Racer_C_Aim_Func_Params params {};
		params.InterpSpeed = InterpSpeed;
		params.Variable = Variable;
		params.InSocketName = InSocketName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.ApplyPA_BlendWeight_Func
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UStaffbot_ABP_Racer_C::ApplyPA_BlendWeight_Func()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.ApplyPA_BlendWeight_Func");
		
		UStaffbot_ABP_Racer_C_ApplyPA_BlendWeight_Func_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.SetPA_BlendWeights_Func
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              BlendWeightChest                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              BlendWeightNeck                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              BlendWeight__L_Arm                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              BlendWeight__R_Arm                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              BlendWeightWheels                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              BlendWeightProps                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              BlendWeightMid                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStaffbot_ABP_Racer_C::SetPA_BlendWeights_Func(float BlendWeightChest, float BlendWeightNeck, float BlendWeight__L_Arm, float BlendWeight__R_Arm, float BlendWeightWheels, float BlendWeightProps, float BlendWeightMid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.SetPA_BlendWeights_Func");
		
		UStaffbot_ABP_Racer_C_SetPA_BlendWeights_Func_Params params {};
		params.BlendWeightChest = BlendWeightChest;
		params.BlendWeightNeck = BlendWeightNeck;
		params.BlendWeight__L_Arm = BlendWeight__L_Arm;
		params.BlendWeight__R_Arm = BlendWeight__R_Arm;
		params.BlendWeightWheels = BlendWeightWheels;
		params.BlendWeightProps = BlendWeightProps;
		params.BlendWeightMid = BlendWeightMid;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.UseCurves_Func
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Neck                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        Chest                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        L_Arm                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        R_Arm                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              NeckOut                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ChestOut                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ArmOut_L                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ArmOut_R                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStaffbot_ABP_Racer_C::UseCurves_Func(const class FName& Neck, const class FName& Chest, const class FName& L_Arm, const class FName& R_Arm, float* NeckOut, float* ChestOut, float* ArmOut_L, float* ArmOut_R)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.UseCurves_Func");
		
		UStaffbot_ABP_Racer_C_UseCurves_Func_Params params {};
		params.Neck = Neck;
		params.Chest = Chest;
		params.L_Arm = L_Arm;
		params.R_Arm = R_Arm;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NeckOut != nullptr)
			*NeckOut = params.NeckOut;
		if (ChestOut != nullptr)
			*ChestOut = params.ChestOut;
		if (ArmOut_L != nullptr)
			*ArmOut_L = params.ArmOut_L;
		if (ArmOut_R != nullptr)
			*ArmOut_R = params.ArmOut_R;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.L_IK_Arm_Target_Event
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStaffbot_ABP_Racer_C::L_IK_Arm_Target_Event(const struct FVector& Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.L_IK_Arm_Target_Event");
		
		UStaffbot_ABP_Racer_C_L_IK_Arm_Target_Event_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.R_IK_Arm_Target_Event
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStaffbot_ABP_Racer_C::R_IK_Arm_Target_Event(const struct FVector& Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.R_IK_Arm_Target_Event");
		
		UStaffbot_ABP_Racer_C_R_IK_Arm_Target_Event_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.PlayerHasPartyPass_Event
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               HasPartyPass                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStaffbot_ABP_Racer_C::PlayerHasPartyPass_Event(bool HasPartyPass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.PlayerHasPartyPass_Event");
		
		UStaffbot_ABP_Racer_C_PlayerHasPartyPass_Event_Params params {};
		params.HasPartyPass = HasPartyPass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.PlayerSpendsPartyPass_Event
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UStaffbot_ABP_Racer_C::PlayerSpendsPartyPass_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.PlayerSpendsPartyPass_Event");
		
		UStaffbot_ABP_Racer_C_PlayerSpendsPartyPass_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.AlertEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isAlerting                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStaffbot_ABP_Racer_C::AlertEvent(bool isAlerting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.AlertEvent");
		
		UStaffbot_ABP_Racer_C_AlertEvent_Params params {};
		params.isAlerting = isAlerting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.FazerblastDestroy_Event
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UStaffbot_ABP_Racer_C::FazerblastDestroy_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.FazerblastDestroy_Event");
		
		UStaffbot_ABP_Racer_C_FazerblastDestroy_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.SecurityTurnEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStaffbot_ABP_Racer_C::SecurityTurnEvent(float Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.SecurityTurnEvent");
		
		UStaffbot_ABP_Racer_C_SecurityTurnEvent_Params params {};
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.CanPerformEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStaffbot_ABP_Racer_C::CanPerformEvent(bool Off)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.CanPerformEvent");
		
		UStaffbot_ABP_Racer_C_CanPerformEvent_Params params {};
		params.Off = Off;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_Racer_AnimGraphNode_ApplyAdditive_4B129D4F45B101394580CBA1298935AF
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UStaffbot_ABP_Racer_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_Racer_AnimGraphNode_ApplyAdditive_4B129D4F45B101394580CBA1298935AF()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_Racer_AnimGraphNode_ApplyAdditive_4B129D4F45B101394580CBA1298935AF");
		
		UStaffbot_ABP_Racer_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_Racer_AnimGraphNode_ApplyAdditive_4B129D4F45B101394580CBA1298935AF_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_Racer_AnimGraphNode_SequencePlayer_30643DAE4F9A10C34B6982BDE133B582
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UStaffbot_ABP_Racer_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_Racer_AnimGraphNode_SequencePlayer_30643DAE4F9A10C34B6982BDE133B582()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_Racer_AnimGraphNode_SequencePlayer_30643DAE4F9A10C34B6982BDE133B582");
		
		UStaffbot_ABP_Racer_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_Racer_AnimGraphNode_SequencePlayer_30643DAE4F9A10C34B6982BDE133B582_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.SellEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UStaffbot_ABP_Racer_C::SellEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.SellEvent");
		
		UStaffbot_ABP_Racer_C_SellEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.JumpscareEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               canJumpscare                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStaffbot_ABP_Racer_C::JumpscareEvent(bool canJumpscare)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.JumpscareEvent");
		
		UStaffbot_ABP_Racer_C_JumpscareEvent_Params params {};
		params.canJumpscare = canJumpscare;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.WarningEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsWarning                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int                                                WarningCount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStaffbot_ABP_Racer_C::WarningEvent(bool IsWarning, int WarningCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.WarningEvent");
		
		UStaffbot_ABP_Racer_C_WarningEvent_Params params {};
		params.IsWarning = IsWarning;
		params.WarningCount = WarningCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.R_IK_Arm_Event
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Is_ON                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStaffbot_ABP_Racer_C::R_IK_Arm_Event(bool Is_ON)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.R_IK_Arm_Event");
		
		UStaffbot_ABP_Racer_C_R_IK_Arm_Event_Params params {};
		params.Is_ON = Is_ON;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStaffbot_ABP_Racer_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.BlueprintUpdateAnimation");
		
		UStaffbot_ABP_Racer_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.BlueprintBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UStaffbot_ABP_Racer_C::BlueprintBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.BlueprintBeginPlay");
		
		UStaffbot_ABP_Racer_C_BlueprintBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.Change_PA_Profile_Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TEnumAsByte<Staffbot_PA_Enum_EStaffbot_PA_Enum>    ProfileEnum                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIncludeSelf                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStaffbot_ABP_Racer_C::Change_PA_Profile_Event(TEnumAsByte<Staffbot_PA_Enum_EStaffbot_PA_Enum> ProfileEnum, bool bIncludeSelf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.Change_PA_Profile_Event");
		
		UStaffbot_ABP_Racer_C_Change_PA_Profile_Event_Params params {};
		params.ProfileEnum = ProfileEnum;
		params.bIncludeSelf = bIncludeSelf;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.AnimNotify_SpringProfile
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UStaffbot_ABP_Racer_C::AnimNotify_SpringProfile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.AnimNotify_SpringProfile");
		
		UStaffbot_ABP_Racer_C_AnimNotify_SpringProfile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.AnimNotify_LooseProfile
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UStaffbot_ABP_Racer_C::AnimNotify_LooseProfile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.AnimNotify_LooseProfile");
		
		UStaffbot_ABP_Racer_C_AnimNotify_LooseProfile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.AnimNotify_UseCurvesTrue
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UStaffbot_ABP_Racer_C::AnimNotify_UseCurvesTrue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.AnimNotify_UseCurvesTrue");
		
		UStaffbot_ABP_Racer_C_AnimNotify_UseCurvesTrue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.AnimNotify_UseCurvesFalse
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UStaffbot_ABP_Racer_C::AnimNotify_UseCurvesFalse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.AnimNotify_UseCurvesFalse");
		
		UStaffbot_ABP_Racer_C_AnimNotify_UseCurvesFalse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.SetConstraintProfile_Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TEnumAsByte<Staffbot_Constraint_Enum_EStaffbot_Constraint_Enum> Con_ProfileEnum                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStaffbot_ABP_Racer_C::SetConstraintProfile_Event(TEnumAsByte<Staffbot_Constraint_Enum_EStaffbot_Constraint_Enum> Con_ProfileEnum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.SetConstraintProfile_Event");
		
		UStaffbot_ABP_Racer_C_SetConstraintProfile_Event_Params params {};
		params.Con_ProfileEnum = Con_ProfileEnum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.L_IK_Arm_Event
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsON                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStaffbot_ABP_Racer_C::L_IK_Arm_Event(bool IsON)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.L_IK_Arm_Event");
		
		UStaffbot_ABP_Racer_C_L_IK_Arm_Event_Params params {};
		params.IsON = IsON;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.AnimNotify_PropOn_L
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UStaffbot_ABP_Racer_C::AnimNotify_PropOn_L()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.AnimNotify_PropOn_L");
		
		UStaffbot_ABP_Racer_C_AnimNotify_PropOn_L_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.AnimNotify_PropOff_L
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UStaffbot_ABP_Racer_C::AnimNotify_PropOff_L()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.AnimNotify_PropOff_L");
		
		UStaffbot_ABP_Racer_C_AnimNotify_PropOff_L_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.AimAtPlayerEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               AimAtPlayer                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStaffbot_ABP_Racer_C::AimAtPlayerEvent(bool AimAtPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.AimAtPlayerEvent");
		
		UStaffbot_ABP_Racer_C_AimAtPlayerEvent_Params params {};
		params.AimAtPlayer = AimAtPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.TaskEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               DoTask                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AStaffbotTaskPlacement_C*                    TargetTask                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStaffbot_ABP_Racer_C::TaskEvent(bool DoTask, class AStaffbotTaskPlacement_C* TargetTask)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.TaskEvent");
		
		UStaffbot_ABP_Racer_C_TaskEvent_Params params {};
		params.DoTask = DoTask;
		params.TargetTask = TargetTask;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.PerformEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UStaffbot_ABP_Racer_C::PerformEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.PerformEvent");
		
		UStaffbot_ABP_Racer_C_PerformEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.isStunnedEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsStunned                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStaffbot_ABP_Racer_C::isStunnedEvent(bool IsStunned)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.isStunnedEvent");
		
		UStaffbot_ABP_Racer_C_isStunnedEvent_Params params {};
		params.IsStunned = IsStunned;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.ExecuteUbergraph_Staffbot_ABP_Racer
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStaffbot_ABP_Racer_C::ExecuteUbergraph_Staffbot_ABP_Racer(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.ExecuteUbergraph_Staffbot_ABP_Racer");
		
		UStaffbot_ABP_Racer_C_ExecuteUbergraph_Staffbot_ABP_Racer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UStaffbot_ABP_Racer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStaffbot_ABP_Racer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Staffbot_ABP_Racer.Staffbot_ABP_Racer_C");
		return ptr;
	}

}


