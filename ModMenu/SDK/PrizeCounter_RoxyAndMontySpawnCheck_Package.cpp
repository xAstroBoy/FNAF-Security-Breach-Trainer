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
	 * 		Name   -> Function PrizeCounter_RoxyAndMontySpawnCheck.PrizeCounter_RoxyAndMontySpawnCheck_C.ReceiveActorBeginOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APrizeCounter_RoxyAndMontySpawnCheck_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrizeCounter_RoxyAndMontySpawnCheck.PrizeCounter_RoxyAndMontySpawnCheck_C.ReceiveActorBeginOverlap");
		
		APrizeCounter_RoxyAndMontySpawnCheck_C_ReceiveActorBeginOverlap_Params params {};
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PrizeCounter_RoxyAndMontySpawnCheck.PrizeCounter_RoxyAndMontySpawnCheck_C.OnTriggered
	 * 		Flags  -> ()
	 */
	void APrizeCounter_RoxyAndMontySpawnCheck_C::OnTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrizeCounter_RoxyAndMontySpawnCheck.PrizeCounter_RoxyAndMontySpawnCheck_C.OnTriggered");
		
		APrizeCounter_RoxyAndMontySpawnCheck_C_OnTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PrizeCounter_RoxyAndMontySpawnCheck.PrizeCounter_RoxyAndMontySpawnCheck_C.ExecuteUbergraph_PrizeCounter_RoxyAndMontySpawnCheck
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APrizeCounter_RoxyAndMontySpawnCheck_C::ExecuteUbergraph_PrizeCounter_RoxyAndMontySpawnCheck(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrizeCounter_RoxyAndMontySpawnCheck.PrizeCounter_RoxyAndMontySpawnCheck_C.ExecuteUbergraph_PrizeCounter_RoxyAndMontySpawnCheck");
		
		APrizeCounter_RoxyAndMontySpawnCheck_C_ExecuteUbergraph_PrizeCounter_RoxyAndMontySpawnCheck_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APrizeCounter_RoxyAndMontySpawnCheck_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APrizeCounter_RoxyAndMontySpawnCheck_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrizeCounter_RoxyAndMontySpawnCheck.PrizeCounter_RoxyAndMontySpawnCheck_C");
		return ptr;
	}

}


