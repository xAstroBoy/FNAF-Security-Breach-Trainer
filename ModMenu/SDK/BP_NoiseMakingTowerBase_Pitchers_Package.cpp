/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "BP_NoiseMakingTowerBase_Pitchers_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BP_NoiseMakingTowerBase_Pitchers.BP_NoiseMakingTowerBase_Pitchers_C.force__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_NoiseMakingTowerBase_Pitchers_C::force__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NoiseMakingTowerBase_Pitchers.BP_NoiseMakingTowerBase_Pitchers_C.force__FinishedFunc");
		
		ABP_NoiseMakingTowerBase_Pitchers_C_force__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BP_NoiseMakingTowerBase_Pitchers.BP_NoiseMakingTowerBase_Pitchers_C.force__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_NoiseMakingTowerBase_Pitchers_C::force__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NoiseMakingTowerBase_Pitchers.BP_NoiseMakingTowerBase_Pitchers_C.force__UpdateFunc");
		
		ABP_NoiseMakingTowerBase_Pitchers_C_force__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BP_NoiseMakingTowerBase_Pitchers.BP_NoiseMakingTowerBase_Pitchers_C.On Triggered
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Other_Actor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NoiseMakingTowerBase_Pitchers_C::On_Triggered(class AActor* Other_Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NoiseMakingTowerBase_Pitchers.BP_NoiseMakingTowerBase_Pitchers_C.On Triggered");
		
		ABP_NoiseMakingTowerBase_Pitchers_C_On_Triggered_Params params {};
		params.Other_Actor = Other_Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BP_NoiseMakingTowerBase_Pitchers.BP_NoiseMakingTowerBase_Pitchers_C.ExecuteUbergraph_BP_NoiseMakingTowerBase_Pitchers
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NoiseMakingTowerBase_Pitchers_C::ExecuteUbergraph_BP_NoiseMakingTowerBase_Pitchers(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NoiseMakingTowerBase_Pitchers.BP_NoiseMakingTowerBase_Pitchers_C.ExecuteUbergraph_BP_NoiseMakingTowerBase_Pitchers");
		
		ABP_NoiseMakingTowerBase_Pitchers_C_ExecuteUbergraph_BP_NoiseMakingTowerBase_Pitchers_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_NoiseMakingTowerBase_Pitchers_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_NoiseMakingTowerBase_Pitchers_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_NoiseMakingTowerBase_Pitchers.BP_NoiseMakingTowerBase_Pitchers_C");
		return ptr;
	}

}


