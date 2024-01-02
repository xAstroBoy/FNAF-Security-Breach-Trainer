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
	 * 		Name   -> Function EQ_Flashbeacon.EQ_Flashbeacon_C.Get Anim Item Type
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EGregoryAnimItemEnum                               AnimType                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AEQ_Flashbeacon_C::GetAnimItemType(EGregoryAnimItemEnum* AnimType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EQ_Flashbeacon.EQ_Flashbeacon_C.Get Anim Item Type");
		
		AEQ_Flashbeacon_C_GetAnimItemType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimType != nullptr)
			*AnimType = params.AnimType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EQ_Flashbeacon.EQ_Flashbeacon_C.PutAway
	 * 		Flags  -> ()
	 */
	void AEQ_Flashbeacon_C::PutAway()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EQ_Flashbeacon.EQ_Flashbeacon_C.PutAway");
		
		AEQ_Flashbeacon_C_PutAway_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EQ_Flashbeacon.EQ_Flashbeacon_C.PullOut
	 * 		Flags  -> ()
	 */
	void AEQ_Flashbeacon_C::PullOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EQ_Flashbeacon.EQ_Flashbeacon_C.PullOut");
		
		AEQ_Flashbeacon_C_PullOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EQ_Flashbeacon.EQ_Flashbeacon_C.PrimaryAction
	 * 		Flags  -> ()
	 */
	void AEQ_Flashbeacon_C::PrimaryAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EQ_Flashbeacon.EQ_Flashbeacon_C.PrimaryAction");
		
		AEQ_Flashbeacon_C_PrimaryAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EQ_Flashbeacon.EQ_Flashbeacon_C.ResetCamUse
	 * 		Flags  -> ()
	 */
	void AEQ_Flashbeacon_C::ResetCamUse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EQ_Flashbeacon.EQ_Flashbeacon_C.ResetCamUse");
		
		AEQ_Flashbeacon_C_ResetCamUse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EQ_Flashbeacon.EQ_Flashbeacon_C.Recharging
	 * 		Flags  -> ()
	 */
	void AEQ_Flashbeacon_C::Recharging()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EQ_Flashbeacon.EQ_Flashbeacon_C.Recharging");
		
		AEQ_Flashbeacon_C_Recharging_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EQ_Flashbeacon.EQ_Flashbeacon_C.RechargeDone
	 * 		Flags  -> ()
	 */
	void AEQ_Flashbeacon_C::RechargeDone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EQ_Flashbeacon.EQ_Flashbeacon_C.RechargeDone");
		
		AEQ_Flashbeacon_C_RechargeDone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EQ_Flashbeacon.EQ_Flashbeacon_C.RemoveFazcam
	 * 		Flags  -> ()
	 */
	void AEQ_Flashbeacon_C::RemoveFazcam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EQ_Flashbeacon.EQ_Flashbeacon_C.RemoveFazcam");
		
		AEQ_Flashbeacon_C_RemoveFazcam_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EQ_Flashbeacon.EQ_Flashbeacon_C.ExecuteUbergraph_EQ_Flashbeacon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AEQ_Flashbeacon_C::ExecuteUbergraph_EQ_Flashbeacon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EQ_Flashbeacon.EQ_Flashbeacon_C.ExecuteUbergraph_EQ_Flashbeacon");
		
		AEQ_Flashbeacon_C_ExecuteUbergraph_EQ_Flashbeacon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AEQ_Flashbeacon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AEQ_Flashbeacon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass EQ_Flashbeacon.EQ_Flashbeacon_C");
		return ptr;
	}

}


