/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "OGM_Underground_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OGM_Underground.OGM_Underground_C.PlayerRequestStart
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ForceStart                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Started                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		fnaf9_ECantStartMinigameReason                     reason                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOGM_Underground_C::PlayerRequestStart(bool ForceStart, bool* Started, fnaf9_ECantStartMinigameReason* reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OGM_Underground.OGM_Underground_C.PlayerRequestStart");
		
		AOGM_Underground_C_PlayerRequestStart_Params params {};
		params.ForceStart = ForceStart;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Started != nullptr)
			*Started = params.Started;
		if (reason != nullptr)
			*reason = params.reason;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OGM_Underground.OGM_Underground_C.PlayerRequestEnd
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TEnumAsByte<E_EndMiniGameType_E_EndMiniGameType>   EndType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOGM_Underground_C::PlayerRequestEnd(TEnumAsByte<E_EndMiniGameType_E_EndMiniGameType> EndType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OGM_Underground.OGM_Underground_C.PlayerRequestEnd");
		
		AOGM_Underground_C_PlayerRequestEnd_Params params {};
		params.EndType = EndType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OGM_Underground.OGM_Underground_C.UpdateVentPowerDrain
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               PowerDrained                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AOGM_Underground_C::UpdateVentPowerDrain(float DeltaSeconds, bool* PowerDrained)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OGM_Underground.OGM_Underground_C.UpdateVentPowerDrain");
		
		AOGM_Underground_C_UpdateVentPowerDrain_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PowerDrained != nullptr)
			*PowerDrained = params.PowerDrained;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OGM_Underground.OGM_Underground_C.UpdateVentDoorMeter
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AOGM_Underground_C::UpdateVentDoorMeter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OGM_Underground.OGM_Underground_C.UpdateVentDoorMeter");
		
		AOGM_Underground_C_UpdateVentDoorMeter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OGM_Underground.OGM_Underground_C.UpdateDoorPowerDrain
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               PowerDrained                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AOGM_Underground_C::UpdateDoorPowerDrain(float DeltaSeconds, bool* PowerDrained)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OGM_Underground.OGM_Underground_C.UpdateDoorPowerDrain");
		
		AOGM_Underground_C_UpdateDoorPowerDrain_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PowerDrained != nullptr)
			*PowerDrained = params.PowerDrained;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OGM_Underground.OGM_Underground_C.UpdateDoorMeters
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AOGM_Underground_C::UpdateDoorMeters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OGM_Underground.OGM_Underground_C.UpdateDoorMeters");
		
		AOGM_Underground_C_UpdateDoorMeters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OGM_Underground.OGM_Underground_C.OnPlayerEnter
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AOGM_Underground_C::OnPlayerEnter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OGM_Underground.OGM_Underground_C.OnPlayerEnter");
		
		AOGM_Underground_C_OnPlayerEnter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OGM_Underground.OGM_Underground_C.OnEnd
	 * 		Flags  -> (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TEnumAsByte<E_EndMiniGameType_E_EndMiniGameType>   EndType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOGM_Underground_C::OnEnd(TEnumAsByte<E_EndMiniGameType_E_EndMiniGameType> EndType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OGM_Underground.OGM_Underground_C.OnEnd");
		
		AOGM_Underground_C_OnEnd_Params params {};
		params.EndType = EndType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OGM_Underground.OGM_Underground_C.On Start
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void AOGM_Underground_C::On_Start()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OGM_Underground.OGM_Underground_C.On Start");
		
		AOGM_Underground_C_On_Start_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OGM_Underground.OGM_Underground_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOGM_Underground_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OGM_Underground.OGM_Underground_C.ReceiveTick");
		
		AOGM_Underground_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OGM_Underground.OGM_Underground_C.Enter Part 1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOGM_Underground_C::Enter_Part_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OGM_Underground.OGM_Underground_C.Enter Part 1");
		
		AOGM_Underground_C_Enter_Part_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OGM_Underground.OGM_Underground_C.Enter Part 2
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOGM_Underground_C::Enter_Part_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OGM_Underground.OGM_Underground_C.Enter Part 2");
		
		AOGM_Underground_C_Enter_Part_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OGM_Underground.OGM_Underground_C.Spawn Burntrap Wave
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOGM_Underground_C::Spawn_Burntrap_Wave()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OGM_Underground.OGM_Underground_C.Spawn Burntrap Wave");
		
		AOGM_Underground_C_Spawn_Burntrap_Wave_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OGM_Underground.OGM_Underground_C.Monty Wave
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOGM_Underground_C::Monty_Wave()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OGM_Underground.OGM_Underground_C.Monty Wave");
		
		AOGM_Underground_C_Monty_Wave_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OGM_Underground.OGM_Underground_C.Spawn Tangle Wave
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOGM_Underground_C::Spawn_Tangle_Wave()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OGM_Underground.OGM_Underground_C.Spawn Tangle Wave");
		
		AOGM_Underground_C_Spawn_Tangle_Wave_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OGM_Underground.OGM_Underground_C.Burntrap Death
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOGM_Underground_C::Burntrap_Death()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OGM_Underground.OGM_Underground_C.Burntrap Death");
		
		AOGM_Underground_C_Burntrap_Death_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OGM_Underground.OGM_Underground_C.Monty Death
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOGM_Underground_C::Monty_Death()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OGM_Underground.OGM_Underground_C.Monty Death");
		
		AOGM_Underground_C_Monty_Death_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OGM_Underground.OGM_Underground_C.Tangle Death
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOGM_Underground_C::Tangle_Death()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OGM_Underground.OGM_Underground_C.Tangle Death");
		
		AOGM_Underground_C_Tangle_Death_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OGM_Underground.OGM_Underground_C.Spawn Chica
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOGM_Underground_C::Spawn_Chica()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OGM_Underground.OGM_Underground_C.Spawn Chica");
		
		AOGM_Underground_C_Spawn_Chica_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OGM_Underground.OGM_Underground_C.Spawn Monty
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOGM_Underground_C::Spawn_Monty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OGM_Underground.OGM_Underground_C.Spawn Monty");
		
		AOGM_Underground_C_Spawn_Monty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OGM_Underground.OGM_Underground_C.Spawn Roxy
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOGM_Underground_C::Spawn_Roxy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OGM_Underground.OGM_Underground_C.Spawn Roxy");
		
		AOGM_Underground_C_Spawn_Roxy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OGM_Underground.OGM_Underground_C.Spawn Burntrap Freddy
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOGM_Underground_C::Spawn_Burntrap_Freddy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OGM_Underground.OGM_Underground_C.Spawn Burntrap Freddy");
		
		AOGM_Underground_C_Spawn_Burntrap_Freddy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OGM_Underground.OGM_Underground_C.ExecuteUbergraph_OGM_Underground
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOGM_Underground_C::ExecuteUbergraph_OGM_Underground(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OGM_Underground.OGM_Underground_C.ExecuteUbergraph_OGM_Underground");
		
		AOGM_Underground_C_ExecuteUbergraph_OGM_Underground_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AOGM_Underground_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AOGM_Underground_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass OGM_Underground.OGM_Underground_C");
		return ptr;
	}

}


