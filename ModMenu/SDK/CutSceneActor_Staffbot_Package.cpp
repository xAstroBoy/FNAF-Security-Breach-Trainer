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
	 * 		Name   -> Function CutSceneActor_Staffbot.CutSceneActor_Staffbot_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ACutSceneActor_Staffbot_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CutSceneActor_Staffbot.CutSceneActor_Staffbot_C.ReceiveBeginPlay");
		
		ACutSceneActor_Staffbot_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CutSceneActor_Staffbot.CutSceneActor_Staffbot_C.ExecuteUbergraph_CutSceneActor_Staffbot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACutSceneActor_Staffbot_C::ExecuteUbergraph_CutSceneActor_Staffbot(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CutSceneActor_Staffbot.CutSceneActor_Staffbot_C.ExecuteUbergraph_CutSceneActor_Staffbot");
		
		ACutSceneActor_Staffbot_C_ExecuteUbergraph_CutSceneActor_Staffbot_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACutSceneActor_Staffbot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACutSceneActor_Staffbot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CutSceneActor_Staffbot.CutSceneActor_Staffbot_C");
		return ptr;
	}

}


