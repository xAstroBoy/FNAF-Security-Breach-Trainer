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
	 * 		Name   -> Function BPI_SaveGameSettingsProvider.BPI_SaveGameSettingsProvider_C.RemoveSaveGameSettingsListener
	 * 		Flags  -> ()
	 */
	void UBPI_SaveGameSettingsProvider_C::RemoveSaveGameSettingsListener()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_SaveGameSettingsProvider.BPI_SaveGameSettingsProvider_C.RemoveSaveGameSettingsListener");
		
		UBPI_SaveGameSettingsProvider_C_RemoveSaveGameSettingsListener_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_SaveGameSettingsProvider.BPI_SaveGameSettingsProvider_C.AddSaveGameSettingsListener
	 * 		Flags  -> ()
	 */
	void UBPI_SaveGameSettingsProvider_C::AddSaveGameSettingsListener()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_SaveGameSettingsProvider.BPI_SaveGameSettingsProvider_C.AddSaveGameSettingsListener");
		
		UBPI_SaveGameSettingsProvider_C_AddSaveGameSettingsListener_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_SaveGameSettingsProvider.BPI_SaveGameSettingsProvider_C.GetSaveGameSettings
	 * 		Flags  -> ()
	 */
	class USaveGameSettings_C* UBPI_SaveGameSettingsProvider_C::GetSaveGameSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_SaveGameSettingsProvider.BPI_SaveGameSettingsProvider_C.GetSaveGameSettings");
		
		UBPI_SaveGameSettingsProvider_C_GetSaveGameSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_SaveGameSettingsProvider_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_SaveGameSettingsProvider_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPI_SaveGameSettingsProvider.BPI_SaveGameSettingsProvider_C");
		return ptr;
	}

}


