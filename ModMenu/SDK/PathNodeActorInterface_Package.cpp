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
	 * 		Name   -> Function PathNodeActorInterface.PathNodeActorInterface_C.SetPointNumber
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PointNumber                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPathNodeActorInterface_C::SetPointNumber(int32_t PointNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PathNodeActorInterface.PathNodeActorInterface_C.SetPointNumber");
		
		UPathNodeActorInterface_C_SetPointNumber_Params params {};
		params.PointNumber = PointNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PathNodeActorInterface.PathNodeActorInterface_C.SetPath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APatrolPath_C*                               Path                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPathNodeActorInterface_C::SetPath(class APatrolPath_C* Path)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PathNodeActorInterface.PathNodeActorInterface_C.SetPath");
		
		UPathNodeActorInterface_C_SetPath_Params params {};
		params.Path = Path;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPathNodeActorInterface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPathNodeActorInterface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PathNodeActorInterface.PathNodeActorInterface_C");
		return ptr;
	}

}


