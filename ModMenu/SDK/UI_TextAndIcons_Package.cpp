/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "UI_TextAndIcons_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function UI_TextAndIcons.UI_TextAndIcons_C.Updateicons
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_TextAndIcons_C::Updateicons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TextAndIcons.UI_TextAndIcons_C.Updateicons");
		
		UUI_TextAndIcons_C_Updateicons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function UI_TextAndIcons.UI_TextAndIcons_C.SetFonts
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_TextAndIcons_C::SetFonts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TextAndIcons.UI_TextAndIcons_C.SetFonts");
		
		UUI_TextAndIcons_C_SetFonts_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function UI_TextAndIcons.UI_TextAndIcons_C.SetTextFields
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        LeftSide                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FName                                        ActionMappingName                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Middle                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FName                                        ActionMappingName2                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        RightSide                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UUI_TextAndIcons_C::SetTextFields(const class FText& LeftSide, const class FName& ActionMappingName, const class FText& Middle, const class FName& ActionMappingName2, const class FText& RightSide)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TextAndIcons.UI_TextAndIcons_C.SetTextFields");
		
		UUI_TextAndIcons_C_SetTextFields_Params params {};
		params.LeftSide = LeftSide;
		params.ActionMappingName = ActionMappingName;
		params.Middle = Middle;
		params.ActionMappingName2 = ActionMappingName2;
		params.RightSide = RightSide;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function UI_TextAndIcons.UI_TextAndIcons_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_TextAndIcons_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TextAndIcons.UI_TextAndIcons_C.PreConstruct");
		
		UUI_TextAndIcons_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function UI_TextAndIcons.UI_TextAndIcons_C.ExecuteUbergraph_UI_TextAndIcons
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_TextAndIcons_C::ExecuteUbergraph_UI_TextAndIcons(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TextAndIcons.UI_TextAndIcons_C.ExecuteUbergraph_UI_TextAndIcons");
		
		UUI_TextAndIcons_C_ExecuteUbergraph_UI_TextAndIcons_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UUI_TextAndIcons_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_TextAndIcons_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_TextAndIcons.UI_TextAndIcons_C");
		return ptr;
	}

}


