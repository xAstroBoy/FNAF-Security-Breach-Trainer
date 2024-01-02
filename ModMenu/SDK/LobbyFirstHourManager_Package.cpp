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
	 * 		Name   -> Function LobbyFirstHourManager.LobbyFirstHourManager_C.ReceiveBeginPlay
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LobbyFirstHourManager.LobbyFirstHourManager_C.On 12:30
	 * 		Flags  -> ()
	 */
	void ALobbyFirstHourManager_C::On1230()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LobbyFirstHourManager.LobbyFirstHourManager_C.On 12:30");
		
		ALobbyFirstHourManager_C_On1230_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LobbyFirstHourManager.LobbyFirstHourManager_C.ExecuteUbergraph_LobbyFirstHourManager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ALobbyFirstHourManager_C::ExecuteUbergraph_LobbyFirstHourManager(int32_t EntryPoint)
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ALobbyFirstHourManager_C.StaticClass
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


