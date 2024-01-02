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
	 * 		Name   -> Function BI_FlashlightOverlay.BI_FlashlightOverlay_C.ShowFlashlightPowerLevel
	 * 		Flags  -> ()
	 */
	void UBI_FlashlightOverlay_C::ShowFlashlightPowerLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_FlashlightOverlay.BI_FlashlightOverlay_C.ShowFlashlightPowerLevel");
		
		UBI_FlashlightOverlay_C_ShowFlashlightPowerLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBI_FlashlightOverlay_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBI_FlashlightOverlay_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BI_FlashlightOverlay.BI_FlashlightOverlay_C");
		return ptr;
	}

}


