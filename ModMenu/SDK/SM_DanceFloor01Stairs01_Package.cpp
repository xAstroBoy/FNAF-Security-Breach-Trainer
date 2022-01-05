/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "SM_DanceFloor01Stairs01_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SM_DanceFloor01Stairs01.SM_DanceFloor01Stairs01_C.SwitchColorForScenario
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASM_DanceFloor01Stairs01_C::SwitchColorForScenario()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SM_DanceFloor01Stairs01.SM_DanceFloor01Stairs01_C.SwitchColorForScenario");
		
		ASM_DanceFloor01Stairs01_C_SwitchColorForScenario_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SM_DanceFloor01Stairs01.SM_DanceFloor01Stairs01_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ASM_DanceFloor01Stairs01_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SM_DanceFloor01Stairs01.SM_DanceFloor01Stairs01_C.ReceiveBeginPlay");
		
		ASM_DanceFloor01Stairs01_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SM_DanceFloor01Stairs01.SM_DanceFloor01Stairs01_C.ExecuteUbergraph_SM_DanceFloor01Stairs01
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASM_DanceFloor01Stairs01_C::ExecuteUbergraph_SM_DanceFloor01Stairs01(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SM_DanceFloor01Stairs01.SM_DanceFloor01Stairs01_C.ExecuteUbergraph_SM_DanceFloor01Stairs01");
		
		ASM_DanceFloor01Stairs01_C_ExecuteUbergraph_SM_DanceFloor01Stairs01_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ASM_DanceFloor01Stairs01_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASM_DanceFloor01Stairs01_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SM_DanceFloor01Stairs01.SM_DanceFloor01Stairs01_C");
		return ptr;
	}

}


