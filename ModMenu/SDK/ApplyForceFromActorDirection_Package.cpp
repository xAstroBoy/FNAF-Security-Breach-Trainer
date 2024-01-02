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
	 * 		Name   -> Function ApplyForceFromActorDirection.ApplyForceFromActorDirection_C.GetForceDirection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      SourceActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FVector UApplyForceFromActorDirection_C::GetForceDirection(class AActor* SourceActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ApplyForceFromActorDirection.ApplyForceFromActorDirection_C.GetForceDirection");
		
		UApplyForceFromActorDirection_C_GetForceDirection_Params params {};
		params.SourceActor = SourceActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ApplyForceFromActorDirection.ApplyForceFromActorDirection_C.Apply Force
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      ForceActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UPrimitiveComponent*>                 Primitives                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		float                                              Magnitude                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UApplyForceFromActorDirection_C::ApplyForce(class AActor* ForceActor, TArray<class UPrimitiveComponent*> Primitives, float Magnitude)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ApplyForceFromActorDirection.ApplyForceFromActorDirection_C.Apply Force");
		
		UApplyForceFromActorDirection_C_ApplyForce_Params params {};
		params.ForceActor = ForceActor;
		params.Primitives = Primitives;
		params.Magnitude = Magnitude;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ApplyForceFromActorDirection.ApplyForceFromActorDirection_C.ExecuteUbergraph_ApplyForceFromActorDirection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UApplyForceFromActorDirection_C::ExecuteUbergraph_ApplyForceFromActorDirection(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ApplyForceFromActorDirection.ApplyForceFromActorDirection_C.ExecuteUbergraph_ApplyForceFromActorDirection");
		
		UApplyForceFromActorDirection_C_ExecuteUbergraph_ApplyForceFromActorDirection_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UApplyForceFromActorDirection_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UApplyForceFromActorDirection_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ApplyForceFromActorDirection.ApplyForceFromActorDirection_C");
		return ptr;
	}

}


