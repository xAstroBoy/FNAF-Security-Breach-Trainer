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
	 * 		Name   -> Function FreddyInteractibleActor.FreddyInteractibleActor_C.GetFreddyVO
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EFreddyVOType                                      VOType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UDialogueWave*>                       FreddyDialog                                               (Parm, OutParm)
	 */
	void AFreddyInteractibleActor_C::GetFreddyVO(EFreddyVOType VOType, TArray<class UDialogueWave*>* FreddyDialog)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddyInteractibleActor.FreddyInteractibleActor_C.GetFreddyVO");
		
		AFreddyInteractibleActor_C_GetFreddyVO_Params params {};
		params.VOType = VOType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FreddyDialog != nullptr)
			*FreddyDialog = params.FreddyDialog;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FreddyInteractibleActor.FreddyInteractibleActor_C.GetFreddyActionLocationAndRotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    Rotation                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFreddyInteractibleActor_C::GetFreddyActionLocationAndRotation(struct FVector* Location, struct FRotator* Rotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddyInteractibleActor.FreddyInteractibleActor_C.GetFreddyActionLocationAndRotation");
		
		AFreddyInteractibleActor_C_GetFreddyActionLocationAndRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Location != nullptr)
			*Location = params.Location;
		if (Rotation != nullptr)
			*Rotation = params.Rotation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AFreddyInteractibleActor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFreddyInteractibleActor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FreddyInteractibleActor.FreddyInteractibleActor_C");
		return ptr;
	}

}


