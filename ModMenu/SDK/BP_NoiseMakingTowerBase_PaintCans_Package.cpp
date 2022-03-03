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
	 * 		Name   -> Function BP_NoiseMakingTowerBase_PaintCans.BP_NoiseMakingTowerBase_PaintCans_C.On Triggered
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Other_Actor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NoiseMakingTowerBase_PaintCans_C::On_Triggered(class AActor* Other_Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NoiseMakingTowerBase_PaintCans.BP_NoiseMakingTowerBase_PaintCans_C.On Triggered");
		
		ABP_NoiseMakingTowerBase_PaintCans_C_On_Triggered_Params params {};
		params.Other_Actor = Other_Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function BP_NoiseMakingTowerBase_PaintCans.BP_NoiseMakingTowerBase_PaintCans_C.ExecuteUbergraph_BP_NoiseMakingTowerBase_PaintCans
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NoiseMakingTowerBase_PaintCans_C::ExecuteUbergraph_BP_NoiseMakingTowerBase_PaintCans(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NoiseMakingTowerBase_PaintCans.BP_NoiseMakingTowerBase_PaintCans_C.ExecuteUbergraph_BP_NoiseMakingTowerBase_PaintCans");
		
		ABP_NoiseMakingTowerBase_PaintCans_C_ExecuteUbergraph_BP_NoiseMakingTowerBase_PaintCans_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_NoiseMakingTowerBase_PaintCans_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_NoiseMakingTowerBase_PaintCans_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_NoiseMakingTowerBase_PaintCans.BP_NoiseMakingTowerBase_PaintCans_C");
		return ptr;
	}

}


