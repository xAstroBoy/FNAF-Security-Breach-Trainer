/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "PlayerPlacementLocator_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PlayerPlacementLocator.PlayerPlacementLocator_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void APlayerPlacementLocator_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPlacementLocator.PlayerPlacementLocator_C.ReceiveBeginPlay");
		
		APlayerPlacementLocator_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PlayerPlacementLocator.PlayerPlacementLocator_C.ExecuteUbergraph_PlayerPlacementLocator
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APlayerPlacementLocator_C::ExecuteUbergraph_PlayerPlacementLocator(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPlacementLocator.PlayerPlacementLocator_C.ExecuteUbergraph_PlayerPlacementLocator");
		
		APlayerPlacementLocator_C_ExecuteUbergraph_PlayerPlacementLocator_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction APlayerPlacementLocator_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APlayerPlacementLocator_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PlayerPlacementLocator.PlayerPlacementLocator_C");
		return ptr;
	}

}


