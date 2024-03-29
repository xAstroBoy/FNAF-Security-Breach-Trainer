﻿/**
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
	 * 		Name   -> Function BackstageOfficeLift.BackstageOfficeLift_C.GetLiftAccessTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Start                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FTransform ABackstageOfficeLift_C::GetLiftAccessTransform(bool Start)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BackstageOfficeLift.BackstageOfficeLift_C.GetLiftAccessTransform");
		
		ABackstageOfficeLift_C_GetLiftAccessTransform_Params params {};
		params.Start = Start;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BackstageOfficeLift.BackstageOfficeLift_C.GetTargets
	 * 		Flags  -> ()
	 */
	void ABackstageOfficeLift_C::GetTargets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BackstageOfficeLift.BackstageOfficeLift_C.GetTargets");
		
		ABackstageOfficeLift_C_GetTargets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BackstageOfficeLift.BackstageOfficeLift_C.Fall down__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABackstageOfficeLift_C::Falldown__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BackstageOfficeLift.BackstageOfficeLift_C.Fall down__FinishedFunc");
		
		ABackstageOfficeLift_C_Falldown__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BackstageOfficeLift.BackstageOfficeLift_C.Fall down__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABackstageOfficeLift_C::Falldown__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BackstageOfficeLift.BackstageOfficeLift_C.Fall down__UpdateFunc");
		
		ABackstageOfficeLift_C_Falldown__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BackstageOfficeLift.BackstageOfficeLift_C.Setup Lift Targets
	 * 		Flags  -> ()
	 */
	void ABackstageOfficeLift_C::SetupLiftTargets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BackstageOfficeLift.BackstageOfficeLift_C.Setup Lift Targets");
		
		ABackstageOfficeLift_C_SetupLiftTargets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BackstageOfficeLift.BackstageOfficeLift_C.Target Hit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBackstageLiftTarget_C*                      LiftTarget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABackstageOfficeLift_C::TargetHit(class UBackstageLiftTarget_C* LiftTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BackstageOfficeLift.BackstageOfficeLift_C.Target Hit");
		
		ABackstageOfficeLift_C_TargetHit_Params params {};
		params.LiftTarget = LiftTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BackstageOfficeLift.BackstageOfficeLift_C.Set Moving
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               MovingUp                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABackstageOfficeLift_C::SetMoving(bool MovingUp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BackstageOfficeLift.BackstageOfficeLift_C.Set Moving");
		
		ABackstageOfficeLift_C_SetMoving_Params params {};
		params.MovingUp = MovingUp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BackstageOfficeLift.BackstageOfficeLift_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABackstageOfficeLift_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BackstageOfficeLift.BackstageOfficeLift_C.ReceiveBeginPlay");
		
		ABackstageOfficeLift_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BackstageOfficeLift.BackstageOfficeLift_C.MoveMontyOnLift
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AMoveableLift_C*                             Lift                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Up                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABackstageOfficeLift_C::MoveMontyOnLift(class AMoveableLift_C* Lift, bool Up)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BackstageOfficeLift.BackstageOfficeLift_C.MoveMontyOnLift");
		
		ABackstageOfficeLift_C_MoveMontyOnLift_Params params {};
		params.Lift = Lift;
		params.Up = Up;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BackstageOfficeLift.BackstageOfficeLift_C.FallQuick
	 * 		Flags  -> ()
	 */
	void ABackstageOfficeLift_C::FallQuick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BackstageOfficeLift.BackstageOfficeLift_C.FallQuick");
		
		ABackstageOfficeLift_C_FallQuick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BackstageOfficeLift.BackstageOfficeLift_C.BndEvt__Target_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         HitComponent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     NormalImpulse                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABackstageOfficeLift_C::BndEvt__Target_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BackstageOfficeLift.BackstageOfficeLift_C.BndEvt__Target_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature");
		
		ABackstageOfficeLift_C_BndEvt__Target_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature_Params params {};
		params.HitComponent = HitComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.NormalImpulse = NormalImpulse;
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BackstageOfficeLift.BackstageOfficeLift_C.Teleport Freddy into office
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AMoveableLift_C*                             Lift                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Top                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABackstageOfficeLift_C::TeleportFreddyintooffice(class AMoveableLift_C* Lift, bool Top)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BackstageOfficeLift.BackstageOfficeLift_C.Teleport Freddy into office");
		
		ABackstageOfficeLift_C_TeleportFreddyintooffice_Params params {};
		params.Lift = Lift;
		params.Top = Top;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BackstageOfficeLift.BackstageOfficeLift_C.ExecuteUbergraph_BackstageOfficeLift
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABackstageOfficeLift_C::ExecuteUbergraph_BackstageOfficeLift(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BackstageOfficeLift.BackstageOfficeLift_C.ExecuteUbergraph_BackstageOfficeLift");
		
		ABackstageOfficeLift_C_ExecuteUbergraph_BackstageOfficeLift_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABackstageOfficeLift_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABackstageOfficeLift_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BackstageOfficeLift.BackstageOfficeLift_C");
		return ptr;
	}

}


