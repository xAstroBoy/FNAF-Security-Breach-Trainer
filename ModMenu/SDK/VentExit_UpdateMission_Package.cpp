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
	 * 		Name   -> Function VentExit_UpdateMission.VentExit_UpdateMission_C.On Vent Exited
	 * 		Flags  -> ()
	 */
	void AVentExit_UpdateMission_C::OnVentExited()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VentExit_UpdateMission.VentExit_UpdateMission_C.On Vent Exited");
		
		AVentExit_UpdateMission_C_OnVentExited_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VentExit_UpdateMission.VentExit_UpdateMission_C.ExecuteUbergraph_VentExit_UpdateMission
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AVentExit_UpdateMission_C::ExecuteUbergraph_VentExit_UpdateMission(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VentExit_UpdateMission.VentExit_UpdateMission_C.ExecuteUbergraph_VentExit_UpdateMission");
		
		AVentExit_UpdateMission_C_ExecuteUbergraph_VentExit_UpdateMission_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AVentExit_UpdateMission_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AVentExit_UpdateMission_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass VentExit_UpdateMission.VentExit_UpdateMission_C");
		return ptr;
	}

}


