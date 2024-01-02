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
	 * 		Name   -> Function CutSceneActor_Base.CutSceneActor_Base_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ACutSceneActor_Base_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CutSceneActor_Base.CutSceneActor_Base_C.ReceiveBeginPlay");
		
		ACutSceneActor_Base_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CutSceneActor_Base.CutSceneActor_Base_C.ExecuteUbergraph_CutSceneActor_Base
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACutSceneActor_Base_C::ExecuteUbergraph_CutSceneActor_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CutSceneActor_Base.CutSceneActor_Base_C.ExecuteUbergraph_CutSceneActor_Base");
		
		ACutSceneActor_Base_C_ExecuteUbergraph_CutSceneActor_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACutSceneActor_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACutSceneActor_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CutSceneActor_Base.CutSceneActor_Base_C");
		return ptr;
	}

}


