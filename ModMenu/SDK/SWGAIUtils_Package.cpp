/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00695030
	 * 		Name   -> Function SWGAIUtils.SWGAIUtilLibrary.ClearAllBlackboardValues
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UBlackboardComponent*                        Blackboard                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USWGAIUtilLibrary::STATIC_ClearAllBlackboardValues(class UBlackboardComponent* Blackboard)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGAIUtils.SWGAIUtilLibrary.ClearAllBlackboardValues");
		
		USWGAIUtilLibrary_ClearAllBlackboardValues_Params params {};
		params.Blackboard = Blackboard;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction USWGAIUtilLibrary.StaticClass
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


