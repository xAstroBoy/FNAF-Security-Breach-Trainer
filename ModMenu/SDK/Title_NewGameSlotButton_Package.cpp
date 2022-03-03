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
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function Title_NewGameSlotButton.Title_NewGameSlotButton_C.BndEvt__TitleButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTitle_NewGameSlotButton_C::BndEvt__TitleButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Title_NewGameSlotButton.Title_NewGameSlotButton_C.BndEvt__TitleButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");
		
		UTitle_NewGameSlotButton_C_BndEvt__TitleButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function Title_NewGameSlotButton.Title_NewGameSlotButton_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTitle_NewGameSlotButton_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Title_NewGameSlotButton.Title_NewGameSlotButton_C.PreConstruct");
		
		UTitle_NewGameSlotButton_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function Title_NewGameSlotButton.Title_NewGameSlotButton_C.ExecuteUbergraph_Title_NewGameSlotButton
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTitle_NewGameSlotButton_C::ExecuteUbergraph_Title_NewGameSlotButton(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Title_NewGameSlotButton.Title_NewGameSlotButton_C.ExecuteUbergraph_Title_NewGameSlotButton");
		
		UTitle_NewGameSlotButton_C_ExecuteUbergraph_Title_NewGameSlotButton_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function Title_NewGameSlotButton.Title_NewGameSlotButton_C.OnSlotClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      SaveSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UTitle_NewGameSlotButton_C::OnSlotClicked__DelegateSignature(const class FString& SaveSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Title_NewGameSlotButton.Title_NewGameSlotButton_C.OnSlotClicked__DelegateSignature");
		
		UTitle_NewGameSlotButton_C_OnSlotClicked__DelegateSignature_Params params {};
		params.SaveSlot = SaveSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UTitle_NewGameSlotButton_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTitle_NewGameSlotButton_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Title_NewGameSlotButton.Title_NewGameSlotButton_C");
		return ptr;
	}

}


