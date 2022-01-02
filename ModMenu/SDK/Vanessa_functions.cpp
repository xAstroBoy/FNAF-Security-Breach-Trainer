﻿// Name: FNAF Security Breach, Version: 1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Vanessa.Vanessa_C.RequestPlayerInformation
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector                                     PlayerLocation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               HasValidInfo                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AVanessa_C::RequestPlayerInformation(struct FVector* PlayerLocation, bool* HasValidInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vanessa.Vanessa_C.RequestPlayerInformation");

	AVanessa_C_RequestPlayerInformation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerLocation != nullptr)
		*PlayerLocation = params.PlayerLocation;
	if (HasValidInfo != nullptr)
		*HasValidInfo = params.HasValidInfo;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Vanessa.Vanessa_C.GetAlertInfo
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<fnaf9_EFNAFAISpawnType>                     TypesToAlert                                               (Parm, OutParm, HasGetValueTypeHash)
//		int                                                NumberOfAlerts                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AVanessa_C::GetAlertInfo(TArray<fnaf9_EFNAFAISpawnType>* TypesToAlert, int* NumberOfAlerts)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vanessa.Vanessa_C.GetAlertInfo");

	AVanessa_C_GetAlertInfo_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TypesToAlert != nullptr)
		*TypesToAlert = params.TypesToAlert;
	if (NumberOfAlerts != nullptr)
		*NumberOfAlerts = params.NumberOfAlerts;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Vanessa.Vanessa_C.IsWarningFinished
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Finished                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AVanessa_C::IsWarningFinished(bool* Finished)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vanessa.Vanessa_C.IsWarningFinished");

	AVanessa_C_IsWarningFinished_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Finished != nullptr)
		*Finished = params.Finished;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Vanessa.Vanessa_C.GetAlertType
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		fnaf9_EAlertType                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
fnaf9_EAlertType AVanessa_C::GetAlertType()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vanessa.Vanessa_C.GetAlertType");

	AVanessa_C_GetAlertType_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Vanessa.Vanessa_C.GetShouldCheckHidingLocations
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ShouldCheckHidingLocations                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AVanessa_C::GetShouldCheckHidingLocations(bool* ShouldCheckHidingLocations)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vanessa.Vanessa_C.GetShouldCheckHidingLocations");

	AVanessa_C_GetShouldCheckHidingLocations_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ShouldCheckHidingLocations != nullptr)
		*ShouldCheckHidingLocations = params.ShouldCheckHidingLocations;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Vanessa.Vanessa_C.GetRoomSeekMode
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<RoomSeekMode_ERoomSeekMode>            SeekMode                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AVanessa_C::GetRoomSeekMode(TEnumAsByte<RoomSeekMode_ERoomSeekMode>* SeekMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vanessa.Vanessa_C.GetRoomSeekMode");

	AVanessa_C_GetRoomSeekMode_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SeekMode != nullptr)
		*SeekMode = params.SeekMode;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Vanessa.Vanessa_C.OnNotifyEnd_FA4713CB499BFC26786D6E8E8597FB63
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AVanessa_C::OnNotifyEnd_FA4713CB499BFC26786D6E8E8597FB63(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vanessa.Vanessa_C.OnNotifyEnd_FA4713CB499BFC26786D6E8E8597FB63");

	AVanessa_C_OnNotifyEnd_FA4713CB499BFC26786D6E8E8597FB63_Params params {};
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Vanessa.Vanessa_C.OnNotifyBegin_FA4713CB499BFC26786D6E8E8597FB63
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AVanessa_C::OnNotifyBegin_FA4713CB499BFC26786D6E8E8597FB63(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vanessa.Vanessa_C.OnNotifyBegin_FA4713CB499BFC26786D6E8E8597FB63");

	AVanessa_C_OnNotifyBegin_FA4713CB499BFC26786D6E8E8597FB63_Params params {};
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Vanessa.Vanessa_C.OnInterrupted_FA4713CB499BFC26786D6E8E8597FB63
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AVanessa_C::OnInterrupted_FA4713CB499BFC26786D6E8E8597FB63(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vanessa.Vanessa_C.OnInterrupted_FA4713CB499BFC26786D6E8E8597FB63");

	AVanessa_C_OnInterrupted_FA4713CB499BFC26786D6E8E8597FB63_Params params {};
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Vanessa.Vanessa_C.OnBlendOut_FA4713CB499BFC26786D6E8E8597FB63
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AVanessa_C::OnBlendOut_FA4713CB499BFC26786D6E8E8597FB63(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vanessa.Vanessa_C.OnBlendOut_FA4713CB499BFC26786D6E8E8597FB63");

	AVanessa_C_OnBlendOut_FA4713CB499BFC26786D6E8E8597FB63_Params params {};
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Vanessa.Vanessa_C.OnCompleted_FA4713CB499BFC26786D6E8E8597FB63
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AVanessa_C::OnCompleted_FA4713CB499BFC26786D6E8E8597FB63(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vanessa.Vanessa_C.OnCompleted_FA4713CB499BFC26786D6E8E8597FB63");

	AVanessa_C_OnCompleted_FA4713CB499BFC26786D6E8E8597FB63_Params params {};
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Vanessa.Vanessa_C.On Leave AI
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AAISeeker_C*                                 ActorLeaving                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AVanessa_C::On_Leave_AI(class AAISeeker_C* ActorLeaving)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vanessa.Vanessa_C.On Leave AI");

	AVanessa_C_On_Leave_AI_Params params {};
	params.ActorLeaving = ActorLeaving;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Vanessa.Vanessa_C.On Encounter AI
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AAISeeker_C*                                 ActorEncountered                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AVanessa_C::On_Encounter_AI(class AAISeeker_C* ActorEncountered)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vanessa.Vanessa_C.On Encounter AI");

	AVanessa_C_On_Encounter_AI_Params params {};
	params.ActorEncountered = ActorEncountered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Vanessa.Vanessa_C.On Jumpscare
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AGregory_C*                                  Gregory                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AVanessa_C::On_Jumpscare(class AGregory_C* Gregory)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vanessa.Vanessa_C.On Jumpscare");

	AVanessa_C_On_Jumpscare_Params params {};
	params.Gregory = Gregory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Vanessa.Vanessa_C.On Non Lethal Complete
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AVanessa_C::On_Non_Lethal_Complete()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vanessa.Vanessa_C.On Non Lethal Complete");

	AVanessa_C_On_Non_Lethal_Complete_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Vanessa.Vanessa_C.OnCaptureOverlap
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UBoxComponent*                               CurrentCaptureTrigger                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AVanessa_C::OnCaptureOverlap(class AActor* OtherActor, class UBoxComponent* CurrentCaptureTrigger)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vanessa.Vanessa_C.OnCaptureOverlap");

	AVanessa_C_OnCaptureOverlap_Params params {};
	params.OtherActor = OtherActor;
	params.CurrentCaptureTrigger = CurrentCaptureTrigger;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Vanessa.Vanessa_C.PlayerTeleportedToLostAndFound
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AVanessa_C::PlayerTeleportedToLostAndFound()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vanessa.Vanessa_C.PlayerTeleportedToLostAndFound");

	AVanessa_C_PlayerTeleportedToLostAndFound_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Vanessa.Vanessa_C.Start Alert
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       Alert                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AVanessa_C::Start_Alert(const struct FName& Alert)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vanessa.Vanessa_C.Start Alert");

	AVanessa_C_Start_Alert_Params params {};
	params.Alert = Alert;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Vanessa.Vanessa_C.Stop Alert
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       Alert                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AVanessa_C::Stop_Alert(const struct FName& Alert)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vanessa.Vanessa_C.Stop Alert");

	AVanessa_C_Stop_Alert_Params params {};
	params.Alert = Alert;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Vanessa.Vanessa_C.ReceiveTick
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AVanessa_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vanessa.Vanessa_C.ReceiveTick");

	AVanessa_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Vanessa.Vanessa_C.Stop Warning
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void AVanessa_C::Stop_Warning()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vanessa.Vanessa_C.Stop Warning");

	AVanessa_C_Stop_Warning_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Vanessa.Vanessa_C.Start Warning
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                WarningCount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AVanessa_C::Start_Warning(int WarningCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vanessa.Vanessa_C.Start Warning");

	AVanessa_C_Start_Warning_Params params {};
	params.WarningCount = WarningCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Vanessa.Vanessa_C.Blocked By AI Time Up
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AVanessa_C::Blocked_By_AI_Time_Up()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vanessa.Vanessa_C.Blocked By AI Time Up");

	AVanessa_C_Blocked_By_AI_Time_Up_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Vanessa.Vanessa_C.PlayVoiceType
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<AIVoiceOverType_EAIVoiceOverType>      VoiceTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AVanessa_C::PlayVoiceType(TEnumAsByte<AIVoiceOverType_EAIVoiceOverType> VoiceTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vanessa.Vanessa_C.PlayVoiceType");

	AVanessa_C_PlayVoiceType_Params params {};
	params.VoiceTag = VoiceTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Vanessa.Vanessa_C.SetAlertInfo
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<fnaf9_EFNAFAISpawnType>                     TypesToAlert                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
//		int                                                NumberOfAlerts                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AVanessa_C::SetAlertInfo(TArray<fnaf9_EFNAFAISpawnType> TypesToAlert, int NumberOfAlerts)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vanessa.Vanessa_C.SetAlertInfo");

	AVanessa_C_SetAlertInfo_Params params {};
	params.TypesToAlert = TypesToAlert;
	params.NumberOfAlerts = NumberOfAlerts;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Vanessa.Vanessa_C.ExecuteUbergraph_Vanessa
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AVanessa_C::ExecuteUbergraph_Vanessa(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Vanessa.Vanessa_C.ExecuteUbergraph_Vanessa");

	AVanessa_C_ExecuteUbergraph_Vanessa_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif