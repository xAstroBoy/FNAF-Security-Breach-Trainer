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
	 * 		Name   -> Function FreddyAIController.FreddyAIController_C.SetIsNearRechargeStation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isFreddyNearStation                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFreddyAIController_C::SetIsNearRechargeStation(bool isFreddyNearStation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddyAIController.FreddyAIController_C.SetIsNearRechargeStation");
		
		AFreddyAIController_C_SetIsNearRechargeStation_Params params {};
		params.isFreddyNearStation = isFreddyNearStation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FreddyAIController.FreddyAIController_C.SetAIState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EFreddyAIState                                     State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFreddyAIController_C::SetAIState(EFreddyAIState State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddyAIController.FreddyAIController_C.SetAIState");
		
		AFreddyAIController_C_SetAIState_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FreddyAIController.FreddyAIController_C.Setup Freddy Power Loss Timer
	 * 		Flags  -> ()
	 */
	void AFreddyAIController_C::SetupFreddyPowerLossTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddyAIController.FreddyAIController_C.Setup Freddy Power Loss Timer");
		
		AFreddyAIController_C_SetupFreddyPowerLossTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FreddyAIController.FreddyAIController_C.On World State Changed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EFNAFGameState                                     NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EFNAFGameState                                     PreviousState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFreddyAIController_C::OnWorldStateChanged(EFNAFGameState NewState, EFNAFGameState PreviousState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddyAIController.FreddyAIController_C.On World State Changed");
		
		AFreddyAIController_C_OnWorldStateChanged_Params params {};
		params.NewState = NewState;
		params.PreviousState = PreviousState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FreddyAIController.FreddyAIController_C.GetGregoryPawn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AGregory_C*                                  GregoryPawn                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFreddyAIController_C::GetGregoryPawn(class AGregory_C** GregoryPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddyAIController.FreddyAIController_C.GetGregoryPawn");
		
		AFreddyAIController_C_GetGregoryPawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GregoryPawn != nullptr)
			*GregoryPawn = params.GregoryPawn;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FreddyAIController.FreddyAIController_C.OnNotifyEnd_30B75CD34307316BF7A1EF9DC900582F
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFreddyAIController_C::OnNotifyEnd_30B75CD34307316BF7A1EF9DC900582F(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddyAIController.FreddyAIController_C.OnNotifyEnd_30B75CD34307316BF7A1EF9DC900582F");
		
		AFreddyAIController_C_OnNotifyEnd_30B75CD34307316BF7A1EF9DC900582F_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FreddyAIController.FreddyAIController_C.OnNotifyBegin_30B75CD34307316BF7A1EF9DC900582F
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFreddyAIController_C::OnNotifyBegin_30B75CD34307316BF7A1EF9DC900582F(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddyAIController.FreddyAIController_C.OnNotifyBegin_30B75CD34307316BF7A1EF9DC900582F");
		
		AFreddyAIController_C_OnNotifyBegin_30B75CD34307316BF7A1EF9DC900582F_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FreddyAIController.FreddyAIController_C.OnInterrupted_30B75CD34307316BF7A1EF9DC900582F
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFreddyAIController_C::OnInterrupted_30B75CD34307316BF7A1EF9DC900582F(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddyAIController.FreddyAIController_C.OnInterrupted_30B75CD34307316BF7A1EF9DC900582F");
		
		AFreddyAIController_C_OnInterrupted_30B75CD34307316BF7A1EF9DC900582F_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FreddyAIController.FreddyAIController_C.OnBlendOut_30B75CD34307316BF7A1EF9DC900582F
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFreddyAIController_C::OnBlendOut_30B75CD34307316BF7A1EF9DC900582F(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddyAIController.FreddyAIController_C.OnBlendOut_30B75CD34307316BF7A1EF9DC900582F");
		
		AFreddyAIController_C_OnBlendOut_30B75CD34307316BF7A1EF9DC900582F_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FreddyAIController.FreddyAIController_C.OnCompleted_30B75CD34307316BF7A1EF9DC900582F
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFreddyAIController_C::OnCompleted_30B75CD34307316BF7A1EF9DC900582F(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddyAIController.FreddyAIController_C.OnCompleted_30B75CD34307316BF7A1EF9DC900582F");
		
		AFreddyAIController_C_OnCompleted_30B75CD34307316BF7A1EF9DC900582F_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FreddyAIController.FreddyAIController_C.ReceivePossess
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       PossessedPawn                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFreddyAIController_C::ReceivePossess(class APawn* PossessedPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddyAIController.FreddyAIController_C.ReceivePossess");
		
		AFreddyAIController_C_ReceivePossess_Params params {};
		params.PossessedPawn = PossessedPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FreddyAIController.FreddyAIController_C.ReceiveUnPossess
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       UnpossessedPawn                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFreddyAIController_C::ReceiveUnPossess(class APawn* UnpossessedPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddyAIController.FreddyAIController_C.ReceiveUnPossess");
		
		AFreddyAIController_C_ReceiveUnPossess_Params params {};
		params.UnpossessedPawn = UnpossessedPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FreddyAIController.FreddyAIController_C.SnapToPowerStation
	 * 		Flags  -> ()
	 */
	void AFreddyAIController_C::SnapToPowerStation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddyAIController.FreddyAIController_C.SnapToPowerStation");
		
		AFreddyAIController_C_SnapToPowerStation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FreddyAIController.FreddyAIController_C.GoTo_PowerStation
	 * 		Flags  -> ()
	 */
	void AFreddyAIController_C::GoTo_PowerStation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddyAIController.FreddyAIController_C.GoTo_PowerStation");
		
		AFreddyAIController_C_GoTo_PowerStation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FreddyAIController.FreddyAIController_C.On Tick Freddy Power
	 * 		Flags  -> ()
	 */
	void AFreddyAIController_C::OnTickFreddyPower()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddyAIController.FreddyAIController_C.On Tick Freddy Power");
		
		AFreddyAIController_C_OnTickFreddyPower_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FreddyAIController.FreddyAIController_C.Call Freddy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AGregory_C*                                  GregoryPawn                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFreddyAIController_C::CallFreddy(class AGregory_C* GregoryPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddyAIController.FreddyAIController_C.Call Freddy");
		
		AFreddyAIController_C_CallFreddy_Params params {};
		params.GregoryPawn = GregoryPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FreddyAIController.FreddyAIController_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFreddyAIController_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddyAIController.FreddyAIController_C.ReceiveTick");
		
		AFreddyAIController_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FreddyAIController.FreddyAIController_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AFreddyAIController_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddyAIController.FreddyAIController_C.ReceiveBeginPlay");
		
		AFreddyAIController_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FreddyAIController.FreddyAIController_C.FreddyReachedPowerStation
	 * 		Flags  -> ()
	 */
	void AFreddyAIController_C::FreddyReachedPowerStation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddyAIController.FreddyAIController_C.FreddyReachedPowerStation");
		
		AFreddyAIController_C_FreddyReachedPowerStation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FreddyAIController.FreddyAIController_C.FreddyNearStation
	 * 		Flags  -> ()
	 */
	void AFreddyAIController_C::FreddyNearStation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddyAIController.FreddyAIController_C.FreddyNearStation");
		
		AFreddyAIController_C_FreddyNearStation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FreddyAIController.FreddyAIController_C.OrientFreddyNearStationEvent
	 * 		Flags  -> ()
	 */
	void AFreddyAIController_C::OrientFreddyNearStationEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddyAIController.FreddyAIController_C.OrientFreddyNearStationEvent");
		
		AFreddyAIController_C_OrientFreddyNearStationEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FreddyAIController.FreddyAIController_C.OrientFreddyInsideStationEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InsideStation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFreddyAIController_C::OrientFreddyInsideStationEvent(bool InsideStation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddyAIController.FreddyAIController_C.OrientFreddyInsideStationEvent");
		
		AFreddyAIController_C_OrientFreddyInsideStationEvent_Params params {};
		params.InsideStation = InsideStation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FreddyAIController.FreddyAIController_C.MoveIntoPowerStation
	 * 		Flags  -> ()
	 */
	void AFreddyAIController_C::MoveIntoPowerStation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddyAIController.FreddyAIController_C.MoveIntoPowerStation");
		
		AFreddyAIController_C_MoveIntoPowerStation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FreddyAIController.FreddyAIController_C.FreddyLeaveRechargeStation
	 * 		Flags  -> ()
	 */
	void AFreddyAIController_C::FreddyLeaveRechargeStation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddyAIController.FreddyAIController_C.FreddyLeaveRechargeStation");
		
		AFreddyAIController_C_FreddyLeaveRechargeStation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FreddyAIController.FreddyAIController_C.AttemptDestroy
	 * 		Flags  -> ()
	 */
	void AFreddyAIController_C::AttemptDestroy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddyAIController.FreddyAIController_C.AttemptDestroy");
		
		AFreddyAIController_C_AttemptDestroy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FreddyAIController.FreddyAIController_C.ExecuteUbergraph_FreddyAIController
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFreddyAIController_C::ExecuteUbergraph_FreddyAIController(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddyAIController.FreddyAIController_C.ExecuteUbergraph_FreddyAIController");
		
		AFreddyAIController_C_ExecuteUbergraph_FreddyAIController_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AFreddyAIController_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFreddyAIController_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FreddyAIController.FreddyAIController_C");
		return ptr;
	}

}


