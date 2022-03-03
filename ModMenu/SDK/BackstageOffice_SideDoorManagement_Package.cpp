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
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function BackstageOffice_SideDoorManagement.BackstageOffice_SideDoorManagement_C.CanDeactivate
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CanDeactivate                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABackstageOffice_SideDoorManagement_C::CanDeactivate(bool* CanDeactivate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BackstageOffice_SideDoorManagement.BackstageOffice_SideDoorManagement_C.CanDeactivate");
		
		ABackstageOffice_SideDoorManagement_C_CanDeactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanDeactivate != nullptr)
			*CanDeactivate = params.CanDeactivate;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function BackstageOffice_SideDoorManagement.BackstageOffice_SideDoorManagement_C.GetActivatableState
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Activator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ActivatableState_EActivatableState                 CurrentState                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABackstageOffice_SideDoorManagement_C::GetActivatableState(class AActor* Activator, ActivatableState_EActivatableState* CurrentState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BackstageOffice_SideDoorManagement.BackstageOffice_SideDoorManagement_C.GetActivatableState");
		
		ABackstageOffice_SideDoorManagement_C_GetActivatableState_Params params {};
		params.Activator = Activator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CurrentState != nullptr)
			*CurrentState = params.CurrentState;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function BackstageOffice_SideDoorManagement.BackstageOffice_SideDoorManagement_C.CanActivate
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Activator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CanActivate                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		fnaf9_EConditionFailReason                         CantReason                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABackstageOffice_SideDoorManagement_C::CanActivate(class AActor* Activator, bool* CanActivate, fnaf9_EConditionFailReason* CantReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BackstageOffice_SideDoorManagement.BackstageOffice_SideDoorManagement_C.CanActivate");
		
		ABackstageOffice_SideDoorManagement_C_CanActivate_Params params {};
		params.Activator = Activator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanActivate != nullptr)
			*CanActivate = params.CanActivate;
		if (CantReason != nullptr)
			*CantReason = params.CantReason;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function BackstageOffice_SideDoorManagement.BackstageOffice_SideDoorManagement_C.Setup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AOGM_BackStage_C*                            BackstageOGM                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Drain_Amount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABackstageOffice_SideDoorManagement_C::Setup(class AOGM_BackStage_C* BackstageOGM, float Drain_Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BackstageOffice_SideDoorManagement.BackstageOffice_SideDoorManagement_C.Setup");
		
		ABackstageOffice_SideDoorManagement_C_Setup_Params params {};
		params.BackstageOGM = BackstageOGM;
		params.Drain_Amount = Drain_Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function BackstageOffice_SideDoorManagement.BackstageOffice_SideDoorManagement_C.GetAdjacentPoint
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            DoorLevel                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            DoorIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SelectedDoorIndex                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FVector ABackstageOffice_SideDoorManagement_C::GetAdjacentPoint(int32_t DoorLevel, int32_t DoorIndex, int32_t* SelectedDoorIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BackstageOffice_SideDoorManagement.BackstageOffice_SideDoorManagement_C.GetAdjacentPoint");
		
		ABackstageOffice_SideDoorManagement_C_GetAdjacentPoint_Params params {};
		params.DoorLevel = DoorLevel;
		params.DoorIndex = DoorIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SelectedDoorIndex != nullptr)
			*SelectedDoorIndex = params.SelectedDoorIndex;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function BackstageOffice_SideDoorManagement.BackstageOffice_SideDoorManagement_C.GetNextDoorPoint
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            DoorLevel                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            DoorIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            PointIndex                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ReachedOffice                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FVector ABackstageOffice_SideDoorManagement_C::GetNextDoorPoint(int32_t DoorLevel, int32_t DoorIndex, int32_t* PointIndex, bool* ReachedOffice)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BackstageOffice_SideDoorManagement.BackstageOffice_SideDoorManagement_C.GetNextDoorPoint");
		
		ABackstageOffice_SideDoorManagement_C_GetNextDoorPoint_Params params {};
		params.DoorLevel = DoorLevel;
		params.DoorIndex = DoorIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PointIndex != nullptr)
			*PointIndex = params.PointIndex;
		if (ReachedOffice != nullptr)
			*ReachedOffice = params.ReachedOffice;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function BackstageOffice_SideDoorManagement.BackstageOffice_SideDoorManagement_C.DrainPower
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABackstageOffice_SideDoorManagement_C::DrainPower(float Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BackstageOffice_SideDoorManagement.BackstageOffice_SideDoorManagement_C.DrainPower");
		
		ABackstageOffice_SideDoorManagement_C_DrainPower_Params params {};
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function BackstageOffice_SideDoorManagement.BackstageOffice_SideDoorManagement_C.SetDoorsLocked
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Locked                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABackstageOffice_SideDoorManagement_C::SetDoorsLocked(bool Locked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BackstageOffice_SideDoorManagement.BackstageOffice_SideDoorManagement_C.SetDoorsLocked");
		
		ABackstageOffice_SideDoorManagement_C_SetDoorsLocked_Params params {};
		params.Locked = Locked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function BackstageOffice_SideDoorManagement.BackstageOffice_SideDoorManagement_C.OnActivatorDone
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Activator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABackstageOffice_SideDoorManagement_C::OnActivatorDone(class AActor* Activator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BackstageOffice_SideDoorManagement.BackstageOffice_SideDoorManagement_C.OnActivatorDone");
		
		ABackstageOffice_SideDoorManagement_C_OnActivatorDone_Params params {};
		params.Activator = Activator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function BackstageOffice_SideDoorManagement.BackstageOffice_SideDoorManagement_C.SetActivated
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABackstageOffice_SideDoorManagement_C::SetActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BackstageOffice_SideDoorManagement.BackstageOffice_SideDoorManagement_C.SetActivated");
		
		ABackstageOffice_SideDoorManagement_C_SetActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function BackstageOffice_SideDoorManagement.BackstageOffice_SideDoorManagement_C.DeactivateObject
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Deactivator                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABackstageOffice_SideDoorManagement_C::DeactivateObject(class AActor* Deactivator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BackstageOffice_SideDoorManagement.BackstageOffice_SideDoorManagement_C.DeactivateObject");
		
		ABackstageOffice_SideDoorManagement_C_DeactivateObject_Params params {};
		params.Deactivator = Deactivator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function BackstageOffice_SideDoorManagement.BackstageOffice_SideDoorManagement_C.SetDeactivated
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABackstageOffice_SideDoorManagement_C::SetDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BackstageOffice_SideDoorManagement.BackstageOffice_SideDoorManagement_C.SetDeactivated");
		
		ABackstageOffice_SideDoorManagement_C_SetDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function BackstageOffice_SideDoorManagement.BackstageOffice_SideDoorManagement_C.Startup
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABackstageOffice_SideDoorManagement_C::Startup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BackstageOffice_SideDoorManagement.BackstageOffice_SideDoorManagement_C.Startup");
		
		ABackstageOffice_SideDoorManagement_C_Startup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function BackstageOffice_SideDoorManagement.BackstageOffice_SideDoorManagement_C.ActivateObject
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Activator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABackstageOffice_SideDoorManagement_C::ActivateObject(class AActor* Activator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BackstageOffice_SideDoorManagement.BackstageOffice_SideDoorManagement_C.ActivateObject");
		
		ABackstageOffice_SideDoorManagement_C_ActivateObject_Params params {};
		params.Activator = Activator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function BackstageOffice_SideDoorManagement.BackstageOffice_SideDoorManagement_C.Shock Doors
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class AActor*>                              Actors_To_Stun                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void ABackstageOffice_SideDoorManagement_C::Shock_Doors(TArray<class AActor*> Actors_To_Stun)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BackstageOffice_SideDoorManagement.BackstageOffice_SideDoorManagement_C.Shock Doors");
		
		ABackstageOffice_SideDoorManagement_C_Shock_Doors_Params params {};
		params.Actors_To_Stun = Actors_To_Stun;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function BackstageOffice_SideDoorManagement.BackstageOffice_SideDoorManagement_C.On Character Moved In
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABackstageOffice_SideDoorManagement_C::On_Character_Moved_In()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BackstageOffice_SideDoorManagement.BackstageOffice_SideDoorManagement_C.On Character Moved In");
		
		ABackstageOffice_SideDoorManagement_C_On_Character_Moved_In_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function BackstageOffice_SideDoorManagement.BackstageOffice_SideDoorManagement_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABackstageOffice_SideDoorManagement_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BackstageOffice_SideDoorManagement.BackstageOffice_SideDoorManagement_C.ReceiveTick");
		
		ABackstageOffice_SideDoorManagement_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function BackstageOffice_SideDoorManagement.BackstageOffice_SideDoorManagement_C.Outer Doors Unlocked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABackstageOffice_SideDoorManagement_C::Outer_Doors_Unlocked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BackstageOffice_SideDoorManagement.BackstageOffice_SideDoorManagement_C.Outer Doors Unlocked");
		
		ABackstageOffice_SideDoorManagement_C_Outer_Doors_Unlocked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function BackstageOffice_SideDoorManagement.BackstageOffice_SideDoorManagement_C.ExecuteUbergraph_BackstageOffice_SideDoorManagement
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABackstageOffice_SideDoorManagement_C::ExecuteUbergraph_BackstageOffice_SideDoorManagement(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BackstageOffice_SideDoorManagement.BackstageOffice_SideDoorManagement_C.ExecuteUbergraph_BackstageOffice_SideDoorManagement");
		
		ABackstageOffice_SideDoorManagement_C_ExecuteUbergraph_BackstageOffice_SideDoorManagement_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function BackstageOffice_SideDoorManagement.BackstageOffice_SideDoorManagement_C.OnShockChangeStatus__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABackstageOffice_SideDoorManagement_C::OnShockChangeStatus__DelegateSignature(bool NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BackstageOffice_SideDoorManagement.BackstageOffice_SideDoorManagement_C.OnShockChangeStatus__DelegateSignature");
		
		ABackstageOffice_SideDoorManagement_C_OnShockChangeStatus__DelegateSignature_Params params {};
		params.NewParam = NewParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function BackstageOffice_SideDoorManagement.BackstageOffice_SideDoorManagement_C.OnDoorBusted__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            DoorLevel                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABackstageOffice_SideDoorManagement_C::OnDoorBusted__DelegateSignature(int32_t DoorLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BackstageOffice_SideDoorManagement.BackstageOffice_SideDoorManagement_C.OnDoorBusted__DelegateSignature");
		
		ABackstageOffice_SideDoorManagement_C_OnDoorBusted__DelegateSignature_Params params {};
		params.DoorLevel = DoorLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function BackstageOffice_SideDoorManagement.BackstageOffice_SideDoorManagement_C.OnDoorsElectrified__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Electrified                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABackstageOffice_SideDoorManagement_C::OnDoorsElectrified__DelegateSignature(bool Electrified)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BackstageOffice_SideDoorManagement.BackstageOffice_SideDoorManagement_C.OnDoorsElectrified__DelegateSignature");
		
		ABackstageOffice_SideDoorManagement_C_OnDoorsElectrified__DelegateSignature_Params params {};
		params.Electrified = Electrified;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ABackstageOffice_SideDoorManagement_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABackstageOffice_SideDoorManagement_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BackstageOffice_SideDoorManagement.BackstageOffice_SideDoorManagement_C");
		return ptr;
	}

}


