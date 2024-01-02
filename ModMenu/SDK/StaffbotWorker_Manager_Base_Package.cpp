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
	 * 		Name   -> Function StaffbotWorker_Manager_Base.StaffbotWorker_Manager_Base_C.ModelSwap_Func
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AStaffBotWorker_SplineFollower_C*            StaffBot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AStaffbotTaskPlacement_C*                    TaskPoint                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AStaffbotWorker_Manager_Base_C::ModelSwap_Func(class AStaffBotWorker_SplineFollower_C* StaffBot, class AStaffbotTaskPlacement_C* TaskPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffbotWorker_Manager_Base.StaffbotWorker_Manager_Base_C.ModelSwap_Func");
		
		AStaffbotWorker_Manager_Base_C_ModelSwap_Func_Params params {};
		params.StaffBot = StaffBot;
		params.TaskPoint = TaskPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StaffbotWorker_Manager_Base.StaffbotWorker_Manager_Base_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AStaffbotWorker_Manager_Base_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffbotWorker_Manager_Base.StaffbotWorker_Manager_Base_C.UserConstructionScript");
		
		AStaffbotWorker_Manager_Base_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StaffbotWorker_Manager_Base.StaffbotWorker_Manager_Base_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AStaffbotWorker_Manager_Base_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffbotWorker_Manager_Base.StaffbotWorker_Manager_Base_C.ReceiveBeginPlay");
		
		AStaffbotWorker_Manager_Base_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StaffbotWorker_Manager_Base.StaffbotWorker_Manager_Base_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AStaffbotWorker_Manager_Base_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffbotWorker_Manager_Base.StaffbotWorker_Manager_Base_C.ReceiveTick");
		
		AStaffbotWorker_Manager_Base_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StaffbotWorker_Manager_Base.StaffbotWorker_Manager_Base_C.HasJumpscared
	 * 		Flags  -> ()
	 */
	void AStaffbotWorker_Manager_Base_C::HasJumpscared()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffbotWorker_Manager_Base.StaffbotWorker_Manager_Base_C.HasJumpscared");
		
		AStaffbotWorker_Manager_Base_C_HasJumpscared_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StaffbotWorker_Manager_Base.StaffbotWorker_Manager_Base_C.Reset Jumpscare
	 * 		Flags  -> ()
	 */
	void AStaffbotWorker_Manager_Base_C::ResetJumpscare()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffbotWorker_Manager_Base.StaffbotWorker_Manager_Base_C.Reset Jumpscare");
		
		AStaffbotWorker_Manager_Base_C_ResetJumpscare_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StaffbotWorker_Manager_Base.StaffbotWorker_Manager_Base_C.ExecuteUbergraph_StaffbotWorker_Manager_Base
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AStaffbotWorker_Manager_Base_C::ExecuteUbergraph_StaffbotWorker_Manager_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffbotWorker_Manager_Base.StaffbotWorker_Manager_Base_C.ExecuteUbergraph_StaffbotWorker_Manager_Base");
		
		AStaffbotWorker_Manager_Base_C_ExecuteUbergraph_StaffbotWorker_Manager_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AStaffbotWorker_Manager_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AStaffbotWorker_Manager_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass StaffbotWorker_Manager_Base.StaffbotWorker_Manager_Base_C");
		return ptr;
	}

}


