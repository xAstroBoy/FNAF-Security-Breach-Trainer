/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "SplineFollowerUtil_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SplineFollowerUtil.SplineFollowerUtil_C.SplineDirectionToMult
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		TEnumAsByte<SplineFollowDirection_ESplineFollowDirection> Direction                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float USplineFollowerUtil_C::STATIC_SplineDirectionToMult(TEnumAsByte<SplineFollowDirection_ESplineFollowDirection> Direction, class UObject* __WorldContext)
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
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction USplineFollowerUtil_C.StaticClass
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


