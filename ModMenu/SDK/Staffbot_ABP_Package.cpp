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
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.GetMoveSpeedInput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              MoveSpeed                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStaffbot_ABP_C::GetMoveSpeedInput(float* MoveSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.GetMoveSpeedInput");
		
		UStaffbot_ABP_C_GetMoveSpeedInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MoveSpeed != nullptr)
			*MoveSpeed = params.MoveSpeed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.PlayerSpendsPartyPass_Event
	 * 		Flags  -> ()
	 */
	void UStaffbot_ABP_C::PlayerSpendsPartyPass_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.PlayerSpendsPartyPass_Event");
		
		UStaffbot_ABP_C_PlayerSpendsPartyPass_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.Wheels
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   InPose_2                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FPoseLink                                   Wheels                                                     (Parm, OutParm, NoDestructor)
	 */
	void UStaffbot_ABP_C::Wheels(const struct FPoseLink& InPose_2, struct FPoseLink* Wheels)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.Wheels");
		
		UStaffbot_ABP_C_Wheels_Params params {};
		params.InPose_2 = InPose_2;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Wheels != nullptr)
			*Wheels = params.Wheels;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UStaffbot_ABP_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.AnimGraph");
		
		UStaffbot_ABP_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.EnableSimulation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               SpineDynamicsON                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               RArmDynamicsOn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               LArmDynamicsOn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               HeadDynamicsOn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStaffbot_ABP_C::EnableSimulation(bool SpineDynamicsON, bool RArmDynamicsOn, bool LArmDynamicsOn, bool HeadDynamicsOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.EnableSimulation");
		
		UStaffbot_ABP_C_EnableSimulation_Params params {};
		params.SpineDynamicsON = SpineDynamicsON;
		params.RArmDynamicsOn = RArmDynamicsOn;
		params.LArmDynamicsOn = LArmDynamicsOn;
		params.HeadDynamicsOn = HeadDynamicsOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.FindRotationForWheels
	 * 		Flags  -> ()
	 */
	void UStaffbot_ABP_C::FindRotationForWheels()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.FindRotationForWheels");
		
		UStaffbot_ABP_C_FindRotationForWheels_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.WorkerBotMovement
	 * 		Flags  -> ()
	 */
	void UStaffbot_ABP_C::WorkerBotMovement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.WorkerBotMovement");
		
		UStaffbot_ABP_C_WorkerBotMovement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.ApplyPA_BlendWeight_Func
	 * 		Flags  -> ()
	 */
	void UStaffbot_ABP_C::ApplyPA_BlendWeight_Func()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.ApplyPA_BlendWeight_Func");
		
		UStaffbot_ABP_C_ApplyPA_BlendWeight_Func_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.SetPA_BlendWeights_Func
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              BlendWeightNeck                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              BlendWeightChest                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              BlendWeight_L_Arm                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              BlendWeight_R_Arm                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              BlendWeightWheels                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              BlendWeightProps                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStaffbot_ABP_C::SetPA_BlendWeights_Func(float BlendWeightNeck, float BlendWeightChest, float BlendWeight_L_Arm, float BlendWeight_R_Arm, float BlendWeightWheels, float BlendWeightProps)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.SetPA_BlendWeights_Func");
		
		UStaffbot_ABP_C_SetPA_BlendWeights_Func_Params params {};
		params.BlendWeightNeck = BlendWeightNeck;
		params.BlendWeightChest = BlendWeightChest;
		params.BlendWeight_L_Arm = BlendWeight_L_Arm;
		params.BlendWeight_R_Arm = BlendWeight_R_Arm;
		params.BlendWeightWheels = BlendWeightWheels;
		params.BlendWeightProps = BlendWeightProps;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.UseCurves_Func
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Neck                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        Chest                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        LArm                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        RArm                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              NeckOut                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ChestOut                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ArmOut_L                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ArmOut_R                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStaffbot_ABP_C::UseCurves_Func(const class FName& Neck, const class FName& Chest, const class FName& LArm, const class FName& RArm, float* NeckOut, float* ChestOut, float* ArmOut_L, float* ArmOut_R)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.UseCurves_Func");
		
		UStaffbot_ABP_C_UseCurves_Func_Params params {};
		params.Neck = Neck;
		params.Chest = Chest;
		params.LArm = LArm;
		params.RArm = RArm;
		
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.CanPerformEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStaffbot_ABP_C::CanPerformEvent(bool Off)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.CanPerformEvent");
		
		UStaffbot_ABP_C_CanPerformEvent_Params params {};
		params.Off = Off;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.isStunnedEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsStunned                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStaffbot_ABP_C::isStunnedEvent(bool IsStunned)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.isStunnedEvent");
		
		UStaffbot_ABP_C_isStunnedEvent_Params params {};
		params.IsStunned = IsStunned;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.PerformEvent
	 * 		Flags  -> ()
	 */
	void UStaffbot_ABP_C::PerformEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.PerformEvent");
		
		UStaffbot_ABP_C_PerformEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.SellEvent
	 * 		Flags  -> ()
	 */
	void UStaffbot_ABP_C::SellEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.SellEvent");
		
		UStaffbot_ABP_C_SellEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.OverlappingDoor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Overlapping                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      Instigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStaffbot_ABP_C::OverlappingDoor(bool Overlapping, class AActor* Instigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.OverlappingDoor");
		
		UStaffbot_ABP_C_OverlappingDoor_Params params {};
		params.Overlapping = Overlapping;
		params.Instigator = Instigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.IsHangingEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsHanging                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStaffbot_ABP_C::IsHangingEvent(bool IsHanging)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.IsHangingEvent");
		
		UStaffbot_ABP_C_IsHangingEvent_Params params {};
		params.IsHanging = IsHanging;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.Spotlight Aim Actor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      AimActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStaffbot_ABP_C::SpotlightAimActor(class AActor* AimActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.Spotlight Aim Actor");
		
		UStaffbot_ABP_C_SpotlightAimActor_Params params {};
		params.AimActor = AimActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.CutsceneGrateEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ULevelSequencePlayer*                        SequencePlayer                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStaffbot_ABP_C::CutsceneGrateEvent(class ULevelSequencePlayer* SequencePlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.CutsceneGrateEvent");
		
		UStaffbot_ABP_C_CutsceneGrateEvent_Params params {};
		params.SequencePlayer = SequencePlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.CutSceneSpineBlender
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class ULevelSequencePlayer*                        Sequence                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStaffbot_ABP_C::CutSceneSpineBlender(bool Off, class ULevelSequencePlayer* Sequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.CutSceneSpineBlender");
		
		UStaffbot_ABP_C_CutSceneSpineBlender_Params params {};
		params.Off = Off;
		params.Sequence = Sequence;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.FreddyEndIdle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStaffbot_ABP_C::FreddyEndIdle(bool Off)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.FreddyEndIdle");
		
		UStaffbot_ABP_C_FreddyEndIdle_Params params {};
		params.Off = Off;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.UpdateLeapInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     ActorLocation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Destination                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Distance                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStaffbot_ABP_C::UpdateLeapInfo(const struct FVector& ActorLocation, const struct FVector& Destination, float Distance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.UpdateLeapInfo");
		
		UStaffbot_ABP_C_UpdateLeapInfo_Params params {};
		params.ActorLocation = ActorLocation;
		params.Destination = Destination;
		params.Distance = Distance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.LeapLoopEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStaffbot_ABP_C::LeapLoopEvent(bool Off)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.LeapLoopEvent");
		
		UStaffbot_ABP_C_LeapLoopEvent_Params params {};
		params.Off = Off;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.EndoBowlingCrawlEvent
	 * 		Flags  -> ()
	 */
	void UStaffbot_ABP_C::EndoBowlingCrawlEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.EndoBowlingCrawlEvent");
		
		UStaffbot_ABP_C_EndoBowlingCrawlEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.EndoSpawnInBowlingEvent
	 * 		Flags  -> ()
	 */
	void UStaffbot_ABP_C::EndoSpawnInBowlingEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.EndoSpawnInBowlingEvent");
		
		UStaffbot_ABP_C_EndoSpawnInBowlingEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.CanDieEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStaffbot_ABP_C::CanDieEvent(bool Off)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.CanDieEvent");
		
		UStaffbot_ABP_C_CanDieEvent_Params params {};
		params.Off = Off;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.CanHackEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStaffbot_ABP_C::CanHackEvent(bool Off)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.CanHackEvent");
		
		UStaffbot_ABP_C_CanHackEvent_Params params {};
		params.Off = Off;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.RoxyCrying
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStaffbot_ABP_C::RoxyCrying(bool Off)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.RoxyCrying");
		
		UStaffbot_ABP_C_RoxyCrying_Params params {};
		params.Off = Off;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.FreddyCorrupted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStaffbot_ABP_C::FreddyCorrupted(bool Off)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.FreddyCorrupted");
		
		UStaffbot_ABP_C_FreddyCorrupted_Params params {};
		params.Off = Off;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.ForceAnimOverride
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStaffbot_ABP_C::ForceAnimOverride(bool enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.ForceAnimOverride");
		
		UStaffbot_ABP_C_ForceAnimOverride_Params params {};
		params.enable = enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.EnterFreddyOverrideEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStaffbot_ABP_C::EnterFreddyOverrideEvent(bool Off)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.EnterFreddyOverrideEvent");
		
		UStaffbot_ABP_C_EnterFreddyOverrideEvent_Params params {};
		params.Off = Off;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.CanLeapEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStaffbot_ABP_C::CanLeapEvent(bool Off)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.CanLeapEvent");
		
		UStaffbot_ABP_C_CanLeapEvent_Params params {};
		params.Off = Off;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.CanLieDownEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OnOff                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStaffbot_ABP_C::CanLieDownEvent(bool OnOff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.CanLieDownEvent");
		
		UStaffbot_ABP_C_CanLieDownEvent_Params params {};
		params.OnOff = OnOff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.IsSickEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OnOff                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStaffbot_ABP_C::IsSickEvent(bool OnOff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.IsSickEvent");
		
		UStaffbot_ABP_C_IsSickEvent_Params params {};
		params.OnOff = OnOff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.CanWaveEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CanWave                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStaffbot_ABP_C::CanWaveEvent(bool CanWave)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.CanWaveEvent");
		
		UStaffbot_ABP_C_CanWaveEvent_Params params {};
		params.CanWave = CanWave;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.PoundDoorEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               PoundDoor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStaffbot_ABP_C::PoundDoorEvent(bool PoundDoor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.PoundDoorEvent");
		
		UStaffbot_ABP_C_PoundDoorEvent_Params params {};
		params.PoundDoor = PoundDoor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.StopScan
	 * 		Flags  -> ()
	 */
	void UStaffbot_ABP_C::StopScan()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.StopScan");
		
		UStaffbot_ABP_C_StopScan_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.LandEvent
	 * 		Flags  -> ()
	 */
	void UStaffbot_ABP_C::LandEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.LandEvent");
		
		UStaffbot_ABP_C_LandEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.JumpEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CanJump                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStaffbot_ABP_C::JumpEvent(bool CanJump)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.JumpEvent");
		
		UStaffbot_ABP_C_JumpEvent_Params params {};
		params.CanJump = CanJump;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.ForceScanStates
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OverrideScan                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               CanScan                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               CanScanL                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               CanScanR                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStaffbot_ABP_C::ForceScanStates(bool OverrideScan, bool CanScan, bool CanScanL, bool CanScanR)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.ForceScanStates");
		
		UStaffbot_ABP_C_ForceScanStates_Params params {};
		params.OverrideScan = OverrideScan;
		params.CanScan = CanScan;
		params.CanScanL = CanScanL;
		params.CanScanR = CanScanR;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.Breakthrough
	 * 		Flags  -> ()
	 */
	void UStaffbot_ABP_C::Breakthrough()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.Breakthrough");
		
		UStaffbot_ABP_C_Breakthrough_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.OnAnimInstanceSwap
	 * 		Flags  -> ()
	 */
	void UStaffbot_ABP_C::OnAnimInstanceSwap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.OnAnimInstanceSwap");
		
		UStaffbot_ABP_C_OnAnimInstanceSwap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.RummagingDoneEvent
	 * 		Flags  -> ()
	 */
	void UStaffbot_ABP_C::RummagingDoneEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.RummagingDoneEvent");
		
		UStaffbot_ABP_C_RummagingDoneEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.IsNotFirstPersonEvent
	 * 		Flags  -> ()
	 */
	void UStaffbot_ABP_C::IsNotFirstPersonEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.IsNotFirstPersonEvent");
		
		UStaffbot_ABP_C_IsNotFirstPersonEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.IsFirstPersonEvent
	 * 		Flags  -> ()
	 */
	void UStaffbot_ABP_C::IsFirstPersonEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.IsFirstPersonEvent");
		
		UStaffbot_ABP_C_IsFirstPersonEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.CanRummageEvent
	 * 		Flags  -> ()
	 */
	void UStaffbot_ABP_C::CanRummageEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.CanRummageEvent");
		
		UStaffbot_ABP_C_CanRummageEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.Stun Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsStunned                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStaffbot_ABP_C::StunEvent(bool IsStunned)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.Stun Event");
		
		UStaffbot_ABP_C_StunEvent_Params params {};
		params.IsStunned = IsStunned;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.CanRunEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CanRun                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStaffbot_ABP_C::CanRunEvent(bool CanRun)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.CanRunEvent");
		
		UStaffbot_ABP_C_CanRunEvent_Params params {};
		params.CanRun = CanRun;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.StartScan
	 * 		Flags  -> ()
	 */
	void UStaffbot_ABP_C::StartScan()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.StartScan");
		
		UStaffbot_ABP_C_StartScan_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.OpenDone
	 * 		Flags  -> ()
	 */
	void UStaffbot_ABP_C::OpenDone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.OpenDone");
		
		UStaffbot_ABP_C_OpenDone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.Open
	 * 		Flags  -> ()
	 */
	void UStaffbot_ABP_C::Open()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.Open");
		
		UStaffbot_ABP_C_Open_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.SearchingDone
	 * 		Flags  -> ()
	 */
	void UStaffbot_ABP_C::SearchingDone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.SearchingDone");
		
		UStaffbot_ABP_C_SearchingDone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.Searching
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHideObjectType                                    HideType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStaffbot_ABP_C::Searching(EHideObjectType HideType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.Searching");
		
		UStaffbot_ABP_C_Searching_Params params {};
		params.HideType = HideType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.TurnEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              TurnDegrees                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStaffbot_ABP_C::TurnEvent(float TurnDegrees)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.TurnEvent");
		
		UStaffbot_ABP_C_TurnEvent_Params params {};
		params.TurnDegrees = TurnDegrees;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.CanJumpscareEvent
	 * 		Flags  -> ()
	 */
	void UStaffbot_ABP_C::CanJumpscareEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.CanJumpscareEvent");
		
		UStaffbot_ABP_C_CanJumpscareEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_LinkedAnimGraph_2223EB084956692E101AC39C3EB08AB6
	 * 		Flags  -> ()
	 */
	void UStaffbot_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_LinkedAnimGraph_2223EB084956692E101AC39C3EB08AB6()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_LinkedAnimGraph_2223EB084956692E101AC39C3EB08AB6");
		
		UStaffbot_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_LinkedAnimGraph_2223EB084956692E101AC39C3EB08AB6_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_BlendSpacePlayer_6ADE4BEB47CCB5A9B1DC87BABAF109DC
	 * 		Flags  -> ()
	 */
	void UStaffbot_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_BlendSpacePlayer_6ADE4BEB47CCB5A9B1DC87BABAF109DC()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_BlendSpacePlayer_6ADE4BEB47CCB5A9B1DC87BABAF109DC");
		
		UStaffbot_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_BlendSpacePlayer_6ADE4BEB47CCB5A9B1DC87BABAF109DC_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_D3659B3D428301D31EFEC888E50F140A
	 * 		Flags  -> ()
	 */
	void UStaffbot_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_D3659B3D428301D31EFEC888E50F140A()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_D3659B3D428301D31EFEC888E50F140A");
		
		UStaffbot_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_D3659B3D428301D31EFEC888E50F140A_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_0F28073841356522AE99D39E6DC2672F
	 * 		Flags  -> ()
	 */
	void UStaffbot_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_0F28073841356522AE99D39E6DC2672F()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_0F28073841356522AE99D39E6DC2672F");
		
		UStaffbot_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_0F28073841356522AE99D39E6DC2672F_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_BlendListByBool_06DA027948BC13603FC1E6B52CDCE539
	 * 		Flags  -> ()
	 */
	void UStaffbot_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_BlendListByBool_06DA027948BC13603FC1E6B52CDCE539()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_BlendListByBool_06DA027948BC13603FC1E6B52CDCE539");
		
		UStaffbot_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_BlendListByBool_06DA027948BC13603FC1E6B52CDCE539_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_Constraint_E9BF9C744423673F54DE058CE87DADB2
	 * 		Flags  -> ()
	 */
	void UStaffbot_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_Constraint_E9BF9C744423673F54DE058CE87DADB2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_Constraint_E9BF9C744423673F54DE058CE87DADB2");
		
		UStaffbot_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_Constraint_E9BF9C744423673F54DE058CE87DADB2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_0D9FF5A74A276AD1132315B52941AD1B
	 * 		Flags  -> ()
	 */
	void UStaffbot_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_0D9FF5A74A276AD1132315B52941AD1B()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_0D9FF5A74A276AD1132315B52941AD1B");
		
		UStaffbot_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_0D9FF5A74A276AD1132315B52941AD1B_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_CDACBBBE494B00C26C120BB133DE881A
	 * 		Flags  -> ()
	 */
	void UStaffbot_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_CDACBBBE494B00C26C120BB133DE881A()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_CDACBBBE494B00C26C120BB133DE881A");
		
		UStaffbot_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_CDACBBBE494B00C26C120BB133DE881A_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_732E919E476FD24C0B645A87CD102AD6
	 * 		Flags  -> ()
	 */
	void UStaffbot_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_732E919E476FD24C0B645A87CD102AD6()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_732E919E476FD24C0B645A87CD102AD6");
		
		UStaffbot_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_732E919E476FD24C0B645A87CD102AD6_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_AB4C9BD84A782C479E411897C5794DA9
	 * 		Flags  -> ()
	 */
	void UStaffbot_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_AB4C9BD84A782C479E411897C5794DA9()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_AB4C9BD84A782C479E411897C5794DA9");
		
		UStaffbot_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_AB4C9BD84A782C479E411897C5794DA9_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_7BE42C38430DEF9A8DAD9286D31C4474
	 * 		Flags  -> ()
	 */
	void UStaffbot_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_7BE42C38430DEF9A8DAD9286D31C4474()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_7BE42C38430DEF9A8DAD9286D31C4474");
		
		UStaffbot_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_7BE42C38430DEF9A8DAD9286D31C4474_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_183EC1674EC178F0E396E98280EED88D
	 * 		Flags  -> ()
	 */
	void UStaffbot_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_183EC1674EC178F0E396E98280EED88D()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_183EC1674EC178F0E396E98280EED88D");
		
		UStaffbot_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_183EC1674EC178F0E396E98280EED88D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_E628898140FB07DBBB0D03B72B519E9C
	 * 		Flags  -> ()
	 */
	void UStaffbot_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_E628898140FB07DBBB0D03B72B519E9C()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_E628898140FB07DBBB0D03B72B519E9C");
		
		UStaffbot_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_E628898140FB07DBBB0D03B72B519E9C_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_BBC654FC4405147BC9924985A1A67584
	 * 		Flags  -> ()
	 */
	void UStaffbot_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_BBC654FC4405147BC9924985A1A67584()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_BBC654FC4405147BC9924985A1A67584");
		
		UStaffbot_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_BBC654FC4405147BC9924985A1A67584_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_3C20ABB640588213C0E0FF8D6A895DBD
	 * 		Flags  -> ()
	 */
	void UStaffbot_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_3C20ABB640588213C0E0FF8D6A895DBD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_3C20ABB640588213C0E0FF8D6A895DBD");
		
		UStaffbot_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_3C20ABB640588213C0E0FF8D6A895DBD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_F30E65D748D38934E106D8A7B7BBE96F
	 * 		Flags  -> ()
	 */
	void UStaffbot_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_F30E65D748D38934E106D8A7B7BBE96F()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_F30E65D748D38934E106D8A7B7BBE96F");
		
		UStaffbot_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_F30E65D748D38934E106D8A7B7BBE96F_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_EB66227647E801DF9A2EB8B83064DAEC
	 * 		Flags  -> ()
	 */
	void UStaffbot_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_EB66227647E801DF9A2EB8B83064DAEC()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_EB66227647E801DF9A2EB8B83064DAEC");
		
		UStaffbot_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_EB66227647E801DF9A2EB8B83064DAEC_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_9CAC51654006101AACB20C9D24B76B02
	 * 		Flags  -> ()
	 */
	void UStaffbot_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_9CAC51654006101AACB20C9D24B76B02()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_9CAC51654006101AACB20C9D24B76B02");
		
		UStaffbot_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_9CAC51654006101AACB20C9D24B76B02_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_6A184FF948A4D2460FFF1ABF3328E596
	 * 		Flags  -> ()
	 */
	void UStaffbot_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_6A184FF948A4D2460FFF1ABF3328E596()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_6A184FF948A4D2460FFF1ABF3328E596");
		
		UStaffbot_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_6A184FF948A4D2460FFF1ABF3328E596_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_3617A3B34CC02C77543033B69E007DFD
	 * 		Flags  -> ()
	 */
	void UStaffbot_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_3617A3B34CC02C77543033B69E007DFD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_3617A3B34CC02C77543033B69E007DFD");
		
		UStaffbot_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_3617A3B34CC02C77543033B69E007DFD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_3ED099844DE9327413A36DAAFD502190
	 * 		Flags  -> ()
	 */
	void UStaffbot_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_3ED099844DE9327413A36DAAFD502190()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_3ED099844DE9327413A36DAAFD502190");
		
		UStaffbot_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_3ED099844DE9327413A36DAAFD502190_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.BlueprintUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStaffbot_ABP_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.BlueprintUpdateAnimation");
		
		UStaffbot_ABP_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.BlueprintBeginPlay
	 * 		Flags  -> ()
	 */
	void UStaffbot_ABP_C::BlueprintBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.BlueprintBeginPlay");
		
		UStaffbot_ABP_C_BlueprintBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.Change_PA_Profile_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EStaffbot_PA_Enum                                  ProfileEnum                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIncludeSelf                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStaffbot_ABP_C::Change_PA_Profile_Event(EStaffbot_PA_Enum ProfileEnum, bool bIncludeSelf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.Change_PA_Profile_Event");
		
		UStaffbot_ABP_C_Change_PA_Profile_Event_Params params {};
		params.ProfileEnum = ProfileEnum;
		params.bIncludeSelf = bIncludeSelf;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.AnimNotify_SpringProfile
	 * 		Flags  -> ()
	 */
	void UStaffbot_ABP_C::AnimNotify_SpringProfile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.AnimNotify_SpringProfile");
		
		UStaffbot_ABP_C_AnimNotify_SpringProfile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.AnimNotify_LooseProfile
	 * 		Flags  -> ()
	 */
	void UStaffbot_ABP_C::AnimNotify_LooseProfile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.AnimNotify_LooseProfile");
		
		UStaffbot_ABP_C_AnimNotify_LooseProfile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.AnimNotify_UseCurvesTrue
	 * 		Flags  -> ()
	 */
	void UStaffbot_ABP_C::AnimNotify_UseCurvesTrue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.AnimNotify_UseCurvesTrue");
		
		UStaffbot_ABP_C_AnimNotify_UseCurvesTrue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.AnimNotify_UseCurvesFalse
	 * 		Flags  -> ()
	 */
	void UStaffbot_ABP_C::AnimNotify_UseCurvesFalse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.AnimNotify_UseCurvesFalse");
		
		UStaffbot_ABP_C_AnimNotify_UseCurvesFalse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.SetConstraintProfile_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EStaffbot_Constraint_Enum                          Con_ProfileEnum                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStaffbot_ABP_C::SetConstraintProfile_Event(EStaffbot_Constraint_Enum Con_ProfileEnum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.SetConstraintProfile_Event");
		
		UStaffbot_ABP_C_SetConstraintProfile_Event_Params params {};
		params.Con_ProfileEnum = Con_ProfileEnum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.AnimNotify_PropOn_L
	 * 		Flags  -> ()
	 */
	void UStaffbot_ABP_C::AnimNotify_PropOn_L()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.AnimNotify_PropOn_L");
		
		UStaffbot_ABP_C_AnimNotify_PropOn_L_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.AnimNotify_PropOff_L
	 * 		Flags  -> ()
	 */
	void UStaffbot_ABP_C::AnimNotify_PropOff_L()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.AnimNotify_PropOff_L");
		
		UStaffbot_ABP_C_AnimNotify_PropOff_L_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.AimHead_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               AimHead                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStaffbot_ABP_C::AimHead_Event(bool AimHead)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.AimHead_Event");
		
		UStaffbot_ABP_C_AimHead_Event_Params params {};
		params.AimHead = AimHead;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.AimChest_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               AimChest                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStaffbot_ABP_C::AimChest_Event(bool AimChest)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.AimChest_Event");
		
		UStaffbot_ABP_C_AimChest_Event_Params params {};
		params.AimChest = AimChest;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.SetHeadAim_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     AimLocation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStaffbot_ABP_C::SetHeadAim_Event(const struct FVector& AimLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.SetHeadAim_Event");
		
		UStaffbot_ABP_C_SetHeadAim_Event_Params params {};
		params.AimLocation = AimLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.Is Selling Event
	 * 		Flags  -> ()
	 */
	void UStaffbot_ABP_C::IsSellingEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.Is Selling Event");
		
		UStaffbot_ABP_C_IsSellingEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.IsStunned
	 * 		Flags  -> ()
	 */
	void UStaffbot_ABP_C::IsStunned()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.IsStunned");
		
		UStaffbot_ABP_C_IsStunned_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.IsNotStunned
	 * 		Flags  -> ()
	 */
	void UStaffbot_ABP_C::IsNotStunned()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.IsNotStunned");
		
		UStaffbot_ABP_C_IsNotStunned_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.Fire Laser Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CanFireLazer                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStaffbot_ABP_C::FireLaserEvent(bool CanFireLazer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.Fire Laser Event");
		
		UStaffbot_ABP_C_FireLaserEvent_Params params {};
		params.CanFireLazer = CanFireLazer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.JumpscareEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CanJumpscare                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStaffbot_ABP_C::JumpscareEvent(bool CanJumpscare)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.JumpscareEvent");
		
		UStaffbot_ABP_C_JumpscareEvent_Params params {};
		params.CanJumpscare = CanJumpscare;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.AnimNotify_DoneFiring
	 * 		Flags  -> ()
	 */
	void UStaffbot_ABP_C::AnimNotify_DoneFiring()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.AnimNotify_DoneFiring");
		
		UStaffbot_ABP_C_AnimNotify_DoneFiring_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.TaskEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               DoTask                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AStaffbotTaskPlacement_C*                    TargetTask                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStaffbot_ABP_C::TaskEvent(bool DoTask, class AStaffbotTaskPlacement_C* TargetTask)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.TaskEvent");
		
		UStaffbot_ABP_C_TaskEvent_Params params {};
		params.DoTask = DoTask;
		params.TargetTask = TargetTask;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.AnimNotify_ModelSwap
	 * 		Flags  -> ()
	 */
	void UStaffbot_ABP_C::AnimNotify_ModelSwap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.AnimNotify_ModelSwap");
		
		UStaffbot_ABP_C_AnimNotify_ModelSwap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.AnimNotify_TaskAnimDone
	 * 		Flags  -> ()
	 */
	void UStaffbot_ABP_C::AnimNotify_TaskAnimDone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.AnimNotify_TaskAnimDone");
		
		UStaffbot_ABP_C_AnimNotify_TaskAnimDone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.CanSeePlayerEvent
	 * 		Flags  -> ()
	 */
	void UStaffbot_ABP_C::CanSeePlayerEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.CanSeePlayerEvent");
		
		UStaffbot_ABP_C_CanSeePlayerEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.AimAtPlayerEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               AimAtPlayer                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStaffbot_ABP_C::AimAtPlayerEvent(bool AimAtPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.AimAtPlayerEvent");
		
		UStaffbot_ABP_C_AimAtPlayerEvent_Params params {};
		params.AimAtPlayer = AimAtPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.LockRShoulder
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               LockR_Shoulder                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStaffbot_ABP_C::LockRShoulder(bool LockR_Shoulder)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.LockRShoulder");
		
		UStaffbot_ABP_C_LockRShoulder_Params params {};
		params.LockR_Shoulder = LockR_Shoulder;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.LockLShoulder
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               LockL_Shoulder                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStaffbot_ABP_C::LockLShoulder(bool LockL_Shoulder)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.LockLShoulder");
		
		UStaffbot_ABP_C_LockLShoulder_Params params {};
		params.LockL_Shoulder = LockL_Shoulder;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.R_IK_Arm_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsOn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStaffbot_ABP_C::R_IK_Arm_Event(bool IsOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.R_IK_Arm_Event");
		
		UStaffbot_ABP_C_R_IK_Arm_Event_Params params {};
		params.IsOn = IsOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.L_IK_Arm_Target_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStaffbot_ABP_C::L_IK_Arm_Target_Event(const struct FVector& Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.L_IK_Arm_Target_Event");
		
		UStaffbot_ABP_C_L_IK_Arm_Target_Event_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.L_IK_Arm_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsON                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStaffbot_ABP_C::L_IK_Arm_Event(bool IsON)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.L_IK_Arm_Event");
		
		UStaffbot_ABP_C_L_IK_Arm_Event_Params params {};
		params.IsON = IsON;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.R_IK_Arm_Target_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStaffbot_ABP_C::R_IK_Arm_Target_Event(const struct FVector& Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.R_IK_Arm_Target_Event");
		
		UStaffbot_ABP_C_R_IK_Arm_Target_Event_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.WarningEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsWarning                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            WarningCount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStaffbot_ABP_C::WarningEvent(bool IsWarning, int32_t WarningCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.WarningEvent");
		
		UStaffbot_ABP_C_WarningEvent_Params params {};
		params.IsWarning = IsWarning;
		params.WarningCount = WarningCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.PlayerHasPartyPass_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               HasPartyPass                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStaffbot_ABP_C::PlayerHasPartyPass_Event(bool HasPartyPass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.PlayerHasPartyPass_Event");
		
		UStaffbot_ABP_C_PlayerHasPartyPass_Event_Params params {};
		params.HasPartyPass = HasPartyPass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.AnimNotify_Sound_EndArmMovement
	 * 		Flags  -> ()
	 */
	void UStaffbot_ABP_C::AnimNotify_Sound_EndArmMovement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.AnimNotify_Sound_EndArmMovement");
		
		UStaffbot_ABP_C_AnimNotify_Sound_EndArmMovement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.AnimNotify_Sound_EndHeadMovement
	 * 		Flags  -> ()
	 */
	void UStaffbot_ABP_C::AnimNotify_Sound_EndHeadMovement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.AnimNotify_Sound_EndHeadMovement");
		
		UStaffbot_ABP_C_AnimNotify_Sound_EndHeadMovement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.AnimNotify_Sound_EndMovement
	 * 		Flags  -> ()
	 */
	void UStaffbot_ABP_C::AnimNotify_Sound_EndMovement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.AnimNotify_Sound_EndMovement");
		
		UStaffbot_ABP_C_AnimNotify_Sound_EndMovement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.AnimNotify_Sound_StartArmMovement
	 * 		Flags  -> ()
	 */
	void UStaffbot_ABP_C::AnimNotify_Sound_StartArmMovement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.AnimNotify_Sound_StartArmMovement");
		
		UStaffbot_ABP_C_AnimNotify_Sound_StartArmMovement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.AnimNotify_Sound_StartHeadMovement
	 * 		Flags  -> ()
	 */
	void UStaffbot_ABP_C::AnimNotify_Sound_StartHeadMovement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.AnimNotify_Sound_StartHeadMovement");
		
		UStaffbot_ABP_C_AnimNotify_Sound_StartHeadMovement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.AnimNotify_Sound_StartMovement
	 * 		Flags  -> ()
	 */
	void UStaffbot_ABP_C::AnimNotify_Sound_StartMovement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.AnimNotify_Sound_StartMovement");
		
		UStaffbot_ABP_C_AnimNotify_Sound_StartMovement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.AlertEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isAlerting                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStaffbot_ABP_C::AlertEvent(bool isAlerting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.AlertEvent");
		
		UStaffbot_ABP_C_AlertEvent_Params params {};
		params.isAlerting = isAlerting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.SetHeadAimTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     AimLocation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStaffbot_ABP_C::SetHeadAimTarget(const struct FVector& AimLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.SetHeadAimTarget");
		
		UStaffbot_ABP_C_SetHeadAimTarget_Params params {};
		params.AimLocation = AimLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.HeadAimEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OnOff                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStaffbot_ABP_C::HeadAimEvent(bool OnOff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.HeadAimEvent");
		
		UStaffbot_ABP_C_HeadAimEvent_Params params {};
		params.OnOff = OnOff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.FazerblastDestroy_Event
	 * 		Flags  -> ()
	 */
	void UStaffbot_ABP_C::FazerblastDestroy_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.FazerblastDestroy_Event");
		
		UStaffbot_ABP_C_FazerblastDestroy_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.VoAnimEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAkAudioEvent*                               AKEvent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStaffbot_ABP_C::VoAnimEvent(class UAkAudioEvent* AKEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.VoAnimEvent");
		
		UStaffbot_ABP_C_VoAnimEvent_Params params {};
		params.AKEvent = AKEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.SecurityTurnEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStaffbot_ABP_C::SecurityTurnEvent(float Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.SecurityTurnEvent");
		
		UStaffbot_ABP_C_SecurityTurnEvent_Params params {};
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.AnimNotify_Select Anim
	 * 		Flags  -> ()
	 */
	void UStaffbot_ABP_C::AnimNotify_SelectAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.AnimNotify_Select Anim");
		
		UStaffbot_ABP_C_AnimNotify_SelectAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.AnimNotify_DanceDone
	 * 		Flags  -> ()
	 */
	void UStaffbot_ABP_C::AnimNotify_DanceDone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.AnimNotify_DanceDone");
		
		UStaffbot_ABP_C_AnimNotify_DanceDone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP.Staffbot_ABP_C.ExecuteUbergraph_Staffbot_ABP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStaffbot_ABP_C::ExecuteUbergraph_Staffbot_ABP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP.Staffbot_ABP_C.ExecuteUbergraph_Staffbot_ABP");
		
		UStaffbot_ABP_C_ExecuteUbergraph_Staffbot_ABP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStaffbot_ABP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStaffbot_ABP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Staffbot_ABP.Staffbot_ABP_C");
		return ptr;
	}

}


