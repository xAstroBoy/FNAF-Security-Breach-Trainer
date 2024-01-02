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
	 * 		Name   -> Function ABP_FunctionLibrary.ABP_FunctionLibrary_C.Check if Onscreen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimInstance*                               TargetAnimInstance                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Tolerance                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               isJumpscaring                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Override                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               isOnScreen1                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UABP_FunctionLibrary_C::CheckifOnscreen(class UAnimInstance* TargetAnimInstance, float Tolerance, bool isJumpscaring, bool Override, class UObject* __WorldContext, bool* isOnScreen1)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_FunctionLibrary.ABP_FunctionLibrary_C.Check if Onscreen");
		
		UABP_FunctionLibrary_C_CheckifOnscreen_Params params {};
		params.TargetAnimInstance = TargetAnimInstance;
		params.Tolerance = Tolerance;
		params.isJumpscaring = isJumpscaring;
		params.Override = Override;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (isOnScreen1 != nullptr)
			*isOnScreen1 = params.isOnScreen1;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UABP_FunctionLibrary_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UABP_FunctionLibrary_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ABP_FunctionLibrary.ABP_FunctionLibrary_C");
		return ptr;
	}

}


