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
	 * 		Name   -> Function BP_PlanarReflectionsShowOnlyFreddy-Gregory.BP_PlanarReflectionsShowOnlyFreddy-Gregory_C.TurnSSR_ON
	 * 		Flags  -> ()
	 */
	void ABP_PlanarReflectionsShowOnlyFreddyGregory_C::TurnSSR_ON()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlanarReflectionsShowOnlyFreddy-Gregory.BP_PlanarReflectionsShowOnlyFreddy-Gregory_C.TurnSSR_ON");
		
		ABP_PlanarReflectionsShowOnlyFreddyGregory_C_TurnSSR_ON_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlanarReflectionsShowOnlyFreddy-Gregory.BP_PlanarReflectionsShowOnlyFreddy-Gregory_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_PlanarReflectionsShowOnlyFreddyGregory_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlanarReflectionsShowOnlyFreddy-Gregory.BP_PlanarReflectionsShowOnlyFreddy-Gregory_C.ReceiveBeginPlay");
		
		ABP_PlanarReflectionsShowOnlyFreddyGregory_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlanarReflectionsShowOnlyFreddy-Gregory.BP_PlanarReflectionsShowOnlyFreddy-Gregory_C.Set Refelection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewVisibility                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PlanarReflectionsShowOnlyFreddyGregory_C::SetRefelection(bool bNewVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlanarReflectionsShowOnlyFreddy-Gregory.BP_PlanarReflectionsShowOnlyFreddy-Gregory_C.Set Refelection");
		
		ABP_PlanarReflectionsShowOnlyFreddyGregory_C_SetRefelection_Params params {};
		params.bNewVisibility = bNewVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlanarReflectionsShowOnlyFreddy-Gregory.BP_PlanarReflectionsShowOnlyFreddy-Gregory_C.ExecuteUbergraph_BP_PlanarReflectionsShowOnlyFreddy-Gregory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlanarReflectionsShowOnlyFreddyGregory_C::ExecuteUbergraph_BP_PlanarReflectionsShowOnlyFreddyGregory(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlanarReflectionsShowOnlyFreddy-Gregory.BP_PlanarReflectionsShowOnlyFreddy-Gregory_C.ExecuteUbergraph_BP_PlanarReflectionsShowOnlyFreddy-Gregory");
		
		ABP_PlanarReflectionsShowOnlyFreddyGregory_C_ExecuteUbergraph_BP_PlanarReflectionsShowOnlyFreddyGregory_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_PlanarReflectionsShowOnlyFreddyGregory_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_PlanarReflectionsShowOnlyFreddyGregory_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlanarReflectionsShowOnlyFreddy_Gregory.BP_PlanarReflectionsShowOnlyFreddy-Gregory_C");
		return ptr;
	}

}


