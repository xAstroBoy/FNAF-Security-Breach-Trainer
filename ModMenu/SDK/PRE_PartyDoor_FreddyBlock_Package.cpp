/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "PRE_PartyDoor_FreddyBlock_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PRE_PartyDoor_FreddyBlock.PRE_PartyDoor_FreddyBlock_C.Partway Door Mover__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void APRE_PartyDoor_FreddyBlock_C::Partway_Door_Mover__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_PartyDoor_FreddyBlock.PRE_PartyDoor_FreddyBlock_C.Partway Door Mover__FinishedFunc");
		
		APRE_PartyDoor_FreddyBlock_C_Partway_Door_Mover__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PRE_PartyDoor_FreddyBlock.PRE_PartyDoor_FreddyBlock_C.Partway Door Mover__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void APRE_PartyDoor_FreddyBlock_C::Partway_Door_Mover__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_PartyDoor_FreddyBlock.PRE_PartyDoor_FreddyBlock_C.Partway Door Mover__UpdateFunc");
		
		APRE_PartyDoor_FreddyBlock_C_Partway_Door_Mover__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PRE_PartyDoor_FreddyBlock.PRE_PartyDoor_FreddyBlock_C.On Door Opening
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APRE_PartyDoor_FreddyBlock_C::On_Door_Opening()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_PartyDoor_FreddyBlock.PRE_PartyDoor_FreddyBlock_C.On Door Opening");
		
		APRE_PartyDoor_FreddyBlock_C_On_Door_Opening_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PRE_PartyDoor_FreddyBlock.PRE_PartyDoor_FreddyBlock_C.On Door Closing
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APRE_PartyDoor_FreddyBlock_C::On_Door_Closing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_PartyDoor_FreddyBlock.PRE_PartyDoor_FreddyBlock_C.On Door Closing");
		
		APRE_PartyDoor_FreddyBlock_C_On_Door_Closing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PRE_PartyDoor_FreddyBlock.PRE_PartyDoor_FreddyBlock_C.ExecuteUbergraph_PRE_PartyDoor_FreddyBlock
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APRE_PartyDoor_FreddyBlock_C::ExecuteUbergraph_PRE_PartyDoor_FreddyBlock(int EntryPoint)
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
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction APRE_PartyDoor_FreddyBlock_C.StaticClass
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


