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
//		Name   -> Function BP_FazerButton_Reset.BP_FazerButton_Reset_C.GetInteractibleType
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<InteractibleType_EInteractibleType>    Type                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<InteractiblePressType_EInteractiblePressType> PressType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FazerButton_Reset_C::GetInteractibleType(TEnumAsByte<InteractibleType_EInteractibleType>* Type, TEnumAsByte<InteractiblePressType_EInteractiblePressType>* PressType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FazerButton_Reset.BP_FazerButton_Reset_C.GetInteractibleType");

	ABP_FazerButton_Reset_C_GetInteractibleType_Params params {};

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
//		Name   -> Function BP_FazerButton_Reset.BP_FazerButton_Reset_C.CanPlayerInteract
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               CanInteract                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		fnaf9_EConditionFailReason                         CantReason                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FazerButton_Reset_C::CanPlayerInteract(bool* CanInteract, fnaf9_EConditionFailReason* CantReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FazerButton_Reset.BP_FazerButton_Reset_C.CanPlayerInteract");

	ABP_FazerButton_Reset_C_CanPlayerInteract_Params params {};

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
//		Name   -> Function BP_FazerButton_Reset.BP_FazerButton_Reset_C.InteractIgnoresTrace
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IgnoreTrace                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_FazerButton_Reset_C::InteractIgnoresTrace(bool* IgnoreTrace)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FazerButton_Reset.BP_FazerButton_Reset_C.InteractIgnoresTrace");

	ABP_FazerButton_Reset_C_InteractIgnoresTrace_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IgnoreTrace != nullptr)
		*IgnoreTrace = params.IgnoreTrace;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_FazerButton_Reset.BP_FazerButton_Reset_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_FazerButton_Reset_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FazerButton_Reset.BP_FazerButton_Reset_C.UserConstructionScript");

	ABP_FazerButton_Reset_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_FazerButton_Reset.BP_FazerButton_Reset_C.ChangeColor
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                ChangeColor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FazerButton_Reset_C::ChangeColor(int ChangeColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FazerButton_Reset.BP_FazerButton_Reset_C.ChangeColor");

	ABP_FazerButton_Reset_C_ChangeColor_Params params {};
	params.ChangeColor = ChangeColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_FazerButton_Reset.BP_FazerButton_Reset_C.OnPlayerInteract
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APawn*                                       PlayerPawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class APlayerController*                           PlayerController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FazerButton_Reset_C::OnPlayerInteract(class APawn* PlayerPawn, class APlayerController* PlayerController)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FazerButton_Reset.BP_FazerButton_Reset_C.OnPlayerInteract");

	ABP_FazerButton_Reset_C_OnPlayerInteract_Params params {};
	params.PlayerPawn = PlayerPawn;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_FazerButton_Reset.BP_FazerButton_Reset_C.ExecuteUbergraph_BP_FazerButton_Reset
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FazerButton_Reset_C::ExecuteUbergraph_BP_FazerButton_Reset(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FazerButton_Reset.BP_FazerButton_Reset_C.ExecuteUbergraph_BP_FazerButton_Reset");

	ABP_FazerButton_Reset_C_ExecuteUbergraph_BP_FazerButton_Reset_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
