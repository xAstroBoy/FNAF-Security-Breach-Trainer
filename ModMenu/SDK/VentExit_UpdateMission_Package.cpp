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
	 * 		Name   -> Function VentExit_UpdateMission.VentExit_UpdateMission_C.On Vent Exited
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AVentExit_UpdateMission_C::On_Vent_Exited()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VentExit_UpdateMission.VentExit_UpdateMission_C.On Vent Exited");
		
		AVentExit_UpdateMission_C_On_Vent_Exited_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function VentExit_UpdateMission.VentExit_UpdateMission_C.ExecuteUbergraph_VentExit_UpdateMission
	 * 		Flags  -> (Final)
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
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AVentExit_UpdateMission_C.StaticClass
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


