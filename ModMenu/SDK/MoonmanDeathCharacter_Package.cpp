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
	 * 		Name   -> Function MoonmanDeathCharacter.MoonmanDeathCharacter_C.OnMoveFinished_01A10D084E477107D60080A61618D4FF
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPathFollowingResult                               Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AAIController*                               AIController                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMoonmanDeathCharacter_C::OnMoveFinished_01A10D084E477107D60080A61618D4FF(EPathFollowingResult Result, class AAIController* AIController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoonmanDeathCharacter.MoonmanDeathCharacter_C.OnMoveFinished_01A10D084E477107D60080A61618D4FF");
		
		AMoonmanDeathCharacter_C_OnMoveFinished_01A10D084E477107D60080A61618D4FF_Params params {};
		params.Result = Result;
		params.AIController = AIController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MoonmanDeathCharacter.MoonmanDeathCharacter_C.OnRequestFailed_01A10D084E477107D60080A61618D4FF
	 * 		Flags  -> ()
	 */
	void AMoonmanDeathCharacter_C::OnRequestFailed_01A10D084E477107D60080A61618D4FF()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoonmanDeathCharacter.MoonmanDeathCharacter_C.OnRequestFailed_01A10D084E477107D60080A61618D4FF");
		
		AMoonmanDeathCharacter_C_OnRequestFailed_01A10D084E477107D60080A61618D4FF_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MoonmanDeathCharacter.MoonmanDeathCharacter_C.DLCRabbitDisplayAlertText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Display                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMoonmanDeathCharacter_C::DLCRabbitDisplayAlertText(bool Display)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoonmanDeathCharacter.MoonmanDeathCharacter_C.DLCRabbitDisplayAlertText");
		
		AMoonmanDeathCharacter_C_DLCRabbitDisplayAlertText_Params params {};
		params.Display = Display;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MoonmanDeathCharacter.MoonmanDeathCharacter_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AMoonmanDeathCharacter_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoonmanDeathCharacter.MoonmanDeathCharacter_C.ReceiveBeginPlay");
		
		AMoonmanDeathCharacter_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MoonmanDeathCharacter.MoonmanDeathCharacter_C.ReceiveActorBeginOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMoonmanDeathCharacter_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoonmanDeathCharacter.MoonmanDeathCharacter_C.ReceiveActorBeginOverlap");
		
		AMoonmanDeathCharacter_C_ReceiveActorBeginOverlap_Params params {};
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MoonmanDeathCharacter.MoonmanDeathCharacter_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMoonmanDeathCharacter_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoonmanDeathCharacter.MoonmanDeathCharacter_C.ReceiveTick");
		
		AMoonmanDeathCharacter_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MoonmanDeathCharacter.MoonmanDeathCharacter_C.OnDebugVis
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMoonmanDeathCharacter_C::OnDebugVis(bool enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoonmanDeathCharacter.MoonmanDeathCharacter_C.OnDebugVis");
		
		AMoonmanDeathCharacter_C_OnDebugVis_Params params {};
		params.enable = enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MoonmanDeathCharacter.MoonmanDeathCharacter_C.ReceiveDestroyed
	 * 		Flags  -> ()
	 */
	void AMoonmanDeathCharacter_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoonmanDeathCharacter.MoonmanDeathCharacter_C.ReceiveDestroyed");
		
		AMoonmanDeathCharacter_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MoonmanDeathCharacter.MoonmanDeathCharacter_C.ExecuteUbergraph_MoonmanDeathCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMoonmanDeathCharacter_C::ExecuteUbergraph_MoonmanDeathCharacter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoonmanDeathCharacter.MoonmanDeathCharacter_C.ExecuteUbergraph_MoonmanDeathCharacter");
		
		AMoonmanDeathCharacter_C_ExecuteUbergraph_MoonmanDeathCharacter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMoonmanDeathCharacter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMoonmanDeathCharacter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MoonmanDeathCharacter.MoonmanDeathCharacter_C");
		return ptr;
	}

}


