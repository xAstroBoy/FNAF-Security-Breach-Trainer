/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "SplinePathwayMotionComponent_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SplinePathwayMotionComponent.SplinePathwayMotionComponent_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void USplinePathwayMotionComponent_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SplinePathwayMotionComponent.SplinePathwayMotionComponent_C.ReceiveBeginPlay");
		
		USplinePathwayMotionComponent_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SplinePathwayMotionComponent.SplinePathwayMotionComponent_C.ExecuteUbergraph_SplinePathwayMotionComponent
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USplinePathwayMotionComponent_C::ExecuteUbergraph_SplinePathwayMotionComponent(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SplinePathwayMotionComponent.SplinePathwayMotionComponent_C.ExecuteUbergraph_SplinePathwayMotionComponent");
		
		USplinePathwayMotionComponent_C_ExecuteUbergraph_SplinePathwayMotionComponent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction USplinePathwayMotionComponent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USplinePathwayMotionComponent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SplinePathwayMotionComponent.SplinePathwayMotionComponent_C");
		return ptr;
	}

}


