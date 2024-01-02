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
	 * 		Name   -> Function MessageCollectible.MessageCollectible_C.GetInteractibleType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EInteractibleType                                  Type                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EInteractiblePressType                             PressType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMessageCollectible_C::GetInteractibleType(EInteractibleType* Type, EInteractiblePressType* PressType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MessageCollectible.MessageCollectible_C.GetInteractibleType");
		
		AMessageCollectible_C_GetInteractibleType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Type != nullptr)
			*Type = params.Type;
		if (PressType != nullptr)
			*PressType = params.PressType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MessageCollectible.MessageCollectible_C.GetInstructionOverride
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Instruction                                                (Parm, OutParm)
	 */
	void AMessageCollectible_C::GetInstructionOverride(class FText* Instruction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MessageCollectible.MessageCollectible_C.GetInstructionOverride");
		
		AMessageCollectible_C_GetInstructionOverride_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Instruction != nullptr)
			*Instruction = params.Instruction;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MessageCollectible.MessageCollectible_C.GetHUDInstruction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Instruction                                                (Parm, OutParm)
	 */
	void AMessageCollectible_C::GetHUDInstruction(class FText* Instruction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MessageCollectible.MessageCollectible_C.GetHUDInstruction");
		
		AMessageCollectible_C_GetHUDInstruction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Instruction != nullptr)
			*Instruction = params.Instruction;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MessageCollectible.MessageCollectible_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AMessageCollectible_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MessageCollectible.MessageCollectible_C.UserConstructionScript");
		
		AMessageCollectible_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MessageCollectible.MessageCollectible_C.OnFailure_4B0F52EA45CC0AEF35D733B36267DE77
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        WrittenAchievementName                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              WrittenProgress                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            WrittenUserTag                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMessageCollectible_C::OnFailure_4B0F52EA45CC0AEF35D733B36267DE77(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MessageCollectible.MessageCollectible_C.OnFailure_4B0F52EA45CC0AEF35D733B36267DE77");
		
		AMessageCollectible_C_OnFailure_4B0F52EA45CC0AEF35D733B36267DE77_Params params {};
		params.WrittenAchievementName = WrittenAchievementName;
		params.WrittenProgress = WrittenProgress;
		params.WrittenUserTag = WrittenUserTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MessageCollectible.MessageCollectible_C.OnSuccess_4B0F52EA45CC0AEF35D733B36267DE77
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        WrittenAchievementName                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              WrittenProgress                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            WrittenUserTag                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMessageCollectible_C::OnSuccess_4B0F52EA45CC0AEF35D733B36267DE77(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MessageCollectible.MessageCollectible_C.OnSuccess_4B0F52EA45CC0AEF35D733B36267DE77");
		
		AMessageCollectible_C_OnSuccess_4B0F52EA45CC0AEF35D733B36267DE77_Params params {};
		params.WrittenAchievementName = WrittenAchievementName;
		params.WrittenProgress = WrittenProgress;
		params.WrittenUserTag = WrittenUserTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MessageCollectible.MessageCollectible_C.OnFailure_5B0B2E1D480E298DA757F2B41ABB5A3B
	 * 		Flags  -> ()
	 */
	void AMessageCollectible_C::OnFailure_5B0B2E1D480E298DA757F2B41ABB5A3B()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MessageCollectible.MessageCollectible_C.OnFailure_5B0B2E1D480E298DA757F2B41ABB5A3B");
		
		AMessageCollectible_C_OnFailure_5B0B2E1D480E298DA757F2B41ABB5A3B_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MessageCollectible.MessageCollectible_C.OnSuccess_5B0B2E1D480E298DA757F2B41ABB5A3B
	 * 		Flags  -> ()
	 */
	void AMessageCollectible_C::OnSuccess_5B0B2E1D480E298DA757F2B41ABB5A3B()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MessageCollectible.MessageCollectible_C.OnSuccess_5B0B2E1D480E298DA757F2B41ABB5A3B");
		
		AMessageCollectible_C_OnSuccess_5B0B2E1D480E298DA757F2B41ABB5A3B_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MessageCollectible.MessageCollectible_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AMessageCollectible_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MessageCollectible.MessageCollectible_C.ReceiveBeginPlay");
		
		AMessageCollectible_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MessageCollectible.MessageCollectible_C.OnBeginCollect
	 * 		Flags  -> ()
	 */
	void AMessageCollectible_C::OnBeginCollect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MessageCollectible.MessageCollectible_C.OnBeginCollect");
		
		AMessageCollectible_C_OnBeginCollect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MessageCollectible.MessageCollectible_C.OnCollect
	 * 		Flags  -> ()
	 */
	void AMessageCollectible_C::OnCollect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MessageCollectible.MessageCollectible_C.OnCollect");
		
		AMessageCollectible_C_OnCollect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MessageCollectible.MessageCollectible_C.ExecuteUbergraph_MessageCollectible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMessageCollectible_C::ExecuteUbergraph_MessageCollectible(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MessageCollectible.MessageCollectible_C.ExecuteUbergraph_MessageCollectible");
		
		AMessageCollectible_C_ExecuteUbergraph_MessageCollectible_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMessageCollectible_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMessageCollectible_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MessageCollectible.MessageCollectible_C");
		return ptr;
	}

}


