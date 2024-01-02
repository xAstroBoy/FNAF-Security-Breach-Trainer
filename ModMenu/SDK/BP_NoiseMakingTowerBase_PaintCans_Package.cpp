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
	 * 		Name   -> Function BP_NoiseMakingTowerBase_PaintCans.BP_NoiseMakingTowerBase_PaintCans_C.On Triggered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               PlayAudio                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_NoiseMakingTowerBase_PaintCans_C::OnTriggered(class AActor* OtherActor, bool PlayAudio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NoiseMakingTowerBase_PaintCans.BP_NoiseMakingTowerBase_PaintCans_C.On Triggered");
		
		ABP_NoiseMakingTowerBase_PaintCans_C_OnTriggered_Params params {};
		params.OtherActor = OtherActor;
		params.PlayAudio = PlayAudio;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NoiseMakingTowerBase_PaintCans.BP_NoiseMakingTowerBase_PaintCans_C.ExecuteUbergraph_BP_NoiseMakingTowerBase_PaintCans
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_NoiseMakingTowerBase_PaintCans_C.StaticClass
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


