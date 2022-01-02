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
//		Name   -> Function CameraIcon.CameraIcon_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UCameraIcon_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CameraIcon.CameraIcon_C.PreConstruct");

	UCameraIcon_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function CameraIcon.CameraIcon_C.InitCamera
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ASecurityCamera*                             Camera                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCameraIcon_C::InitCamera(class ASecurityCamera* Camera)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CameraIcon.CameraIcon_C.InitCamera");

	UCameraIcon_C_InitCamera_Params params {};
	params.Camera = Camera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function CameraIcon.CameraIcon_C.BndEvt__CameraButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UCameraIcon_C::BndEvt__CameraButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CameraIcon.CameraIcon_C.BndEvt__CameraButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UCameraIcon_C_BndEvt__CameraButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function CameraIcon.CameraIcon_C.End Alert
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UCameraIcon_C::End_Alert()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CameraIcon.CameraIcon_C.End Alert");

	UCameraIcon_C_End_Alert_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function CameraIcon.CameraIcon_C.AlertEvent
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UCameraIcon_C::AlertEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CameraIcon.CameraIcon_C.AlertEvent");

	UCameraIcon_C_AlertEvent_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function CameraIcon.CameraIcon_C.AdjustButton
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UCameraIcon_C::AdjustButton()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CameraIcon.CameraIcon_C.AdjustButton");

	UCameraIcon_C_AdjustButton_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function CameraIcon.CameraIcon_C.BndEvt__HackButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UCameraIcon_C::BndEvt__HackButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CameraIcon.CameraIcon_C.BndEvt__HackButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UCameraIcon_C_BndEvt__HackButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function CameraIcon.CameraIcon_C.ExecuteUbergraph_CameraIcon
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCameraIcon_C::ExecuteUbergraph_CameraIcon(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CameraIcon.CameraIcon_C.ExecuteUbergraph_CameraIcon");

	UCameraIcon_C_ExecuteUbergraph_CameraIcon_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function CameraIcon.CameraIcon_C.CameraClicked__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UCameraIcon_C*                               Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCameraIcon_C::CameraClicked__DelegateSignature(class UCameraIcon_C* Sender)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CameraIcon.CameraIcon_C.CameraClicked__DelegateSignature");

	UCameraIcon_C_CameraClicked__DelegateSignature_Params params {};
	params.Sender = Sender;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
