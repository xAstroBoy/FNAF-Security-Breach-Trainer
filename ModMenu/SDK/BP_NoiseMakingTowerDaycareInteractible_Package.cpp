/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "BP_NoiseMakingTowerDaycareInteractible_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BP_NoiseMakingTowerDaycareInteractible.BP_NoiseMakingTowerDaycareInteractible_C.UpdateUIOnTick
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_NoiseMakingTowerDaycareInteractible_C::UpdateUIOnTick(bool* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NoiseMakingTowerDaycareInteractible.BP_NoiseMakingTowerDaycareInteractible_C.UpdateUIOnTick");
		
		ABP_NoiseMakingTowerDaycareInteractible_C_UpdateUIOnTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Output != nullptr)
			*Output = params.Output;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BP_NoiseMakingTowerDaycareInteractible.BP_NoiseMakingTowerDaycareInteractible_C.CanPlayerInteract
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CanInteract                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		fnaf9_EConditionFailReason                         CantReason                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NoiseMakingTowerDaycareInteractible_C::CanPlayerInteract(bool* CanInteract, fnaf9_EConditionFailReason* CantReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NoiseMakingTowerDaycareInteractible.BP_NoiseMakingTowerDaycareInteractible_C.CanPlayerInteract");
		
		ABP_NoiseMakingTowerDaycareInteractible_C_CanPlayerInteract_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanInteract != nullptr)
			*CanInteract = params.CanInteract;
		if (CantReason != nullptr)
			*CantReason = params.CantReason;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BP_NoiseMakingTowerDaycareInteractible.BP_NoiseMakingTowerDaycareInteractible_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_NoiseMakingTowerDaycareInteractible_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NoiseMakingTowerDaycareInteractible.BP_NoiseMakingTowerDaycareInteractible_C.UserConstructionScript");
		
		ABP_NoiseMakingTowerDaycareInteractible_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BP_NoiseMakingTowerDaycareInteractible.BP_NoiseMakingTowerDaycareInteractible_C.On Triggered
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Other_Actor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NoiseMakingTowerDaycareInteractible_C::On_Triggered(class AActor* Other_Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NoiseMakingTowerDaycareInteractible.BP_NoiseMakingTowerDaycareInteractible_C.On Triggered");
		
		ABP_NoiseMakingTowerDaycareInteractible_C_On_Triggered_Params params {};
		params.Other_Actor = Other_Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BP_NoiseMakingTowerDaycareInteractible.BP_NoiseMakingTowerDaycareInteractible_C.Reset
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_NoiseMakingTowerDaycareInteractible_C::Reset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NoiseMakingTowerDaycareInteractible.BP_NoiseMakingTowerDaycareInteractible_C.Reset");
		
		ABP_NoiseMakingTowerDaycareInteractible_C_Reset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BP_NoiseMakingTowerDaycareInteractible.BP_NoiseMakingTowerDaycareInteractible_C.Reset01Anim
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_NoiseMakingTowerDaycareInteractible_C::Reset01Anim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NoiseMakingTowerDaycareInteractible.BP_NoiseMakingTowerDaycareInteractible_C.Reset01Anim");
		
		ABP_NoiseMakingTowerDaycareInteractible_C_Reset01Anim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BP_NoiseMakingTowerDaycareInteractible.BP_NoiseMakingTowerDaycareInteractible_C.Reset02Anim
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_NoiseMakingTowerDaycareInteractible_C::Reset02Anim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NoiseMakingTowerDaycareInteractible.BP_NoiseMakingTowerDaycareInteractible_C.Reset02Anim");
		
		ABP_NoiseMakingTowerDaycareInteractible_C_Reset02Anim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BP_NoiseMakingTowerDaycareInteractible.BP_NoiseMakingTowerDaycareInteractible_C.Reset03Anim
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_NoiseMakingTowerDaycareInteractible_C::Reset03Anim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NoiseMakingTowerDaycareInteractible.BP_NoiseMakingTowerDaycareInteractible_C.Reset03Anim");
		
		ABP_NoiseMakingTowerDaycareInteractible_C_Reset03Anim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BP_NoiseMakingTowerDaycareInteractible.BP_NoiseMakingTowerDaycareInteractible_C.ExecuteUbergraph_BP_NoiseMakingTowerDaycareInteractible
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NoiseMakingTowerDaycareInteractible_C::ExecuteUbergraph_BP_NoiseMakingTowerDaycareInteractible(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NoiseMakingTowerDaycareInteractible.BP_NoiseMakingTowerDaycareInteractible_C.ExecuteUbergraph_BP_NoiseMakingTowerDaycareInteractible");
		
		ABP_NoiseMakingTowerDaycareInteractible_C_ExecuteUbergraph_BP_NoiseMakingTowerDaycareInteractible_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_NoiseMakingTowerDaycareInteractible_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_NoiseMakingTowerDaycareInteractible_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_NoiseMakingTowerDaycareInteractible.BP_NoiseMakingTowerDaycareInteractible_C");
		return ptr;
	}

}


