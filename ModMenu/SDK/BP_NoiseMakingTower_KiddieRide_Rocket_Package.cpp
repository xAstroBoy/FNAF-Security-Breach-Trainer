/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "BP_NoiseMakingTower_KiddieRide_Rocket_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BP_NoiseMakingTower_KiddieRide_Rocket.BP_NoiseMakingTower_KiddieRide_Rocket_C.Ride_Motion__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_NoiseMakingTower_KiddieRide_Rocket_C::Ride_Motion__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NoiseMakingTower_KiddieRide_Rocket.BP_NoiseMakingTower_KiddieRide_Rocket_C.Ride_Motion__FinishedFunc");
		
		ABP_NoiseMakingTower_KiddieRide_Rocket_C_Ride_Motion__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BP_NoiseMakingTower_KiddieRide_Rocket.BP_NoiseMakingTower_KiddieRide_Rocket_C.Ride_Motion__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_NoiseMakingTower_KiddieRide_Rocket_C::Ride_Motion__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NoiseMakingTower_KiddieRide_Rocket.BP_NoiseMakingTower_KiddieRide_Rocket_C.Ride_Motion__UpdateFunc");
		
		ABP_NoiseMakingTower_KiddieRide_Rocket_C_Ride_Motion__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BP_NoiseMakingTower_KiddieRide_Rocket.BP_NoiseMakingTower_KiddieRide_Rocket_C.Ride_Motion__SoundTriggger__EventFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_NoiseMakingTower_KiddieRide_Rocket_C::Ride_Motion__SoundTriggger__EventFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NoiseMakingTower_KiddieRide_Rocket.BP_NoiseMakingTower_KiddieRide_Rocket_C.Ride_Motion__SoundTriggger__EventFunc");
		
		ABP_NoiseMakingTower_KiddieRide_Rocket_C_Ride_Motion__SoundTriggger__EventFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BP_NoiseMakingTower_KiddieRide_Rocket.BP_NoiseMakingTower_KiddieRide_Rocket_C.On Triggered
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Other_Actor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NoiseMakingTower_KiddieRide_Rocket_C::On_Triggered(class AActor* Other_Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NoiseMakingTower_KiddieRide_Rocket.BP_NoiseMakingTower_KiddieRide_Rocket_C.On Triggered");
		
		ABP_NoiseMakingTower_KiddieRide_Rocket_C_On_Triggered_Params params {};
		params.Other_Actor = Other_Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BP_NoiseMakingTower_KiddieRide_Rocket.BP_NoiseMakingTower_KiddieRide_Rocket_C.ExecuteUbergraph_BP_NoiseMakingTower_KiddieRide_Rocket
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NoiseMakingTower_KiddieRide_Rocket_C::ExecuteUbergraph_BP_NoiseMakingTower_KiddieRide_Rocket(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NoiseMakingTower_KiddieRide_Rocket.BP_NoiseMakingTower_KiddieRide_Rocket_C.ExecuteUbergraph_BP_NoiseMakingTower_KiddieRide_Rocket");
		
		ABP_NoiseMakingTower_KiddieRide_Rocket_C_ExecuteUbergraph_BP_NoiseMakingTower_KiddieRide_Rocket_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_NoiseMakingTower_KiddieRide_Rocket_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_NoiseMakingTower_KiddieRide_Rocket_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_NoiseMakingTower_KiddieRide_Rocket.BP_NoiseMakingTower_KiddieRide_Rocket_C");
		return ptr;
	}

}


