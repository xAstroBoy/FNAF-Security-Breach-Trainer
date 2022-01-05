/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "Winner_lounge_Door_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Winner_lounge_Door.Winner_lounge_Door_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AWinner_lounge_Door_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Winner_lounge_Door.Winner_lounge_Door_C.ReceiveBeginPlay");
		
		AWinner_lounge_Door_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Winner_lounge_Door.Winner_lounge_Door_C.WinnerLoungeDoorOpen
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AWinner_lounge_Door_C::WinnerLoungeDoorOpen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Winner_lounge_Door.Winner_lounge_Door_C.WinnerLoungeDoorOpen");
		
		AWinner_lounge_Door_C_WinnerLoungeDoorOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Winner_lounge_Door.Winner_lounge_Door_C.ExecuteUbergraph_Winner_lounge_Door
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWinner_lounge_Door_C::ExecuteUbergraph_Winner_lounge_Door(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Winner_lounge_Door.Winner_lounge_Door_C.ExecuteUbergraph_Winner_lounge_Door");
		
		AWinner_lounge_Door_C_ExecuteUbergraph_Winner_lounge_Door_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AWinner_lounge_Door_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWinner_lounge_Door_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Winner_lounge_Door.Winner_lounge_Door_C");
		return ptr;
	}

}


