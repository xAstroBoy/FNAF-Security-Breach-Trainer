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
	 * 		Name   -> Function BP_PowerMeter_Door.BP_PowerMeter_Door_C.SetDoorPowerForAudio
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Power                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Initialize                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PowerMeter_Door_C::SetDoorPowerForAudio(float Power, bool Initialize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PowerMeter_Door.BP_PowerMeter_Door_C.SetDoorPowerForAudio");
		
		ABP_PowerMeter_Door_C_SetDoorPowerForAudio_Params params {};
		params.Power = Power;
		params.Initialize = Initialize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function BP_PowerMeter_Door.BP_PowerMeter_Door_C.RoundToHundreths
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              RoundedValue                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PowerMeter_Door_C::RoundToHundreths(float Value, float* RoundedValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PowerMeter_Door.BP_PowerMeter_Door_C.RoundToHundreths");
		
		ABP_PowerMeter_Door_C_RoundToHundreths_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RoundedValue != nullptr)
			*RoundedValue = params.RoundedValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function BP_PowerMeter_Door.BP_PowerMeter_Door_C.Adjust Power To Input Amount
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DesiredPowerLevel                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               FastAdjustment                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PowerMeter_Door_C::Adjust_Power_To_Input_Amount(float DesiredPowerLevel, bool FastAdjustment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PowerMeter_Door.BP_PowerMeter_Door_C.Adjust Power To Input Amount");
		
		ABP_PowerMeter_Door_C_Adjust_Power_To_Input_Amount_Params params {};
		params.DesiredPowerLevel = DesiredPowerLevel;
		params.FastAdjustment = FastAdjustment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function BP_PowerMeter_Door.BP_PowerMeter_Door_C.SetDoorPower
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Power                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PowerMeter_Door_C::SetDoorPower(float Power)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PowerMeter_Door.BP_PowerMeter_Door_C.SetDoorPower");
		
		ABP_PowerMeter_Door_C_SetDoorPower_Params params {};
		params.Power = Power;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function BP_PowerMeter_Door.BP_PowerMeter_Door_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PowerMeter_Door_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PowerMeter_Door.BP_PowerMeter_Door_C.ReceiveTick");
		
		ABP_PowerMeter_Door_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function BP_PowerMeter_Door.BP_PowerMeter_Door_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_PowerMeter_Door_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PowerMeter_Door.BP_PowerMeter_Door_C.ReceiveBeginPlay");
		
		ABP_PowerMeter_Door_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function BP_PowerMeter_Door.BP_PowerMeter_Door_C.ExecuteUbergraph_BP_PowerMeter_Door
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PowerMeter_Door_C::ExecuteUbergraph_BP_PowerMeter_Door(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PowerMeter_Door.BP_PowerMeter_Door_C.ExecuteUbergraph_BP_PowerMeter_Door");
		
		ABP_PowerMeter_Door_C_ExecuteUbergraph_BP_PowerMeter_Door_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_PowerMeter_Door_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_PowerMeter_Door_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PowerMeter_Door.BP_PowerMeter_Door_C");
		return ptr;
	}

}


