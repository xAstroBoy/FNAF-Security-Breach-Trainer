/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "WaitWhileStringsAreEqual_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function WaitWhileStringsAreEqual.WaitWhileStringsAreEqual_C.ReceiveTickAI
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AAIController*                               OwnerController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWaitWhileStringsAreEqual_C::ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WaitWhileStringsAreEqual.WaitWhileStringsAreEqual_C.ReceiveTickAI");
		
		UWaitWhileStringsAreEqual_C_ReceiveTickAI_Params params {};
		params.OwnerController = OwnerController;
		params.ControlledPawn = ControlledPawn;
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function WaitWhileStringsAreEqual.WaitWhileStringsAreEqual_C.ExecuteUbergraph_WaitWhileStringsAreEqual
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWaitWhileStringsAreEqual_C::ExecuteUbergraph_WaitWhileStringsAreEqual(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WaitWhileStringsAreEqual.WaitWhileStringsAreEqual_C.ExecuteUbergraph_WaitWhileStringsAreEqual");
		
		UWaitWhileStringsAreEqual_C_ExecuteUbergraph_WaitWhileStringsAreEqual_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UWaitWhileStringsAreEqual_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWaitWhileStringsAreEqual_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WaitWhileStringsAreEqual.WaitWhileStringsAreEqual_C");
		return ptr;
	}

}


