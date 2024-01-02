/**
 * Name: FNAFSB
 * Version: 1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyBindingIcon.KeyBindingIcon_C.ChangeStyle
	 * 		Flags  -> ()
	 */
	void UKeyBindingIcon_C::ChangeStyle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyBindingIcon.KeyBindingIcon_C.ChangeStyle");
		
		UKeyBindingIcon_C_ChangeStyle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyBindingIcon.KeyBindingIcon_C.SetKeyName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UKeyBindingIcon_C::SetKeyName(const class FName& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyBindingIcon.KeyBindingIcon_C.SetKeyName");
		
		UKeyBindingIcon_C_SetKeyName_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyBindingIcon.KeyBindingIcon_C.Set Icon
	 * 		Flags  -> ()
	 */
	void UKeyBindingIcon_C::SetIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyBindingIcon.KeyBindingIcon_C.Set Icon");
		
		UKeyBindingIcon_C_SetIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyBindingIcon.KeyBindingIcon_C.ToggleIcon
	 * 		Flags  -> ()
	 */
	void UKeyBindingIcon_C::ToggleIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyBindingIcon.KeyBindingIcon_C.ToggleIcon");
		
		UKeyBindingIcon_C_ToggleIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyBindingIcon.KeyBindingIcon_C.Construct
	 * 		Flags  -> ()
	 */
	void UKeyBindingIcon_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyBindingIcon.KeyBindingIcon_C.Construct");
		
		UKeyBindingIcon_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyBindingIcon.KeyBindingIcon_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UKeyBindingIcon_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyBindingIcon.KeyBindingIcon_C.PreConstruct");
		
		UKeyBindingIcon_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyBindingIcon.KeyBindingIcon_C.RequestKeyRedraw
	 * 		Flags  -> ()
	 */
	void UKeyBindingIcon_C::RequestKeyRedraw()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyBindingIcon.KeyBindingIcon_C.RequestKeyRedraw");
		
		UKeyBindingIcon_C_RequestKeyRedraw_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyBindingIcon.KeyBindingIcon_C.ExecuteUbergraph_KeyBindingIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UKeyBindingIcon_C::ExecuteUbergraph_KeyBindingIcon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyBindingIcon.KeyBindingIcon_C.ExecuteUbergraph_KeyBindingIcon");
		
		UKeyBindingIcon_C_ExecuteUbergraph_KeyBindingIcon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKeyBindingIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKeyBindingIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass KeyBindingIcon.KeyBindingIcon_C");
		return ptr;
	}

}


