/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "LobbyFirstHourManager_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function LobbyFirstHourManager.LobbyFirstHourManager_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ALobbyFirstHourManager_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LobbyFirstHourManager.LobbyFirstHourManager_C.ReceiveBeginPlay");
		
		ALobbyFirstHourManager_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function LobbyFirstHourManager.LobbyFirstHourManager_C.On 12:30
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ALobbyFirstHourManager_C::On_12_30()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LobbyFirstHourManager.LobbyFirstHourManager_C.On 12:30");
		
		ALobbyFirstHourManager_C_On_12_30_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function LobbyFirstHourManager.LobbyFirstHourManager_C.ExecuteUbergraph_LobbyFirstHourManager
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ALobbyFirstHourManager_C::ExecuteUbergraph_LobbyFirstHourManager(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LobbyFirstHourManager.LobbyFirstHourManager_C.ExecuteUbergraph_LobbyFirstHourManager");
		
		ALobbyFirstHourManager_C_ExecuteUbergraph_LobbyFirstHourManager_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ALobbyFirstHourManager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALobbyFirstHourManager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LobbyFirstHourManager.LobbyFirstHourManager_C");
		return ptr;
	}

}


