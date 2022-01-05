/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "Freddy_Attack_Unstun_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Freddy_Attack_Unstun.Freddy_Attack_Unstun_C.ReceiveExecuteAI
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AAIController*                               OwnerController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFreddy_Attack_Unstun_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Freddy_Attack_Unstun.Freddy_Attack_Unstun_C.ReceiveExecuteAI");
		
		UFreddy_Attack_Unstun_C_ReceiveExecuteAI_Params params {};
		params.OwnerController = OwnerController;
		params.ControlledPawn = ControlledPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Freddy_Attack_Unstun.Freddy_Attack_Unstun_C.ExecuteUbergraph_Freddy_Attack_Unstun
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFreddy_Attack_Unstun_C::ExecuteUbergraph_Freddy_Attack_Unstun(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Freddy_Attack_Unstun.Freddy_Attack_Unstun_C.ExecuteUbergraph_Freddy_Attack_Unstun");
		
		UFreddy_Attack_Unstun_C_ExecuteUbergraph_Freddy_Attack_Unstun_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UFreddy_Attack_Unstun_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFreddy_Attack_Unstun_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Freddy_Attack_Unstun.Freddy_Attack_Unstun_C");
		return ptr;
	}

}


