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
	 * 		Name   -> Function Equippable.Equippable_C.Get Anim Item Type
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EGregoryAnimItemEnum                               AnimType                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AEquippable_C::GetAnimItemType(EGregoryAnimItemEnum* AnimType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equippable.Equippable_C.Get Anim Item Type");
		
		AEquippable_C_GetAnimItemType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimType != nullptr)
			*AnimType = params.AnimType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Equippable.Equippable_C.PullOut
	 * 		Flags  -> ()
	 */
	void AEquippable_C::PullOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equippable.Equippable_C.PullOut");
		
		AEquippable_C_PullOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Equippable.Equippable_C.PutAway
	 * 		Flags  -> ()
	 */
	void AEquippable_C::PutAway()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equippable.Equippable_C.PutAway");
		
		AEquippable_C_PutAway_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Equippable.Equippable_C.PrimaryAction
	 * 		Flags  -> ()
	 */
	void AEquippable_C::PrimaryAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equippable.Equippable_C.PrimaryAction");
		
		AEquippable_C_PrimaryAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Equippable.Equippable_C.SecondaryAction
	 * 		Flags  -> ()
	 */
	void AEquippable_C::SecondaryAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equippable.Equippable_C.SecondaryAction");
		
		AEquippable_C_SecondaryAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Equippable.Equippable_C.ExecuteUbergraph_Equippable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AEquippable_C::ExecuteUbergraph_Equippable(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Equippable.Equippable_C.ExecuteUbergraph_Equippable");
		
		AEquippable_C_ExecuteUbergraph_Equippable_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AEquippable_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AEquippable_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Equippable.Equippable_C");
		return ptr;
	}

}


