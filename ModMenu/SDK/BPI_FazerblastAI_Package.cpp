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
	 * 		Name   -> Function BPI_FazerblastAI.BPI_FazerblastAI_C.GetFazerblastBotBlackboard
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBlackboardComponent*                        Blackboard                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_FazerblastAI_C::GetFazerblastBotBlackboard(class UBlackboardComponent** Blackboard)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_FazerblastAI.BPI_FazerblastAI_C.GetFazerblastBotBlackboard");
		
		UBPI_FazerblastAI_C_GetFazerblastBotBlackboard_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Blackboard != nullptr)
			*Blackboard = params.Blackboard;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_FazerblastAI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_FazerblastAI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPI_FazerblastAI.BPI_FazerblastAI_C");
		return ptr;
	}

}


