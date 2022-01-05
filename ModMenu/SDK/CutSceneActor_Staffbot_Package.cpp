/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "CutSceneActor_Staffbot_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function CutSceneActor_Staffbot.CutSceneActor_Staffbot_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function CutSceneActor_Staffbot.CutSceneActor_Staffbot_C.ExecuteUbergraph_CutSceneActor_Staffbot
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACutSceneActor_Staffbot_C::ExecuteUbergraph_CutSceneActor_Staffbot(int EntryPoint)
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
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ACutSceneActor_Staffbot_C.StaticClass
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


