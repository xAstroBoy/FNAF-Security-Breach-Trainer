/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "BP_NoiseMakingTower_KiddieRide_Bike_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BP_NoiseMakingTower_KiddieRide_Bike.BP_NoiseMakingTower_KiddieRide_Bike_C.Timeline_0__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_NoiseMakingTower_KiddieRide_Bike_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NoiseMakingTower_KiddieRide_Bike.BP_NoiseMakingTower_KiddieRide_Bike_C.Timeline_0__FinishedFunc");
		
		ABP_NoiseMakingTower_KiddieRide_Bike_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BP_NoiseMakingTower_KiddieRide_Bike.BP_NoiseMakingTower_KiddieRide_Bike_C.Timeline_0__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_NoiseMakingTower_KiddieRide_Bike_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NoiseMakingTower_KiddieRide_Bike.BP_NoiseMakingTower_KiddieRide_Bike_C.Timeline_0__UpdateFunc");
		
		ABP_NoiseMakingTower_KiddieRide_Bike_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BP_NoiseMakingTower_KiddieRide_Bike.BP_NoiseMakingTower_KiddieRide_Bike_C.Timeline_0__SoundTriggger__EventFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_NoiseMakingTower_KiddieRide_Bike_C::Timeline_0__SoundTriggger__EventFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NoiseMakingTower_KiddieRide_Bike.BP_NoiseMakingTower_KiddieRide_Bike_C.Timeline_0__SoundTriggger__EventFunc");
		
		ABP_NoiseMakingTower_KiddieRide_Bike_C_Timeline_0__SoundTriggger__EventFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BP_NoiseMakingTower_KiddieRide_Bike.BP_NoiseMakingTower_KiddieRide_Bike_C.On Triggered
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Other_Actor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NoiseMakingTower_KiddieRide_Bike_C::On_Triggered(class AActor* Other_Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NoiseMakingTower_KiddieRide_Bike.BP_NoiseMakingTower_KiddieRide_Bike_C.On Triggered");
		
		ABP_NoiseMakingTower_KiddieRide_Bike_C_On_Triggered_Params params {};
		params.Other_Actor = Other_Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BP_NoiseMakingTower_KiddieRide_Bike.BP_NoiseMakingTower_KiddieRide_Bike_C.ExecuteUbergraph_BP_NoiseMakingTower_KiddieRide_Bike
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NoiseMakingTower_KiddieRide_Bike_C::ExecuteUbergraph_BP_NoiseMakingTower_KiddieRide_Bike(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NoiseMakingTower_KiddieRide_Bike.BP_NoiseMakingTower_KiddieRide_Bike_C.ExecuteUbergraph_BP_NoiseMakingTower_KiddieRide_Bike");
		
		ABP_NoiseMakingTower_KiddieRide_Bike_C_ExecuteUbergraph_BP_NoiseMakingTower_KiddieRide_Bike_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_NoiseMakingTower_KiddieRide_Bike_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_NoiseMakingTower_KiddieRide_Bike_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_NoiseMakingTower_KiddieRide_Bike.BP_NoiseMakingTower_KiddieRide_Bike_C");
		return ptr;
	}

}


