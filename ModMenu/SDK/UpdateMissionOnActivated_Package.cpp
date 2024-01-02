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
	 * 		Name   -> Function UpdateMissionOnActivated.UpdateMissionOnActivated_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void UUpdateMissionOnActivated_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpdateMissionOnActivated.UpdateMissionOnActivated_C.ReceiveBeginPlay");
		
		UUpdateMissionOnActivated_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpdateMissionOnActivated.UpdateMissionOnActivated_C.On Activatable Activated
	 * 		Flags  -> ()
	 */
	void UUpdateMissionOnActivated_C::OnActivatableActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpdateMissionOnActivated.UpdateMissionOnActivated_C.On Activatable Activated");
		
		UUpdateMissionOnActivated_C_OnActivatableActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpdateMissionOnActivated.UpdateMissionOnActivated_C.ExecuteUbergraph_UpdateMissionOnActivated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUpdateMissionOnActivated_C::ExecuteUbergraph_UpdateMissionOnActivated(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpdateMissionOnActivated.UpdateMissionOnActivated_C.ExecuteUbergraph_UpdateMissionOnActivated");
		
		UUpdateMissionOnActivated_C_ExecuteUbergraph_UpdateMissionOnActivated_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUpdateMissionOnActivated_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUpdateMissionOnActivated_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass UpdateMissionOnActivated.UpdateMissionOnActivated_C");
		return ptr;
	}

}


