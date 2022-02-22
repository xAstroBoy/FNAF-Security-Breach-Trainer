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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PresentCollectible.PresentCollectible_C.GetInteractibleType
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		InteractibleType_EInteractibleType                 Type                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		InteractiblePressType_EInteractiblePressType       PressType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APresentCollectible_C::GetInteractibleType(InteractibleType_EInteractibleType* Type, InteractiblePressType_EInteractiblePressType* PressType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PresentCollectible.PresentCollectible_C.GetInteractibleType");
		
		APresentCollectible_C_GetInteractibleType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Type != nullptr)
			*Type = params.Type;
		if (PressType != nullptr)
			*PressType = params.PressType;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PresentCollectible.PresentCollectible_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void APresentCollectible_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PresentCollectible.PresentCollectible_C.UserConstructionScript");
		
		APresentCollectible_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PresentCollectible.PresentCollectible_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void APresentCollectible_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PresentCollectible.PresentCollectible_C.ReceiveBeginPlay");
		
		APresentCollectible_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PresentCollectible.PresentCollectible_C.OnBeginCollect
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APresentCollectible_C::OnBeginCollect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PresentCollectible.PresentCollectible_C.OnBeginCollect");
		
		APresentCollectible_C_OnBeginCollect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PresentCollectible.PresentCollectible_C.OnCollect
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APresentCollectible_C::OnCollect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PresentCollectible.PresentCollectible_C.OnCollect");
		
		APresentCollectible_C_OnCollect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PresentCollectible.PresentCollectible_C.OnCancelCollect
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APresentCollectible_C::OnCancelCollect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PresentCollectible.PresentCollectible_C.OnCancelCollect");
		
		APresentCollectible_C_OnCancelCollect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PresentCollectible.PresentCollectible_C.OnLoadCollected
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APresentCollectible_C::OnLoadCollected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PresentCollectible.PresentCollectible_C.OnLoadCollected");
		
		APresentCollectible_C_OnLoadCollected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PresentCollectible.PresentCollectible_C.Reset Animation
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APresentCollectible_C::Reset_Animation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PresentCollectible.PresentCollectible_C.Reset Animation");
		
		APresentCollectible_C_Reset_Animation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PresentCollectible.PresentCollectible_C.ExecuteUbergraph_PresentCollectible
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APresentCollectible_C::ExecuteUbergraph_PresentCollectible(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PresentCollectible.PresentCollectible_C.ExecuteUbergraph_PresentCollectible");
		
		APresentCollectible_C_ExecuteUbergraph_PresentCollectible_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction APresentCollectible_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APresentCollectible_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PresentCollectible.PresentCollectible_C");
		return ptr;
	}

}


