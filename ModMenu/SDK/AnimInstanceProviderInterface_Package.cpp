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
	 * 		Name   -> Function AnimInstanceProviderInterface.AnimInstanceProviderInterface_C.GetAnimInstance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimInstance*                               AnimInstance                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimInstanceProviderInterface_C::GetAnimInstance(class UAnimInstance** AnimInstance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimInstanceProviderInterface.AnimInstanceProviderInterface_C.GetAnimInstance");
		
		UAnimInstanceProviderInterface_C_GetAnimInstance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimInstance != nullptr)
			*AnimInstance = params.AnimInstance;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimInstanceProviderInterface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimInstanceProviderInterface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AnimInstanceProviderInterface.AnimInstanceProviderInterface_C");
		return ptr;
	}

}


