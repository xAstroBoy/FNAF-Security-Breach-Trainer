/**
 * Name: FNAFSB
 * Version: 1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NoiseMakingTower_KiddieRide_Bike.BP_NoiseMakingTower_KiddieRide_Bike_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NoiseMakingTower_KiddieRide_Bike.BP_NoiseMakingTower_KiddieRide_Bike_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NoiseMakingTower_KiddieRide_Bike.BP_NoiseMakingTower_KiddieRide_Bike_C.Timeline_0__SoundTriggger__EventFunc
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NoiseMakingTower_KiddieRide_Bike.BP_NoiseMakingTower_KiddieRide_Bike_C.On Triggered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               PlayAudio                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_NoiseMakingTower_KiddieRide_Bike_C::OnTriggered(class AActor* OtherActor, bool PlayAudio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NoiseMakingTower_KiddieRide_Bike.BP_NoiseMakingTower_KiddieRide_Bike_C.On Triggered");
		
		ABP_NoiseMakingTower_KiddieRide_Bike_C_OnTriggered_Params params {};
		params.OtherActor = OtherActor;
		params.PlayAudio = PlayAudio;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NoiseMakingTower_KiddieRide_Bike.BP_NoiseMakingTower_KiddieRide_Bike_C.ExecuteUbergraph_BP_NoiseMakingTower_KiddieRide_Bike
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NoiseMakingTower_KiddieRide_Bike_C::ExecuteUbergraph_BP_NoiseMakingTower_KiddieRide_Bike(int32_t EntryPoint)
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_NoiseMakingTower_KiddieRide_Bike_C.StaticClass
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


