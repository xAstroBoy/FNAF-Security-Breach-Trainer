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
	 * 		Name   -> Function BP_PlanarReflectionsShowOnlyFreddy-Gregory.BP_PlanarReflectionsShowOnlyFreddy-Gregory_C.TurnSSR_ON
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_PlanarReflectionsShowOnlyFreddy_Gregory_C::TurnSSR_ON()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlanarReflectionsShowOnlyFreddy-Gregory.BP_PlanarReflectionsShowOnlyFreddy-Gregory_C.TurnSSR_ON");
		
		ABP_PlanarReflectionsShowOnlyFreddy_Gregory_C_TurnSSR_ON_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function BP_PlanarReflectionsShowOnlyFreddy-Gregory.BP_PlanarReflectionsShowOnlyFreddy-Gregory_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_PlanarReflectionsShowOnlyFreddy_Gregory_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlanarReflectionsShowOnlyFreddy-Gregory.BP_PlanarReflectionsShowOnlyFreddy-Gregory_C.ReceiveBeginPlay");
		
		ABP_PlanarReflectionsShowOnlyFreddy_Gregory_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function BP_PlanarReflectionsShowOnlyFreddy-Gregory.BP_PlanarReflectionsShowOnlyFreddy-Gregory_C.Set Refelection
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNewVisibility                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PlanarReflectionsShowOnlyFreddy_Gregory_C::Set_Refelection(bool bNewVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlanarReflectionsShowOnlyFreddy-Gregory.BP_PlanarReflectionsShowOnlyFreddy-Gregory_C.Set Refelection");
		
		ABP_PlanarReflectionsShowOnlyFreddy_Gregory_C_Set_Refelection_Params params {};
		params.bNewVisibility = bNewVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function BP_PlanarReflectionsShowOnlyFreddy-Gregory.BP_PlanarReflectionsShowOnlyFreddy-Gregory_C.ExecuteUbergraph_BP_PlanarReflectionsShowOnlyFreddy-Gregory
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlanarReflectionsShowOnlyFreddy_Gregory_C::ExecuteUbergraph_BP_PlanarReflectionsShowOnlyFreddy_Gregory(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlanarReflectionsShowOnlyFreddy-Gregory.BP_PlanarReflectionsShowOnlyFreddy-Gregory_C.ExecuteUbergraph_BP_PlanarReflectionsShowOnlyFreddy-Gregory");
		
		ABP_PlanarReflectionsShowOnlyFreddy_Gregory_C_ExecuteUbergraph_BP_PlanarReflectionsShowOnlyFreddy_Gregory_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_PlanarReflectionsShowOnlyFreddy_Gregory_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_PlanarReflectionsShowOnlyFreddy_Gregory_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlanarReflectionsShowOnlyFreddy_Gregory.BP_PlanarReflectionsShowOnlyFreddy-Gregory_C");
		return ptr;
	}

}


