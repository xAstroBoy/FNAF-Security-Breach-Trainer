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
//		Name   -> Function Gregory.Gregory_C.PlayerEnteringExitingFreddy
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AGregory_C::PlayerEnteringExitingFreddy(bool* Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.PlayerEnteringExitingFreddy");

	AGregory_C_PlayerEnteringExitingFreddy_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Gregory.Gregory_C.GetSightComponent
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class USightComponent*                             Sight                                                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGregory_C::GetSightComponent(class USightComponent** Sight)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.GetSightComponent");

	AGregory_C_GetSightComponent_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Sight != nullptr)
		*Sight = params.Sight;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Gregory.Gregory_C.ForceWatchLower
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void AGregory_C::ForceWatchLower()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.ForceWatchLower");

	AGregory_C_ForceWatchLower_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Gregory.Gregory_C.GetLevelStreamViewpoint
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ULevelStreamViewpoint*                       LevelStreamViewpoint                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGregory_C::GetLevelStreamViewpoint(class ULevelStreamViewpoint** LevelStreamViewpoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.GetLevelStreamViewpoint");

	AGregory_C_GetLevelStreamViewpoint_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LevelStreamViewpoint != nullptr)
		*LevelStreamViewpoint = params.LevelStreamViewpoint;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Gregory.Gregory_C.ToggleRedReticle
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void AGregory_C::ToggleRedReticle()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.ToggleRedReticle");

	AGregory_C_ToggleRedReticle_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Gregory.Gregory_C.UpdateVisualSource
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void AGregory_C::UpdateVisualSource()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.UpdateVisualSource");

	AGregory_C_UpdateVisualSource_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Gregory.Gregory_C.GetHideSearchLocation
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector                                     Location                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FRotator                                    Rotation                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AGregory_C::GetHideSearchLocation(struct FVector* Location, struct FRotator* Rotation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.GetHideSearchLocation");

	AGregory_C_GetHideSearchLocation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
	if (Rotation != nullptr)
		*Rotation = params.Rotation;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Gregory.Gregory_C.Setup Movement Speed
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void AGregory_C::Setup_Movement_Speed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.Setup Movement Speed");

	AGregory_C_Setup_Movement_Speed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Gregory.Gregory_C.SetupWalkSpeed
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void AGregory_C::SetupWalkSpeed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.SetupWalkSpeed");

	AGregory_C_SetupWalkSpeed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Gregory.Gregory_C.SetupRunSpeed
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void AGregory_C::SetupRunSpeed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.SetupRunSpeed");

	AGregory_C_SetupRunSpeed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Gregory.Gregory_C.ShowInstructions
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<E_InstructionCard_Type_E_InstructionCard_Type> Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGregory_C::ShowInstructions(TEnumAsByte<E_InstructionCard_Type_E_InstructionCard_Type> Type)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.ShowInstructions");

	AGregory_C_ShowInstructions_Params params {};
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Gregory.Gregory_C.IsFazWatchUp
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		bool                                               IsFazWatchUp                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AGregory_C::IsFazWatchUp(bool* IsFazWatchUp)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.IsFazWatchUp");

	AGregory_C_IsFazWatchUp_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsFazWatchUp != nullptr)
		*IsFazWatchUp = params.IsFazWatchUp;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Gregory.Gregory_C.LethalJumpscare
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class USceneComponent*                             AttachComponent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UAkAudioEvent*                               JumpscareAudio                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               CanEscape                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              CamShakeScale                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      ActorPerformingScare                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGregory_C::LethalJumpscare(class USceneComponent* AttachComponent, class UAkAudioEvent* JumpscareAudio, bool CanEscape, float CamShakeScale, class AActor* ActorPerformingScare)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.LethalJumpscare");

	AGregory_C_LethalJumpscare_Params params {};
	params.AttachComponent = AttachComponent;
	params.JumpscareAudio = JumpscareAudio;
	params.CanEscape = CanEscape;
	params.CamShakeScale = CamShakeScale;
	params.ActorPerformingScare = ActorPerformingScare;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Gregory.Gregory_C.Non Lethal Jumpscare
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class USceneComponent*                             AttachmentComponent                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              CamShakeScale                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      ActorPerformingScare                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGregory_C::Non_Lethal_Jumpscare(class USceneComponent* AttachmentComponent, float CamShakeScale, class AActor* ActorPerformingScare)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.Non Lethal Jumpscare");

	AGregory_C_Non_Lethal_Jumpscare_Params params {};
	params.AttachmentComponent = AttachmentComponent;
	params.CamShakeScale = CamShakeScale;
	params.ActorPerformingScare = ActorPerformingScare;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Gregory.Gregory_C.On Item Removed
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       ItemName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FFNAFInventoryTableStruct                   InventoryItemInfo                                          (BlueprintVisible, BlueprintReadOnly, Parm)
void AGregory_C::On_Item_Removed(const struct FName& ItemName, const struct FFNAFInventoryTableStruct& InventoryItemInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.On Item Removed");

	AGregory_C_On_Item_Removed_Params params {};
	params.ItemName = ItemName;
	params.InventoryItemInfo = InventoryItemInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Gregory.Gregory_C.GetRunSpeed
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float AGregory_C::GetRunSpeed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.GetRunSpeed");

	AGregory_C_GetRunSpeed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Gregory.Gregory_C.On Item Collected
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       ItemName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FFNAFInventoryTableStruct                   InventoryItemInfo                                          (BlueprintVisible, BlueprintReadOnly, Parm)
void AGregory_C::On_Item_Collected(const struct FName& ItemName, const struct FFNAFInventoryTableStruct& InventoryItemInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.On Item Collected");

	AGregory_C_On_Item_Collected_Params params {};
	params.ItemName = ItemName;
	params.InventoryItemInfo = InventoryItemInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Gregory.Gregory_C.AttemptSwitch:Item3
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
void AGregory_C::AttemptSwitch_Item3()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.AttemptSwitch:Item3");

	AGregory_C_AttemptSwitch_Item3_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Gregory.Gregory_C.SwitchItem
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AEquippable_C*                               NewItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGregory_C::SwitchItem(class AEquippable_C* NewItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.SwitchItem");

	AGregory_C_SwitchItem_Params params {};
	params.NewItem = NewItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Gregory.Gregory_C.AttemptSwitch:Item2
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
void AGregory_C::AttemptSwitch_Item2()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.AttemptSwitch:Item2");

	AGregory_C_AttemptSwitch_Item2_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Gregory.Gregory_C.AttemptSwitch:Item1
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
void AGregory_C::AttemptSwitch_Item1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.AttemptSwitch:Item1");

	AGregory_C_AttemptSwitch_Item1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Gregory.Gregory_C.SetInUse
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               InUse                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AGregory_C::SetInUse(bool InUse)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.SetInUse");

	AGregory_C_SetInUse_Params params {};
	params.InUse = InUse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Gregory.Gregory_C.EndLazerTag
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void AGregory_C::EndLazerTag()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.EndLazerTag");

	AGregory_C_EndLazerTag_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Gregory.Gregory_C.StartLazerTag
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void AGregory_C::StartLazerTag()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.StartLazerTag");

	AGregory_C_StartLazerTag_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Gregory.Gregory_C.ShouldDoLazerTag
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               LazerTag                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AGregory_C::ShouldDoLazerTag(bool* LazerTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.ShouldDoLazerTag");

	AGregory_C_ShouldDoLazerTag_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LazerTag != nullptr)
		*LazerTag = params.LazerTag;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Gregory.Gregory_C.IsFlashlightActive
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool AGregory_C::IsFlashlightActive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.IsFlashlightActive");

	AGregory_C_IsFlashlightActive_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Gregory.Gregory_C.StunInRange
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void AGregory_C::StunInRange()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.StunInRange");

	AGregory_C_StunInRange_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Gregory.Gregory_C.GetFlashlightLocationAndDirection
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               HasFlashlight                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FVector                                     FlashlightLocation                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     FlashlightDirection                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGregory_C::GetFlashlightLocationAndDirection(bool* HasFlashlight, struct FVector* FlashlightLocation, struct FVector* FlashlightDirection)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.GetFlashlightLocationAndDirection");

	AGregory_C_GetFlashlightLocationAndDirection_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HasFlashlight != nullptr)
		*HasFlashlight = params.HasFlashlight;
	if (FlashlightLocation != nullptr)
		*FlashlightLocation = params.FlashlightLocation;
	if (FlashlightDirection != nullptr)
		*FlashlightDirection = params.FlashlightDirection;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Gregory.Gregory_C.ToggleFlashlight
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void AGregory_C::ToggleFlashlight()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.ToggleFlashlight");

	AGregory_C_ToggleFlashlight_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Gregory.Gregory_C.InpActEvt_Run_K2Node_InputActionEvent_3
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AGregory_C::InpActEvt_Run_K2Node_InputActionEvent_3(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.InpActEvt_Run_K2Node_InputActionEvent_3");

	AGregory_C_InpActEvt_Run_K2Node_InputActionEvent_3_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Gregory.Gregory_C.InpActEvt_Run_K2Node_InputActionEvent_2
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AGregory_C::InpActEvt_Run_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.InpActEvt_Run_K2Node_InputActionEvent_2");

	AGregory_C_InpActEvt_Run_K2Node_InputActionEvent_2_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Gregory.Gregory_C.InpActEvt_CallFreddy_K2Node_InputActionEvent_1
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AGregory_C::InpActEvt_CallFreddy_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.InpActEvt_CallFreddy_K2Node_InputActionEvent_1");

	AGregory_C_InpActEvt_CallFreddy_K2Node_InputActionEvent_1_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Gregory.Gregory_C.OnFailure_7DE12DBC48FB7B17F57E7D93C24D4EB7
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AGregory_C::OnFailure_7DE12DBC48FB7B17F57E7D93C24D4EB7()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.OnFailure_7DE12DBC48FB7B17F57E7D93C24D4EB7");

	AGregory_C_OnFailure_7DE12DBC48FB7B17F57E7D93C24D4EB7_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Gregory.Gregory_C.OnSuccess_7DE12DBC48FB7B17F57E7D93C24D4EB7
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AGregory_C::OnSuccess_7DE12DBC48FB7B17F57E7D93C24D4EB7()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.OnSuccess_7DE12DBC48FB7B17F57E7D93C24D4EB7");

	AGregory_C_OnSuccess_7DE12DBC48FB7B17F57E7D93C24D4EB7_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Gregory.Gregory_C.OnFailure_D277383849041D09D51CF2BB341D6125
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       WrittenAchievementName                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              WrittenProgress                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                WrittenUserTag                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGregory_C::OnFailure_D277383849041D09D51CF2BB341D6125(const struct FName& WrittenAchievementName, float WrittenProgress, int WrittenUserTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.OnFailure_D277383849041D09D51CF2BB341D6125");

	AGregory_C_OnFailure_D277383849041D09D51CF2BB341D6125_Params params {};
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Gregory.Gregory_C.OnSuccess_D277383849041D09D51CF2BB341D6125
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       WrittenAchievementName                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              WrittenProgress                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                WrittenUserTag                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGregory_C::OnSuccess_D277383849041D09D51CF2BB341D6125(const struct FName& WrittenAchievementName, float WrittenProgress, int WrittenUserTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.OnSuccess_D277383849041D09D51CF2BB341D6125");

	AGregory_C_OnSuccess_D277383849041D09D51CF2BB341D6125_Params params {};
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Gregory.Gregory_C.OnFailure_7326E6ED4D8708615D3D6F94085DAB1A
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AGregory_C::OnFailure_7326E6ED4D8708615D3D6F94085DAB1A()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.OnFailure_7326E6ED4D8708615D3D6F94085DAB1A");

	AGregory_C_OnFailure_7326E6ED4D8708615D3D6F94085DAB1A_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Gregory.Gregory_C.OnSuccess_7326E6ED4D8708615D3D6F94085DAB1A
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AGregory_C::OnSuccess_7326E6ED4D8708615D3D6F94085DAB1A()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.OnSuccess_7326E6ED4D8708615D3D6F94085DAB1A");

	AGregory_C_OnSuccess_7326E6ED4D8708615D3D6F94085DAB1A_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Gregory.Gregory_C.OnFailure_DCAEB8064AAF100FF80986844E21FAAA
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       WrittenAchievementName                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              WrittenProgress                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                WrittenUserTag                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGregory_C::OnFailure_DCAEB8064AAF100FF80986844E21FAAA(const struct FName& WrittenAchievementName, float WrittenProgress, int WrittenUserTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.OnFailure_DCAEB8064AAF100FF80986844E21FAAA");

	AGregory_C_OnFailure_DCAEB8064AAF100FF80986844E21FAAA_Params params {};
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Gregory.Gregory_C.OnSuccess_DCAEB8064AAF100FF80986844E21FAAA
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       WrittenAchievementName                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              WrittenProgress                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                WrittenUserTag                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGregory_C::OnSuccess_DCAEB8064AAF100FF80986844E21FAAA(const struct FName& WrittenAchievementName, float WrittenProgress, int WrittenUserTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.OnSuccess_DCAEB8064AAF100FF80986844E21FAAA");

	AGregory_C_OnSuccess_DCAEB8064AAF100FF80986844E21FAAA_Params params {};
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Gregory.Gregory_C.OnCheckpointSave
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UFNAFSaveData*                               SaveDataObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGregory_C::OnCheckpointSave(class UFNAFSaveData* SaveDataObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.OnCheckpointSave");

	AGregory_C_OnCheckpointSave_Params params {};
	params.SaveDataObject = SaveDataObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Gregory.Gregory_C.OnGameDataLoaded
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UFNAFSaveData*                               SaveDataObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGregory_C::OnGameDataLoaded(class UFNAFSaveData* SaveDataObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.OnGameDataLoaded");

	AGregory_C_OnGameDataLoaded_Params params {};
	params.SaveDataObject = SaveDataObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Gregory.Gregory_C.OnStoreGameData
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UFNAFSaveData*                               SaveDataObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGregory_C::OnStoreGameData(class UFNAFSaveData* SaveDataObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.OnStoreGameData");

	AGregory_C_OnStoreGameData_Params params {};
	params.SaveDataObject = SaveDataObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Gregory.Gregory_C.PostGameLoad
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void AGregory_C::PostGameLoad()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.PostGameLoad");

	AGregory_C_PostGameLoad_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Gregory.Gregory_C.PostSaveGame
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void AGregory_C::PostSaveGame()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.PostSaveGame");

	AGregory_C_PostSaveGame_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Gregory.Gregory_C.ReceiveActorBeginOverlap
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGregory_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.ReceiveActorBeginOverlap");

	AGregory_C_ReceiveActorBeginOverlap_Params params {};
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Gregory.Gregory_C.ReceiveTick
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGregory_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.ReceiveTick");

	AGregory_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Gregory.Gregory_C.Attempt Hide
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      HideActor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     HideLocation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               IsLow                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AGregory_C::Attempt_Hide(class AActor* HideActor, const struct FVector& HideLocation, bool IsLow)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.Attempt Hide");

	AGregory_C_Attempt_Hide_Params params {};
	params.HideActor = HideActor;
	params.HideLocation = HideLocation;
	params.IsLow = IsLow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Gregory.Gregory_C.ReceiveActorEndOverlap
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGregory_C::ReceiveActorEndOverlap(class AActor* OtherActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.ReceiveActorEndOverlap");

	AGregory_C_ReceiveActorEndOverlap_Params params {};
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Gregory.Gregory_C.Attempt Interact
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AGregory_C::Attempt_Interact(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.Attempt Interact");

	AGregory_C_Attempt_Interact_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Gregory.Gregory_C.Kill
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AGregory_C::Kill()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.Kill");

	AGregory_C_Kill_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Gregory.Gregory_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_2
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGregory_C::InpAxisEvt_MoveForward_K2Node_InputAxisEvent_2(float AxisValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_2");

	AGregory_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_2_Params params {};
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Gregory.Gregory_C.AttemptPrimaryAction
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       ItemToUse                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGregory_C::AttemptPrimaryAction(const struct FName& ItemToUse)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.AttemptPrimaryAction");

	AGregory_C_AttemptPrimaryAction_Params params {};
	params.ItemToUse = ItemToUse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Gregory.Gregory_C.AttemptSecondaryAction
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       ItemToUse                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGregory_C::AttemptSecondaryAction(const struct FName& ItemToUse)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.AttemptSecondaryAction");

	AGregory_C_AttemptSecondaryAction_Params params {};
	params.ItemToUse = ItemToUse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Gregory.Gregory_C.AttemptThrow
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AGregory_C::AttemptThrow()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.AttemptThrow");

	AGregory_C_AttemptThrow_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Gregory.Gregory_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void AGregory_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.ReceiveBeginPlay");

	AGregory_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Gregory.Gregory_C.Peek
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTransform                                  PeekPoint                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FTransform                                  HideLocation                                               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              Axis_Value                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGregory_C::Peek(const struct FTransform& PeekPoint, const struct FTransform& HideLocation, float Axis_Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.Peek");

	AGregory_C_Peek_Params params {};
	params.PeekPoint = PeekPoint;
	params.HideLocation = HideLocation;
	params.Axis_Value = Axis_Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Gregory.Gregory_C.LeaveHidingSpace
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AGregory_C::LeaveHidingSpace()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.LeaveHidingSpace");

	AGregory_C_LeaveHidingSpace_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Gregory.Gregory_C.Force Flashlight State
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               On                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               AllowPlayerToggle                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AGregory_C::Force_Flashlight_State(bool On, bool AllowPlayerToggle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.Force Flashlight State");

	AGregory_C_Force_Flashlight_State_Params params {};
	params.On = On;
	params.AllowPlayerToggle = AllowPlayerToggle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Gregory.Gregory_C.On Interact Release
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AGregory_C::On_Interact_Release()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.On Interact Release");

	AGregory_C_On_Interact_Release_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Gregory.Gregory_C.ReceivePossessed
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class AController*                                 NewController                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGregory_C::ReceivePossessed(class AController* NewController)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.ReceivePossessed");

	AGregory_C_ReceivePossessed_Params params {};
	params.NewController = NewController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Gregory.Gregory_C.Attempt Freddy Call
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AGregory_C::Attempt_Freddy_Call()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.Attempt Freddy Call");

	AGregory_C_Attempt_Freddy_Call_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Gregory.Gregory_C.GregoryHeadBob
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AGregory_C::GregoryHeadBob()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.GregoryHeadBob");

	AGregory_C_GregoryHeadBob_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Gregory.Gregory_C.GregoryCrouch
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AGregory_C::GregoryCrouch()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.GregoryCrouch");

	AGregory_C_GregoryCrouch_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Gregory.Gregory_C.GregoryUnCrouch
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AGregory_C::GregoryUnCrouch()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.GregoryUnCrouch");

	AGregory_C_GregoryUnCrouch_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Gregory.Gregory_C.ForceCrouchMode
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Crouch                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               AllowCrouchToggle                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AGregory_C::ForceCrouchMode(bool Crouch, bool AllowCrouchToggle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.ForceCrouchMode");

	AGregory_C_ForceCrouchMode_Params params {};
	params.Crouch = Crouch;
	params.AllowCrouchToggle = AllowCrouchToggle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Gregory.Gregory_C.StopSprinting
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AGregory_C::StopSprinting()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.StopSprinting");

	AGregory_C_StopSprinting_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Gregory.Gregory_C.EjectSequence
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AGregory_C::EjectSequence()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.EjectSequence");

	AGregory_C_EjectSequence_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Gregory.Gregory_C.K2_OnStartCrouch
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              HalfHeightAdjust                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              ScaledHalfHeightAdjust                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGregory_C::K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.K2_OnStartCrouch");

	AGregory_C_K2_OnStartCrouch_Params params {};
	params.HalfHeightAdjust = HalfHeightAdjust;
	params.ScaledHalfHeightAdjust = ScaledHalfHeightAdjust;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Gregory.Gregory_C.K2_OnEndCrouch
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              HalfHeightAdjust                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              ScaledHalfHeightAdjust                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGregory_C::K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.K2_OnEndCrouch");

	AGregory_C_K2_OnEndCrouch_Params params {};
	params.HalfHeightAdjust = HalfHeightAdjust;
	params.ScaledHalfHeightAdjust = ScaledHalfHeightAdjust;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Gregory.Gregory_C.BndEvt__SprintStamina_K2Node_ComponentBoundEvent_0_OnStaminaDepleted__DelegateSignature
//		Flags  -> (BlueprintEvent)
void AGregory_C::BndEvt__SprintStamina_K2Node_ComponentBoundEvent_0_OnStaminaDepleted__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.BndEvt__SprintStamina_K2Node_ComponentBoundEvent_0_OnStaminaDepleted__DelegateSignature");

	AGregory_C_BndEvt__SprintStamina_K2Node_ComponentBoundEvent_0_OnStaminaDepleted__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Gregory.Gregory_C.BndEvt__SprintStamina_K2Node_ComponentBoundEvent_1_OnStaminaReplenished__DelegateSignature
//		Flags  -> (BlueprintEvent)
void AGregory_C::BndEvt__SprintStamina_K2Node_ComponentBoundEvent_1_OnStaminaReplenished__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.BndEvt__SprintStamina_K2Node_ComponentBoundEvent_1_OnStaminaReplenished__DelegateSignature");

	AGregory_C_BndEvt__SprintStamina_K2Node_ComponentBoundEvent_1_OnStaminaReplenished__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Gregory.Gregory_C.ReceiveUnpossessed
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class AController*                                 OldController                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGregory_C::ReceiveUnpossessed(class AController* OldController)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.ReceiveUnpossessed");

	AGregory_C_ReceiveUnpossessed_Params params {};
	params.OldController = OldController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Gregory.Gregory_C.HideHUD
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AGregory_C::HideHUD()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.HideHUD");

	AGregory_C_HideHUD_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Gregory.Gregory_C.ShowHUD
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AGregory_C::ShowHUD()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.ShowHUD");

	AGregory_C_ShowHUD_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Gregory.Gregory_C.CallFreddy
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AGregory_C::CallFreddy()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.CallFreddy");

	AGregory_C_CallFreddy_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Gregory.Gregory_C.OnJumped
//		Flags  -> (Event, Public, BlueprintEvent)
void AGregory_C::OnJumped()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.OnJumped");

	AGregory_C_OnJumped_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Gregory.Gregory_C.OnLanded
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void AGregory_C::OnLanded(const struct FHitResult& Hit)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.OnLanded");

	AGregory_C_OnLanded_Params params {};
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Gregory.Gregory_C.ItemCollected
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       ItemName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FFNAFInventoryTableStruct                   InventoryItemInfo                                          (BlueprintVisible, BlueprintReadOnly, Parm)
void AGregory_C::ItemCollected(const struct FName& ItemName, const struct FFNAFInventoryTableStruct& InventoryItemInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.ItemCollected");

	AGregory_C_ItemCollected_Params params {};
	params.ItemName = ItemName;
	params.InventoryItemInfo = InventoryItemInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Gregory.Gregory_C.Held Item Instructions
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGregory_C::Held_Item_Instructions(const struct FName& Name)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.Held Item Instructions");

	AGregory_C_Held_Item_Instructions_Params params {};
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Gregory.Gregory_C.Event Call Freddy Instructions
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AGregory_C::Event_Call_Freddy_Instructions()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.Event Call Freddy Instructions");

	AGregory_C_Event_Call_Freddy_Instructions_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Gregory.Gregory_C.Return To Gregory
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AGregory_C::Return_To_Gregory()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.Return To Gregory");

	AGregory_C_Return_To_Gregory_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Gregory.Gregory_C.TriggerSurpriseAchievement
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AGregory_C::TriggerSurpriseAchievement()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.TriggerSurpriseAchievement");

	AGregory_C_TriggerSurpriseAchievement_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Gregory.Gregory_C.Arm Roll__FinishedFunc
//		Flags  -> (BlueprintEvent)
void AGregory_C::Arm_Roll__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.Arm Roll__FinishedFunc");

	AGregory_C_Arm_Roll__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Gregory.Gregory_C.RollForLower
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Watch_Up                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AGregory_C::RollForLower(bool Watch_Up)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.RollForLower");

	AGregory_C_RollForLower_Params params {};
	params.Watch_Up = Watch_Up;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Gregory.Gregory_C.RollForRaise
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               WatchUp                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AGregory_C::RollForRaise(bool WatchUp)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.RollForRaise");

	AGregory_C_RollForRaise_Params params {};
	params.WatchUp = WatchUp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Gregory.Gregory_C.SwitchItemWithAnim
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AEquippable_C*                               NewItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGregory_C::SwitchItemWithAnim(class AEquippable_C* NewItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.SwitchItemWithAnim");

	AGregory_C_SwitchItemWithAnim_Params params {};
	params.NewItem = NewItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Gregory.Gregory_C.OnCheckpointLoad
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UFNAFSaveData*                               SaveDataObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGregory_C::OnCheckpointLoad(class UFNAFSaveData* SaveDataObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.OnCheckpointLoad");

	AGregory_C_OnCheckpointLoad_Params params {};
	params.SaveDataObject = SaveDataObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Gregory.Gregory_C.AwardSayCheese
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AGregory_C::AwardSayCheese()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.AwardSayCheese");

	AGregory_C_AwardSayCheese_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Gregory.Gregory_C.ExecuteUbergraph_Gregory
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGregory_C::ExecuteUbergraph_Gregory(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.ExecuteUbergraph_Gregory");

	AGregory_C_ExecuteUbergraph_Gregory_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Gregory.Gregory_C.PickedUpFlashlight__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void AGregory_C::PickedUpFlashlight__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.PickedUpFlashlight__DelegateSignature");

	AGregory_C_PickedUpFlashlight__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Gregory.Gregory_C.OnLethalJumpScare__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void AGregory_C::OnLethalJumpScare__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.OnLethalJumpScare__DelegateSignature");

	AGregory_C_OnLethalJumpScare__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Gregory.Gregory_C.OnKill__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void AGregory_C::OnKill__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.OnKill__DelegateSignature");

	AGregory_C_OnKill__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Gregory.Gregory_C.OnNonLethalScareComplete__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void AGregory_C::OnNonLethalScareComplete__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gregory.Gregory_C.OnNonLethalScareComplete__DelegateSignature");

	AGregory_C_OnNonLethalScareComplete__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
