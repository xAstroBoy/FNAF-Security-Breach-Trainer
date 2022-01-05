/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "AlwaysFaceCameraComponent_Kitchen_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function AlwaysFaceCameraComponent_Kitchen.AlwaysFaceCameraComponent_Kitchen_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAlwaysFaceCameraComponent_Kitchen_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AlwaysFaceCameraComponent_Kitchen.AlwaysFaceCameraComponent_Kitchen_C.ReceiveTick");
		
		UAlwaysFaceCameraComponent_Kitchen_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function AlwaysFaceCameraComponent_Kitchen.AlwaysFaceCameraComponent_Kitchen_C.ExecuteUbergraph_AlwaysFaceCameraComponent_Kitchen
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAlwaysFaceCameraComponent_Kitchen_C::ExecuteUbergraph_AlwaysFaceCameraComponent_Kitchen(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AlwaysFaceCameraComponent_Kitchen.AlwaysFaceCameraComponent_Kitchen_C.ExecuteUbergraph_AlwaysFaceCameraComponent_Kitchen");
		
		UAlwaysFaceCameraComponent_Kitchen_C_ExecuteUbergraph_AlwaysFaceCameraComponent_Kitchen_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UAlwaysFaceCameraComponent_Kitchen_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAlwaysFaceCameraComponent_Kitchen_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AlwaysFaceCameraComponent_Kitchen.AlwaysFaceCameraComponent_Kitchen_C");
		return ptr;
	}

}


