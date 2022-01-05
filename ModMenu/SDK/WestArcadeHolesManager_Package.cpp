/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "WestArcadeHolesManager_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function WestArcadeHolesManager.WestArcadeHolesManager_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AWestArcadeHolesManager_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WestArcadeHolesManager.WestArcadeHolesManager_C.ReceiveBeginPlay");
		
		AWestArcadeHolesManager_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function WestArcadeHolesManager.WestArcadeHolesManager_C.Update
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AWestArcadeHolesManager_C::Update()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WestArcadeHolesManager.WestArcadeHolesManager_C.Update");
		
		AWestArcadeHolesManager_C_Update_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function WestArcadeHolesManager.WestArcadeHolesManager_C.ExecuteUbergraph_WestArcadeHolesManager
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWestArcadeHolesManager_C::ExecuteUbergraph_WestArcadeHolesManager(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WestArcadeHolesManager.WestArcadeHolesManager_C.ExecuteUbergraph_WestArcadeHolesManager");
		
		AWestArcadeHolesManager_C_ExecuteUbergraph_WestArcadeHolesManager_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AWestArcadeHolesManager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWestArcadeHolesManager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WestArcadeHolesManager.WestArcadeHolesManager_C");
		return ptr;
	}

}


