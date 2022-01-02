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
//		Name   -> Function EyeBlinkUI.EyeBlinkUI_C.BlinkHelper
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UImage*                                      eyelid                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Alpha                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UEyeBlinkUI_C::BlinkHelper(class UImage* eyelid, float Amount, float Alpha)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EyeBlinkUI.EyeBlinkUI_C.BlinkHelper");

	UEyeBlinkUI_C_BlinkHelper_Params params {};
	params.eyelid = eyelid;
	params.Amount = Amount;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function EyeBlinkUI.EyeBlinkUI_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UEyeBlinkUI_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EyeBlinkUI.EyeBlinkUI_C.Tick");

	UEyeBlinkUI_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function EyeBlinkUI.EyeBlinkUI_C.Eyes Open 2
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UEyeBlinkUI_C::Eyes_Open_2()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EyeBlinkUI.EyeBlinkUI_C.Eyes Open 2");

	UEyeBlinkUI_C_Eyes_Open_2_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function EyeBlinkUI.EyeBlinkUI_C.Eyes Shut 1
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UEyeBlinkUI_C::Eyes_Shut_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EyeBlinkUI.EyeBlinkUI_C.Eyes Shut 1");

	UEyeBlinkUI_C_Eyes_Shut_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function EyeBlinkUI.EyeBlinkUI_C.Blink
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UEyeBlinkUI_C::Blink()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EyeBlinkUI.EyeBlinkUI_C.Blink");

	UEyeBlinkUI_C_Blink_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function EyeBlinkUI.EyeBlinkUI_C.Eyes Open 1
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UEyeBlinkUI_C::Eyes_Open_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EyeBlinkUI.EyeBlinkUI_C.Eyes Open 1");

	UEyeBlinkUI_C_Eyes_Open_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function EyeBlinkUI.EyeBlinkUI_C.Eyes Shut 2
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UEyeBlinkUI_C::Eyes_Shut_2()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EyeBlinkUI.EyeBlinkUI_C.Eyes Shut 2");

	UEyeBlinkUI_C_Eyes_Shut_2_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function EyeBlinkUI.EyeBlinkUI_C.ExecuteUbergraph_EyeBlinkUI
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UEyeBlinkUI_C::ExecuteUbergraph_EyeBlinkUI(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EyeBlinkUI.EyeBlinkUI_C.ExecuteUbergraph_EyeBlinkUI");

	UEyeBlinkUI_C_ExecuteUbergraph_EyeBlinkUI_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function EyeBlinkUI.EyeBlinkUI_C.On Eyes Shut 2__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UEyeBlinkUI_C::On_Eyes_Shut_2__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EyeBlinkUI.EyeBlinkUI_C.On Eyes Shut 2__DelegateSignature");

	UEyeBlinkUI_C_On_Eyes_Shut_2__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function EyeBlinkUI.EyeBlinkUI_C.On Eyes Open 1__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UEyeBlinkUI_C::On_Eyes_Open_1__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EyeBlinkUI.EyeBlinkUI_C.On Eyes Open 1__DelegateSignature");

	UEyeBlinkUI_C_On_Eyes_Open_1__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function EyeBlinkUI.EyeBlinkUI_C.On Eyes Shut 1__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UEyeBlinkUI_C::On_Eyes_Shut_1__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EyeBlinkUI.EyeBlinkUI_C.On Eyes Shut 1__DelegateSignature");

	UEyeBlinkUI_C_On_Eyes_Shut_1__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function EyeBlinkUI.EyeBlinkUI_C.On Eyes Open 2__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UEyeBlinkUI_C::On_Eyes_Open_2__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EyeBlinkUI.EyeBlinkUI_C.On Eyes Open 2__DelegateSignature");

	UEyeBlinkUI_C_On_Eyes_Open_2__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
