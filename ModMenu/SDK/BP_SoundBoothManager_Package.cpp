/**
 * Name: FNAFSB
 * Version: 1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SoundBoothManager.BP_SoundBoothManager_C.Flash__FinishedFunc
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SoundBoothManager.BP_SoundBoothManager_C.Flash__UpdateFunc
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SoundBoothManager.BP_SoundBoothManager_C.Activate
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SoundBoothManager.BP_SoundBoothManager_C.Reset
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SoundBoothManager.BP_SoundBoothManager_C.ReceiveBeginPlay
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SoundBoothManager.BP_SoundBoothManager_C.ExecuteUbergraph_BP_SoundBoothManager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SoundBoothManager_C::ExecuteUbergraph_BP_SoundBoothManager(int32_t EntryPoint)
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_SoundBoothManager_C.StaticClass
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


