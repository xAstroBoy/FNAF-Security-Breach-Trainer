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
	 * 		Name   -> Function SWGAIUtils.SWGAIUtilLibrary.ClearAllBlackboardValues
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBlackboardComponent*                        Blackboard                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USWGAIUtilLibrary::ClearAllBlackboardValues(class UBlackboardComponent* Blackboard)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGAIUtils.SWGAIUtilLibrary.ClearAllBlackboardValues");
		
		USWGAIUtilLibrary_ClearAllBlackboardValues_Params params {};
		params.Blackboard = Blackboard;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USWGAIUtilLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USWGAIUtilLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGAIUtils.SWGAIUtilLibrary");
		return ptr;
	}

}


