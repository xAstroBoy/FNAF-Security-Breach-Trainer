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
//		Name   -> Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.GetInteractViewLocation
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Valid                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FVector                                     WorldLocation                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APS_Upgrade_And_Test_BP_C::GetInteractViewLocation(bool* Valid, struct FVector* WorldLocation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.GetInteractViewLocation");

	APS_Upgrade_And_Test_BP_C_GetInteractViewLocation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Valid != nullptr)
		*Valid = params.Valid;
	if (WorldLocation != nullptr)
		*WorldLocation = params.WorldLocation;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.GetInteractViewAngles
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		fnaf9_ECameraAngleFlags                            AnglesToCheck                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APS_Upgrade_And_Test_BP_C::GetInteractViewAngles(fnaf9_ECameraAngleFlags* AnglesToCheck)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.GetInteractViewAngles");

	APS_Upgrade_And_Test_BP_C_GetInteractViewAngles_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnglesToCheck != nullptr)
		*AnglesToCheck = params.AnglesToCheck;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.GetInteractibleType
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<InteractibleType_EInteractibleType>    Type                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<InteractiblePressType_EInteractiblePressType> PressType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APS_Upgrade_And_Test_BP_C::GetInteractibleType(TEnumAsByte<InteractibleType_EInteractibleType>* Type, TEnumAsByte<InteractiblePressType_EInteractiblePressType>* PressType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.GetInteractibleType");

	APS_Upgrade_And_Test_BP_C_GetInteractibleType_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Type != nullptr)
		*Type = params.Type;
	if (PressType != nullptr)
		*PressType = params.PressType;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.CanPlayerInteract
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               CanInteract                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		fnaf9_EConditionFailReason                         CantReason                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APS_Upgrade_And_Test_BP_C::CanPlayerInteract(bool* CanInteract, fnaf9_EConditionFailReason* CantReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.CanPlayerInteract");

	APS_Upgrade_And_Test_BP_C_CanPlayerInteract_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanInteract != nullptr)
		*CanInteract = params.CanInteract;
	if (CantReason != nullptr)
		*CantReason = params.CantReason;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.UpdateUIOnTick
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APS_Upgrade_And_Test_BP_C::UpdateUIOnTick(bool* Output)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.UpdateUIOnTick");

	APS_Upgrade_And_Test_BP_C_UpdateUIOnTick_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.GetInstructionOverride
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Instruction                                                (Parm, OutParm)
void APS_Upgrade_And_Test_BP_C::GetInstructionOverride(struct FText* Instruction)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.GetInstructionOverride");

	APS_Upgrade_And_Test_BP_C_GetInstructionOverride_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Instruction != nullptr)
		*Instruction = params.Instruction;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.InteractIgnoresTrace
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IgnoreTrace                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APS_Upgrade_And_Test_BP_C::InteractIgnoresTrace(bool* IgnoreTrace)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.InteractIgnoresTrace");

	APS_Upgrade_And_Test_BP_C_InteractIgnoresTrace_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IgnoreTrace != nullptr)
		*IgnoreTrace = params.IgnoreTrace;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.GetHUDInstruction
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Instruction                                                (Parm, OutParm)
void APS_Upgrade_And_Test_BP_C::GetHUDInstruction(struct FText* Instruction)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.GetHUDInstruction");

	APS_Upgrade_And_Test_BP_C_GetHUDInstruction_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Instruction != nullptr)
		*Instruction = params.Instruction;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.HandleButtonMaterialState
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<PS_Upgrade_Freddy_ColorEnum_EPS_Upgrade_Freddy_ColorEnum> ColorEnum                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APS_Upgrade_And_Test_BP_C::HandleButtonMaterialState(TEnumAsByte<PS_Upgrade_Freddy_ColorEnum_EPS_Upgrade_Freddy_ColorEnum> ColorEnum)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.HandleButtonMaterialState");

	APS_Upgrade_And_Test_BP_C_HandleButtonMaterialState_Params params {};
	params.ColorEnum = ColorEnum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.HideHighlight
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UMaterialInstanceDynamic*                    Material                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APS_Upgrade_And_Test_BP_C::HideHighlight(class UMaterialInstanceDynamic* Material)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.HideHighlight");

	APS_Upgrade_And_Test_BP_C_HideHighlight_Params params {};
	params.Material = Material;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.ShowHighlight
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UMaterialInstanceDynamic*                    Material                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APS_Upgrade_And_Test_BP_C::ShowHighlight(class UMaterialInstanceDynamic* Material)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.ShowHighlight");

	APS_Upgrade_And_Test_BP_C_ShowHighlight_Params params {};
	params.Material = Material;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.Set New Valid Collider
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UBoxComponent*                               ColliderToSet                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               IsForEyeRemovalColliders                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APS_Upgrade_And_Test_BP_C::Set_New_Valid_Collider(class UBoxComponent* ColliderToSet, bool IsForEyeRemovalColliders)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.Set New Valid Collider");

	APS_Upgrade_And_Test_BP_C_Set_New_Valid_Collider_Params params {};
	params.ColliderToSet = ColliderToSet;
	params.IsForEyeRemovalColliders = IsForEyeRemovalColliders;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.HandleSwappingClickEvent
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void APS_Upgrade_And_Test_BP_C::HandleSwappingClickEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.HandleSwappingClickEvent");

	APS_Upgrade_And_Test_BP_C_HandleSwappingClickEvent_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.HandleClosingClickEvent
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void APS_Upgrade_And_Test_BP_C::HandleClosingClickEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.HandleClosingClickEvent");

	APS_Upgrade_And_Test_BP_C_HandleClosingClickEvent_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.SetupEyeUpgradeSequence
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void APS_Upgrade_And_Test_BP_C::SetupEyeUpgradeSequence()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.SetupEyeUpgradeSequence");

	APS_Upgrade_And_Test_BP_C_SetupEyeUpgradeSequence_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.SetupVoiceboxUpgradeSequence
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void APS_Upgrade_And_Test_BP_C::SetupVoiceboxUpgradeSequence()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.SetupVoiceboxUpgradeSequence");

	APS_Upgrade_And_Test_BP_C_SetupVoiceboxUpgradeSequence_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.Setup Arm Upgrade Sequence
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void APS_Upgrade_And_Test_BP_C::Setup_Arm_Upgrade_Sequence()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.Setup Arm Upgrade Sequence");

	APS_Upgrade_And_Test_BP_C_Setup_Arm_Upgrade_Sequence_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.SetupPowerUpgradeSequence
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void APS_Upgrade_And_Test_BP_C::SetupPowerUpgradeSequence()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.SetupPowerUpgradeSequence");

	APS_Upgrade_And_Test_BP_C_SetupPowerUpgradeSequence_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.SetGameStateForUpgradeType
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void APS_Upgrade_And_Test_BP_C::SetGameStateForUpgradeType()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.SetGameStateForUpgradeType");

	APS_Upgrade_And_Test_BP_C_SetGameStateForUpgradeType_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.GetInitialCamera
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ACameraActor*                                Camera                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APS_Upgrade_And_Test_BP_C::GetInitialCamera(class ACameraActor** Camera)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.GetInitialCamera");

	APS_Upgrade_And_Test_BP_C_GetInitialCamera_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Camera != nullptr)
		*Camera = params.Camera;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.MapAllOpeningSphereComponents
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void APS_Upgrade_And_Test_BP_C::MapAllOpeningSphereComponents()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.MapAllOpeningSphereComponents");

	APS_Upgrade_And_Test_BP_C_MapAllOpeningSphereComponents_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.SetupWireStateForUpgradeType
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		fnaf9_EFreddyUpgradeType                           Upgrade_Type                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APS_Upgrade_And_Test_BP_C::SetupWireStateForUpgradeType(fnaf9_EFreddyUpgradeType Upgrade_Type)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.SetupWireStateForUpgradeType");

	APS_Upgrade_And_Test_BP_C_SetupWireStateForUpgradeType_Params params {};
	params.Upgrade_Type = Upgrade_Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.MapAllGameWireCompnents
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void APS_Upgrade_And_Test_BP_C::MapAllGameWireCompnents()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.MapAllGameWireCompnents");

	APS_Upgrade_And_Test_BP_C_MapAllGameWireCompnents_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.Handle Face Button Click
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<PS_Upgrade_Freddy_ColorEnum_EPS_Upgrade_Freddy_ColorEnum> Color1                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<PS_Upgrade_Freddy_ColorEnum_EPS_Upgrade_Freddy_ColorEnum> Color2                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APS_Upgrade_And_Test_BP_C::Handle_Face_Button_Click(TEnumAsByte<PS_Upgrade_Freddy_ColorEnum_EPS_Upgrade_Freddy_ColorEnum> Color1, TEnumAsByte<PS_Upgrade_Freddy_ColorEnum_EPS_Upgrade_Freddy_ColorEnum> Color2)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.Handle Face Button Click");

	APS_Upgrade_And_Test_BP_C_Handle_Face_Button_Click_Params params {};
	params.Color1 = Color1;
	params.Color2 = Color2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.AddRandomColorToSequence
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void APS_Upgrade_And_Test_BP_C::AddRandomColorToSequence()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.AddRandomColorToSequence");

	APS_Upgrade_And_Test_BP_C_AddRandomColorToSequence_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.SetupAvailableColorsForTesting
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void APS_Upgrade_And_Test_BP_C::SetupAvailableColorsForTesting()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.SetupAvailableColorsForTesting");

	APS_Upgrade_And_Test_BP_C_SetupAvailableColorsForTesting_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.MapAllTestButtonComponents
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void APS_Upgrade_And_Test_BP_C::MapAllTestButtonComponents()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.MapAllTestButtonComponents");

	APS_Upgrade_And_Test_BP_C_MapAllTestButtonComponents_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.HandleOpeningClickEvent
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void APS_Upgrade_And_Test_BP_C::HandleOpeningClickEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.HandleOpeningClickEvent");

	APS_Upgrade_And_Test_BP_C_HandleOpeningClickEvent_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.HandleTestingClickEvent
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<PS_Upgrade_Freddy_ColorEnum_EPS_Upgrade_Freddy_ColorEnum> WireColor                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ClickedConnector                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APS_Upgrade_And_Test_BP_C::HandleTestingClickEvent(TEnumAsByte<PS_Upgrade_Freddy_ColorEnum_EPS_Upgrade_Freddy_ColorEnum>* WireColor, bool* ClickedConnector)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.HandleTestingClickEvent");

	APS_Upgrade_And_Test_BP_C_HandleTestingClickEvent_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (WireColor != nullptr)
		*WireColor = params.WireColor;
	if (ClickedConnector != nullptr)
		*ClickedConnector = params.ClickedConnector;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.HandleAttachDetachClickEvent
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<PS_Upgrade_Freddy_ColorEnum_EPS_Upgrade_Freddy_ColorEnum> WireColor                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ClickedConnector                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APS_Upgrade_And_Test_BP_C::HandleAttachDetachClickEvent(TEnumAsByte<PS_Upgrade_Freddy_ColorEnum_EPS_Upgrade_Freddy_ColorEnum>* WireColor, bool* ClickedConnector)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.HandleAttachDetachClickEvent");

	APS_Upgrade_And_Test_BP_C_HandleAttachDetachClickEvent_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (WireColor != nullptr)
		*WireColor = params.WireColor;
	if (ClickedConnector != nullptr)
		*ClickedConnector = params.ClickedConnector;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.HideUnusedWireComponents
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void APS_Upgrade_And_Test_BP_C::HideUnusedWireComponents()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.HideUnusedWireComponents");

	APS_Upgrade_And_Test_BP_C_HideUnusedWireComponents_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.SetupConnectorMapForGameType
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void APS_Upgrade_And_Test_BP_C::SetupConnectorMapForGameType()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.SetupConnectorMapForGameType");

	APS_Upgrade_And_Test_BP_C_SetupConnectorMapForGameType_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.SetupAvailableColorsForUpgradeType
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		fnaf9_EFreddyUpgradeType                           UpgradeType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APS_Upgrade_And_Test_BP_C::SetupAvailableColorsForUpgradeType(fnaf9_EFreddyUpgradeType UpgradeType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.SetupAvailableColorsForUpgradeType");

	APS_Upgrade_And_Test_BP_C_SetupAvailableColorsForUpgradeType_Params params {};
	params.UpgradeType = UpgradeType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_5
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APS_Upgrade_And_Test_BP_C::InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_5(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_5");

	APS_Upgrade_And_Test_BP_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_5_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_4
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APS_Upgrade_And_Test_BP_C::InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_4(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_4");

	APS_Upgrade_And_Test_BP_C_InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_4_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_3
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APS_Upgrade_And_Test_BP_C::InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_3(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_3");

	APS_Upgrade_And_Test_BP_C_InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_3_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_2
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APS_Upgrade_And_Test_BP_C::InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_2");

	APS_Upgrade_And_Test_BP_C_InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_2_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_1
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APS_Upgrade_And_Test_BP_C::InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_1");

	APS_Upgrade_And_Test_BP_C_InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_1_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.OnPlayerInteractCancel
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void APS_Upgrade_And_Test_BP_C::OnPlayerInteractCancel()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.OnPlayerInteractCancel");

	APS_Upgrade_And_Test_BP_C_OnPlayerInteractCancel_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.OnPlayerHoverEnter
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APawn*                                       PlayerPawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APS_Upgrade_And_Test_BP_C::OnPlayerHoverEnter(class APawn* PlayerPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.OnPlayerHoverEnter");

	APS_Upgrade_And_Test_BP_C_OnPlayerHoverEnter_Params params {};
	params.PlayerPawn = PlayerPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.OnPlayerHoverExit
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APawn*                                       PlayerPawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APS_Upgrade_And_Test_BP_C::OnPlayerHoverExit(class APawn* PlayerPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.OnPlayerHoverExit");

	APS_Upgrade_And_Test_BP_C_OnPlayerHoverExit_Params params {};
	params.PlayerPawn = PlayerPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.PartsAndServiceGame
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<PartsAndServiceAnimEnum_EPartsAndServiceAnimEnum> GameEnum                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APS_Upgrade_And_Test_BP_C::PartsAndServiceGame(TEnumAsByte<PartsAndServiceAnimEnum_EPartsAndServiceAnimEnum> GameEnum)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.PartsAndServiceGame");

	APS_Upgrade_And_Test_BP_C_PartsAndServiceGame_Params params {};
	params.GameEnum = GameEnum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.Off
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APS_Upgrade_And_Test_BP_C::Off(bool Off)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.Off");

	APS_Upgrade_And_Test_BP_C_Off_Params params {};
	params.Off = Off;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.Close
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               close                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APS_Upgrade_And_Test_BP_C::Close(bool close)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.Close");

	APS_Upgrade_And_Test_BP_C_Close_Params params {};
	params.close = close;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.TestButton_R
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void APS_Upgrade_And_Test_BP_C::TestButton_R()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.TestButton_R");

	APS_Upgrade_And_Test_BP_C_TestButton_R_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.TestButton_B
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void APS_Upgrade_And_Test_BP_C::TestButton_B()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.TestButton_B");

	APS_Upgrade_And_Test_BP_C_TestButton_B_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.TestButton_Y
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void APS_Upgrade_And_Test_BP_C::TestButton_Y()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.TestButton_Y");

	APS_Upgrade_And_Test_BP_C_TestButton_Y_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.TestButton_G
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void APS_Upgrade_And_Test_BP_C::TestButton_G()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.TestButton_G");

	APS_Upgrade_And_Test_BP_C_TestButton_G_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.ResetFreddy
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void APS_Upgrade_And_Test_BP_C::ResetFreddy()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.ResetFreddy");

	APS_Upgrade_And_Test_BP_C_ResetFreddy_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.VoiceBoxSwap
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APS_Upgrade_And_Test_BP_C::VoiceBoxSwap(bool Off)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.VoiceBoxSwap");

	APS_Upgrade_And_Test_BP_C_VoiceBoxSwap_Params params {};
	params.Off = Off;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.Out
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               In                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APS_Upgrade_And_Test_BP_C::Out(bool In)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.Out");

	APS_Upgrade_And_Test_BP_C_Out_Params params {};
	params.In = In;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.OnPlayerInteract
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APawn*                                       PlayerPawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class APlayerController*                           PlayerController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APS_Upgrade_And_Test_BP_C::OnPlayerInteract(class APawn* PlayerPawn, class APlayerController* PlayerController)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.OnPlayerInteract");

	APS_Upgrade_And_Test_BP_C_OnPlayerInteract_Params params {};
	params.PlayerPawn = PlayerPawn;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.InitializeUpgradeGame
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		fnaf9_EFreddyUpgradeType                           UpgradeType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APS_Upgrade_And_Test_BP_C::InitializeUpgradeGame(fnaf9_EFreddyUpgradeType UpgradeType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.InitializeUpgradeGame");

	APS_Upgrade_And_Test_BP_C_InitializeUpgradeGame_Params params {};
	params.UpgradeType = UpgradeType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.PlaySimonSequence
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void APS_Upgrade_And_Test_BP_C::PlaySimonSequence()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.PlaySimonSequence");

	APS_Upgrade_And_Test_BP_C_PlaySimonSequence_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.ClickedWire
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<PS_Upgrade_Freddy_ColorEnum_EPS_Upgrade_Freddy_ColorEnum> WireColor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ClickedConnector                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APS_Upgrade_And_Test_BP_C::ClickedWire(TEnumAsByte<PS_Upgrade_Freddy_ColorEnum_EPS_Upgrade_Freddy_ColorEnum> WireColor, bool ClickedConnector)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.ClickedWire");

	APS_Upgrade_And_Test_BP_C_ClickedWire_Params params {};
	params.WireColor = WireColor;
	params.ClickedConnector = ClickedConnector;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.AnimEnableTesting
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void APS_Upgrade_And_Test_BP_C::AnimEnableTesting()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.AnimEnableTesting");

	APS_Upgrade_And_Test_BP_C_AnimEnableTesting_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.ClickedTestButton
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<PS_Upgrade_Freddy_ColorEnum_EPS_Upgrade_Freddy_ColorEnum> ButtonColor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ClickedButton                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APS_Upgrade_And_Test_BP_C::ClickedTestButton(TEnumAsByte<PS_Upgrade_Freddy_ColorEnum_EPS_Upgrade_Freddy_ColorEnum> ButtonColor, bool ClickedButton)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.ClickedTestButton");

	APS_Upgrade_And_Test_BP_C_ClickedTestButton_Params params {};
	params.ButtonColor = ButtonColor;
	params.ClickedButton = ClickedButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.PlayerEndInteraction
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void APS_Upgrade_And_Test_BP_C::PlayerEndInteraction()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.PlayerEndInteraction");

	APS_Upgrade_And_Test_BP_C_PlayerEndInteraction_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void APS_Upgrade_And_Test_BP_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.ReceiveBeginPlay");

	APS_Upgrade_And_Test_BP_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.SetHidden
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Hidden                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APS_Upgrade_And_Test_BP_C::SetHidden(bool Hidden)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.SetHidden");

	APS_Upgrade_And_Test_BP_C_SetHidden_Params params {};
	params.Hidden = Hidden;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.ResetForNextUpgrade
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void APS_Upgrade_And_Test_BP_C::ResetForNextUpgrade()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.ResetForNextUpgrade");

	APS_Upgrade_And_Test_BP_C_ResetForNextUpgrade_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.Anim Reset
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void APS_Upgrade_And_Test_BP_C::Anim_Reset()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.Anim Reset");

	APS_Upgrade_And_Test_BP_C_Anim_Reset_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.Anim Arm Swap
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void APS_Upgrade_And_Test_BP_C::Anim_Arm_Swap()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.Anim Arm Swap");

	APS_Upgrade_And_Test_BP_C_Anim_Arm_Swap_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.Anim Voicebox Swap
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               On                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APS_Upgrade_And_Test_BP_C::Anim_Voicebox_Swap(bool On)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.Anim Voicebox Swap");

	APS_Upgrade_And_Test_BP_C_Anim_Voicebox_Swap_Params params {};
	params.On = On;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.Anim Left Eye Swap
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               On                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APS_Upgrade_And_Test_BP_C::Anim_Left_Eye_Swap(bool On)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.Anim Left Eye Swap");

	APS_Upgrade_And_Test_BP_C_Anim_Left_Eye_Swap_Params params {};
	params.On = On;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.Anim Right Eye Swap
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               On                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APS_Upgrade_And_Test_BP_C::Anim_Right_Eye_Swap(bool On)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.Anim Right Eye Swap");

	APS_Upgrade_And_Test_BP_C_Anim_Right_Eye_Swap_Params params {};
	params.On = On;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.ReceiveTick
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APS_Upgrade_And_Test_BP_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.ReceiveTick");

	APS_Upgrade_And_Test_BP_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.ExecuteUbergraph_PS_Upgrade_And_Test_BP
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APS_Upgrade_And_Test_BP_C::ExecuteUbergraph_PS_Upgrade_And_Test_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.ExecuteUbergraph_PS_Upgrade_And_Test_BP");

	APS_Upgrade_And_Test_BP_C_ExecuteUbergraph_PS_Upgrade_And_Test_BP_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
