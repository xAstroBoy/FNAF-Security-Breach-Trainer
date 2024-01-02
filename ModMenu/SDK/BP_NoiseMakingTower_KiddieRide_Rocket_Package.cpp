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
	 * 		Name   -> Function BP_NoiseMakingTower_KiddieRide_Rocket.BP_NoiseMakingTower_KiddieRide_Rocket_C.Ride_Motion__FinishedFunc
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NoiseMakingTower_KiddieRide_Rocket.BP_NoiseMakingTower_KiddieRide_Rocket_C.Ride_Motion__UpdateFunc
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NoiseMakingTower_KiddieRide_Rocket.BP_NoiseMakingTower_KiddieRide_Rocket_C.Ride_Motion__SoundTriggger__EventFunc
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NoiseMakingTower_KiddieRide_Rocket.BP_NoiseMakingTower_KiddieRide_Rocket_C.On Triggered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               PlayAudio                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_NoiseMakingTower_KiddieRide_Rocket_C::OnTriggered(class AActor* OtherActor, bool PlayAudio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NoiseMakingTower_KiddieRide_Rocket.BP_NoiseMakingTower_KiddieRide_Rocket_C.On Triggered");
		
		ABP_NoiseMakingTower_KiddieRide_Rocket_C_OnTriggered_Params params {};
		params.OtherActor = OtherActor;
		params.PlayAudio = PlayAudio;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NoiseMakingTower_KiddieRide_Rocket.BP_NoiseMakingTower_KiddieRide_Rocket_C.ExecuteUbergraph_BP_NoiseMakingTower_KiddieRide_Rocket
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NoiseMakingTower_KiddieRide_Rocket_C::ExecuteUbergraph_BP_NoiseMakingTower_KiddieRide_Rocket(int32_t EntryPoint)
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_NoiseMakingTower_KiddieRide_Rocket_C.StaticClass
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


