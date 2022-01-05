/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "BP_SoundBoothManager_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BP_SoundBoothManager.BP_SoundBoothManager_C.Flash__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_SoundBoothManager_C::Flash__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SoundBoothManager.BP_SoundBoothManager_C.Flash__FinishedFunc");
		
		ABP_SoundBoothManager_C_Flash__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BP_SoundBoothManager.BP_SoundBoothManager_C.Flash__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_SoundBoothManager_C::Flash__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SoundBoothManager.BP_SoundBoothManager_C.Flash__UpdateFunc");
		
		ABP_SoundBoothManager_C_Flash__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BP_SoundBoothManager.BP_SoundBoothManager_C.Activate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_SoundBoothManager_C::Activate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SoundBoothManager.BP_SoundBoothManager_C.Activate");
		
		ABP_SoundBoothManager_C_Activate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BP_SoundBoothManager.BP_SoundBoothManager_C.Reset
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_SoundBoothManager_C::Reset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SoundBoothManager.BP_SoundBoothManager_C.Reset");
		
		ABP_SoundBoothManager_C_Reset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BP_SoundBoothManager.BP_SoundBoothManager_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_SoundBoothManager_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SoundBoothManager.BP_SoundBoothManager_C.ReceiveBeginPlay");
		
		ABP_SoundBoothManager_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BP_SoundBoothManager.BP_SoundBoothManager_C.ExecuteUbergraph_BP_SoundBoothManager
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SoundBoothManager_C::ExecuteUbergraph_BP_SoundBoothManager(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SoundBoothManager.BP_SoundBoothManager_C.ExecuteUbergraph_BP_SoundBoothManager");
		
		ABP_SoundBoothManager_C_ExecuteUbergraph_BP_SoundBoothManager_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_SoundBoothManager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_SoundBoothManager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_SoundBoothManager.BP_SoundBoothManager_C");
		return ptr;
	}

}


