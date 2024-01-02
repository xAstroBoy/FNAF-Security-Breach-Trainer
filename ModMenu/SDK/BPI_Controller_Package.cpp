/**
 * Name: FNAFSB
 * Version: 1
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Controller.BPI_Controller_C.ToggleCanPause
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               AllowPausing                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_Controller_C::ToggleCanPause(bool AllowPausing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_Controller.BPI_Controller_C.ToggleCanPause");
		
		UBPI_Controller_C_ToggleCanPause_Params params {};
		params.AllowPausing = AllowPausing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Controller.BPI_Controller_C.IsOnPauseMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsOnPauseMenu                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_Controller_C::IsOnPauseMenu(bool* IsOnPauseMenu)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_Controller.BPI_Controller_C.IsOnPauseMenu");
		
		UBPI_Controller_C_IsOnPauseMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsOnPauseMenu != nullptr)
			*IsOnPauseMenu = params.IsOnPauseMenu;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Controller.BPI_Controller_C.IsOnLoadingScreen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               _TRUE__                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_Controller_C::IsOnLoadingScreen(bool _TRUE__)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_Controller.BPI_Controller_C.IsOnLoadingScreen");
		
		UBPI_Controller_C_IsOnLoadingScreen_Params params {};
		params._TRUE__ = _TRUE__;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Controller.BPI_Controller_C.CloseInventoryMenu
	 * 		Flags  -> ()
	 */
	void UBPI_Controller_C::CloseInventoryMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_Controller.BPI_Controller_C.CloseInventoryMenu");
		
		UBPI_Controller_C_CloseInventoryMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Controller.BPI_Controller_C.UsingCameraStation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               UsingCamStation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_Controller_C::UsingCameraStation(bool UsingCamStation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_Controller.BPI_Controller_C.UsingCameraStation");
		
		UBPI_Controller_C_UsingCameraStation_Params params {};
		params.UsingCamStation = UsingCamStation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Controller.BPI_Controller_C.PauseGame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UBPI_Controller_C::PauseGame(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_Controller.BPI_Controller_C.PauseGame");
		
		UBPI_Controller_C_PauseGame_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Controller.BPI_Controller_C.AllowNewItemPreview
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Allow                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_Controller_C::AllowNewItemPreview(bool Allow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_Controller.BPI_Controller_C.AllowNewItemPreview");
		
		UBPI_Controller_C_AllowNewItemPreview_Params params {};
		params.Allow = Allow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Controller.BPI_Controller_C.UsingGamepad
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               UsingGamepad                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_Controller_C::UsingGamepad(bool* UsingGamepad)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_Controller.BPI_Controller_C.UsingGamepad");
		
		UBPI_Controller_C_UsingGamepad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UsingGamepad != nullptr)
			*UsingGamepad = params.UsingGamepad;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_Controller_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_Controller_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPI_Controller.BPI_Controller_C");
		return ptr;
	}

}


