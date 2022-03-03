/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function SyrupVatsEntryTime_Trigger.SyrupVatsEntryTime_Trigger_C.ReceiveActorBeginOverlap
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASyrupVatsEntryTime_Trigger_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SyrupVatsEntryTime_Trigger.SyrupVatsEntryTime_Trigger_C.ReceiveActorBeginOverlap");
		
		ASyrupVatsEntryTime_Trigger_C_ReceiveActorBeginOverlap_Params params {};
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function SyrupVatsEntryTime_Trigger.SyrupVatsEntryTime_Trigger_C.ExecuteUbergraph_SyrupVatsEntryTime_Trigger
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASyrupVatsEntryTime_Trigger_C::ExecuteUbergraph_SyrupVatsEntryTime_Trigger(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SyrupVatsEntryTime_Trigger.SyrupVatsEntryTime_Trigger_C.ExecuteUbergraph_SyrupVatsEntryTime_Trigger");
		
		ASyrupVatsEntryTime_Trigger_C_ExecuteUbergraph_SyrupVatsEntryTime_Trigger_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ASyrupVatsEntryTime_Trigger_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASyrupVatsEntryTime_Trigger_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SyrupVatsEntryTime_Trigger.SyrupVatsEntryTime_Trigger_C");
		return ptr;
	}

}


