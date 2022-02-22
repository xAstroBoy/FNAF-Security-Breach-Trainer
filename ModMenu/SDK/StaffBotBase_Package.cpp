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
	 * 		Name   -> Function StaffBotBase.StaffBotBase_C.GetStartTurnTowardsEvent
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAkAudioEvent*                               StartTurnTowards                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AStaffBotBase_C::GetStartTurnTowardsEvent(class UAkAudioEvent** StartTurnTowards)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffBotBase.StaffBotBase_C.GetStartTurnTowardsEvent");
		
		AStaffBotBase_C_GetStartTurnTowardsEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StartTurnTowards != nullptr)
			*StartTurnTowards = params.StartTurnTowards;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function StaffBotBase.StaffBotBase_C.GetEndTurnTowardsEvent
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAkAudioEvent*                               EndTurnTowards                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AStaffBotBase_C::GetEndTurnTowardsEvent(class UAkAudioEvent** EndTurnTowards)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffBotBase.StaffBotBase_C.GetEndTurnTowardsEvent");
		
		AStaffBotBase_C_GetEndTurnTowardsEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (EndTurnTowards != nullptr)
			*EndTurnTowards = params.EndTurnTowards;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function StaffBotBase.StaffBotBase_C.DoorEntryNotAllowed
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UDoorComponent*                              DoorComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool AStaffBotBase_C::DoorEntryNotAllowed(class UDoorComponent* DoorComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffBotBase.StaffBotBase_C.DoorEntryNotAllowed");
		
		AStaffBotBase_C_DoorEntryNotAllowed_Params params {};
		params.DoorComponent = DoorComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function StaffBotBase.StaffBotBase_C.GetHeadAimTargetActor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      AimActor                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AStaffBotBase_C::GetHeadAimTargetActor(class AActor** AimActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffBotBase.StaffBotBase_C.GetHeadAimTargetActor");
		
		AStaffBotBase_C_GetHeadAimTargetActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AimActor != nullptr)
			*AimActor = params.AimActor;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function StaffBotBase.StaffBotBase_C.GetHeadAimTargetLocation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     HeadAimLocation                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AStaffBotBase_C::GetHeadAimTargetLocation(struct FVector* HeadAimLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffBotBase.StaffBotBase_C.GetHeadAimTargetLocation");
		
		AStaffBotBase_C_GetHeadAimTargetLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HeadAimLocation != nullptr)
			*HeadAimLocation = params.HeadAimLocation;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function StaffBotBase.StaffBotBase_C.CanBeStunned
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AStaffBotBase_C::CanBeStunned()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffBotBase.StaffBotBase_C.CanBeStunned");
		
		AStaffBotBase_C_CanBeStunned_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function StaffBotBase.StaffBotBase_C.IsStunned
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		bool                                               IsStunned                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStaffBotBase_C::IsStunned(bool* IsStunned)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffBotBase.StaffBotBase_C.IsStunned");
		
		AStaffBotBase_C_IsStunned_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsStunned != nullptr)
			*IsStunned = params.IsStunned;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function StaffBotBase.StaffBotBase_C.RequestPlayerInformation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     PlayerLocation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               HasValidInfo                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStaffBotBase_C::RequestPlayerInformation(struct FVector* PlayerLocation, bool* HasValidInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffBotBase.StaffBotBase_C.RequestPlayerInformation");
		
		AStaffBotBase_C_RequestPlayerInformation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayerLocation != nullptr)
			*PlayerLocation = params.PlayerLocation;
		if (HasValidInfo != nullptr)
			*HasValidInfo = params.HasValidInfo;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function StaffBotBase.StaffBotBase_C.GetSightComponent
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USightComponent*                             Sight                                                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AStaffBotBase_C::GetSightComponent(class USightComponent** Sight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffBotBase.StaffBotBase_C.GetSightComponent");
		
		AStaffBotBase_C_GetSightComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Sight != nullptr)
			*Sight = params.Sight;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function StaffBotBase.StaffBotBase_C.GetAlertInfo
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<fnaf9_EFNAFAISpawnType>                     TypesToAlert                                               (Parm, OutParm, HasGetValueTypeHash)
	 * 		int32_t                                            NumberOfAlerts                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AStaffBotBase_C::GetAlertInfo(TArray<fnaf9_EFNAFAISpawnType>* TypesToAlert, int32_t* NumberOfAlerts)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffBotBase.StaffBotBase_C.GetAlertInfo");
		
		AStaffBotBase_C_GetAlertInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TypesToAlert != nullptr)
			*TypesToAlert = params.TypesToAlert;
		if (NumberOfAlerts != nullptr)
			*NumberOfAlerts = params.NumberOfAlerts;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function StaffBotBase.StaffBotBase_C.IsWarningFinished
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Finished                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStaffBotBase_C::IsWarningFinished(bool* Finished)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffBotBase.StaffBotBase_C.IsWarningFinished");
		
		AStaffBotBase_C_IsWarningFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Finished != nullptr)
			*Finished = params.Finished;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function StaffBotBase.StaffBotBase_C.GetStaffBotVO
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStaffBotBase_C::GetStaffBotVO()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffBotBase.StaffBotBase_C.GetStaffBotVO");
		
		AStaffBotBase_C_GetStaffBotVO_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function StaffBotBase.StaffBotBase_C.AttemptHeadAim
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStaffBotBase_C::AttemptHeadAim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffBotBase.StaffBotBase_C.AttemptHeadAim");
		
		AStaffBotBase_C_AttemptHeadAim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function StaffBotBase.StaffBotBase_C.PlayVoice
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USoundBase*                                  NewSound                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CutPreviousSound                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStaffBotBase_C::PlayVoice(class USoundBase* NewSound, bool CutPreviousSound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffBotBase.StaffBotBase_C.PlayVoice");
		
		AStaffBotBase_C_PlayVoice_Params params {};
		params.NewSound = NewSound;
		params.CutPreviousSound = CutPreviousSound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function StaffBotBase.StaffBotBase_C.GetMovementDirection
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     Direction                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AStaffBotBase_C::GetMovementDirection(struct FVector* Direction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffBotBase.StaffBotBase_C.GetMovementDirection");
		
		AStaffBotBase_C_GetMovementDirection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Direction != nullptr)
			*Direction = params.Direction;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function StaffBotBase.StaffBotBase_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AStaffBotBase_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffBotBase.StaffBotBase_C.UserConstructionScript");
		
		AStaffBotBase_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function StaffBotBase.StaffBotBase_C.OnFailure_E9830418481AAAC2670CCB8882EF32B0
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AStaffBotBase_C::OnFailure_E9830418481AAAC2670CCB8882EF32B0()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffBotBase.StaffBotBase_C.OnFailure_E9830418481AAAC2670CCB8882EF32B0");
		
		AStaffBotBase_C_OnFailure_E9830418481AAAC2670CCB8882EF32B0_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function StaffBotBase.StaffBotBase_C.OnSuccess_E9830418481AAAC2670CCB8882EF32B0
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AStaffBotBase_C::OnSuccess_E9830418481AAAC2670CCB8882EF32B0()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffBotBase.StaffBotBase_C.OnSuccess_E9830418481AAAC2670CCB8882EF32B0");
		
		AStaffBotBase_C_OnSuccess_E9830418481AAAC2670CCB8882EF32B0_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function StaffBotBase.StaffBotBase_C.OnFailure_371B42EB46E3E0D10174CD8948725F67
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        WrittenAchievementName                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              WrittenProgress                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            WrittenUserTag                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AStaffBotBase_C::OnFailure_371B42EB46E3E0D10174CD8948725F67(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffBotBase.StaffBotBase_C.OnFailure_371B42EB46E3E0D10174CD8948725F67");
		
		AStaffBotBase_C_OnFailure_371B42EB46E3E0D10174CD8948725F67_Params params {};
		params.WrittenAchievementName = WrittenAchievementName;
		params.WrittenProgress = WrittenProgress;
		params.WrittenUserTag = WrittenUserTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function StaffBotBase.StaffBotBase_C.OnSuccess_371B42EB46E3E0D10174CD8948725F67
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        WrittenAchievementName                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              WrittenProgress                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            WrittenUserTag                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AStaffBotBase_C::OnSuccess_371B42EB46E3E0D10174CD8948725F67(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffBotBase.StaffBotBase_C.OnSuccess_371B42EB46E3E0D10174CD8948725F67");
		
		AStaffBotBase_C_OnSuccess_371B42EB46E3E0D10174CD8948725F67_Params params {};
		params.WrittenAchievementName = WrittenAchievementName;
		params.WrittenProgress = WrittenProgress;
		params.WrittenUserTag = WrittenUserTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function StaffBotBase.StaffBotBase_C.StopEmitter
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStaffBotBase_C::StopEmitter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffBotBase.StaffBotBase_C.StopEmitter");
		
		AStaffBotBase_C_StopEmitter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function StaffBotBase.StaffBotBase_C.PlayEmitter
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStaffBotBase_C::PlayEmitter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffBotBase.StaffBotBase_C.PlayEmitter");
		
		AStaffBotBase_C_PlayEmitter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function StaffBotBase.StaffBotBase_C.OnEndOverlapDoor
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AStaffBotBase_C::OnEndOverlapDoor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffBotBase.StaffBotBase_C.OnEndOverlapDoor");
		
		AStaffBotBase_C_OnEndOverlapDoor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function StaffBotBase.StaffBotBase_C.OnOverlappedDoor
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bCanEnterDoor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		fnaf9_EConditionFailReason                         CantEnterReason                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDoorComponent*                              DoorComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AStaffBotBase_C::OnOverlappedDoor(bool bCanEnterDoor, fnaf9_EConditionFailReason CantEnterReason, class UDoorComponent* DoorComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffBotBase.StaffBotBase_C.OnOverlappedDoor");
		
		AStaffBotBase_C_OnOverlappedDoor_Params params {};
		params.bCanEnterDoor = bCanEnterDoor;
		params.CantEnterReason = CantEnterReason;
		params.DoorComponent = DoorComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function StaffBotBase.StaffBotBase_C.Unstun
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStaffBotBase_C::Unstun()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffBotBase.StaffBotBase_C.Unstun");
		
		AStaffBotBase_C_Unstun_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function StaffBotBase.StaffBotBase_C.ForceKill
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Animate_                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStaffBotBase_C::ForceKill(bool Animate_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffBotBase.StaffBotBase_C.ForceKill");
		
		AStaffBotBase_C_ForceKill_Params params {};
		params.Animate_ = Animate_;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function StaffBotBase.StaffBotBase_C.GameStart
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStaffBotBase_C::GameStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffBotBase.StaffBotBase_C.GameStart");
		
		AStaffBotBase_C_GameStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function StaffBotBase.StaffBotBase_C.GameEnd
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStaffBotBase_C::GameEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffBotBase.StaffBotBase_C.GameEnd");
		
		AStaffBotBase_C_GameEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function StaffBotBase.StaffBotBase_C.GameExit
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStaffBotBase_C::GameExit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffBotBase.StaffBotBase_C.GameExit");
		
		AStaffBotBase_C_GameExit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function StaffBotBase.StaffBotBase_C.PlayerHit
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void AStaffBotBase_C::PlayerHit(const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffBotBase.StaffBotBase_C.PlayerHit");
		
		AStaffBotBase_C_PlayerHit_Params params {};
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function StaffBotBase.StaffBotBase_C.SetAlertInfo
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<fnaf9_EFNAFAISpawnType>                     TypesToAlert                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 * 		int32_t                                            NumberOfAlerts                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AStaffBotBase_C::SetAlertInfo(TArray<fnaf9_EFNAFAISpawnType> TypesToAlert, int32_t NumberOfAlerts)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffBotBase.StaffBotBase_C.SetAlertInfo");
		
		AStaffBotBase_C_SetAlertInfo_Params params {};
		params.TypesToAlert = TypesToAlert;
		params.NumberOfAlerts = NumberOfAlerts;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function StaffBotBase.StaffBotBase_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AStaffBotBase_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffBotBase.StaffBotBase_C.ReceiveBeginPlay");
		
		AStaffBotBase_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function StaffBotBase.StaffBotBase_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AStaffBotBase_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffBotBase.StaffBotBase_C.ReceiveTick");
		
		AStaffBotBase_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function StaffBotBase.StaffBotBase_C.NonLethalJumpscare
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               HasJumpscared                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStaffBotBase_C::NonLethalJumpscare(class AActor* Actor, bool HasJumpscared)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffBotBase.StaffBotBase_C.NonLethalJumpscare");
		
		AStaffBotBase_C_NonLethalJumpscare_Params params {};
		params.Actor = Actor;
		params.HasJumpscared = HasJumpscared;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function StaffBotBase.StaffBotBase_C.ResetJumpscare
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AStaffBotBase_C::ResetJumpscare()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffBotBase.StaffBotBase_C.ResetJumpscare");
		
		AStaffBotBase_C_ResetJumpscare_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function StaffBotBase.StaffBotBase_C.TaskDoneEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AStaffBotBase_C::TaskDoneEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffBotBase.StaffBotBase_C.TaskDoneEvent");
		
		AStaffBotBase_C_TaskDoneEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function StaffBotBase.StaffBotBase_C.ModelSwapEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AStaffBotBase_C::ModelSwapEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffBotBase.StaffBotBase_C.ModelSwapEvent");
		
		AStaffBotBase_C_ModelSwapEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function StaffBotBase.StaffBotBase_C.Send Alert
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsAlerting                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStaffBotBase_C::Send_Alert(bool IsAlerting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffBotBase.StaffBotBase_C.Send Alert");
		
		AStaffBotBase_C_Send_Alert_Params params {};
		params.IsAlerting = IsAlerting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function StaffBotBase.StaffBotBase_C.Start Alert
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Alert                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AStaffBotBase_C::Start_Alert(const class FName& Alert)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffBotBase.StaffBotBase_C.Start Alert");
		
		AStaffBotBase_C_Start_Alert_Params params {};
		params.Alert = Alert;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function StaffBotBase.StaffBotBase_C.Stop Alert
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Alert                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AStaffBotBase_C::Stop_Alert(const class FName& Alert)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffBotBase.StaffBotBase_C.Stop Alert");
		
		AStaffBotBase_C_Stop_Alert_Params params {};
		params.Alert = Alert;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function StaffBotBase.StaffBotBase_C.LaserHit
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AEQ_LaserGun_C*                              Gun                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  HitResult                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void AStaffBotBase_C::LaserHit(class AEQ_LaserGun_C* Gun, const struct FHitResult& HitResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffBotBase.StaffBotBase_C.LaserHit");
		
		AStaffBotBase_C_LaserHit_Params params {};
		params.Gun = Gun;
		params.HitResult = HitResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function StaffBotBase.StaffBotBase_C.Stun
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStaffBotBase_C::Stun()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffBotBase.StaffBotBase_C.Stun");
		
		AStaffBotBase_C_Stun_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function StaffBotBase.StaffBotBase_C.SetHeadAimTarget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      TargetActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     TargetLocation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               OffsetByViewHeight                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStaffBotBase_C::SetHeadAimTarget(class AActor* TargetActor, const struct FVector& TargetLocation, bool OffsetByViewHeight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffBotBase.StaffBotBase_C.SetHeadAimTarget");
		
		AStaffBotBase_C_SetHeadAimTarget_Params params {};
		params.TargetActor = TargetActor;
		params.TargetLocation = TargetLocation;
		params.OffsetByViewHeight = OffsetByViewHeight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function StaffBotBase.StaffBotBase_C.SetHeadAimEnabled
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStaffBotBase_C::SetHeadAimEnabled(bool enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffBotBase.StaffBotBase_C.SetHeadAimEnabled");
		
		AStaffBotBase_C_SetHeadAimEnabled_Params params {};
		params.enable = enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function StaffBotBase.StaffBotBase_C.Start Movement
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		StaffbotJob_Anim_EStaffbotJob_Anim                 Bot_Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AStaffBotBase_C::Start_Movement(StaffbotJob_Anim_EStaffbotJob_Anim Bot_Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffBotBase.StaffBotBase_C.Start Movement");
		
		AStaffBotBase_C_Start_Movement_Params params {};
		params.Bot_Type = Bot_Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function StaffBotBase.StaffBotBase_C.End Movement
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		StaffbotJob_Anim_EStaffbotJob_Anim                 Bot_Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AStaffBotBase_C::End_Movement(StaffbotJob_Anim_EStaffbotJob_Anim Bot_Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffBotBase.StaffBotBase_C.End Movement");
		
		AStaffBotBase_C_End_Movement_Params params {};
		params.Bot_Type = Bot_Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function StaffBotBase.StaffBotBase_C.Start Head Movement
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		StaffbotJob_Anim_EStaffbotJob_Anim                 Bot_Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AStaffBotBase_C::Start_Head_Movement(StaffbotJob_Anim_EStaffbotJob_Anim Bot_Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffBotBase.StaffBotBase_C.Start Head Movement");
		
		AStaffBotBase_C_Start_Head_Movement_Params params {};
		params.Bot_Type = Bot_Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function StaffBotBase.StaffBotBase_C.End Head Movement
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		StaffbotJob_Anim_EStaffbotJob_Anim                 Bot_Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AStaffBotBase_C::End_Head_Movement(StaffbotJob_Anim_EStaffbotJob_Anim Bot_Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffBotBase.StaffBotBase_C.End Head Movement");
		
		AStaffBotBase_C_End_Head_Movement_Params params {};
		params.Bot_Type = Bot_Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function StaffBotBase.StaffBotBase_C.Start Arm Movement
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		StaffbotJob_Anim_EStaffbotJob_Anim                 Bot_Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AStaffBotBase_C::Start_Arm_Movement(StaffbotJob_Anim_EStaffbotJob_Anim Bot_Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffBotBase.StaffBotBase_C.Start Arm Movement");
		
		AStaffBotBase_C_Start_Arm_Movement_Params params {};
		params.Bot_Type = Bot_Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function StaffBotBase.StaffBotBase_C.End Arm Movement
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		StaffbotJob_Anim_EStaffbotJob_Anim                 Bot_Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AStaffBotBase_C::End_Arm_Movement(StaffbotJob_Anim_EStaffbotJob_Anim Bot_Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffBotBase.StaffBotBase_C.End Arm Movement");
		
		AStaffBotBase_C_End_Arm_Movement_Params params {};
		params.Bot_Type = Bot_Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function StaffBotBase.StaffBotBase_C.Start Warning
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            WarningCount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AStaffBotBase_C::Start_Warning(int32_t WarningCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffBotBase.StaffBotBase_C.Start Warning");
		
		AStaffBotBase_C_Start_Warning_Params params {};
		params.WarningCount = WarningCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function StaffBotBase.StaffBotBase_C.Stop Warning
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStaffBotBase_C::Stop_Warning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffBotBase.StaffBotBase_C.Stop Warning");
		
		AStaffBotBase_C_Stop_Warning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function StaffBotBase.StaffBotBase_C.Trigger Interaction Point
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AStaffbotInteractionPoint_C*                 InteractionPoint                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AStaffBotBase_C::Trigger_Interaction_Point(class AStaffbotInteractionPoint_C* InteractionPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffBotBase.StaffBotBase_C.Trigger Interaction Point");
		
		AStaffBotBase_C_Trigger_Interaction_Point_Params params {};
		params.InteractionPoint = InteractionPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function StaffBotBase.StaffBotBase_C.BndEvt__AutoAlertRadius_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void AStaffBotBase_C::BndEvt__AutoAlertRadius_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffBotBase.StaffBotBase_C.BndEvt__AutoAlertRadius_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
		
		AStaffBotBase_C_BndEvt__AutoAlertRadius_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function StaffBotBase.StaffBotBase_C.BndEvt__AutoAlertRadius_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AStaffBotBase_C::BndEvt__AutoAlertRadius_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffBotBase.StaffBotBase_C.BndEvt__AutoAlertRadius_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");
		
		AStaffBotBase_C_BndEvt__AutoAlertRadius_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function StaffBotBase.StaffBotBase_C.DisableStaffbot
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AStaffBotBase_C::DisableStaffbot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffBotBase.StaffBotBase_C.DisableStaffbot");
		
		AStaffBotBase_C_DisableStaffbot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function StaffBotBase.StaffBotBase_C.EnableStaffbot
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AStaffBotBase_C::EnableStaffbot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffBotBase.StaffBotBase_C.EnableStaffbot");
		
		AStaffBotBase_C_EnableStaffbot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function StaffBotBase.StaffBotBase_C.EnablePatrol
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AStaffBotBase_C::EnablePatrol()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffBotBase.StaffBotBase_C.EnablePatrol");
		
		AStaffBotBase_C_EnablePatrol_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function StaffBotBase.StaffBotBase_C.DisablePatrol
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AStaffBotBase_C::DisablePatrol()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffBotBase.StaffBotBase_C.DisablePatrol");
		
		AStaffBotBase_C_DisablePatrol_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function StaffBotBase.StaffBotBase_C.ToggleInRange
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               InRange                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStaffBotBase_C::ToggleInRange(bool InRange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffBotBase.StaffBotBase_C.ToggleInRange");
		
		AStaffBotBase_C_ToggleInRange_Params params {};
		params.InRange = InRange;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function StaffBotBase.StaffBotBase_C.ExecuteUbergraph_StaffBotBase
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AStaffBotBase_C::ExecuteUbergraph_StaffBotBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffBotBase.StaffBotBase_C.ExecuteUbergraph_StaffBotBase");
		
		AStaffBotBase_C_ExecuteUbergraph_StaffBotBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AStaffBotBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AStaffBotBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass StaffBotBase.StaffBotBase_C");
		return ptr;
	}

}


