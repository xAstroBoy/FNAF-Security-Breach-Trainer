/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function FreddyInteractibleInterface.FreddyInteractibleInterface_C.GetFreddyActionLocationAndRotation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    Rotation                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFreddyInteractibleInterface_C::GetFreddyActionLocationAndRotation(struct FVector* Location, struct FRotator* Rotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddyInteractibleInterface.FreddyInteractibleInterface_C.GetFreddyActionLocationAndRotation");
		
		UFreddyInteractibleInterface_C_GetFreddyActionLocationAndRotation_Params params {};
		
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
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function FreddyInteractibleInterface.FreddyInteractibleInterface_C.GetFreddyVO
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		FreddyVOType_EFreddyVOType                         VOType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UDialogueWave*>                       FreddyDialog                                               (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UFreddyInteractibleInterface_C::GetFreddyVO(FreddyVOType_EFreddyVOType VOType, TArray<class UDialogueWave*>* FreddyDialog)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddyInteractibleInterface.FreddyInteractibleInterface_C.GetFreddyVO");
		
		UFreddyInteractibleInterface_C_GetFreddyVO_Params params {};
		params.VOType = VOType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FreddyDialog != nullptr)
			*FreddyDialog = params.FreddyDialog;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UFreddyInteractibleInterface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFreddyInteractibleInterface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FreddyInteractibleInterface.FreddyInteractibleInterface_C");
		return ptr;
	}

}


