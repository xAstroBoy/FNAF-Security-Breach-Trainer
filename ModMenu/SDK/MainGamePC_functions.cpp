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
//		Name   -> Function MainGamePC.MainGamePC_C.SetListenerOverridePosition
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class USceneComponent*                             AttachToComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     Position                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FRotator                                    Rotation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMainGamePC_C::SetListenerOverridePosition(class USceneComponent* AttachToComponent, const struct FVector& Position, const struct FRotator& Rotation, bool* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.SetListenerOverridePosition");

	AMainGamePC_C_SetListenerOverridePosition_Params params {};
	params.AttachToComponent = AttachToComponent;
	params.Position = Position;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MainGamePC.MainGamePC_C.EnableListenerOverride
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMainGamePC_C::EnableListenerOverride(bool enable, bool* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.EnableListenerOverride");

	AMainGamePC_C_EnableListenerOverride_Params params {};
	params.enable = enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MainGamePC.MainGamePC_C.GetListenerPosition
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector                                     Position                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMainGamePC_C::GetListenerPosition(struct FVector* Position)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.GetListenerPosition");

	AMainGamePC_C_GetListenerPosition_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Position != nullptr)
		*Position = params.Position;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MainGamePC.MainGamePC_C.SaveGameCallbackForSettings
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
void AMainGamePC_C::SaveGameCallbackForSettings()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.SaveGameCallbackForSettings");

	AMainGamePC_C_SaveGameCallbackForSettings_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MainGamePC.MainGamePC_C.SaveGameSettings
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void AMainGamePC_C::SaveGameSettings()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.SaveGameSettings");

	AMainGamePC_C_SaveGameSettings_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MainGamePC.MainGamePC_C.UpdateLastGameHourPlayed
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void AMainGamePC_C::UpdateLastGameHourPlayed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.UpdateLastGameHourPlayed");

	AMainGamePC_C_UpdateLastGameHourPlayed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MainGamePC.MainGamePC_C.ResetViewTetheringOffsets
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void AMainGamePC_C::ResetViewTetheringOffsets()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.ResetViewTetheringOffsets");

	AMainGamePC_C_ResetViewTetheringOffsets_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MainGamePC.MainGamePC_C.UpdateControlRotation
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Pitch                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Yaw                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMainGamePC_C::UpdateControlRotation(float Pitch, float Yaw)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.UpdateControlRotation");

	AMainGamePC_C_UpdateControlRotation_Params params {};
	params.Pitch = Pitch;
	params.Yaw = Yaw;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MainGamePC.MainGamePC_C.SetViewTethering
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FRotator                                    TetherRotation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               ModifyControlState                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMainGamePC_C::SetViewTethering(bool enable, const struct FRotator& TetherRotation, bool ModifyControlState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.SetViewTethering");

	AMainGamePC_C_SetViewTethering_Params params {};
	params.enable = enable;
	params.TetherRotation = TetherRotation;
	params.ModifyControlState = ModifyControlState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MainGamePC.MainGamePC_C.LoadPlayerSettings
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void AMainGamePC_C::LoadPlayerSettings()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.LoadPlayerSettings");

	AMainGamePC_C_LoadPlayerSettings_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MainGamePC.MainGamePC_C.EnableAllInputs
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void AMainGamePC_C::EnableAllInputs()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.EnableAllInputs");

	AMainGamePC_C_EnableAllInputs_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MainGamePC.MainGamePC_C.RestoreFreddyMovement
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               UseFreddyAI                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMainGamePC_C::RestoreFreddyMovement(bool UseFreddyAI)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.RestoreFreddyMovement");

	AMainGamePC_C_RestoreFreddyMovement_Params params {};
	params.UseFreddyAI = UseFreddyAI;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MainGamePC.MainGamePC_C.ForceFreddyMovement
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APlayerAIController_C*                       OutPlayerAIController                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AFreddy_C*                                   OutFreddyPawn                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMainGamePC_C::ForceFreddyMovement(class APlayerAIController_C** OutPlayerAIController, class AFreddy_C** OutFreddyPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.ForceFreddyMovement");

	AMainGamePC_C_ForceFreddyMovement_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutPlayerAIController != nullptr)
		*OutPlayerAIController = params.OutPlayerAIController;
	if (OutFreddyPawn != nullptr)
		*OutFreddyPawn = params.OutFreddyPawn;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MainGamePC.MainGamePC_C.AfterUnpause
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void AMainGamePC_C::AfterUnpause()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.AfterUnpause");

	AMainGamePC_C_AfterUnpause_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MainGamePC.MainGamePC_C.AfterPause
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void AMainGamePC_C::AfterPause()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.AfterPause");

	AMainGamePC_C_AfterPause_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MainGamePC.MainGamePC_C.GetLatestDistortionLevel
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float AMainGamePC_C::GetLatestDistortionLevel()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.GetLatestDistortionLevel");

	AMainGamePC_C_GetLatestDistortionLevel_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MainGamePC.MainGamePC_C.SetupDebugHUD
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void AMainGamePC_C::SetupDebugHUD()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.SetupDebugHUD");

	AMainGamePC_C_SetupDebugHUD_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MainGamePC.MainGamePC_C.SetupPlayerHUD
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void AMainGamePC_C::SetupPlayerHUD()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.SetupPlayerHUD");

	AMainGamePC_C_SetupPlayerHUD_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MainGamePC.MainGamePC_C.Lower Watch
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void AMainGamePC_C::Lower_Watch()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.Lower Watch");

	AMainGamePC_C_Lower_Watch_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MainGamePC.MainGamePC_C.Raise Watch
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void AMainGamePC_C::Raise_Watch()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.Raise Watch");

	AMainGamePC_C_Raise_Watch_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MainGamePC.MainGamePC_C.InpActEvt_Jump_K2Node_InputActionEvent_17
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AMainGamePC_C::InpActEvt_Jump_K2Node_InputActionEvent_17(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.InpActEvt_Jump_K2Node_InputActionEvent_17");

	AMainGamePC_C_InpActEvt_Jump_K2Node_InputActionEvent_17_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MainGamePC.MainGamePC_C.InpActEvt_Jump_K2Node_InputActionEvent_16
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AMainGamePC_C::InpActEvt_Jump_K2Node_InputActionEvent_16(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.InpActEvt_Jump_K2Node_InputActionEvent_16");

	AMainGamePC_C_InpActEvt_Jump_K2Node_InputActionEvent_16_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MainGamePC.MainGamePC_C.InpActEvt_SecondaryAction_K2Node_InputActionEvent_15
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AMainGamePC_C::InpActEvt_SecondaryAction_K2Node_InputActionEvent_15(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.InpActEvt_SecondaryAction_K2Node_InputActionEvent_15");

	AMainGamePC_C_InpActEvt_SecondaryAction_K2Node_InputActionEvent_15_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MainGamePC.MainGamePC_C.InpActEvt_Switch: Item 1_K2Node_InputActionEvent_14
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AMainGamePC_C::InpActEvt_Switch__Item_1_K2Node_InputActionEvent_14(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.InpActEvt_Switch: Item 1_K2Node_InputActionEvent_14");

	AMainGamePC_C_InpActEvt_Switch__Item_1_K2Node_InputActionEvent_14_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MainGamePC.MainGamePC_C.InpActEvt_Switch: Item 2_K2Node_InputActionEvent_13
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AMainGamePC_C::InpActEvt_Switch__Item_2_K2Node_InputActionEvent_13(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.InpActEvt_Switch: Item 2_K2Node_InputActionEvent_13");

	AMainGamePC_C_InpActEvt_Switch__Item_2_K2Node_InputActionEvent_13_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MainGamePC.MainGamePC_C.InpActEvt_Switch: Item 3_K2Node_InputActionEvent_12
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AMainGamePC_C::InpActEvt_Switch__Item_3_K2Node_InputActionEvent_12(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.InpActEvt_Switch: Item 3_K2Node_InputActionEvent_12");

	AMainGamePC_C_InpActEvt_Switch__Item_3_K2Node_InputActionEvent_12_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MainGamePC.MainGamePC_C.InpActEvt_Change UI Tab Left_K2Node_InputActionEvent_11
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AMainGamePC_C::InpActEvt_Change_UI_Tab_Left_K2Node_InputActionEvent_11(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.InpActEvt_Change UI Tab Left_K2Node_InputActionEvent_11");

	AMainGamePC_C_InpActEvt_Change_UI_Tab_Left_K2Node_InputActionEvent_11_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MainGamePC.MainGamePC_C.InpActEvt_Change UI Tab Right_K2Node_InputActionEvent_10
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AMainGamePC_C::InpActEvt_Change_UI_Tab_Right_K2Node_InputActionEvent_10(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.InpActEvt_Change UI Tab Right_K2Node_InputActionEvent_10");

	AMainGamePC_C_InpActEvt_Change_UI_Tab_Right_K2Node_InputActionEvent_10_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MainGamePC.MainGamePC_C.InpActEvt_Menu_K2Node_InputActionEvent_9
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AMainGamePC_C::InpActEvt_Menu_K2Node_InputActionEvent_9(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.InpActEvt_Menu_K2Node_InputActionEvent_9");

	AMainGamePC_C_InpActEvt_Menu_K2Node_InputActionEvent_9_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MainGamePC.MainGamePC_C.InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_5
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AMainGamePC_C::InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_5(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_5");

	AMainGamePC_C_InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_5_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MainGamePC.MainGamePC_C.InpActEvt_Crouch_K2Node_InputActionEvent_8
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AMainGamePC_C::InpActEvt_Crouch_K2Node_InputActionEvent_8(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.InpActEvt_Crouch_K2Node_InputActionEvent_8");

	AMainGamePC_C_InpActEvt_Crouch_K2Node_InputActionEvent_8_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MainGamePC.MainGamePC_C.InpActEvt_L_K2Node_InputKeyEvent_4
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AMainGamePC_C::InpActEvt_L_K2Node_InputKeyEvent_4(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.InpActEvt_L_K2Node_InputKeyEvent_4");

	AMainGamePC_C_InpActEvt_L_K2Node_InputKeyEvent_4_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MainGamePC.MainGamePC_C.InpActEvt_Skip_K2Node_InputActionEvent_7
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AMainGamePC_C::InpActEvt_Skip_K2Node_InputActionEvent_7(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.InpActEvt_Skip_K2Node_InputActionEvent_7");

	AMainGamePC_C_InpActEvt_Skip_K2Node_InputActionEvent_7_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MainGamePC.MainGamePC_C.InpActEvt_Skip_K2Node_InputActionEvent_6
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AMainGamePC_C::InpActEvt_Skip_K2Node_InputActionEvent_6(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.InpActEvt_Skip_K2Node_InputActionEvent_6");

	AMainGamePC_C_InpActEvt_Skip_K2Node_InputActionEvent_6_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MainGamePC.MainGamePC_C.InpActEvt_Touch1_K2Node_InputKeyEvent_3
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AMainGamePC_C::InpActEvt_Touch1_K2Node_InputKeyEvent_3(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.InpActEvt_Touch1_K2Node_InputKeyEvent_3");

	AMainGamePC_C_InpActEvt_Touch1_K2Node_InputKeyEvent_3_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MainGamePC.MainGamePC_C.InpActEvt_Touch1_K2Node_InputKeyEvent_2
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AMainGamePC_C::InpActEvt_Touch1_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.InpActEvt_Touch1_K2Node_InputKeyEvent_2");

	AMainGamePC_C_InpActEvt_Touch1_K2Node_InputKeyEvent_2_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MainGamePC.MainGamePC_C.InpActEvt_CallFreddy_K2Node_InputActionEvent_5
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AMainGamePC_C::InpActEvt_CallFreddy_K2Node_InputActionEvent_5(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.InpActEvt_CallFreddy_K2Node_InputActionEvent_5");

	AMainGamePC_C_InpActEvt_CallFreddy_K2Node_InputActionEvent_5_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MainGamePC.MainGamePC_C.InpActEvt_PrimaryAction_K2Node_InputActionEvent_4
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AMainGamePC_C::InpActEvt_PrimaryAction_K2Node_InputActionEvent_4(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.InpActEvt_PrimaryAction_K2Node_InputActionEvent_4");

	AMainGamePC_C_InpActEvt_PrimaryAction_K2Node_InputActionEvent_4_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MainGamePC.MainGamePC_C.InpActEvt_PrimaryAction_K2Node_InputActionEvent_3
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AMainGamePC_C::InpActEvt_PrimaryAction_K2Node_InputActionEvent_3(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.InpActEvt_PrimaryAction_K2Node_InputActionEvent_3");

	AMainGamePC_C_InpActEvt_PrimaryAction_K2Node_InputActionEvent_3_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MainGamePC.MainGamePC_C.InpActEvt_Throw Object_K2Node_InputActionEvent_2
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AMainGamePC_C::InpActEvt_Throw_Object_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.InpActEvt_Throw Object_K2Node_InputActionEvent_2");

	AMainGamePC_C_InpActEvt_Throw_Object_K2Node_InputActionEvent_2_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MainGamePC.MainGamePC_C.InpActEvt_Interact_K2Node_InputActionEvent_1
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AMainGamePC_C::InpActEvt_Interact_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.InpActEvt_Interact_K2Node_InputActionEvent_1");

	AMainGamePC_C_InpActEvt_Interact_K2Node_InputActionEvent_1_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MainGamePC.MainGamePC_C.InpActEvt_G_K2Node_InputKeyEvent_1
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AMainGamePC_C::InpActEvt_G_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.InpActEvt_G_K2Node_InputKeyEvent_1");

	AMainGamePC_C_InpActEvt_G_K2Node_InputKeyEvent_1_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MainGamePC.MainGamePC_C.OnFailure_6EE19B10415A6B32590DEAA77ED60D09
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       WrittenAchievementName                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              WrittenProgress                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                WrittenUserTag                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMainGamePC_C::OnFailure_6EE19B10415A6B32590DEAA77ED60D09(const struct FName& WrittenAchievementName, float WrittenProgress, int WrittenUserTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.OnFailure_6EE19B10415A6B32590DEAA77ED60D09");

	AMainGamePC_C_OnFailure_6EE19B10415A6B32590DEAA77ED60D09_Params params {};
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MainGamePC.MainGamePC_C.OnSuccess_6EE19B10415A6B32590DEAA77ED60D09
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       WrittenAchievementName                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              WrittenProgress                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                WrittenUserTag                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMainGamePC_C::OnSuccess_6EE19B10415A6B32590DEAA77ED60D09(const struct FName& WrittenAchievementName, float WrittenProgress, int WrittenUserTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.OnSuccess_6EE19B10415A6B32590DEAA77ED60D09");

	AMainGamePC_C_OnSuccess_6EE19B10415A6B32590DEAA77ED60D09_Params params {};
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MainGamePC.MainGamePC_C.OnFailure_FBC690684B1BE226BF1F8C8CFDCC99F5
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AMainGamePC_C::OnFailure_FBC690684B1BE226BF1F8C8CFDCC99F5()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.OnFailure_FBC690684B1BE226BF1F8C8CFDCC99F5");

	AMainGamePC_C_OnFailure_FBC690684B1BE226BF1F8C8CFDCC99F5_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MainGamePC.MainGamePC_C.OnSuccess_FBC690684B1BE226BF1F8C8CFDCC99F5
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AMainGamePC_C::OnSuccess_FBC690684B1BE226BF1F8C8CFDCC99F5()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.OnSuccess_FBC690684B1BE226BF1F8C8CFDCC99F5");

	AMainGamePC_C_OnSuccess_FBC690684B1BE226BF1F8C8CFDCC99F5_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MainGamePC.MainGamePC_C.OnGameDataLoaded
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UFNAFSaveData*                               SaveDataObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMainGamePC_C::OnGameDataLoaded(class UFNAFSaveData* SaveDataObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.OnGameDataLoaded");

	AMainGamePC_C_OnGameDataLoaded_Params params {};
	params.SaveDataObject = SaveDataObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MainGamePC.MainGamePC_C.PostGameLoad
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void AMainGamePC_C::PostGameLoad()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.PostGameLoad");

	AMainGamePC_C_PostGameLoad_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MainGamePC.MainGamePC_C.PostSaveGame
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void AMainGamePC_C::PostSaveGame()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.PostSaveGame");

	AMainGamePC_C_PostSaveGame_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MainGamePC.MainGamePC_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_158
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMainGamePC_C::InpAxisEvt_Turn_K2Node_InputAxisEvent_158(float AxisValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_158");

	AMainGamePC_C_InpAxisEvt_Turn_K2Node_InputAxisEvent_158_Params params {};
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MainGamePC.MainGamePC_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_173
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMainGamePC_C::InpAxisEvt_LookUp_K2Node_InputAxisEvent_173(float AxisValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_173");

	AMainGamePC_C_InpAxisEvt_LookUp_K2Node_InputAxisEvent_173_Params params {};
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MainGamePC.MainGamePC_C.OnPlayerKilled
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AMainGamePC_C::OnPlayerKilled()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.OnPlayerKilled");

	AMainGamePC_C_OnPlayerKilled_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MainGamePC.MainGamePC_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void AMainGamePC_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.ReceiveBeginPlay");

	AMainGamePC_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MainGamePC.MainGamePC_C.OnPlayerWin
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AMainGamePC_C::OnPlayerWin()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.OnPlayerWin");

	AMainGamePC_C_OnPlayerWin_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MainGamePC.MainGamePC_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_182
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMainGamePC_C::InpAxisEvt_MoveForward_K2Node_InputAxisEvent_182(float AxisValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_182");

	AMainGamePC_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_182_Params params {};
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MainGamePC.MainGamePC_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_193
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMainGamePC_C::InpAxisEvt_MoveRight_K2Node_InputAxisEvent_193(float AxisValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_193");

	AMainGamePC_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_193_Params params {};
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MainGamePC.MainGamePC_C.InpAxisEvt_TurnRate_K2Node_InputAxisEvent_39
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMainGamePC_C::InpAxisEvt_TurnRate_K2Node_InputAxisEvent_39(float AxisValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.InpAxisEvt_TurnRate_K2Node_InputAxisEvent_39");

	AMainGamePC_C_InpAxisEvt_TurnRate_K2Node_InputAxisEvent_39_Params params {};
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MainGamePC.MainGamePC_C.InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_54
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMainGamePC_C::InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_54(float AxisValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_54");

	AMainGamePC_C_InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_54_Params params {};
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MainGamePC.MainGamePC_C.OnRetry
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AMainGamePC_C::OnRetry()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.OnRetry");

	AMainGamePC_C_OnRetry_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MainGamePC.MainGamePC_C.LowerWatch
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AMainGamePC_C::LowerWatch()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.LowerWatch");

	AMainGamePC_C_LowerWatch_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MainGamePC.MainGamePC_C.OnToggleFlightMode
//		Flags  -> (Event, Protected, BlueprintEvent)
void AMainGamePC_C::OnToggleFlightMode()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.OnToggleFlightMode");

	AMainGamePC_C_OnToggleFlightMode_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MainGamePC.MainGamePC_C.OnEnter_SaveGameTrigger
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AMainGamePC_C::OnEnter_SaveGameTrigger()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.OnEnter_SaveGameTrigger");

	AMainGamePC_C_OnEnter_SaveGameTrigger_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MainGamePC.MainGamePC_C.OnToggleDevUI
//		Flags  -> (Event, Protected, BlueprintEvent)
void AMainGamePC_C::OnToggleDevUI()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.OnToggleDevUI");

	AMainGamePC_C_OnToggleDevUI_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MainGamePC.MainGamePC_C.Enter Flying Mode
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AMainGamePC_C::Enter_Flying_Mode()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.Enter Flying Mode");

	AMainGamePC_C_Enter_Flying_Mode_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MainGamePC.MainGamePC_C.Set Flying Collision
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<Engine_ECollisionEnabled>              FlyingCollisionMode                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMainGamePC_C::Set_Flying_Collision(TEnumAsByte<Engine_ECollisionEnabled> FlyingCollisionMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.Set Flying Collision");

	AMainGamePC_C_Set_Flying_Collision_Params params {};
	params.FlyingCollisionMode = FlyingCollisionMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MainGamePC.MainGamePC_C.OnSaveGameSelected
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AMainGamePC_C::OnSaveGameSelected()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.OnSaveGameSelected");

	AMainGamePC_C_OnSaveGameSelected_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MainGamePC.MainGamePC_C.Set Flying Speed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              FlyingSpeed                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMainGamePC_C::Set_Flying_Speed(float FlyingSpeed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.Set Flying Speed");

	AMainGamePC_C_Set_Flying_Speed_Params params {};
	params.FlyingSpeed = FlyingSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MainGamePC.MainGamePC_C.OnToggleCinemaMode
//		Flags  -> (Event, Protected, BlueprintEvent)
void AMainGamePC_C::OnToggleCinemaMode()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.OnToggleCinemaMode");

	AMainGamePC_C_OnToggleCinemaMode_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MainGamePC.MainGamePC_C.ReceiveUnPossess
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class APawn*                                       UnpossessedPawn                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMainGamePC_C::ReceiveUnPossess(class APawn* UnpossessedPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.ReceiveUnPossess");

	AMainGamePC_C_ReceiveUnPossess_Params params {};
	params.UnpossessedPawn = UnpossessedPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MainGamePC.MainGamePC_C.ReceivePossess
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class APawn*                                       PossessedPawn                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMainGamePC_C::ReceivePossess(class APawn* PossessedPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.ReceivePossess");

	AMainGamePC_C_ReceivePossess_Params params {};
	params.PossessedPawn = PossessedPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MainGamePC.MainGamePC_C.OnTriggerVannyScare
//		Flags  -> (Event, Protected, BlueprintEvent)
void AMainGamePC_C::OnTriggerVannyScare()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.OnTriggerVannyScare");

	AMainGamePC_C_OnTriggerVannyScare_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MainGamePC.MainGamePC_C.OnCheckpointSave
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UFNAFSaveData*                               SaveDataObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMainGamePC_C::OnCheckpointSave(class UFNAFSaveData* SaveDataObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.OnCheckpointSave");

	AMainGamePC_C_OnCheckpointSave_Params params {};
	params.SaveDataObject = SaveDataObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MainGamePC.MainGamePC_C.OnCheckpointLoad
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UFNAFSaveData*                               SaveDataObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMainGamePC_C::OnCheckpointLoad(class UFNAFSaveData* SaveDataObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.OnCheckpointLoad");

	AMainGamePC_C_OnCheckpointLoad_Params params {};
	params.SaveDataObject = SaveDataObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MainGamePC.MainGamePC_C.On Possessed Pawn Destroyed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      DestroyedActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMainGamePC_C::On_Possessed_Pawn_Destroyed(class AActor* DestroyedActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.On Possessed Pawn Destroyed");

	AMainGamePC_C_On_Possessed_Pawn_Destroyed_Params params {};
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MainGamePC.MainGamePC_C.InpAxisKeyEvt_MouseWheelAxis_K2Node_InputAxisKeyEvent_1
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMainGamePC_C::InpAxisKeyEvt_MouseWheelAxis_K2Node_InputAxisKeyEvent_1(float AxisValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.InpAxisKeyEvt_MouseWheelAxis_K2Node_InputAxisKeyEvent_1");

	AMainGamePC_C_InpAxisKeyEvt_MouseWheelAxis_K2Node_InputAxisKeyEvent_1_Params params {};
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MainGamePC.MainGamePC_C.InpAxisEvt_OptionsUp_K2Node_InputAxisEvent_3
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMainGamePC_C::InpAxisEvt_OptionsUp_K2Node_InputAxisEvent_3(float AxisValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.InpAxisEvt_OptionsUp_K2Node_InputAxisEvent_3");

	AMainGamePC_C_InpAxisEvt_OptionsUp_K2Node_InputAxisEvent_3_Params params {};
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MainGamePC.MainGamePC_C.InpAxisEvt_OptionsLeft_K2Node_InputAxisEvent_6
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMainGamePC_C::InpAxisEvt_OptionsLeft_K2Node_InputAxisEvent_6(float AxisValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.InpAxisEvt_OptionsLeft_K2Node_InputAxisEvent_6");

	AMainGamePC_C_InpAxisEvt_OptionsLeft_K2Node_InputAxisEvent_6_Params params {};
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MainGamePC.MainGamePC_C.OnStoreGameData
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UFNAFSaveData*                               SaveDataObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMainGamePC_C::OnStoreGameData(class UFNAFSaveData* SaveDataObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.OnStoreGameData");

	AMainGamePC_C_OnStoreGameData_Params params {};
	params.SaveDataObject = SaveDataObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MainGamePC.MainGamePC_C.Distortion
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Hour                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Minute                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMainGamePC_C::Distortion(int Hour, int Minute)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.Distortion");

	AMainGamePC_C_Distortion_Params params {};
	params.Hour = Hour;
	params.Minute = Minute;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MainGamePC.MainGamePC_C.Stop Distortion
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AMainGamePC_C::Stop_Distortion()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.Stop Distortion");

	AMainGamePC_C_Stop_Distortion_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MainGamePC.MainGamePC_C.DebugCloseUI
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AMainGamePC_C::DebugCloseUI()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.DebugCloseUI");

	AMainGamePC_C_DebugCloseUI_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MainGamePC.MainGamePC_C.GiveVIPAchievement
//		Flags  -> (Event, Public, BlueprintEvent)
void AMainGamePC_C::GiveVIPAchievement()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.GiveVIPAchievement");

	AMainGamePC_C_GiveVIPAchievement_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MainGamePC.MainGamePC_C.InpAxisEvt_ZoomSecurityCamera_K2Node_InputAxisEvent_1
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMainGamePC_C::InpAxisEvt_ZoomSecurityCamera_K2Node_InputAxisEvent_1(float AxisValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.InpAxisEvt_ZoomSecurityCamera_K2Node_InputAxisEvent_1");

	AMainGamePC_C_InpAxisEvt_ZoomSecurityCamera_K2Node_InputAxisEvent_1_Params params {};
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MainGamePC.MainGamePC_C.ExecuteUbergraph_MainGamePC
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMainGamePC_C::ExecuteUbergraph_MainGamePC(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.ExecuteUbergraph_MainGamePC");

	AMainGamePC_C_ExecuteUbergraph_MainGamePC_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MainGamePC.MainGamePC_C.OnSkip__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void AMainGamePC_C::OnSkip__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.OnSkip__DelegateSignature");

	AMainGamePC_C_OnSkip__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MainGamePC.MainGamePC_C.OnPossessedPawnChanged__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APawn*                                       PossessedPawn                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMainGamePC_C::OnPossessedPawnChanged__DelegateSignature(class APawn* PossessedPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.OnPossessedPawnChanged__DelegateSignature");

	AMainGamePC_C_OnPossessedPawnChanged__DelegateSignature_Params params {};
	params.PossessedPawn = PossessedPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
