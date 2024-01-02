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
	 * 		Name   -> Function StaffBotTalent.StaffBotTalent_C.ChangeToComedyOrMagicStaffBotType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EStaffbotRig                                       StaffBotType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AStaffBotTalent_C::ChangeToComedyOrMagicStaffBotType(EStaffbotRig StaffBotType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffBotTalent.StaffBotTalent_C.ChangeToComedyOrMagicStaffBotType");
		
		AStaffBotTalent_C_ChangeToComedyOrMagicStaffBotType_Params params {};
		params.StaffBotType = StaffBotType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StaffBotTalent.StaffBotTalent_C.ExecuteUbergraph_StaffBotTalent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AStaffBotTalent_C::ExecuteUbergraph_StaffBotTalent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffBotTalent.StaffBotTalent_C.ExecuteUbergraph_StaffBotTalent");
		
		AStaffBotTalent_C_ExecuteUbergraph_StaffBotTalent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AStaffBotTalent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AStaffBotTalent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass StaffBotTalent.StaffBotTalent_C");
		return ptr;
	}

}


