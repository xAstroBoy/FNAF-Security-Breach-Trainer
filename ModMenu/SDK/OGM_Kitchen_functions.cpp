// Name: FNAF Security Breach, Version: 1

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
//		Name   -> Function OGM_Kitchen.OGM_Kitchen_C.CanDeactivate
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               CanDeactivate                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AOGM_Kitchen_C::CanDeactivate(bool* CanDeactivate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OGM_Kitchen.OGM_Kitchen_C.CanDeactivate");

	AOGM_Kitchen_C_CanDeactivate_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanDeactivate != nullptr)
		*CanDeactivate = params.CanDeactivate;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function OGM_Kitchen.OGM_Kitchen_C.GetActivatableState
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      Activator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<ActivatableState_EActivatableState>    CurrentState                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AOGM_Kitchen_C::GetActivatableState(class AActor* Activator, TEnumAsByte<ActivatableState_EActivatableState>* CurrentState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OGM_Kitchen.OGM_Kitchen_C.GetActivatableState");

	AOGM_Kitchen_C_GetActivatableState_Params params {};
	params.Activator = Activator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CurrentState != nullptr)
		*CurrentState = params.CurrentState;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function OGM_Kitchen.OGM_Kitchen_C.CanActivate
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      Activator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               CanActivate                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		fnaf9_EConditionFailReason                         CantReason                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AOGM_Kitchen_C::CanActivate(class AActor* Activator, bool* CanActivate, fnaf9_EConditionFailReason* CantReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OGM_Kitchen.OGM_Kitchen_C.CanActivate");

	AOGM_Kitchen_C_CanActivate_Params params {};
	params.Activator = Activator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanActivate != nullptr)
		*CanActivate = params.CanActivate;
	if (CantReason != nullptr)
		*CantReason = params.CantReason;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function OGM_Kitchen.OGM_Kitchen_C.PastChica
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void AOGM_Kitchen_C::PastChica()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OGM_Kitchen.OGM_Kitchen_C.PastChica");

	AOGM_Kitchen_C_PastChica_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function OGM_Kitchen.OGM_Kitchen_C.ExitAll
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void AOGM_Kitchen_C::ExitAll()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OGM_Kitchen.OGM_Kitchen_C.ExitAll");

	AOGM_Kitchen_C_ExitAll_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function OGM_Kitchen.OGM_Kitchen_C.Staffbot_Setup
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void AOGM_Kitchen_C::Staffbot_Setup()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OGM_Kitchen.OGM_Kitchen_C.Staffbot_Setup");

	AOGM_Kitchen_C_Staffbot_Setup_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function OGM_Kitchen.OGM_Kitchen_C.OnEnd
