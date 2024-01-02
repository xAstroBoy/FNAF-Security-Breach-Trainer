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
	 * 		Name   -> Function EQ_LaserGun.EQ_LaserGun_C.Get Anim Item Type
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EGregoryAnimItemEnum                               AnimType                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AEQ_LaserGun_C::GetAnimItemType(EGregoryAnimItemEnum* AnimType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EQ_LaserGun.EQ_LaserGun_C.Get Anim Item Type");
		
		AEQ_LaserGun_C_GetAnimItemType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimType != nullptr)
			*AnimType = params.AnimType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EQ_LaserGun.EQ_LaserGun_C.SetBlasterUseFOV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               UseFOV                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AEQ_LaserGun_C::SetBlasterUseFOV(bool UseFOV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EQ_LaserGun.EQ_LaserGun_C.SetBlasterUseFOV");
		
		AEQ_LaserGun_C_SetBlasterUseFOV_Params params {};
		params.UseFOV = UseFOV;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EQ_LaserGun.EQ_LaserGun_C.ShouldFireGun
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Fire                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AEQ_LaserGun_C::ShouldFireGun(bool* Fire)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EQ_LaserGun.EQ_LaserGun_C.ShouldFireGun");
		
		AEQ_LaserGun_C_ShouldFireGun_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Fire != nullptr)
			*Fire = params.Fire;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EQ_LaserGun.EQ_LaserGun_C.FireGun
	 * 		Flags  -> ()
	 */
	void AEQ_LaserGun_C::FireGun()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EQ_LaserGun.EQ_LaserGun_C.FireGun");
		
		AEQ_LaserGun_C_FireGun_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EQ_LaserGun.EQ_LaserGun_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AEQ_LaserGun_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EQ_LaserGun.EQ_LaserGun_C.UserConstructionScript");
		
		AEQ_LaserGun_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EQ_LaserGun.EQ_LaserGun_C.PullUpGun__FinishedFunc
	 * 		Flags  -> ()
	 */
	void AEQ_LaserGun_C::PullUpGun__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EQ_LaserGun.EQ_LaserGun_C.PullUpGun__FinishedFunc");
		
		AEQ_LaserGun_C_PullUpGun__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EQ_LaserGun.EQ_LaserGun_C.PullUpGun__UpdateFunc
	 * 		Flags  -> ()
	 */
	void AEQ_LaserGun_C::PullUpGun__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EQ_LaserGun.EQ_LaserGun_C.PullUpGun__UpdateFunc");
		
		AEQ_LaserGun_C_PullUpGun__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EQ_LaserGun.EQ_LaserGun_C.MoveGun__FinishedFunc
	 * 		Flags  -> ()
	 */
	void AEQ_LaserGun_C::MoveGun__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EQ_LaserGun.EQ_LaserGun_C.MoveGun__FinishedFunc");
		
		AEQ_LaserGun_C_MoveGun__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EQ_LaserGun.EQ_LaserGun_C.MoveGun__UpdateFunc
	 * 		Flags  -> ()
	 */
	void AEQ_LaserGun_C::MoveGun__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EQ_LaserGun.EQ_LaserGun_C.MoveGun__UpdateFunc");
		
		AEQ_LaserGun_C_MoveGun__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EQ_LaserGun.EQ_LaserGun_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AEQ_LaserGun_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EQ_LaserGun.EQ_LaserGun_C.ReceiveBeginPlay");
		
		AEQ_LaserGun_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EQ_LaserGun.EQ_LaserGun_C.PrimaryAction
	 * 		Flags  -> ()
	 */
	void AEQ_LaserGun_C::PrimaryAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EQ_LaserGun.EQ_LaserGun_C.PrimaryAction");
		
		AEQ_LaserGun_C_PrimaryAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EQ_LaserGun.EQ_LaserGun_C.SecondaryAction
	 * 		Flags  -> ()
	 */
	void AEQ_LaserGun_C::SecondaryAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EQ_LaserGun.EQ_LaserGun_C.SecondaryAction");
		
		AEQ_LaserGun_C_SecondaryAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EQ_LaserGun.EQ_LaserGun_C.PullOut
	 * 		Flags  -> ()
	 */
	void AEQ_LaserGun_C::PullOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EQ_LaserGun.EQ_LaserGun_C.PullOut");
		
		AEQ_LaserGun_C_PullOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EQ_LaserGun.EQ_LaserGun_C.PutAway
	 * 		Flags  -> ()
	 */
	void AEQ_LaserGun_C::PutAway()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EQ_LaserGun.EQ_LaserGun_C.PutAway");
		
		AEQ_LaserGun_C_PutAway_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EQ_LaserGun.EQ_LaserGun_C.Recharge
	 * 		Flags  -> ()
	 */
	void AEQ_LaserGun_C::Recharge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EQ_LaserGun.EQ_LaserGun_C.Recharge");
		
		AEQ_LaserGun_C_Recharge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EQ_LaserGun.EQ_LaserGun_C.OnRechargeUIDone
	 * 		Flags  -> ()
	 */
	void AEQ_LaserGun_C::OnRechargeUIDone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EQ_LaserGun.EQ_LaserGun_C.OnRechargeUIDone");
		
		AEQ_LaserGun_C_OnRechargeUIDone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EQ_LaserGun.EQ_LaserGun_C.BndEvt__MissionStateHandler_K2Node_ComponentBoundEvent_0_OnMissionStateHit__DelegateSignature
	 * 		Flags  -> ()
	 */
	void AEQ_LaserGun_C::BndEvt__MissionStateHandler_K2Node_ComponentBoundEvent_0_OnMissionStateHit__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EQ_LaserGun.EQ_LaserGun_C.BndEvt__MissionStateHandler_K2Node_ComponentBoundEvent_0_OnMissionStateHit__DelegateSignature");
		
		AEQ_LaserGun_C_BndEvt__MissionStateHandler_K2Node_ComponentBoundEvent_0_OnMissionStateHit__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EQ_LaserGun.EQ_LaserGun_C.BndEvt__MissionStateHandler_K2Node_ComponentBoundEvent_1_OnMissionStateAleadyHit__DelegateSignature
	 * 		Flags  -> ()
	 */
	void AEQ_LaserGun_C::BndEvt__MissionStateHandler_K2Node_ComponentBoundEvent_1_OnMissionStateAleadyHit__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EQ_LaserGun.EQ_LaserGun_C.BndEvt__MissionStateHandler_K2Node_ComponentBoundEvent_1_OnMissionStateAleadyHit__DelegateSignature");
		
		AEQ_LaserGun_C_BndEvt__MissionStateHandler_K2Node_ComponentBoundEvent_1_OnMissionStateAleadyHit__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EQ_LaserGun.EQ_LaserGun_C.SetToOriginalMaterial
	 * 		Flags  -> ()
	 */
	void AEQ_LaserGun_C::SetToOriginalMaterial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EQ_LaserGun.EQ_LaserGun_C.SetToOriginalMaterial");
		
		AEQ_LaserGun_C_SetToOriginalMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EQ_LaserGun.EQ_LaserGun_C.ExecuteUbergraph_EQ_LaserGun
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AEQ_LaserGun_C::ExecuteUbergraph_EQ_LaserGun(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EQ_LaserGun.EQ_LaserGun_C.ExecuteUbergraph_EQ_LaserGun");
		
		AEQ_LaserGun_C_ExecuteUbergraph_EQ_LaserGun_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AEQ_LaserGun_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AEQ_LaserGun_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass EQ_LaserGun.EQ_LaserGun_C");
		return ptr;
	}

}


