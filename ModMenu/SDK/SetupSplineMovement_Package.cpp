/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "SetupSplineMovement_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SetupSplineMovement.SetupSplineMovement_C.Setup Spline Movement
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USetupSplineMovement_C::Setup_Spline_Movement(class APawn* Pawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SetupSplineMovement.SetupSplineMovement_C.Setup Spline Movement");
		
		USetupSplineMovement_C_Setup_Spline_Movement_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SetupSplineMovement.SetupSplineMovement_C.ExecuteUbergraph_SetupSplineMovement
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USetupSplineMovement_C::ExecuteUbergraph_SetupSplineMovement(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SetupSplineMovement.SetupSplineMovement_C.ExecuteUbergraph_SetupSplineMovement");
		
		USetupSplineMovement_C_ExecuteUbergraph_SetupSplineMovement_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction USetupSplineMovement_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USetupSplineMovement_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SetupSplineMovement.SetupSplineMovement_C");
		return ptr;
	}

}


