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
	 * 		Name   -> Function WestArcadeHolesManager.WestArcadeHolesManager_C.InpActEvt_X_K2Node_InputKeyEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AWestArcadeHolesManager_C::InpActEvt_X_K2Node_InputKeyEvent_2(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WestArcadeHolesManager.WestArcadeHolesManager_C.InpActEvt_X_K2Node_InputKeyEvent_2");
		
		AWestArcadeHolesManager_C_InpActEvt_X_K2Node_InputKeyEvent_2_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WestArcadeHolesManager.WestArcadeHolesManager_C.InpActEvt_M_K2Node_InputKeyEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AWestArcadeHolesManager_C::InpActEvt_M_K2Node_InputKeyEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WestArcadeHolesManager.WestArcadeHolesManager_C.InpActEvt_M_K2Node_InputKeyEvent_1");
		
		AWestArcadeHolesManager_C_InpActEvt_M_K2Node_InputKeyEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WestArcadeHolesManager.WestArcadeHolesManager_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AWestArcadeHolesManager_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WestArcadeHolesManager.WestArcadeHolesManager_C.ReceiveBeginPlay");
		
		AWestArcadeHolesManager_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WestArcadeHolesManager.WestArcadeHolesManager_C.ExecuteUbergraph_WestArcadeHolesManager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWestArcadeHolesManager_C::ExecuteUbergraph_WestArcadeHolesManager(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WestArcadeHolesManager.WestArcadeHolesManager_C.ExecuteUbergraph_WestArcadeHolesManager");
		
		AWestArcadeHolesManager_C_ExecuteUbergraph_WestArcadeHolesManager_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWestArcadeHolesManager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWestArcadeHolesManager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WestArcadeHolesManager.WestArcadeHolesManager_C");
		return ptr;
	}

}


