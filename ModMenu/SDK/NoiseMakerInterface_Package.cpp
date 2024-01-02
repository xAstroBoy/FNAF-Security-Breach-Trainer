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
	 * 		Name   -> Function NoiseMakerInterface.NoiseMakerInterface_C.SetCanDistract
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CanDistract                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UNoiseMakerInterface_C::SetCanDistract(bool CanDistract)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NoiseMakerInterface.NoiseMakerInterface_C.SetCanDistract");
		
		UNoiseMakerInterface_C_SetCanDistract_Params params {};
		params.CanDistract = CanDistract;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NoiseMakerInterface.NoiseMakerInterface_C.GetCanDistract
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CanDistract                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UNoiseMakerInterface_C::GetCanDistract(bool* CanDistract)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NoiseMakerInterface.NoiseMakerInterface_C.GetCanDistract");
		
		UNoiseMakerInterface_C_GetCanDistract_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanDistract != nullptr)
			*CanDistract = params.CanDistract;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NoiseMakerInterface.NoiseMakerInterface_C.TriggerNoiseMaker
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               PlayAudio                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UNoiseMakerInterface_C::TriggerNoiseMaker(class AActor* OtherActor, bool PlayAudio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NoiseMakerInterface.NoiseMakerInterface_C.TriggerNoiseMaker");
		
		UNoiseMakerInterface_C_TriggerNoiseMaker_Params params {};
		params.OtherActor = OtherActor;
		params.PlayAudio = PlayAudio;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNoiseMakerInterface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNoiseMakerInterface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass NoiseMakerInterface.NoiseMakerInterface_C");
		return ptr;
	}

}


