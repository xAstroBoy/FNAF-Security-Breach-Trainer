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
	 * 		Name   -> Function PRE_PartyDoor_FreddyBlock.PRE_PartyDoor_FreddyBlock_C.Partway Door Mover__FinishedFunc
	 * 		Flags  -> ()
	 */
	void APRE_PartyDoor_FreddyBlock_C::PartwayDoorMover__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_PartyDoor_FreddyBlock.PRE_PartyDoor_FreddyBlock_C.Partway Door Mover__FinishedFunc");
		
		APRE_PartyDoor_FreddyBlock_C_PartwayDoorMover__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRE_PartyDoor_FreddyBlock.PRE_PartyDoor_FreddyBlock_C.Partway Door Mover__UpdateFunc
	 * 		Flags  -> ()
	 */
	void APRE_PartyDoor_FreddyBlock_C::PartwayDoorMover__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_PartyDoor_FreddyBlock.PRE_PartyDoor_FreddyBlock_C.Partway Door Mover__UpdateFunc");
		
		APRE_PartyDoor_FreddyBlock_C_PartwayDoorMover__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRE_PartyDoor_FreddyBlock.PRE_PartyDoor_FreddyBlock_C.On Door Opening
	 * 		Flags  -> ()
	 */
	void APRE_PartyDoor_FreddyBlock_C::OnDoorOpening()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_PartyDoor_FreddyBlock.PRE_PartyDoor_FreddyBlock_C.On Door Opening");
		
		APRE_PartyDoor_FreddyBlock_C_OnDoorOpening_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRE_PartyDoor_FreddyBlock.PRE_PartyDoor_FreddyBlock_C.On Door Closing
	 * 		Flags  -> ()
	 */
	void APRE_PartyDoor_FreddyBlock_C::OnDoorClosing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_PartyDoor_FreddyBlock.PRE_PartyDoor_FreddyBlock_C.On Door Closing");
		
		APRE_PartyDoor_FreddyBlock_C_OnDoorClosing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRE_PartyDoor_FreddyBlock.PRE_PartyDoor_FreddyBlock_C.ExecuteUbergraph_PRE_PartyDoor_FreddyBlock
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APRE_PartyDoor_FreddyBlock_C::ExecuteUbergraph_PRE_PartyDoor_FreddyBlock(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_PartyDoor_FreddyBlock.PRE_PartyDoor_FreddyBlock_C.ExecuteUbergraph_PRE_PartyDoor_FreddyBlock");
		
		APRE_PartyDoor_FreddyBlock_C_ExecuteUbergraph_PRE_PartyDoor_FreddyBlock_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APRE_PartyDoor_FreddyBlock_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APRE_PartyDoor_FreddyBlock_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PRE_PartyDoor_FreddyBlock.PRE_PartyDoor_FreddyBlock_C");
		return ptr;
	}

}


