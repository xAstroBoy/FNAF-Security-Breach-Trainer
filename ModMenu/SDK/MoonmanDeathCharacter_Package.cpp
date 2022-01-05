/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "MoonmanDeathCharacter_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function MoonmanDeathCharacter.MoonmanDeathCharacter_C.OnMoveFinished_01A10D084E477107D60080A61618D4FF
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TEnumAsByte<AIModule_EPathFollowingResult>         Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AAIController*                               AIController                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMoonmanDeathCharacter_C::OnMoveFinished_01A10D084E477107D60080A61618D4FF(TEnumAsByte<AIModule_EPathFollowingResult> Result, class AAIController* AIController)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function MoonmanDeathCharacter.MoonmanDeathCharacter_C.OnRequestFailed_01A10D084E477107D60080A61618D4FF
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function MoonmanDeathCharacter.MoonmanDeathCharacter_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function MoonmanDeathCharacter.MoonmanDeathCharacter_C.ReceiveActorBeginOverlap
	 * 		Flags  -> (Event, Public, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function MoonmanDeathCharacter.MoonmanDeathCharacter_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function MoonmanDeathCharacter.MoonmanDeathCharacter_C.OnDebugVis
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function MoonmanDeathCharacter.MoonmanDeathCharacter_C.ExecuteUbergraph_MoonmanDeathCharacter
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMoonmanDeathCharacter_C::ExecuteUbergraph_MoonmanDeathCharacter(int EntryPoint)
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
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AMoonmanDeathCharacter_C.StaticClass
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


