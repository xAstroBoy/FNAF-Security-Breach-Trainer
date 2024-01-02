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
	 * 		Name   -> Function ChicaBehindPlayerBreathing_End_Task.ChicaBehindPlayerBreathing_End_Task_C.ReceiveExecute
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChicaBehindPlayerBreathing_End_Task_C::ReceiveExecute(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChicaBehindPlayerBreathing_End_Task.ChicaBehindPlayerBreathing_End_Task_C.ReceiveExecute");
		
		UChicaBehindPlayerBreathing_End_Task_C_ReceiveExecute_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChicaBehindPlayerBreathing_End_Task.ChicaBehindPlayerBreathing_End_Task_C.ExecuteUbergraph_ChicaBehindPlayerBreathing_End_Task
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChicaBehindPlayerBreathing_End_Task_C::ExecuteUbergraph_ChicaBehindPlayerBreathing_End_Task(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChicaBehindPlayerBreathing_End_Task.ChicaBehindPlayerBreathing_End_Task_C.ExecuteUbergraph_ChicaBehindPlayerBreathing_End_Task");
		
		UChicaBehindPlayerBreathing_End_Task_C_ExecuteUbergraph_ChicaBehindPlayerBreathing_End_Task_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChicaBehindPlayerBreathing_End_Task_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChicaBehindPlayerBreathing_End_Task_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ChicaBehindPlayerBreathing_End_Task.ChicaBehindPlayerBreathing_End_Task_C");
		return ptr;
	}

}


