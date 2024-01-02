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
	 * 		Name   -> Function SpawnAISceneComponent.SpawnAISceneComponent_C.Spawn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EFNAFAISpawnType                                   AIType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ForceShattered                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APawn*                                       Pawn                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USpawnAISceneComponent_C::Spawn(EFNAFAISpawnType AIType, bool ForceShattered, class APawn** Pawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnAISceneComponent.SpawnAISceneComponent_C.Spawn");
		
		USpawnAISceneComponent_C_Spawn_Params params {};
		params.AIType = AIType;
		params.ForceShattered = ForceShattered;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Pawn != nullptr)
			*Pawn = params.Pawn;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpawnAISceneComponent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpawnAISceneComponent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SpawnAISceneComponent.SpawnAISceneComponent_C");
		return ptr;
	}

}


