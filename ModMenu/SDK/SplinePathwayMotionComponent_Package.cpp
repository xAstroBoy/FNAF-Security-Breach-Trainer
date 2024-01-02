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
	 * 		Name   -> Function SplinePathwayMotionComponent.SplinePathwayMotionComponent_C.ReceiveBeginPlay
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SplinePathwayMotionComponent.SplinePathwayMotionComponent_C.ExecuteUbergraph_SplinePathwayMotionComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USplinePathwayMotionComponent_C::ExecuteUbergraph_SplinePathwayMotionComponent(int32_t EntryPoint)
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USplinePathwayMotionComponent_C.StaticClass
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


