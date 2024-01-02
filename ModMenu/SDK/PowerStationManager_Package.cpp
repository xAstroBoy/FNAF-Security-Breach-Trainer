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
	 * 		Name   -> Function PowerStationManager.PowerStationManager_C.GetPowerStationEvent
	 * 		Flags  -> ()
	 */
	void APowerStationManager_C::GetPowerStationEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PowerStationManager.PowerStationManager_C.GetPowerStationEvent");
		
		APowerStationManager_C_GetPowerStationEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PowerStationManager.PowerStationManager_C.IsPlayerInPowerStation
	 * 		Flags  -> ()
	 */
	bool APowerStationManager_C::IsPlayerInPowerStation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PowerStationManager.PowerStationManager_C.IsPlayerInPowerStation");
		
		APowerStationManager_C_IsPlayerInPowerStation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PowerStationManager.PowerStationManager_C.GetPowerStationID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APowerStation_Actor_C*                       PowerStation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            PowerStationID                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APowerStationManager_C::GetPowerStationID(class APowerStation_Actor_C* PowerStation, int32_t* PowerStationID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PowerStationManager.PowerStationManager_C.GetPowerStationID");
		
		APowerStationManager_C_GetPowerStationID_Params params {};
		params.PowerStation = PowerStation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PowerStationID != nullptr)
			*PowerStationID = params.PowerStationID;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PowerStationManager.PowerStationManager_C.GetPowerStationByID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PowerStationID                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APowerStation_Actor_C*                       PowerStation                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APowerStationManager_C::GetPowerStationByID(int32_t PowerStationID, class APowerStation_Actor_C** PowerStation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PowerStationManager.PowerStationManager_C.GetPowerStationByID");
		
		APowerStationManager_C_GetPowerStationByID_Params params {};
		params.PowerStationID = PowerStationID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PowerStation != nullptr)
			*PowerStation = params.PowerStation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PowerStationManager.PowerStationManager_C.Finish Power Station Event
	 * 		Flags  -> ()
	 */
	void APowerStationManager_C::FinishPowerStationEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PowerStationManager.PowerStationManager_C.Finish Power Station Event");
		
		APowerStationManager_C_FinishPowerStationEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PowerStationManager.PowerStationManager_C.Power Station Entered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APowerStation_Actor_C*                       PowerStation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APowerStationManager_C::PowerStationEntered(class APowerStation_Actor_C* PowerStation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PowerStationManager.PowerStationManager_C.Power Station Entered");
		
		APowerStationManager_C_PowerStationEntered_Params params {};
		params.PowerStation = PowerStation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PowerStationManager.PowerStationManager_C.ExecuteUbergraph_PowerStationManager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APowerStationManager_C::ExecuteUbergraph_PowerStationManager(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PowerStationManager.PowerStationManager_C.ExecuteUbergraph_PowerStationManager");
		
		APowerStationManager_C_ExecuteUbergraph_PowerStationManager_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PowerStationManager.PowerStationManager_C.OnPowerStationEntered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APowerStation_Actor_C*                       PowerStation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            PowerStationID                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APowerStationManager_C::OnPowerStationEntered__DelegateSignature(class APowerStation_Actor_C* PowerStation, int32_t PowerStationID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PowerStationManager.PowerStationManager_C.OnPowerStationEntered__DelegateSignature");
		
		APowerStationManager_C_OnPowerStationEntered__DelegateSignature_Params params {};
		params.PowerStation = PowerStation;
		params.PowerStationID = PowerStationID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APowerStationManager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APowerStationManager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PowerStationManager.PowerStationManager_C");
		return ptr;
	}

}


