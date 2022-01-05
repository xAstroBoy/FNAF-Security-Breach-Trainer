/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "SwitchAISeekerBT_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SwitchAISeekerBT.SwitchAISeekerBT_C.ReceiveExecuteAI
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AAIController*                               OwnerController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USwitchAISeekerBT_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SwitchAISeekerBT.SwitchAISeekerBT_C.ReceiveExecuteAI");
		
		USwitchAISeekerBT_C_ReceiveExecuteAI_Params params {};
		params.OwnerController = OwnerController;
		params.ControlledPawn = ControlledPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SwitchAISeekerBT.SwitchAISeekerBT_C.ExecuteUbergraph_SwitchAISeekerBT
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USwitchAISeekerBT_C::ExecuteUbergraph_SwitchAISeekerBT(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SwitchAISeekerBT.SwitchAISeekerBT_C.ExecuteUbergraph_SwitchAISeekerBT");
		
		USwitchAISeekerBT_C_ExecuteUbergraph_SwitchAISeekerBT_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction USwitchAISeekerBT_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USwitchAISeekerBT_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SwitchAISeekerBT.SwitchAISeekerBT_C");
		return ptr;
	}

}


