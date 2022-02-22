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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function EnemyChild_Spider.EnemyChild_Spider_C.GetNewMoveLocation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     MoveTargetLocation                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AEnemyChild_Spider_C::GetNewMoveLocation(struct FVector* MoveTargetLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnemyChild_Spider.EnemyChild_Spider_C.GetNewMoveLocation");
		
		AEnemyChild_Spider_C_GetNewMoveLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MoveTargetLocation != nullptr)
			*MoveTargetLocation = params.MoveTargetLocation;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function EnemyChild_Spider.EnemyChild_Spider_C.OnMoveFinished_5AB5FC4549DC606D2FF1F9BAFF96D64F
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		AIModule_EPathFollowingResult                      Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AAIController*                               AIController                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AEnemyChild_Spider_C::OnMoveFinished_5AB5FC4549DC606D2FF1F9BAFF96D64F(AIModule_EPathFollowingResult Result, class AAIController* AIController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnemyChild_Spider.EnemyChild_Spider_C.OnMoveFinished_5AB5FC4549DC606D2FF1F9BAFF96D64F");
		
		AEnemyChild_Spider_C_OnMoveFinished_5AB5FC4549DC606D2FF1F9BAFF96D64F_Params params {};
		params.Result = Result;
		params.AIController = AIController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function EnemyChild_Spider.EnemyChild_Spider_C.OnRequestFailed_5AB5FC4549DC606D2FF1F9BAFF96D64F
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AEnemyChild_Spider_C::OnRequestFailed_5AB5FC4549DC606D2FF1F9BAFF96D64F()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnemyChild_Spider.EnemyChild_Spider_C.OnRequestFailed_5AB5FC4549DC606D2FF1F9BAFF96D64F");
		
		AEnemyChild_Spider_C_OnRequestFailed_5AB5FC4549DC606D2FF1F9BAFF96D64F_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function EnemyChild_Spider.EnemyChild_Spider_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AEnemyChild_Spider_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnemyChild_Spider.EnemyChild_Spider_C.ReceiveBeginPlay");
		
		AEnemyChild_Spider_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function EnemyChild_Spider.EnemyChild_Spider_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AEnemyChild_Spider_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnemyChild_Spider.EnemyChild_Spider_C.ReceiveTick");
		
		AEnemyChild_Spider_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function EnemyChild_Spider.EnemyChild_Spider_C.Move
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AEnemyChild_Spider_C::Move()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnemyChild_Spider.EnemyChild_Spider_C.Move");
		
		AEnemyChild_Spider_C_Move_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function EnemyChild_Spider.EnemyChild_Spider_C.Shoot
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AEnemyChild_Spider_C::Shoot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnemyChild_Spider.EnemyChild_Spider_C.Shoot");
		
		AEnemyChild_Spider_C_Shoot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function EnemyChild_Spider.EnemyChild_Spider_C.Charge
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AEnemyChild_Spider_C::Charge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnemyChild_Spider.EnemyChild_Spider_C.Charge");
		
		AEnemyChild_Spider_C_Charge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function EnemyChild_Spider.EnemyChild_Spider_C.EyeDart
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AEnemyChild_Spider_C::EyeDart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnemyChild_Spider.EnemyChild_Spider_C.EyeDart");
		
		AEnemyChild_Spider_C_EyeDart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function EnemyChild_Spider.EnemyChild_Spider_C.Aim
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AEnemyChild_Spider_C::Aim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnemyChild_Spider.EnemyChild_Spider_C.Aim");
		
		AEnemyChild_Spider_C_Aim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function EnemyChild_Spider.EnemyChild_Spider_C.StartAiming
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AEnemyChild_Spider_C::StartAiming()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnemyChild_Spider.EnemyChild_Spider_C.StartAiming");
		
		AEnemyChild_Spider_C_StartAiming_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function EnemyChild_Spider.EnemyChild_Spider_C.StopAiming
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AEnemyChild_Spider_C::StopAiming()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnemyChild_Spider.EnemyChild_Spider_C.StopAiming");
		
		AEnemyChild_Spider_C_StopAiming_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function EnemyChild_Spider.EnemyChild_Spider_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void AEnemyChild_Spider_C::BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnemyChild_Spider.EnemyChild_Spider_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
		
		AEnemyChild_Spider_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function EnemyChild_Spider.EnemyChild_Spider_C.ExecuteUbergraph_EnemyChild_Spider
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AEnemyChild_Spider_C::ExecuteUbergraph_EnemyChild_Spider(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnemyChild_Spider.EnemyChild_Spider_C.ExecuteUbergraph_EnemyChild_Spider");
		
		AEnemyChild_Spider_C_ExecuteUbergraph_EnemyChild_Spider_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AEnemyChild_Spider_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AEnemyChild_Spider_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass EnemyChild_Spider.EnemyChild_Spider_C");
		return ptr;
	}

}


