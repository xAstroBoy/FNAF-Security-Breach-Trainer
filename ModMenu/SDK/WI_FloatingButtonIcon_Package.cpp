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
	 * 		Name   -> Function WI_FloatingButtonIcon.WI_FloatingButtonIcon_C.HighlightButton
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Highlight                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWI_FloatingButtonIcon_C::HighlightButton(bool Highlight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_FloatingButtonIcon.WI_FloatingButtonIcon_C.HighlightButton");
		
		UWI_FloatingButtonIcon_C_HighlightButton_Params params {};
		params.Highlight = Highlight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function WI_FloatingButtonIcon.WI_FloatingButtonIcon_C.SetButtonImage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_PSButtons_E_PSButtons                            Button_Type                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWI_FloatingButtonIcon_C::SetButtonImage(E_PSButtons_E_PSButtons Button_Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_FloatingButtonIcon.WI_FloatingButtonIcon_C.SetButtonImage");
		
		UWI_FloatingButtonIcon_C_SetButtonImage_Params params {};
		params.Button_Type = Button_Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function WI_FloatingButtonIcon.WI_FloatingButtonIcon_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWI_FloatingButtonIcon_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_FloatingButtonIcon.WI_FloatingButtonIcon_C.PreConstruct");
		
		UWI_FloatingButtonIcon_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function WI_FloatingButtonIcon.WI_FloatingButtonIcon_C.ExecuteUbergraph_WI_FloatingButtonIcon
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWI_FloatingButtonIcon_C::ExecuteUbergraph_WI_FloatingButtonIcon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_FloatingButtonIcon.WI_FloatingButtonIcon_C.ExecuteUbergraph_WI_FloatingButtonIcon");
		
		UWI_FloatingButtonIcon_C_ExecuteUbergraph_WI_FloatingButtonIcon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UWI_FloatingButtonIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWI_FloatingButtonIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WI_FloatingButtonIcon.WI_FloatingButtonIcon_C");
		return ptr;
	}

}


