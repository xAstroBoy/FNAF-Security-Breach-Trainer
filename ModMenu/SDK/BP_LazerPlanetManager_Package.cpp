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
	 * 		Name   -> Function BP_LazerPlanetManager.BP_LazerPlanetManager_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_LazerPlanetManager_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LazerPlanetManager.BP_LazerPlanetManager_C.ReceiveBeginPlay");
		
		ABP_LazerPlanetManager_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LazerPlanetManager.BP_LazerPlanetManager_C.SwitchColorForScenario
	 * 		Flags  -> ()
	 */
	void ABP_LazerPlanetManager_C::SwitchColorForScenario()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LazerPlanetManager.BP_LazerPlanetManager_C.SwitchColorForScenario");
		
		ABP_LazerPlanetManager_C_SwitchColorForScenario_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LazerPlanetManager.BP_LazerPlanetManager_C.ExecuteUbergraph_BP_LazerPlanetManager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_LazerPlanetManager_C::ExecuteUbergraph_BP_LazerPlanetManager(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LazerPlanetManager.BP_LazerPlanetManager_C.ExecuteUbergraph_BP_LazerPlanetManager");
		
		ABP_LazerPlanetManager_C_ExecuteUbergraph_BP_LazerPlanetManager_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_LazerPlanetManager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_LazerPlanetManager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_LazerPlanetManager.BP_LazerPlanetManager_C");
		return ptr;
	}

}


