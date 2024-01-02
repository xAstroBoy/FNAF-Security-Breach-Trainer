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
	 * 		Name   -> Function ChicaVoiceInterface.ChicaVoiceInterface_C.OnListenStarted
	 * 		Flags  -> ()
	 */
	void UChicaVoiceInterface_C::OnListenStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChicaVoiceInterface.ChicaVoiceInterface_C.OnListenStarted");
		
		UChicaVoiceInterface_C_OnListenStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChicaVoiceInterface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChicaVoiceInterface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ChicaVoiceInterface.ChicaVoiceInterface_C");
		return ptr;
	}

}


