/**
 * Name: FNAFSB
 * Version: 1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NavDistanceServiceBase.NavDistanceServiceBase_C.NavDistance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      AIPawn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       OtherPawn                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              OutDistance                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNavDistanceServiceBase_C::NavDistance(class AActor* AIPawn, class APawn* OtherPawn, float* OutDistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavDistanceServiceBase.NavDistanceServiceBase_C.NavDistance");
		
		UNavDistanceServiceBase_C_NavDistance_Params params {};
		params.AIPawn = AIPawn;
		params.OtherPawn = OtherPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutDistance != nullptr)
			*OutDistance = params.OutDistance;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNavDistanceServiceBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNavDistanceServiceBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass NavDistanceServiceBase.NavDistanceServiceBase_C");
		return ptr;
	}

}


