/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function WI_Option_Language_DebugShortcut.WI_Option_Language_DebugShortcut_C.SetupShortcutText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWI_Option_Language_DebugShortcut_C::SetupShortcutText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Option_Language_DebugShortcut.WI_Option_Language_DebugShortcut_C.SetupShortcutText");
		
		UWI_Option_Language_DebugShortcut_C_SetupShortcutText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function WI_Option_Language_DebugShortcut.WI_Option_Language_DebugShortcut_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWI_Option_Language_DebugShortcut_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Option_Language_DebugShortcut.WI_Option_Language_DebugShortcut_C.PreConstruct");
		
		UWI_Option_Language_DebugShortcut_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function WI_Option_Language_DebugShortcut.WI_Option_Language_DebugShortcut_C.OnInitialized
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWI_Option_Language_DebugShortcut_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Option_Language_DebugShortcut.WI_Option_Language_DebugShortcut_C.OnInitialized");
		
		UWI_Option_Language_DebugShortcut_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function WI_Option_Language_DebugShortcut.WI_Option_Language_DebugShortcut_C.InputDeviceChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWI_Option_Language_DebugShortcut_C::InputDeviceChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Option_Language_DebugShortcut.WI_Option_Language_DebugShortcut_C.InputDeviceChanged");
		
		UWI_Option_Language_DebugShortcut_C_InputDeviceChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function WI_Option_Language_DebugShortcut.WI_Option_Language_DebugShortcut_C.ExecuteUbergraph_WI_Option_Language_DebugShortcut
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWI_Option_Language_DebugShortcut_C::ExecuteUbergraph_WI_Option_Language_DebugShortcut(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Option_Language_DebugShortcut.WI_Option_Language_DebugShortcut_C.ExecuteUbergraph_WI_Option_Language_DebugShortcut");
		
		UWI_Option_Language_DebugShortcut_C_ExecuteUbergraph_WI_Option_Language_DebugShortcut_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UWI_Option_Language_DebugShortcut_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWI_Option_Language_DebugShortcut_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WI_Option_Language_DebugShortcut.WI_Option_Language_DebugShortcut_C");
		return ptr;
	}

}


