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
//		Name   -> Function WI_Option_Language_DebugShortcut.WI_Option_Language_DebugShortcut_C.SetupShortcutText
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWI_Option_Language_DebugShortcut_C::SetupShortcutText()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_Option_Language_DebugShortcut.WI_Option_Language_DebugShortcut_C.SetupShortcutText");

	UWI_Option_Language_DebugShortcut_C_SetupShortcutText_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function WI_Option_Language_DebugShortcut.WI_Option_Language_DebugShortcut_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWI_Option_Language_DebugShortcut_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_Option_Language_DebugShortcut.WI_Option_Language_DebugShortcut_C.PreConstruct");

	UWI_Option_Language_DebugShortcut_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function WI_Option_Language_DebugShortcut.WI_Option_Language_DebugShortcut_C.OnInitialized
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWI_Option_Language_DebugShortcut_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_Option_Language_DebugShortcut.WI_Option_Language_DebugShortcut_C.OnInitialized");

	UWI_Option_Language_DebugShortcut_C_OnInitialized_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function WI_Option_Language_DebugShortcut.WI_Option_Language_DebugShortcut_C.InputDeviceChanged
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWI_Option_Language_DebugShortcut_C::InputDeviceChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_Option_Language_DebugShortcut.WI_Option_Language_DebugShortcut_C.InputDeviceChanged");

	UWI_Option_Language_DebugShortcut_C_InputDeviceChanged_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function WI_Option_Language_DebugShortcut.WI_Option_Language_DebugShortcut_C.ExecuteUbergraph_WI_Option_Language_DebugShortcut
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWI_Option_Language_DebugShortcut_C::ExecuteUbergraph_WI_Option_Language_DebugShortcut(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_Option_Language_DebugShortcut.WI_Option_Language_DebugShortcut_C.ExecuteUbergraph_WI_Option_Language_DebugShortcut");

	UWI_Option_Language_DebugShortcut_C_ExecuteUbergraph_WI_Option_Language_DebugShortcut_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
