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
	 * 		Name   -> Function BI_PawnBehavior.BI_PawnBehavior_C.ShowMouseOnUnpause
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ShowMouseCursor                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBI_PawnBehavior_C::ShowMouseOnUnpause(bool* ShowMouseCursor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_PawnBehavior.BI_PawnBehavior_C.ShowMouseOnUnpause");
		
		UBI_PawnBehavior_C_ShowMouseOnUnpause_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShowMouseCursor != nullptr)
			*ShowMouseCursor = params.ShowMouseCursor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_PawnBehavior.BI_PawnBehavior_C.ForceExit
	 * 		Flags  -> ()
	 */
	void UBI_PawnBehavior_C::ForceExit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_PawnBehavior.BI_PawnBehavior_C.ForceExit");
		
		UBI_PawnBehavior_C_ForceExit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBI_PawnBehavior_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBI_PawnBehavior_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BI_PawnBehavior.BI_PawnBehavior_C");
		return ptr;
	}

}


