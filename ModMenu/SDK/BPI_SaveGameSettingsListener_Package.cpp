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
	 * 		Name   -> Function BPI_SaveGameSettingsListener.BPI_SaveGameSettingsListener_C.OnSaveGameSettingsSaved
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USaveGameSettings_C*                         Settings                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_SaveGameSettingsListener_C::OnSaveGameSettingsSaved(class USaveGameSettings_C* Settings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_SaveGameSettingsListener.BPI_SaveGameSettingsListener_C.OnSaveGameSettingsSaved");
		
		UBPI_SaveGameSettingsListener_C_OnSaveGameSettingsSaved_Params params {};
		params.Settings = Settings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_SaveGameSettingsListener_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_SaveGameSettingsListener_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPI_SaveGameSettingsListener.BPI_SaveGameSettingsListener_C");
		return ptr;
	}

}


