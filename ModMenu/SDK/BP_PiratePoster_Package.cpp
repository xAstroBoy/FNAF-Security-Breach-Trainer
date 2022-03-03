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
	 * 		Name   -> Function BP_PiratePoster.BP_PiratePoster_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_PiratePoster_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PiratePoster.BP_PiratePoster_C.ReceiveBeginPlay");
		
		ABP_PiratePoster_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function BP_PiratePoster.BP_PiratePoster_C.UpdateGlow
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_PiratePoster_C::UpdateGlow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PiratePoster.BP_PiratePoster_C.UpdateGlow");
		
		ABP_PiratePoster_C_UpdateGlow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function BP_PiratePoster.BP_PiratePoster_C.BndEvt__FreddyWorldState_K2Node_ComponentBoundEvent_4_OnObjectStateChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UWorldStateHandlerComponent*                 Handler                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bState                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PiratePoster_C::BndEvt__FreddyWorldState_K2Node_ComponentBoundEvent_4_OnObjectStateChanged__DelegateSignature(class UWorldStateHandlerComponent* Handler, bool bState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PiratePoster.BP_PiratePoster_C.BndEvt__FreddyWorldState_K2Node_ComponentBoundEvent_4_OnObjectStateChanged__DelegateSignature");
		
		ABP_PiratePoster_C_BndEvt__FreddyWorldState_K2Node_ComponentBoundEvent_4_OnObjectStateChanged__DelegateSignature_Params params {};
		params.Handler = Handler;
		params.bState = bState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function BP_PiratePoster.BP_PiratePoster_C.BndEvt__ChicaWorldState_K2Node_ComponentBoundEvent_5_OnObjectStateChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UWorldStateHandlerComponent*                 Handler                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bState                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PiratePoster_C::BndEvt__ChicaWorldState_K2Node_ComponentBoundEvent_5_OnObjectStateChanged__DelegateSignature(class UWorldStateHandlerComponent* Handler, bool bState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PiratePoster.BP_PiratePoster_C.BndEvt__ChicaWorldState_K2Node_ComponentBoundEvent_5_OnObjectStateChanged__DelegateSignature");
		
		ABP_PiratePoster_C_BndEvt__ChicaWorldState_K2Node_ComponentBoundEvent_5_OnObjectStateChanged__DelegateSignature_Params params {};
		params.Handler = Handler;
		params.bState = bState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function BP_PiratePoster.BP_PiratePoster_C.BndEvt__FoxyWorldState_K2Node_ComponentBoundEvent_6_OnObjectStateChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UWorldStateHandlerComponent*                 Handler                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bState                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PiratePoster_C::BndEvt__FoxyWorldState_K2Node_ComponentBoundEvent_6_OnObjectStateChanged__DelegateSignature(class UWorldStateHandlerComponent* Handler, bool bState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PiratePoster.BP_PiratePoster_C.BndEvt__FoxyWorldState_K2Node_ComponentBoundEvent_6_OnObjectStateChanged__DelegateSignature");
		
		ABP_PiratePoster_C_BndEvt__FoxyWorldState_K2Node_ComponentBoundEvent_6_OnObjectStateChanged__DelegateSignature_Params params {};
		params.Handler = Handler;
		params.bState = bState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function BP_PiratePoster.BP_PiratePoster_C.BndEvt__BonnieWorldState_K2Node_ComponentBoundEvent_7_OnObjectStateChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UWorldStateHandlerComponent*                 Handler                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bState                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PiratePoster_C::BndEvt__BonnieWorldState_K2Node_ComponentBoundEvent_7_OnObjectStateChanged__DelegateSignature(class UWorldStateHandlerComponent* Handler, bool bState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PiratePoster.BP_PiratePoster_C.BndEvt__BonnieWorldState_K2Node_ComponentBoundEvent_7_OnObjectStateChanged__DelegateSignature");
		
		ABP_PiratePoster_C_BndEvt__BonnieWorldState_K2Node_ComponentBoundEvent_7_OnObjectStateChanged__DelegateSignature_Params params {};
		params.Handler = Handler;
		params.bState = bState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function BP_PiratePoster.BP_PiratePoster_C.ExecuteUbergraph_BP_PiratePoster
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PiratePoster_C::ExecuteUbergraph_BP_PiratePoster(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PiratePoster.BP_PiratePoster_C.ExecuteUbergraph_BP_PiratePoster");
		
		ABP_PiratePoster_C_ExecuteUbergraph_BP_PiratePoster_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_PiratePoster_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_PiratePoster_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PiratePoster.BP_PiratePoster_C");
		return ptr;
	}

}


