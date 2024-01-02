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
	 * 		Name   -> Function BPI_PauseUI.BPI_PauseUI_C.GoToLastItemCollected
	 * 		Flags  -> ()
	 */
	void UBPI_PauseUI_C::GoToLastItemCollected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_PauseUI.BPI_PauseUI_C.GoToLastItemCollected");
		
		UBPI_PauseUI_C_GoToLastItemCollected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_PauseUI.BPI_PauseUI_C.UpdateLastItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFNAFInventoryTableStruct                   ItemInfo                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPI_PauseUI_C::UpdateLastItem(const struct FFNAFInventoryTableStruct& ItemInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_PauseUI.BPI_PauseUI_C.UpdateLastItem");
		
		UBPI_PauseUI_C_UpdateLastItem_Params params {};
		params.ItemInfo = ItemInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_PauseUI.BPI_PauseUI_C.OpenInventoryMenu
	 * 		Flags  -> ()
	 */
	void UBPI_PauseUI_C::OpenInventoryMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_PauseUI.BPI_PauseUI_C.OpenInventoryMenu");
		
		UBPI_PauseUI_C_OpenInventoryMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_PauseUI.BPI_PauseUI_C.GetFocusButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UButton*                                     Button                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_PauseUI_C::GetFocusButton(class UButton** Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_PauseUI.BPI_PauseUI_C.GetFocusButton");
		
		UBPI_PauseUI_C_GetFocusButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Button != nullptr)
			*Button = params.Button;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_PauseUI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_PauseUI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPI_PauseUI.BPI_PauseUI_C");
		return ptr;
	}

}