//		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<E_EndMiniGameType_E_EndMiniGameType>   EndType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AOGM_Kitchen_C::OnEnd(TEnumAsByte<E_EndMiniGameType_E_EndMiniGameType> EndType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OGM_Kitchen.OGM_Kitchen_C.OnEnd");

	AOGM_Kitchen_C_OnEnd_Params params {};
	params.EndType = EndType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function OGM_Kitchen.OGM_Kitchen_C.Staffbot_SetupScreenCapture
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void AOGM_Kitchen_C::Staffbot_SetupScreenCapture()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OGM_Kitchen.OGM_Kitchen_C.Staffbot_SetupScreenCapture");

	AOGM_Kitchen_C_Staffbot_SetupScreenCapture_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function OGM_Kitchen.OGM_Kitchen_C.AddHUD
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void AOGM_Kitchen_C::AddHUD()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OGM_Kitchen.OGM_Kitchen_C.AddHUD");

	AOGM_Kitchen_C_AddHUD_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function OGM_Kitchen.OGM_Kitchen_C.ButtonPressed
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APawn*                                       Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class APlayerController*                           PlayerController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AOGM_Kitchen_C::ButtonPressed(class APawn* Pawn, class APlayerController* PlayerController)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OGM_Kitchen.OGM_Kitchen_C.ButtonPressed");

	AOGM_Kitchen_C_ButtonPressed_Params params {};
	params.Pawn = Pawn;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function OGM_Kitchen.OGM_Kitchen_C.ButtonEnable
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Enabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AOGM_Kitchen_C::ButtonEnable(bool Enabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OGM_Kitchen.OGM_Kitchen_C.ButtonEnable");

	AOGM_Kitchen_C_ButtonEnable_Params params {};
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function OGM_Kitchen.OGM_Kitchen_C.OfficeDoorLock
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Lock                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               Force                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AOGM_Kitchen_C::OfficeDoorLock(bool Lock, bool Force)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OGM_Kitchen.OGM_Kitchen_C.OfficeDoorLock");

	AOGM_Kitchen_C_OfficeDoorLock_Params params {};
	params.Lock = Lock;
	params.Force = Force;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function OGM_Kitchen.OGM_Kitchen_C.GetDoorPowerPercentage
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float AOGM_Kitchen_C::GetDoorPowerPercentage()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OGM_Kitchen.OGM_Kitchen_C.GetDoorPowerPercentage");

	AOGM_Kitchen_C_GetDoorPowerPercentage_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function OGM_Kitchen.OGM_Kitchen_C.DoorStrengthTick
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void AOGM_Kitchen_C::DoorStrengthTick()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OGM_Kitchen.OGM_Kitchen_C.DoorStrengthTick");

	AOGM_Kitchen_C_DoorStrengthTick_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function OGM_Kitchen.OGM_Kitchen_C.StreamViewpointToggle
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AOGM_Kitchen_C::StreamViewpointToggle(bool enable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OGM_Kitchen.OGM_Kitchen_C.StreamViewpointToggle");

	AOGM_Kitchen_C_StreamViewpointToggle_Params params {};
	params.enable = enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function OGM_Kitchen.OGM_Kitchen_C.StaffBot_ReturnToStart
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void AOGM_Kitchen_C::StaffBot_ReturnToStart()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OGM_Kitchen.OGM_Kitchen_C.StaffBot_ReturnToStart");

	AOGM_Kitchen_C_StaffBot_ReturnToStart_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function OGM_Kitchen.OGM_Kitchen_C.StaffBot_Verify
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void AOGM_Kitchen_C::StaffBot_Verify()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OGM_Kitchen.OGM_Kitchen_C.StaffBot_Verify");

	AOGM_Kitchen_C_StaffBot_Verify_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function OGM_Kitchen.OGM_Kitchen_C.StaffBot_Spawn
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void AOGM_Kitchen_C::StaffBot_Spawn()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OGM_Kitchen.OGM_Kitchen_C.StaffBot_Spawn");

	AOGM_Kitchen_C_StaffBot_Spawn_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function OGM_Kitchen.OGM_Kitchen_C.CompletePizza
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void AOGM_Kitchen_C::CompletePizza()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OGM_Kitchen.OGM_Kitchen_C.CompletePizza");

	AOGM_Kitchen_C_CompletePizza_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function OGM_Kitchen.OGM_Kitchen_C.CompleteCurrentPizzaStep
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<PizzaStep_EPizzaStep>                  PizzaStep                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AOGM_Kitchen_C::CompleteCurrentPizzaStep(TEnumAsByte<PizzaStep_EPizzaStep> PizzaStep)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OGM_Kitchen.OGM_Kitchen_C.CompleteCurrentPizzaStep");

	AOGM_Kitchen_C_CompleteCurrentPizzaStep_Params params {};
	params.PizzaStep = PizzaStep;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function OGM_Kitchen.OGM_Kitchen_C.DebugInit
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void AOGM_Kitchen_C::DebugInit()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OGM_Kitchen.OGM_Kitchen_C.DebugInit");

	AOGM_Kitchen_C_DebugInit_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function OGM_Kitchen.OGM_Kitchen_C.On Start
//		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
void AOGM_Kitchen_C::On_Start()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OGM_Kitchen.OGM_Kitchen_C.On Start");

	AOGM_Kitchen_C_On_Start_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function OGM_Kitchen.OGM_Kitchen_C.OnFailure_E9643CFF42AA97CD6B19978DBB35F9C7
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AOGM_Kitchen_C::OnFailure_E9643CFF42AA97CD6B19978DBB35F9C7()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OGM_Kitchen.OGM_Kitchen_C.OnFailure_E9643CFF42AA97CD6B19978DBB35F9C7");

	AOGM_Kitchen_C_OnFailure_E9643CFF42AA97CD6B19978DBB35F9C7_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function OGM_Kitchen.OGM_Kitchen_C.OnSuccess_E9643CFF42AA97CD6B19978DBB35F9C7
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AOGM_Kitchen_C::OnSuccess_E9643CFF42AA97CD6B19978DBB35F9C7()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OGM_Kitchen.OGM_Kitchen_C.OnSuccess_E9643CFF42AA97CD6B19978DBB35F9C7");

	AOGM_Kitchen_C_OnSuccess_E9643CFF42AA97CD6B19978DBB35F9C7_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function OGM_Kitchen.OGM_Kitchen_C.OnFailure_9CEE3F5D496058D0154EDB89656BFCC1
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       WrittenAchievementName                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              WrittenProgress                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                WrittenUserTag                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AOGM_Kitchen_C::OnFailure_9CEE3F5D496058D0154EDB89656BFCC1(const struct FName& WrittenAchievementName, float WrittenProgress, int WrittenUserTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OGM_Kitchen.OGM_Kitchen_C.OnFailure_9CEE3F5D496058D0154EDB89656BFCC1");

	AOGM_Kitchen_C_OnFailure_9CEE3F5D496058D0154EDB89656BFCC1_Params params {};
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function OGM_Kitchen.OGM_Kitchen_C.OnSuccess_9CEE3F5D496058D0154EDB89656BFCC1
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       WrittenAchievementName                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              WrittenProgress                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                WrittenUserTag                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AOGM_Kitchen_C::OnSuccess_9CEE3F5D496058D0154EDB89656BFCC1(const struct FName& WrittenAchievementName, float WrittenProgress, int WrittenUserTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OGM_Kitchen.OGM_Kitchen_C.OnSuccess_9CEE3F5D496058D0154EDB89656BFCC1");

	AOGM_Kitchen_C_OnSuccess_9CEE3F5D496058D0154EDB89656BFCC1_Params params {};
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function OGM_Kitchen.OGM_Kitchen_C.OnCheckpointSave
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UFNAFSaveData*                               SaveDataObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AOGM_Kitchen_C::OnCheckpointSave(class UFNAFSaveData* SaveDataObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OGM_Kitchen.OGM_Kitchen_C.OnCheckpointSave");

	AOGM_Kitchen_C_OnCheckpointSave_Params params {};
	params.SaveDataObject = SaveDataObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function OGM_Kitchen.OGM_Kitchen_C.OnGameDataLoaded
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UFNAFSaveData*                               SaveDataObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AOGM_Kitchen_C::OnGameDataLoaded(class UFNAFSaveData* SaveDataObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OGM_Kitchen.OGM_Kitchen_C.OnGameDataLoaded");

	AOGM_Kitchen_C_OnGameDataLoaded_Params params {};
	params.SaveDataObject = SaveDataObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function OGM_Kitchen.OGM_Kitchen_C.OnStoreGameData
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UFNAFSaveData*                               SaveDataObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AOGM_Kitchen_C::OnStoreGameData(class UFNAFSaveData* SaveDataObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OGM_Kitchen.OGM_Kitchen_C.OnStoreGameData");

	AOGM_Kitchen_C_OnStoreGameData_Params params {};
	params.SaveDataObject = SaveDataObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function OGM_Kitchen.OGM_Kitchen_C.PostSaveGame
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void AOGM_Kitchen_C::PostSaveGame()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OGM_Kitchen.OGM_Kitchen_C.PostSaveGame");

	AOGM_Kitchen_C_PostSaveGame_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function OGM_Kitchen.OGM_Kitchen_C.ActivateObject
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      Activator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AOGM_Kitchen_C::ActivateObject(class AActor* Activator)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OGM_Kitchen.OGM_Kitchen_C.ActivateObject");

	AOGM_Kitchen_C_ActivateObject_Params params {};
	params.Activator = Activator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function OGM_Kitchen.OGM_Kitchen_C.OnActivatorDone
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      Activator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AOGM_Kitchen_C::OnActivatorDone(class AActor* Activator)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OGM_Kitchen.OGM_Kitchen_C.OnActivatorDone");

	AOGM_Kitchen_C_OnActivatorDone_Params params {};
	params.Activator = Activator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function OGM_Kitchen.OGM_Kitchen_C.SetActivated
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void AOGM_Kitchen_C::SetActivated()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OGM_Kitchen.OGM_Kitchen_C.SetActivated");

	AOGM_Kitchen_C_SetActivated_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function OGM_Kitchen.OGM_Kitchen_C.DeactivateObject
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      Deactivator                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AOGM_Kitchen_C::DeactivateObject(class AActor* Deactivator)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OGM_Kitchen.OGM_Kitchen_C.DeactivateObject");

	AOGM_Kitchen_C_DeactivateObject_Params params {};
	params.Deactivator = Deactivator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function OGM_Kitchen.OGM_Kitchen_C.SetDeactivated
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void AOGM_Kitchen_C::SetDeactivated()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OGM_Kitchen.OGM_Kitchen_C.SetDeactivated");

	AOGM_Kitchen_C_SetDeactivated_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function OGM_Kitchen.OGM_Kitchen_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void AOGM_Kitchen_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OGM_Kitchen.OGM_Kitchen_C.ReceiveBeginPlay");

	AOGM_Kitchen_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function OGM_Kitchen.OGM_Kitchen_C.ReceiveActorBeginOverlap
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AOGM_Kitchen_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OGM_Kitchen.OGM_Kitchen_C.ReceiveActorBeginOverlap");

	AOGM_Kitchen_C_ReceiveActorBeginOverlap_Params params {};
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function OGM_Kitchen.OGM_Kitchen_C.ReceiveTick
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AOGM_Kitchen_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OGM_Kitchen.OGM_Kitchen_C.ReceiveTick");

	AOGM_Kitchen_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function OGM_Kitchen.OGM_Kitchen_C.On Pizza Created
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AOGM_Kitchen_C::On_Pizza_Created()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OGM_Kitchen.OGM_Kitchen_C.On Pizza Created");

	AOGM_Kitchen_C_On_Pizza_Created_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function OGM_Kitchen.OGM_Kitchen_C.OnVictory
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AOGM_Kitchen_C::OnVictory()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OGM_Kitchen.OGM_Kitchen_C.OnVictory");

	AOGM_Kitchen_C_OnVictory_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function OGM_Kitchen.OGM_Kitchen_C.EndBeatCutscene
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AOGM_Kitchen_C::EndBeatCutscene()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OGM_Kitchen.OGM_Kitchen_C.EndBeatCutscene");

	AOGM_Kitchen_C_EndBeatCutscene_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function OGM_Kitchen.OGM_Kitchen_C.PlayBeatCutscene
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AOGM_Kitchen_C::PlayBeatCutscene()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OGM_Kitchen.OGM_Kitchen_C.PlayBeatCutscene");

	AOGM_Kitchen_C_PlayBeatCutscene_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function OGM_Kitchen.OGM_Kitchen_C.OnFail
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AOGM_Kitchen_C::OnFail()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OGM_Kitchen.OGM_Kitchen_C.OnFail");

	AOGM_Kitchen_C_OnFail_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function OGM_Kitchen.OGM_Kitchen_C.Teleport_ChicaSewer
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AOGM_Kitchen_C::Teleport_ChicaSewer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OGM_Kitchen.OGM_Kitchen_C.Teleport_ChicaSewer");

	AOGM_Kitchen_C_Teleport_ChicaSewer_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function OGM_Kitchen.OGM_Kitchen_C.DoorLock
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AOGM_Kitchen_C::DoorLock()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OGM_Kitchen.OGM_Kitchen_C.DoorLock");

	AOGM_Kitchen_C_DoorLock_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function OGM_Kitchen.OGM_Kitchen_C.On Security Badge Collected
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AOGM_Kitchen_C::On_Security_Badge_Collected()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OGM_Kitchen.OGM_Kitchen_C.On Security Badge Collected");

	AOGM_Kitchen_C_On_Security_Badge_Collected_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function OGM_Kitchen.OGM_Kitchen_C.OnEndSequenceDone
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AOGM_Kitchen_C::OnEndSequenceDone()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OGM_Kitchen.OGM_Kitchen_C.OnEndSequenceDone");

	AOGM_Kitchen_C_OnEndSequenceDone_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function OGM_Kitchen.OGM_Kitchen_C.PlayDreadunit
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AOGM_Kitchen_C::PlayDreadunit()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OGM_Kitchen.OGM_Kitchen_C.PlayDreadunit");

	AOGM_Kitchen_C_PlayDreadunit_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function OGM_Kitchen.OGM_Kitchen_C.VOFinished
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AOGM_Kitchen_C::VOFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OGM_Kitchen.OGM_Kitchen_C.VOFinished");

	AOGM_Kitchen_C_VOFinished_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function OGM_Kitchen.OGM_Kitchen_C.RandomVO
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AOGM_Kitchen_C::RandomVO()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OGM_Kitchen.OGM_Kitchen_C.RandomVO");

	AOGM_Kitchen_C_RandomVO_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function OGM_Kitchen.OGM_Kitchen_C.EnableTimerCountdownRTPC
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AOGM_Kitchen_C::EnableTimerCountdownRTPC()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OGM_Kitchen.OGM_Kitchen_C.EnableTimerCountdownRTPC");

	AOGM_Kitchen_C_EnableTimerCountdownRTPC_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function OGM_Kitchen.OGM_Kitchen_C.PlayChicaVO
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AOGM_Kitchen_C::PlayChicaVO()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OGM_Kitchen.OGM_Kitchen_C.PlayChicaVO");

	AOGM_Kitchen_C_PlayChicaVO_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function OGM_Kitchen.OGM_Kitchen_C.PostGameLoad
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void AOGM_Kitchen_C::PostGameLoad()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OGM_Kitchen.OGM_Kitchen_C.PostGameLoad");

	AOGM_Kitchen_C_PostGameLoad_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function OGM_Kitchen.OGM_Kitchen_C.OnCheckpointLoad
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UFNAFSaveData*                               SaveDataObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AOGM_Kitchen_C::OnCheckpointLoad(class UFNAFSaveData* SaveDataObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OGM_Kitchen.OGM_Kitchen_C.OnCheckpointLoad");

	AOGM_Kitchen_C_OnCheckpointLoad_Params params {};
	params.SaveDataObject = SaveDataObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function OGM_Kitchen.OGM_Kitchen_C.ExecuteUbergraph_OGM_Kitchen
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AOGM_Kitchen_C::ExecuteUbergraph_OGM_Kitchen(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OGM_Kitchen.OGM_Kitchen_C.ExecuteUbergraph_OGM_Kitchen");

	AOGM_Kitchen_C_ExecuteUbergraph_OGM_Kitchen_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
