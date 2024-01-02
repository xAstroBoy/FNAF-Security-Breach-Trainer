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
	 * 		Name   -> Function SignalDoorActorLoaded.SignalDoorActorLoaded_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASignalDoorActorLoaded_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SignalDoorActorLoaded.SignalDoorActorLoaded_C.ReceiveTick");
		
		ASignalDoorActorLoaded_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SignalDoorActorLoaded.SignalDoorActorLoaded_C.ExecuteUbergraph_SignalDoorActorLoaded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASignalDoorActorLoaded_C::ExecuteUbergraph_SignalDoorActorLoaded(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SignalDoorActorLoaded.SignalDoorActorLoaded_C.ExecuteUbergraph_SignalDoorActorLoaded");
		
		ASignalDoorActorLoaded_C_ExecuteUbergraph_SignalDoorActorLoaded_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASignalDoorActorLoaded_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASignalDoorActorLoaded_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SignalDoorActorLoaded.SignalDoorActorLoaded_C");
		return ptr;
	}

}


