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
	 * 		Name   -> Function DialogueFunctionLibrary.DialogueFunctionLibrary_C.GetStandardDialogContext
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FDialogueContext                            DialogueContext                                            (Parm, OutParm)
	 */
	void UDialogueFunctionLibrary_C::GetStandardDialogContext(class UObject* __WorldContext, struct FDialogueContext* DialogueContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DialogueFunctionLibrary.DialogueFunctionLibrary_C.GetStandardDialogContext");
		
		UDialogueFunctionLibrary_C_GetStandardDialogContext_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DialogueContext != nullptr)
			*DialogueContext = params.DialogueContext;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DialogueFunctionLibrary.DialogueFunctionLibrary_C.PlayStandardDialogAttached
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDialogueWave*                               Dialogue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USceneComponent*                             AttachToComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        AttachPointName                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDialogueFunctionLibrary_C::PlayStandardDialogAttached(class UDialogueWave* Dialogue, class USceneComponent* AttachToComponent, const class FName& AttachPointName, const struct FVector& Location, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DialogueFunctionLibrary.DialogueFunctionLibrary_C.PlayStandardDialogAttached");
		
		UDialogueFunctionLibrary_C_PlayStandardDialogAttached_Params params {};
		params.Dialogue = Dialogue;
		params.AttachToComponent = AttachToComponent;
		params.AttachPointName = AttachPointName;
		params.Location = Location;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DialogueFunctionLibrary.DialogueFunctionLibrary_C.PlayStandardDialog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDialogueWave*                               Dialogue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UAudioComponent* UDialogueFunctionLibrary_C::PlayStandardDialog(class UDialogueWave* Dialogue, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DialogueFunctionLibrary.DialogueFunctionLibrary_C.PlayStandardDialog");
		
		UDialogueFunctionLibrary_C_PlayStandardDialog_Params params {};
		params.Dialogue = Dialogue;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDialogueFunctionLibrary_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDialogueFunctionLibrary_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DialogueFunctionLibrary.DialogueFunctionLibrary_C");
		return ptr;
	}

}


