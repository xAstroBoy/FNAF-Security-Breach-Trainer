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
	 * 		Name   -> Function WestArcadeDecalManager.WestArcadeDecalManager_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AWestArcadeDecalManager_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WestArcadeDecalManager.WestArcadeDecalManager_C.ReceiveBeginPlay");
		
		AWestArcadeDecalManager_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WestArcadeDecalManager.WestArcadeDecalManager_C.Update
	 * 		Flags  -> ()
	 */
	void AWestArcadeDecalManager_C::Update()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WestArcadeDecalManager.WestArcadeDecalManager_C.Update");
		
		AWestArcadeDecalManager_C_Update_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WestArcadeDecalManager.WestArcadeDecalManager_C.ExecuteUbergraph_WestArcadeDecalManager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWestArcadeDecalManager_C::ExecuteUbergraph_WestArcadeDecalManager(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WestArcadeDecalManager.WestArcadeDecalManager_C.ExecuteUbergraph_WestArcadeDecalManager");
		
		AWestArcadeDecalManager_C_ExecuteUbergraph_WestArcadeDecalManager_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWestArcadeDecalManager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWestArcadeDecalManager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WestArcadeDecalManager.WestArcadeDecalManager_C");
		return ptr;
	}

}


