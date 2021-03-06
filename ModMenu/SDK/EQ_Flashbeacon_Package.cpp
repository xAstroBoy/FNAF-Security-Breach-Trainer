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
	 * 		Name   -> Function EQ_Flashbeacon.EQ_Flashbeacon_C.Get Anim Item Type
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		GregoryAnimItemEnum_EGregoryAnimItemEnum           AnimType                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AEQ_Flashbeacon_C::Get_Anim_Item_Type(GregoryAnimItemEnum_EGregoryAnimItemEnum* AnimType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EQ_Flashbeacon.EQ_Flashbeacon_C.Get Anim Item Type");
		
		AEQ_Flashbeacon_C_Get_Anim_Item_Type_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimType != nullptr)
			*AnimType = params.AnimType;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function EQ_Flashbeacon.EQ_Flashbeacon_C.PutAway
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function EQ_Flashbeacon.EQ_Flashbeacon_C.PullOut
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function EQ_Flashbeacon.EQ_Flashbeacon_C.PrimaryAction
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function EQ_Flashbeacon.EQ_Flashbeacon_C.ResetCamUse
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function EQ_Flashbeacon.EQ_Flashbeacon_C.Recharging
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function EQ_Flashbeacon.EQ_Flashbeacon_C.RechargeDone
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function EQ_Flashbeacon.EQ_Flashbeacon_C.ExecuteUbergraph_EQ_Flashbeacon
	 * 		Flags  -> (Final, HasDefaults)
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
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AEQ_Flashbeacon_C.StaticClass
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


