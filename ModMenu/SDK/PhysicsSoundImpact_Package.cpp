/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "PhysicsSoundImpact_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PhysicsSoundImpact.PhysicsSoundImpact_C.Initialize
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPhysicsSoundImpact_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhysicsSoundImpact.PhysicsSoundImpact_C.Initialize");
		
		UPhysicsSoundImpact_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PhysicsSoundImpact.PhysicsSoundImpact_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPhysicsSoundImpact_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhysicsSoundImpact.PhysicsSoundImpact_C.ReceiveTick");
		
		UPhysicsSoundImpact_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PhysicsSoundImpact.PhysicsSoundImpact_C.ExecuteUbergraph_PhysicsSoundImpact
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPhysicsSoundImpact_C::ExecuteUbergraph_PhysicsSoundImpact(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhysicsSoundImpact.PhysicsSoundImpact_C.ExecuteUbergraph_PhysicsSoundImpact");
		
		UPhysicsSoundImpact_C_ExecuteUbergraph_PhysicsSoundImpact_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UPhysicsSoundImpact_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPhysicsSoundImpact_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PhysicsSoundImpact.PhysicsSoundImpact_C");
		return ptr;
	}

}


