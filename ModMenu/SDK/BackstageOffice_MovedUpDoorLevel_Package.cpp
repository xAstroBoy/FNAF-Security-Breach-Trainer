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
	 * 		Name   -> Function BackstageOffice_MovedUpDoorLevel.BackstageOffice_MovedUpDoorLevel_C.ReceiveExecuteAI
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AAIController*                               OwnerController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBackstageOffice_MovedUpDoorLevel_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BackstageOffice_MovedUpDoorLevel.BackstageOffice_MovedUpDoorLevel_C.ReceiveExecuteAI");
		
		UBackstageOffice_MovedUpDoorLevel_C_ReceiveExecuteAI_Params params {};
		params.OwnerController = OwnerController;
		params.ControlledPawn = ControlledPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function BackstageOffice_MovedUpDoorLevel.BackstageOffice_MovedUpDoorLevel_C.ExecuteUbergraph_BackstageOffice_MovedUpDoorLevel
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBackstageOffice_MovedUpDoorLevel_C::ExecuteUbergraph_BackstageOffice_MovedUpDoorLevel(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BackstageOffice_MovedUpDoorLevel.BackstageOffice_MovedUpDoorLevel_C.ExecuteUbergraph_BackstageOffice_MovedUpDoorLevel");
		
		UBackstageOffice_MovedUpDoorLevel_C_ExecuteUbergraph_BackstageOffice_MovedUpDoorLevel_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBackstageOffice_MovedUpDoorLevel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBackstageOffice_MovedUpDoorLevel_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BackstageOffice_MovedUpDoorLevel.BackstageOffice_MovedUpDoorLevel_C");
		return ptr;
	}

}


