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
	 * 		Name   -> Function DebuggableAICharacter.DebuggableAICharacter_C.DLCRabbitDisplayAlertText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Display                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADebuggableAICharacter_C::DLCRabbitDisplayAlertText(bool Display)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebuggableAICharacter.DebuggableAICharacter_C.DLCRabbitDisplayAlertText");
		
		ADebuggableAICharacter_C_DLCRabbitDisplayAlertText_Params params {};
		params.Display = Display;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebuggableAICharacter.DebuggableAICharacter_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ADebuggableAICharacter_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebuggableAICharacter.DebuggableAICharacter_C.ReceiveBeginPlay");
		
		ADebuggableAICharacter_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebuggableAICharacter.DebuggableAICharacter_C.OnDebugVis
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADebuggableAICharacter_C::OnDebugVis(bool enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebuggableAICharacter.DebuggableAICharacter_C.OnDebugVis");
		
		ADebuggableAICharacter_C_OnDebugVis_Params params {};
		params.enable = enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebuggableAICharacter.DebuggableAICharacter_C.ExecuteUbergraph_DebuggableAICharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADebuggableAICharacter_C::ExecuteUbergraph_DebuggableAICharacter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebuggableAICharacter.DebuggableAICharacter_C.ExecuteUbergraph_DebuggableAICharacter");
		
		ADebuggableAICharacter_C_ExecuteUbergraph_DebuggableAICharacter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADebuggableAICharacter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADebuggableAICharacter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DebuggableAICharacter.DebuggableAICharacter_C");
		return ptr;
	}

}


