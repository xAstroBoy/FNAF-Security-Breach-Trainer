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
	 * 		Name   -> Function CautionBotManager.CautionBotManager_C.Register Caution Bot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ACautionBot_C*                               CautionBot                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACautionBotManager_C::RegisterCautionBot(class ACautionBot_C* CautionBot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CautionBotManager.CautionBotManager_C.Register Caution Bot");
		
		ACautionBotManager_C_RegisterCautionBot_Params params {};
		params.CautionBot = CautionBot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CautionBotManager.CautionBotManager_C.Unregister Caution Bot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ACautionBot_C*                               CautionBot                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACautionBotManager_C::UnregisterCautionBot(class ACautionBot_C* CautionBot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CautionBotManager.CautionBotManager_C.Unregister Caution Bot");
		
		ACautionBotManager_C_UnregisterCautionBot_Params params {};
		params.CautionBot = CautionBot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CautionBotManager.CautionBotManager_C.On Spill
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      SpillActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACautionBotManager_C::OnSpill(class AActor* SpillActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CautionBotManager.CautionBotManager_C.On Spill");
		
		ACautionBotManager_C_OnSpill_Params params {};
		params.SpillActor = SpillActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CautionBotManager.CautionBotManager_C.ExecuteUbergraph_CautionBotManager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACautionBotManager_C::ExecuteUbergraph_CautionBotManager(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CautionBotManager.CautionBotManager_C.ExecuteUbergraph_CautionBotManager");
		
		ACautionBotManager_C_ExecuteUbergraph_CautionBotManager_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACautionBotManager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACautionBotManager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CautionBotManager.CautionBotManager_C");
		return ptr;
	}

}


