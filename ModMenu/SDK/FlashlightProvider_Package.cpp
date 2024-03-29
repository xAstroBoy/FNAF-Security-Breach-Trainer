﻿/**
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
	 * 		Name   -> Function FlashlightProvider.FlashlightProvider_C.GetFlashlightLocationAndDirection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               HasFlashlight                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     FlashlightLocation                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     FlashlightDirection                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFlashlightProvider_C::GetFlashlightLocationAndDirection(bool* HasFlashlight, struct FVector* FlashlightLocation, struct FVector* FlashlightDirection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlashlightProvider.FlashlightProvider_C.GetFlashlightLocationAndDirection");
		
		UFlashlightProvider_C_GetFlashlightLocationAndDirection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasFlashlight != nullptr)
			*HasFlashlight = params.HasFlashlight;
		if (FlashlightLocation != nullptr)
			*FlashlightLocation = params.FlashlightLocation;
		if (FlashlightDirection != nullptr)
			*FlashlightDirection = params.FlashlightDirection;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFlashlightProvider_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFlashlightProvider_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FlashlightProvider.FlashlightProvider_C");
		return ptr;
	}

}


