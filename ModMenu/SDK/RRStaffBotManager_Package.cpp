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
	 * 		Name   -> Function RRStaffBotManager.RRStaffBotManager_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ARRStaffBotManager_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RRStaffBotManager.RRStaffBotManager_C.ReceiveBeginPlay");
		
		ARRStaffBotManager_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function RRStaffBotManager.RRStaffBotManager_C.On Alert
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Alert                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARRStaffBotManager_C::On_Alert(const class FName& Alert, const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RRStaffBotManager.RRStaffBotManager_C.On Alert");
		
		ARRStaffBotManager_C_On_Alert_Params params {};
		params.Alert = Alert;
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function RRStaffBotManager.RRStaffBotManager_C.BndEvt__TimeCheckComponent_K2Node_ComponentBoundEvent_0_MoonManTimeHit__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ARRStaffBotManager_C::BndEvt__TimeCheckComponent_K2Node_ComponentBoundEvent_0_MoonManTimeHit__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RRStaffBotManager.RRStaffBotManager_C.BndEvt__TimeCheckComponent_K2Node_ComponentBoundEvent_0_MoonManTimeHit__DelegateSignature");
		
		ARRStaffBotManager_C_BndEvt__TimeCheckComponent_K2Node_ComponentBoundEvent_0_MoonManTimeHit__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function RRStaffBotManager.RRStaffBotManager_C.ExecuteUbergraph_RRStaffBotManager
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARRStaffBotManager_C::ExecuteUbergraph_RRStaffBotManager(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RRStaffBotManager.RRStaffBotManager_C.ExecuteUbergraph_RRStaffBotManager");
		
		ARRStaffBotManager_C_ExecuteUbergraph_RRStaffBotManager_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ARRStaffBotManager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARRStaffBotManager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass RRStaffBotManager.RRStaffBotManager_C");
		return ptr;
	}

}


