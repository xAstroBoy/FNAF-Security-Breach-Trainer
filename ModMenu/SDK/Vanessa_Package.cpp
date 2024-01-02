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
	 * 		Name   -> Function Vanessa.Vanessa_C.RequestPlayerInformation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     PlayerLocation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               HasValidInfo                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AVanessa_C::RequestPlayerInformation(struct FVector* PlayerLocation, bool* HasValidInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa.Vanessa_C.RequestPlayerInformation");
		
		AVanessa_C_RequestPlayerInformation_Params params {};
		
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa.Vanessa_C.GetAlertInfoComplex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FAnimatronicTypeData>                TypesToAlert                                               (Parm, OutParm)
	 * 		int32_t                                            NumberOfAlerts                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AVanessa_C::GetAlertInfoComplex(TArray<struct FAnimatronicTypeData>* TypesToAlert, int32_t* NumberOfAlerts)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa.Vanessa_C.GetAlertInfoComplex");
		
		AVanessa_C_GetAlertInfoComplex_Params params {};
		
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa.Vanessa_C.GetAlertInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<EFNAFAISpawnType>                           TypesToAlert                                               (Parm, OutParm)
	 * 		int32_t                                            NumberOfAlerts                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AVanessa_C::GetAlertInfo(TArray<EFNAFAISpawnType>* TypesToAlert, int32_t* NumberOfAlerts)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa.Vanessa_C.GetAlertInfo");
		
		AVanessa_C_GetAlertInfo_Params params {};
		
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa.Vanessa_C.IsWarningFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Finished                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AVanessa_C::IsWarningFinished(bool* Finished)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa.Vanessa_C.IsWarningFinished");
		
		AVanessa_C_IsWarningFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Finished != nullptr)
			*Finished = params.Finished;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa.Vanessa_C.GetAlertType
	 * 		Flags  -> ()
	 */
	EAlertType AVanessa_C::GetAlertType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa.Vanessa_C.GetAlertType");
		
		AVanessa_C_GetAlertType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa.Vanessa_C.GetShouldCheckHidingLocations
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ShouldCheckHidingLocations                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AVanessa_C::GetShouldCheckHidingLocations(bool* ShouldCheckHidingLocations)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa.Vanessa_C.GetShouldCheckHidingLocations");
		
		AVanessa_C_GetShouldCheckHidingLocations_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShouldCheckHidingLocations != nullptr)
			*ShouldCheckHidingLocations = params.ShouldCheckHidingLocations;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa.Vanessa_C.GetRoomSeekMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ERoomSeekMode                                      SeekMode                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AVanessa_C::GetRoomSeekMode(ERoomSeekMode* SeekMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa.Vanessa_C.GetRoomSeekMode");
		
		AVanessa_C_GetRoomSeekMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SeekMode != nullptr)
			*SeekMode = params.SeekMode;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa.Vanessa_C.OnNotifyEnd_FA4713CB499BFC26786D6E8E8597FB63
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AVanessa_C::OnNotifyEnd_FA4713CB499BFC26786D6E8E8597FB63(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa.Vanessa_C.OnNotifyEnd_FA4713CB499BFC26786D6E8E8597FB63");
		
		AVanessa_C_OnNotifyEnd_FA4713CB499BFC26786D6E8E8597FB63_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa.Vanessa_C.OnNotifyBegin_FA4713CB499BFC26786D6E8E8597FB63
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AVanessa_C::OnNotifyBegin_FA4713CB499BFC26786D6E8E8597FB63(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa.Vanessa_C.OnNotifyBegin_FA4713CB499BFC26786D6E8E8597FB63");
		
		AVanessa_C_OnNotifyBegin_FA4713CB499BFC26786D6E8E8597FB63_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa.Vanessa_C.OnInterrupted_FA4713CB499BFC26786D6E8E8597FB63
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AVanessa_C::OnInterrupted_FA4713CB499BFC26786D6E8E8597FB63(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa.Vanessa_C.OnInterrupted_FA4713CB499BFC26786D6E8E8597FB63");
		
		AVanessa_C_OnInterrupted_FA4713CB499BFC26786D6E8E8597FB63_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa.Vanessa_C.OnBlendOut_FA4713CB499BFC26786D6E8E8597FB63
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AVanessa_C::OnBlendOut_FA4713CB499BFC26786D6E8E8597FB63(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa.Vanessa_C.OnBlendOut_FA4713CB499BFC26786D6E8E8597FB63");
		
		AVanessa_C_OnBlendOut_FA4713CB499BFC26786D6E8E8597FB63_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa.Vanessa_C.OnCompleted_FA4713CB499BFC26786D6E8E8597FB63
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AVanessa_C::OnCompleted_FA4713CB499BFC26786D6E8E8597FB63(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa.Vanessa_C.OnCompleted_FA4713CB499BFC26786D6E8E8597FB63");
		
		AVanessa_C_OnCompleted_FA4713CB499BFC26786D6E8E8597FB63_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa.Vanessa_C.On Leave AI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AAISeeker_C*                                 ActorLeaving                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AVanessa_C::OnLeaveAI(class AAISeeker_C* ActorLeaving)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa.Vanessa_C.On Leave AI");
		
		AVanessa_C_OnLeaveAI_Params params {};
		params.ActorLeaving = ActorLeaving;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa.Vanessa_C.On Encounter AI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AAISeeker_C*                                 ActorEncountered                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AVanessa_C::OnEncounterAI(class AAISeeker_C* ActorEncountered)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa.Vanessa_C.On Encounter AI");
		
		AVanessa_C_OnEncounterAI_Params params {};
		params.ActorEncountered = ActorEncountered;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa.Vanessa_C.On Jumpscare
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AGregory_C*                                  Gregory                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AVanessa_C::OnJumpscare(class AGregory_C* Gregory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa.Vanessa_C.On Jumpscare");
		
		AVanessa_C_OnJumpscare_Params params {};
		params.Gregory = Gregory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa.Vanessa_C.On Non Lethal Complete
	 * 		Flags  -> ()
	 */
	void AVanessa_C::OnNonLethalComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa.Vanessa_C.On Non Lethal Complete");
		
		AVanessa_C_OnNonLethalComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa.Vanessa_C.OnCaptureOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         CurrentCaptureTrigger                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AVanessa_C::OnCaptureOverlap(class AActor* OtherActor, class UPrimitiveComponent* CurrentCaptureTrigger)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa.Vanessa_C.OnCaptureOverlap");
		
		AVanessa_C_OnCaptureOverlap_Params params {};
		params.OtherActor = OtherActor;
		params.CurrentCaptureTrigger = CurrentCaptureTrigger;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa.Vanessa_C.PlayerTeleportedToLostAndFound
	 * 		Flags  -> ()
	 */
	void AVanessa_C::PlayerTeleportedToLostAndFound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa.Vanessa_C.PlayerTeleportedToLostAndFound");
		
		AVanessa_C_PlayerTeleportedToLostAndFound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa.Vanessa_C.Start Alert
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Alert                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AVanessa_C::StartAlert(const class FName& Alert)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa.Vanessa_C.Start Alert");
		
		AVanessa_C_StartAlert_Params params {};
		params.Alert = Alert;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa.Vanessa_C.Stop Alert
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Alert                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AVanessa_C::StopAlert(const class FName& Alert)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa.Vanessa_C.Stop Alert");
		
		AVanessa_C_StopAlert_Params params {};
		params.Alert = Alert;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa.Vanessa_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AVanessa_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa.Vanessa_C.ReceiveTick");
		
		AVanessa_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa.Vanessa_C.Blocked By AI Time Up
	 * 		Flags  -> ()
	 */
	void AVanessa_C::BlockedByAITimeUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa.Vanessa_C.Blocked By AI Time Up");
		
		AVanessa_C_BlockedByAITimeUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa.Vanessa_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AVanessa_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa.Vanessa_C.ReceiveBeginPlay");
		
		AVanessa_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa.Vanessa_C.SetAlertInfoComplex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FAnimatronicTypeData>                TypesToAlert                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            NumberOfAlerts                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AVanessa_C::SetAlertInfoComplex(TArray<struct FAnimatronicTypeData> TypesToAlert, int32_t NumberOfAlerts)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa.Vanessa_C.SetAlertInfoComplex");
		
		AVanessa_C_SetAlertInfoComplex_Params params {};
		params.TypesToAlert = TypesToAlert;
		params.NumberOfAlerts = NumberOfAlerts;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa.Vanessa_C.Stop Warning
	 * 		Flags  -> ()
	 */
	void AVanessa_C::StopWarning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa.Vanessa_C.Stop Warning");
		
		AVanessa_C_StopWarning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa.Vanessa_C.Start Warning
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            WarningCount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AVanessa_C::StartWarning(int32_t WarningCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa.Vanessa_C.Start Warning");
		
		AVanessa_C_StartWarning_Params params {};
		params.WarningCount = WarningCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa.Vanessa_C.PlayVoiceType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EAIVoiceOverType                                   VoiceTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AVanessa_C::PlayVoiceType(EAIVoiceOverType VoiceTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa.Vanessa_C.PlayVoiceType");
		
		AVanessa_C_PlayVoiceType_Params params {};
		params.VoiceTag = VoiceTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa.Vanessa_C.SetAlertInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<EFNAFAISpawnType>                           TypesToAlert                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            NumberOfAlerts                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AVanessa_C::SetAlertInfo(TArray<EFNAFAISpawnType> TypesToAlert, int32_t NumberOfAlerts)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa.Vanessa_C.SetAlertInfo");
		
		AVanessa_C_SetAlertInfo_Params params {};
		params.TypesToAlert = TypesToAlert;
		params.NumberOfAlerts = NumberOfAlerts;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Vanessa.Vanessa_C.ExecuteUbergraph_Vanessa
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AVanessa_C::ExecuteUbergraph_Vanessa(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Vanessa.Vanessa_C.ExecuteUbergraph_Vanessa");
		
		AVanessa_C_ExecuteUbergraph_Vanessa_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AVanessa_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AVanessa_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Vanessa.Vanessa_C");
		return ptr;
	}

}


