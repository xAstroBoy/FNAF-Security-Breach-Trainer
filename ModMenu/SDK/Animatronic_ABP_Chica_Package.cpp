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
	 * 		Name   -> Function Animatronic_ABP_Chica.Animatronic_ABP_Chica_C.footstep
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_Chica_C::footstep()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_Chica.Animatronic_ABP_Chica_C.footstep");
		
		UAnimatronic_ABP_Chica_C_footstep_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_Chica.Animatronic_ABP_Chica_C.BlueprintUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimatronic_ABP_Chica_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_Chica.Animatronic_ABP_Chica_C.BlueprintUpdateAnimation");
		
		UAnimatronic_ABP_Chica_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_Chica.Animatronic_ABP_Chica_C.BlueprintBeginPlay
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_Chica_C::BlueprintBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_Chica.Animatronic_ABP_Chica_C.BlueprintBeginPlay");
		
		UAnimatronic_ABP_Chica_C_BlueprintBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_Chica.Animatronic_ABP_Chica_C.AnimNotify_R_Foot_Down
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_Chica_C::AnimNotify_R_Foot_Down()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_Chica.Animatronic_ABP_Chica_C.AnimNotify_R_Foot_Down");
		
		UAnimatronic_ABP_Chica_C_AnimNotify_R_Foot_Down_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_Chica.Animatronic_ABP_Chica_C.AnimNotify_L_Foot_Down
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_Chica_C::AnimNotify_L_Foot_Down()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_Chica.Animatronic_ABP_Chica_C.AnimNotify_L_Foot_Down");
		
		UAnimatronic_ABP_Chica_C_AnimNotify_L_Foot_Down_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_Chica.Animatronic_ABP_Chica_C.ExecuteUbergraph_Animatronic_ABP_Chica
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimatronic_ABP_Chica_C::ExecuteUbergraph_Animatronic_ABP_Chica(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_Chica.Animatronic_ABP_Chica_C.ExecuteUbergraph_Animatronic_ABP_Chica");
		
		UAnimatronic_ABP_Chica_C_ExecuteUbergraph_Animatronic_ABP_Chica_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimatronic_ABP_Chica_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimatronic_ABP_Chica_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Animatronic_ABP_Chica.Animatronic_ABP_Chica_C");
		return ptr;
	}

}


