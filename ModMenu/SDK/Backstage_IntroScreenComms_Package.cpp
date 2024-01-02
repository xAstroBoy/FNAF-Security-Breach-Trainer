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
	 * 		Name   -> Function Backstage_IntroScreenComms.Backstage_IntroScreenComms_C.ShowFreddyVideo
	 * 		Flags  -> ()
	 */
	void ABackstage_IntroScreenComms_C::ShowFreddyVideo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Backstage_IntroScreenComms.Backstage_IntroScreenComms_C.ShowFreddyVideo");
		
		ABackstage_IntroScreenComms_C_ShowFreddyVideo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Backstage_IntroScreenComms.Backstage_IntroScreenComms_C.ShowVannyVideo
	 * 		Flags  -> ()
	 */
	void ABackstage_IntroScreenComms_C::ShowVannyVideo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Backstage_IntroScreenComms.Backstage_IntroScreenComms_C.ShowVannyVideo");
		
		ABackstage_IntroScreenComms_C_ShowVannyVideo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Backstage_IntroScreenComms.Backstage_IntroScreenComms_C.StopShowingVideo
	 * 		Flags  -> ()
	 */
	void ABackstage_IntroScreenComms_C::StopShowingVideo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Backstage_IntroScreenComms.Backstage_IntroScreenComms_C.StopShowingVideo");
		
		ABackstage_IntroScreenComms_C_StopShowingVideo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Backstage_IntroScreenComms.Backstage_IntroScreenComms_C.SetScreenSprite
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMaterialInstance*                           NewMaterial                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABackstage_IntroScreenComms_C::SetScreenSprite(class UMaterialInstance* NewMaterial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Backstage_IntroScreenComms.Backstage_IntroScreenComms_C.SetScreenSprite");
		
		ABackstage_IntroScreenComms_C_SetScreenSprite_Params params {};
		params.NewMaterial = NewMaterial;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Backstage_IntroScreenComms.Backstage_IntroScreenComms_C.ExecuteUbergraph_Backstage_IntroScreenComms
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABackstage_IntroScreenComms_C::ExecuteUbergraph_Backstage_IntroScreenComms(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Backstage_IntroScreenComms.Backstage_IntroScreenComms_C.ExecuteUbergraph_Backstage_IntroScreenComms");
		
		ABackstage_IntroScreenComms_C_ExecuteUbergraph_Backstage_IntroScreenComms_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABackstage_IntroScreenComms_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABackstage_IntroScreenComms_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Backstage_IntroScreenComms.Backstage_IntroScreenComms_C");
		return ptr;
	}

}


