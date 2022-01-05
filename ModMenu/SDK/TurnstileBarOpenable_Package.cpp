/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "TurnstileBarOpenable_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TurnstileBarOpenable.TurnstileBarOpenable_C.HasDoorInitialized
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	bool ATurnstileBarOpenable_C::HasDoorInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TurnstileBarOpenable.TurnstileBarOpenable_C.HasDoorInitialized");
		
		ATurnstileBarOpenable_C_HasDoorInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TurnstileBarOpenable.TurnstileBarOpenable_C.IsDoorLockedForPlayer
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	bool ATurnstileBarOpenable_C::IsDoorLockedForPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TurnstileBarOpenable.TurnstileBarOpenable_C.IsDoorLockedForPlayer");
		
		ATurnstileBarOpenable_C_IsDoorLockedForPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TurnstileBarOpenable.TurnstileBarOpenable_C.IsDoorOpen
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	bool ATurnstileBarOpenable_C::IsDoorOpen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TurnstileBarOpenable.TurnstileBarOpenable_C.IsDoorOpen");
		
		ATurnstileBarOpenable_C_IsDoorOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TurnstileBarOpenable.TurnstileBarOpenable_C.IsDoorLockedForAI
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	bool ATurnstileBarOpenable_C::IsDoorLockedForAI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TurnstileBarOpenable.TurnstileBarOpenable_C.IsDoorLockedForAI");
		
		ATurnstileBarOpenable_C_IsDoorLockedForAI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TurnstileBarOpenable.TurnstileBarOpenable_C.GateOpen__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATurnstileBarOpenable_C::GateOpen__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TurnstileBarOpenable.TurnstileBarOpenable_C.GateOpen__FinishedFunc");
		
		ATurnstileBarOpenable_C_GateOpen__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TurnstileBarOpenable.TurnstileBarOpenable_C.GateOpen__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATurnstileBarOpenable_C::GateOpen__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TurnstileBarOpenable.TurnstileBarOpenable_C.GateOpen__UpdateFunc");
		
		ATurnstileBarOpenable_C_GateOpen__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TurnstileBarOpenable.TurnstileBarOpenable_C.SetDoorLockPlayer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Lock                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATurnstileBarOpenable_C::SetDoorLockPlayer(bool Lock)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TurnstileBarOpenable.TurnstileBarOpenable_C.SetDoorLockPlayer");
		
		ATurnstileBarOpenable_C_SetDoorLockPlayer_Params params {};
		params.Lock = Lock;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TurnstileBarOpenable.TurnstileBarOpenable_C.SetDoorRequiredItem
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        ItemName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATurnstileBarOpenable_C::SetDoorRequiredItem(const class FName& ItemName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TurnstileBarOpenable.TurnstileBarOpenable_C.SetDoorRequiredItem");
		
		ATurnstileBarOpenable_C_SetDoorRequiredItem_Params params {};
		params.ItemName = ItemName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TurnstileBarOpenable.TurnstileBarOpenable_C.SetSecurityLevel
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                NewSecurityLevel                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATurnstileBarOpenable_C::SetSecurityLevel(int NewSecurityLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TurnstileBarOpenable.TurnstileBarOpenable_C.SetSecurityLevel");
		
		ATurnstileBarOpenable_C_SetSecurityLevel_Params params {};
		params.NewSecurityLevel = NewSecurityLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TurnstileBarOpenable.TurnstileBarOpenable_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ATurnstileBarOpenable_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TurnstileBarOpenable.TurnstileBarOpenable_C.ReceiveBeginPlay");
		
		ATurnstileBarOpenable_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TurnstileBarOpenable.TurnstileBarOpenable_C.SetDoorLockAI
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Lock                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATurnstileBarOpenable_C::SetDoorLockAI(bool Lock)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TurnstileBarOpenable.TurnstileBarOpenable_C.SetDoorLockAI");
		
		ATurnstileBarOpenable_C_SetDoorLockAI_Params params {};
		params.Lock = Lock;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TurnstileBarOpenable.TurnstileBarOpenable_C.ForceDoorOpen
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATurnstileBarOpenable_C::ForceDoorOpen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TurnstileBarOpenable.TurnstileBarOpenable_C.ForceDoorOpen");
		
		ATurnstileBarOpenable_C_ForceDoorOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TurnstileBarOpenable.TurnstileBarOpenable_C.BndEvt__AIDetector_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int                                                OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ATurnstileBarOpenable_C::BndEvt__AIDetector_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TurnstileBarOpenable.TurnstileBarOpenable_C.BndEvt__AIDetector_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
		
		ATurnstileBarOpenable_C_BndEvt__AIDetector_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
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
	 * 		Name   -> Function TurnstileBarOpenable.TurnstileBarOpenable_C.BndEvt__AIDetector_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int                                                OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATurnstileBarOpenable_C::BndEvt__AIDetector_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TurnstileBarOpenable.TurnstileBarOpenable_C.BndEvt__AIDetector_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");
		
		ATurnstileBarOpenable_C_BndEvt__AIDetector_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TurnstileBarOpenable.TurnstileBarOpenable_C.Open For AI
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATurnstileBarOpenable_C::Open_For_AI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TurnstileBarOpenable.TurnstileBarOpenable_C.Open For AI");
		
		ATurnstileBarOpenable_C_Open_For_AI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TurnstileBarOpenable.TurnstileBarOpenable_C.Close For AI
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATurnstileBarOpenable_C::Close_For_AI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TurnstileBarOpenable.TurnstileBarOpenable_C.Close For AI");
		
		ATurnstileBarOpenable_C_Close_For_AI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TurnstileBarOpenable.TurnstileBarOpenable_C.Unblock Player
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATurnstileBarOpenable_C::Unblock_Player()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TurnstileBarOpenable.TurnstileBarOpenable_C.Unblock Player");
		
		ATurnstileBarOpenable_C_Unblock_Player_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TurnstileBarOpenable.TurnstileBarOpenable_C.Set Gate Collision
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATurnstileBarOpenable_C::Set_Gate_Collision()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TurnstileBarOpenable.TurnstileBarOpenable_C.Set Gate Collision");
		
		ATurnstileBarOpenable_C_Set_Gate_Collision_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TurnstileBarOpenable.TurnstileBarOpenable_C.ForceDoorClose
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATurnstileBarOpenable_C::ForceDoorClose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TurnstileBarOpenable.TurnstileBarOpenable_C.ForceDoorClose");
		
		ATurnstileBarOpenable_C_ForceDoorClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TurnstileBarOpenable.TurnstileBarOpenable_C.ExecuteUbergraph_TurnstileBarOpenable
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATurnstileBarOpenable_C::ExecuteUbergraph_TurnstileBarOpenable(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TurnstileBarOpenable.TurnstileBarOpenable_C.ExecuteUbergraph_TurnstileBarOpenable");
		
		ATurnstileBarOpenable_C_ExecuteUbergraph_TurnstileBarOpenable_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ATurnstileBarOpenable_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATurnstileBarOpenable_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TurnstileBarOpenable.TurnstileBarOpenable_C");
		return ptr;
	}

}


