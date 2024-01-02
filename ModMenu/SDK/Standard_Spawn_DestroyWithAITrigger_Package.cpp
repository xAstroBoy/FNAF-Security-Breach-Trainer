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
	 * 		Name   -> Function Standard_Spawn_DestroyWithAITrigger.Standard_Spawn_DestroyWithAITrigger_C.OnTriggered
	 * 		Flags  -> ()
	 */
	void AStandard_Spawn_DestroyWithAITrigger_C::OnTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Standard_Spawn_DestroyWithAITrigger.Standard_Spawn_DestroyWithAITrigger_C.OnTriggered");
		
		AStandard_Spawn_DestroyWithAITrigger_C_OnTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Standard_Spawn_DestroyWithAITrigger.Standard_Spawn_DestroyWithAITrigger_C.OnAIAlerted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Alert                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AStandard_Spawn_DestroyWithAITrigger_C::OnAIAlerted(const class FName& Alert, const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Standard_Spawn_DestroyWithAITrigger.Standard_Spawn_DestroyWithAITrigger_C.OnAIAlerted");
		
		AStandard_Spawn_DestroyWithAITrigger_C_OnAIAlerted_Params params {};
		params.Alert = Alert;
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Standard_Spawn_DestroyWithAITrigger.Standard_Spawn_DestroyWithAITrigger_C.ExecuteUbergraph_Standard_Spawn_DestroyWithAITrigger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AStandard_Spawn_DestroyWithAITrigger_C::ExecuteUbergraph_Standard_Spawn_DestroyWithAITrigger(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Standard_Spawn_DestroyWithAITrigger.Standard_Spawn_DestroyWithAITrigger_C.ExecuteUbergraph_Standard_Spawn_DestroyWithAITrigger");
		
		AStandard_Spawn_DestroyWithAITrigger_C_ExecuteUbergraph_Standard_Spawn_DestroyWithAITrigger_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AStandard_Spawn_DestroyWithAITrigger_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AStandard_Spawn_DestroyWithAITrigger_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Standard_Spawn_DestroyWithAITrigger.Standard_Spawn_DestroyWithAITrigger_C");
		return ptr;
	}

}


