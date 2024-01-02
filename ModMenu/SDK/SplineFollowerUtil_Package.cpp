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
	 * 		Name   -> Function SplineFollowerUtil.SplineFollowerUtil_C.SplineDirectionToMult
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESplineFollowDirection                             Direction                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float USplineFollowerUtil_C::SplineDirectionToMult(ESplineFollowDirection Direction, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SplineFollowerUtil.SplineFollowerUtil_C.SplineDirectionToMult");
		
		USplineFollowerUtil_C_SplineDirectionToMult_Params params {};
		params.Direction = Direction;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USplineFollowerUtil_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USplineFollowerUtil_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SplineFollowerUtil.SplineFollowerUtil_C");
		return ptr;
	}

}


