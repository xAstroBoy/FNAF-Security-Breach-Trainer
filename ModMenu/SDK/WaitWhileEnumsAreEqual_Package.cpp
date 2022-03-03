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
	 * 		Name   -> Function WaitWhileEnumsAreEqual.WaitWhileEnumsAreEqual_C.ReceiveTickAI
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AAIController*                               OwnerController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWaitWhileEnumsAreEqual_C::ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WaitWhileEnumsAreEqual.WaitWhileEnumsAreEqual_C.ReceiveTickAI");
		
		UWaitWhileEnumsAreEqual_C_ReceiveTickAI_Params params {};
		params.OwnerController = OwnerController;
		params.ControlledPawn = ControlledPawn;
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function WaitWhileEnumsAreEqual.WaitWhileEnumsAreEqual_C.SetFlameTrapsToOff
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWaitWhileEnumsAreEqual_C::SetFlameTrapsToOff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WaitWhileEnumsAreEqual.WaitWhileEnumsAreEqual_C.SetFlameTrapsToOff");
		
		UWaitWhileEnumsAreEqual_C_SetFlameTrapsToOff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function WaitWhileEnumsAreEqual.WaitWhileEnumsAreEqual_C.ExecuteUbergraph_WaitWhileEnumsAreEqual
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWaitWhileEnumsAreEqual_C::ExecuteUbergraph_WaitWhileEnumsAreEqual(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WaitWhileEnumsAreEqual.WaitWhileEnumsAreEqual_C.ExecuteUbergraph_WaitWhileEnumsAreEqual");
		
		UWaitWhileEnumsAreEqual_C_ExecuteUbergraph_WaitWhileEnumsAreEqual_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UWaitWhileEnumsAreEqual_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWaitWhileEnumsAreEqual_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WaitWhileEnumsAreEqual.WaitWhileEnumsAreEqual_C");
		return ptr;
	}

}


