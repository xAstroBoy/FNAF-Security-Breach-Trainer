/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "Animatronic_ABP_ShatteredChica_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Animatronic_ABP_ShatteredChica.Animatronic_ABP_ShatteredChica_C.footstep
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UAnimatronic_ABP_ShatteredChica_C::footstep()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_ShatteredChica.Animatronic_ABP_ShatteredChica_C.footstep");
		
		UAnimatronic_ABP_ShatteredChica_C_footstep_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Animatronic_ABP_ShatteredChica.Animatronic_ABP_ShatteredChica_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimatronic_ABP_ShatteredChica_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_ShatteredChica.Animatronic_ABP_ShatteredChica_C.BlueprintUpdateAnimation");
		
		UAnimatronic_ABP_ShatteredChica_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Animatronic_ABP_ShatteredChica.Animatronic_ABP_ShatteredChica_C.BlueprintBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UAnimatronic_ABP_ShatteredChica_C::BlueprintBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_ShatteredChica.Animatronic_ABP_ShatteredChica_C.BlueprintBeginPlay");
		
		UAnimatronic_ABP_ShatteredChica_C_BlueprintBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Animatronic_ABP_ShatteredChica.Animatronic_ABP_ShatteredChica_C.AnimNotify_R_Foot_Down
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAnimatronic_ABP_ShatteredChica_C::AnimNotify_R_Foot_Down()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_ShatteredChica.Animatronic_ABP_ShatteredChica_C.AnimNotify_R_Foot_Down");
		
		UAnimatronic_ABP_ShatteredChica_C_AnimNotify_R_Foot_Down_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Animatronic_ABP_ShatteredChica.Animatronic_ABP_ShatteredChica_C.AnimNotify_L_Foot_Down
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAnimatronic_ABP_ShatteredChica_C::AnimNotify_L_Foot_Down()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_ShatteredChica.Animatronic_ABP_ShatteredChica_C.AnimNotify_L_Foot_Down");
		
		UAnimatronic_ABP_ShatteredChica_C_AnimNotify_L_Foot_Down_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Animatronic_ABP_ShatteredChica.Animatronic_ABP_ShatteredChica_C.ExecuteUbergraph_Animatronic_ABP_ShatteredChica
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimatronic_ABP_ShatteredChica_C::ExecuteUbergraph_Animatronic_ABP_ShatteredChica(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_ShatteredChica.Animatronic_ABP_ShatteredChica_C.ExecuteUbergraph_Animatronic_ABP_ShatteredChica");
		
		UAnimatronic_ABP_ShatteredChica_C_ExecuteUbergraph_Animatronic_ABP_ShatteredChica_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UAnimatronic_ABP_ShatteredChica_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimatronic_ABP_ShatteredChica_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Animatronic_ABP_ShatteredChica.Animatronic_ABP_ShatteredChica_C");
		return ptr;
	}

}


