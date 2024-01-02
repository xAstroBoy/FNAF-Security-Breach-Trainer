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
	 * 		Name   -> Function FreddyPowerProximityActor.FreddyPowerProximityActor_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AFreddyPowerProximityActor_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddyPowerProximityActor.FreddyPowerProximityActor_C.ReceiveBeginPlay");
		
		AFreddyPowerProximityActor_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FreddyPowerProximityActor.FreddyPowerProximityActor_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFreddyPowerProximityActor_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddyPowerProximityActor.FreddyPowerProximityActor_C.ReceiveTick");
		
		AFreddyPowerProximityActor_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FreddyPowerProximityActor.FreddyPowerProximityActor_C.Setup Proximity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            FreddyPower                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFreddyPowerProximityActor_C::SetupProximity(int32_t FreddyPower)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddyPowerProximityActor.FreddyPowerProximityActor_C.Setup Proximity");
		
		AFreddyPowerProximityActor_C_SetupProximity_Params params {};
		params.FreddyPower = FreddyPower;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FreddyPowerProximityActor.FreddyPowerProximityActor_C.ExecuteUbergraph_FreddyPowerProximityActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFreddyPowerProximityActor_C::ExecuteUbergraph_FreddyPowerProximityActor(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddyPowerProximityActor.FreddyPowerProximityActor_C.ExecuteUbergraph_FreddyPowerProximityActor");
		
		AFreddyPowerProximityActor_C_ExecuteUbergraph_FreddyPowerProximityActor_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AFreddyPowerProximityActor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFreddyPowerProximityActor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FreddyPowerProximityActor.FreddyPowerProximityActor_C");
		return ptr;
	}

}


