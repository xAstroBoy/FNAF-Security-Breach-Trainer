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
	 * 		Name   -> Function WI_Gregory_Crouching.WI_Gregory_Crouching_C.SwapImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsCrouched                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWI_Gregory_Crouching_C::SwapImage(bool IsCrouched)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Gregory_Crouching.WI_Gregory_Crouching_C.SwapImage");
		
		UWI_Gregory_Crouching_C_SwapImage_Params params {};
		params.IsCrouched = IsCrouched;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WI_Gregory_Crouching.WI_Gregory_Crouching_C.SetCorrectCrouchingImage
	 * 		Flags  -> ()
	 */
	void UWI_Gregory_Crouching_C::SetCorrectCrouchingImage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Gregory_Crouching.WI_Gregory_Crouching_C.SetCorrectCrouchingImage");
		
		UWI_Gregory_Crouching_C_SetCorrectCrouchingImage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WI_Gregory_Crouching.WI_Gregory_Crouching_C.HideCrouchingImage
	 * 		Flags  -> ()
	 */
	void UWI_Gregory_Crouching_C::HideCrouchingImage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Gregory_Crouching.WI_Gregory_Crouching_C.HideCrouchingImage");
		
		UWI_Gregory_Crouching_C_HideCrouchingImage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WI_Gregory_Crouching.WI_Gregory_Crouching_C.ShowCrouchingImage
	 * 		Flags  -> ()
	 */
	void UWI_Gregory_Crouching_C::ShowCrouchingImage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Gregory_Crouching.WI_Gregory_Crouching_C.ShowCrouchingImage");
		
		UWI_Gregory_Crouching_C_ShowCrouchingImage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WI_Gregory_Crouching.WI_Gregory_Crouching_C.OnFailure_1EEBCFB84FF35A61CCA67DBBFADBC509
	 * 		Flags  -> ()
	 */
	void UWI_Gregory_Crouching_C::OnFailure_1EEBCFB84FF35A61CCA67DBBFADBC509()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Gregory_Crouching.WI_Gregory_Crouching_C.OnFailure_1EEBCFB84FF35A61CCA67DBBFADBC509");
		
		UWI_Gregory_Crouching_C_OnFailure_1EEBCFB84FF35A61CCA67DBBFADBC509_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WI_Gregory_Crouching.WI_Gregory_Crouching_C.OnSuccess_1EEBCFB84FF35A61CCA67DBBFADBC509
	 * 		Flags  -> ()
	 */
	void UWI_Gregory_Crouching_C::OnSuccess_1EEBCFB84FF35A61CCA67DBBFADBC509()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Gregory_Crouching.WI_Gregory_Crouching_C.OnSuccess_1EEBCFB84FF35A61CCA67DBBFADBC509");
		
		UWI_Gregory_Crouching_C_OnSuccess_1EEBCFB84FF35A61CCA67DBBFADBC509_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WI_Gregory_Crouching.WI_Gregory_Crouching_C.OnFailure_939A65B5496246CF92D6CDB315E2B149
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        WrittenAchievementName                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              WrittenProgress                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            WrittenUserTag                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWI_Gregory_Crouching_C::OnFailure_939A65B5496246CF92D6CDB315E2B149(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Gregory_Crouching.WI_Gregory_Crouching_C.OnFailure_939A65B5496246CF92D6CDB315E2B149");
		
		UWI_Gregory_Crouching_C_OnFailure_939A65B5496246CF92D6CDB315E2B149_Params params {};
		params.WrittenAchievementName = WrittenAchievementName;
		params.WrittenProgress = WrittenProgress;
		params.WrittenUserTag = WrittenUserTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WI_Gregory_Crouching.WI_Gregory_Crouching_C.OnSuccess_939A65B5496246CF92D6CDB315E2B149
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        WrittenAchievementName                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              WrittenProgress                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            WrittenUserTag                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWI_Gregory_Crouching_C::OnSuccess_939A65B5496246CF92D6CDB315E2B149(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Gregory_Crouching.WI_Gregory_Crouching_C.OnSuccess_939A65B5496246CF92D6CDB315E2B149");
		
		UWI_Gregory_Crouching_C_OnSuccess_939A65B5496246CF92D6CDB315E2B149_Params params {};
		params.WrittenAchievementName = WrittenAchievementName;
		params.WrittenProgress = WrittenProgress;
		params.WrittenUserTag = WrittenUserTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WI_Gregory_Crouching.WI_Gregory_Crouching_C.Construct
	 * 		Flags  -> ()
	 */
	void UWI_Gregory_Crouching_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Gregory_Crouching.WI_Gregory_Crouching_C.Construct");
		
		UWI_Gregory_Crouching_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WI_Gregory_Crouching.WI_Gregory_Crouching_C.Crouch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               BeginCrouch                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWI_Gregory_Crouching_C::Crouch(bool BeginCrouch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Gregory_Crouching.WI_Gregory_Crouching_C.Crouch");
		
		UWI_Gregory_Crouching_C_Crouch_Params params {};
		params.BeginCrouch = BeginCrouch;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WI_Gregory_Crouching.WI_Gregory_Crouching_C.UpdateAlertColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            AlertStatus                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWI_Gregory_Crouching_C::UpdateAlertColor(int32_t AlertStatus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Gregory_Crouching.WI_Gregory_Crouching_C.UpdateAlertColor");
		
		UWI_Gregory_Crouching_C_UpdateAlertColor_Params params {};
		params.AlertStatus = AlertStatus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WI_Gregory_Crouching.WI_Gregory_Crouching_C.HideOnUnpossess
	 * 		Flags  -> ()
	 */
	void UWI_Gregory_Crouching_C::HideOnUnpossess()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Gregory_Crouching.WI_Gregory_Crouching_C.HideOnUnpossess");
		
		UWI_Gregory_Crouching_C_HideOnUnpossess_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WI_Gregory_Crouching.WI_Gregory_Crouching_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWI_Gregory_Crouching_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Gregory_Crouching.WI_Gregory_Crouching_C.Tick");
		
		UWI_Gregory_Crouching_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WI_Gregory_Crouching.WI_Gregory_Crouching_C.Award Dodge and Weave
	 * 		Flags  -> ()
	 */
	void UWI_Gregory_Crouching_C::AwardDodgeandWeave()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Gregory_Crouching.WI_Gregory_Crouching_C.Award Dodge and Weave");
		
		UWI_Gregory_Crouching_C_AwardDodgeandWeave_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WI_Gregory_Crouching.WI_Gregory_Crouching_C.ExecuteUbergraph_WI_Gregory_Crouching
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWI_Gregory_Crouching_C::ExecuteUbergraph_WI_Gregory_Crouching(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Gregory_Crouching.WI_Gregory_Crouching_C.ExecuteUbergraph_WI_Gregory_Crouching");
		
		UWI_Gregory_Crouching_C_ExecuteUbergraph_WI_Gregory_Crouching_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWI_Gregory_Crouching_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWI_Gregory_Crouching_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WI_Gregory_Crouching.WI_Gregory_Crouching_C");
		return ptr;
	}

}


