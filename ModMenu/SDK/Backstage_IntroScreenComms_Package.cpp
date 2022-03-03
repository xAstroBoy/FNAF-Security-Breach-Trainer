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
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function Backstage_IntroScreenComms.Backstage_IntroScreenComms_C.ShowFreddyVideo
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function Backstage_IntroScreenComms.Backstage_IntroScreenComms_C.ShowVannyVideo
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function Backstage_IntroScreenComms.Backstage_IntroScreenComms_C.StopShowingVideo
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function Backstage_IntroScreenComms.Backstage_IntroScreenComms_C.SetScreenSprite
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UMaterialInstance*                           New_Material                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABackstage_IntroScreenComms_C::SetScreenSprite(class UMaterialInstance* New_Material)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Backstage_IntroScreenComms.Backstage_IntroScreenComms_C.SetScreenSprite");
		
		ABackstage_IntroScreenComms_C_SetScreenSprite_Params params {};
		params.New_Material = New_Material;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function Backstage_IntroScreenComms.Backstage_IntroScreenComms_C.ExecuteUbergraph_Backstage_IntroScreenComms
	 * 		Flags  -> (Final, HasDefaults)
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
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ABackstage_IntroScreenComms_C.StaticClass
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


