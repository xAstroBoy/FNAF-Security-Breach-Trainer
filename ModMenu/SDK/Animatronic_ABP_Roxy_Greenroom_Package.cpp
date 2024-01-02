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
	 * 		Name   -> Function Animatronic_ABP_Roxy_Greenroom.Animatronic_ABP_Roxy_Greenroom_C.footstep
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_Roxy_Greenroom_C::footstep()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_Roxy_Greenroom.Animatronic_ABP_Roxy_Greenroom_C.footstep");
		
		UAnimatronic_ABP_Roxy_Greenroom_C_footstep_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_Roxy_Greenroom.Animatronic_ABP_Roxy_Greenroom_C.BlueprintBeginPlay
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_Roxy_Greenroom_C::BlueprintBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_Roxy_Greenroom.Animatronic_ABP_Roxy_Greenroom_C.BlueprintBeginPlay");
		
		UAnimatronic_ABP_Roxy_Greenroom_C_BlueprintBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_Roxy_Greenroom.Animatronic_ABP_Roxy_Greenroom_C.BlueprintUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimatronic_ABP_Roxy_Greenroom_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_Roxy_Greenroom.Animatronic_ABP_Roxy_Greenroom_C.BlueprintUpdateAnimation");
		
		UAnimatronic_ABP_Roxy_Greenroom_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_Roxy_Greenroom.Animatronic_ABP_Roxy_Greenroom_C.AnimNotify_R_Foot_Down
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_Roxy_Greenroom_C::AnimNotify_R_Foot_Down()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_Roxy_Greenroom.Animatronic_ABP_Roxy_Greenroom_C.AnimNotify_R_Foot_Down");
		
		UAnimatronic_ABP_Roxy_Greenroom_C_AnimNotify_R_Foot_Down_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_Roxy_Greenroom.Animatronic_ABP_Roxy_Greenroom_C.AnimNotify_L_Foot_Down
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_Roxy_Greenroom_C::AnimNotify_L_Foot_Down()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_Roxy_Greenroom.Animatronic_ABP_Roxy_Greenroom_C.AnimNotify_L_Foot_Down");
		
		UAnimatronic_ABP_Roxy_Greenroom_C_AnimNotify_L_Foot_Down_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_Roxy_Greenroom.Animatronic_ABP_Roxy_Greenroom_C.ExecuteUbergraph_Animatronic_ABP_Roxy_Greenroom
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimatronic_ABP_Roxy_Greenroom_C::ExecuteUbergraph_Animatronic_ABP_Roxy_Greenroom(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_Roxy_Greenroom.Animatronic_ABP_Roxy_Greenroom_C.ExecuteUbergraph_Animatronic_ABP_Roxy_Greenroom");
		
		UAnimatronic_ABP_Roxy_Greenroom_C_ExecuteUbergraph_Animatronic_ABP_Roxy_Greenroom_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimatronic_ABP_Roxy_Greenroom_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimatronic_ABP_Roxy_Greenroom_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Animatronic_ABP_Roxy_Greenroom.Animatronic_ABP_Roxy_Greenroom_C");
		return ptr;
	}

}


