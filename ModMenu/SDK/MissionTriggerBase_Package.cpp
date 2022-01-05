/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "MissionTriggerBase_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function MissionTriggerBase.MissionTriggerBase_C.ReceiveActorBeginOverlap
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMissionTriggerBase_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionTriggerBase.MissionTriggerBase_C.ReceiveActorBeginOverlap");
		
		AMissionTriggerBase_C_ReceiveActorBeginOverlap_Params params {};
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function MissionTriggerBase.MissionTriggerBase_C.Start Mission
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMissionTriggerBase_C::Start_Mission()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionTriggerBase.MissionTriggerBase_C.Start Mission");
		
		AMissionTriggerBase_C_Start_Mission_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function MissionTriggerBase.MissionTriggerBase_C.Attempt Start Mission
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMissionTriggerBase_C::Attempt_Start_Mission()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionTriggerBase.MissionTriggerBase_C.Attempt Start Mission");
		
		AMissionTriggerBase_C_Attempt_Start_Mission_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function MissionTriggerBase.MissionTriggerBase_C.ExecuteUbergraph_MissionTriggerBase
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMissionTriggerBase_C::ExecuteUbergraph_MissionTriggerBase(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionTriggerBase.MissionTriggerBase_C.ExecuteUbergraph_MissionTriggerBase");
		
		AMissionTriggerBase_C_ExecuteUbergraph_MissionTriggerBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AMissionTriggerBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMissionTriggerBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MissionTriggerBase.MissionTriggerBase_C");
		return ptr;
	}

}


