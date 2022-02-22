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
	 * 		Name   -> Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.IsInPhase
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      Phase                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               Is_In_Phase                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASecurityOffice_Daycare_C::IsInPhase(const class FString& Phase, bool* Is_In_Phase)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.IsInPhase");

		ASecurityOffice_Daycare_C_IsInPhase_Params params{};
		params.Phase = Phase;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		if (Is_In_Phase != nullptr)
			*Is_In_Phase = params.Is_In_Phase;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.GetFirstOverlappingLight
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Found                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class ABP_GeneratorIndicator_C*                    Light                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASecurityOffice_Daycare_C::GetFirstOverlappingLight(bool* Found, class ABP_GeneratorIndicator_C** Light)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.GetFirstOverlappingLight");

		ASecurityOffice_Daycare_C_GetFirstOverlappingLight_Params params{};

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		if (Found != nullptr)
			*Found = params.Found;
		if (Light != nullptr)
			*Light = params.Light;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.CheckGeneratorStage
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Stage_2                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASecurityOffice_Daycare_C::CheckGeneratorStage(bool* Stage_2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.CheckGeneratorStage");

		ASecurityOffice_Daycare_C_CheckGeneratorStage_Params params{};

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		if (Stage_2 != nullptr)
			*Stage_2 = params.Stage_2;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.GetClosestActiveNoiseMaker
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Found                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class ABP_NoiseMakingTowerDaycareInteractible_C*   Noise_Maker                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASecurityOffice_Daycare_C::GetClosestActiveNoiseMaker(bool* Found, class ABP_NoiseMakingTowerDaycareInteractible_C** Noise_Maker)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.GetClosestActiveNoiseMaker");

		ASecurityOffice_Daycare_C_GetClosestActiveNoiseMaker_Params params{};

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		if (Found != nullptr)
			*Found = params.Found;
		if (Noise_Maker != nullptr)
			*Noise_Maker = params.Noise_Maker;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.CanPlayerInteract
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CanInteract                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		fnaf9_EConditionFailReason                         CantReason                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASecurityOffice_Daycare_C::CanPlayerInteract(bool* CanInteract, fnaf9_EConditionFailReason* CantReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.CanPlayerInteract");

		ASecurityOffice_Daycare_C_CanPlayerInteract_Params params{};

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		if (CanInteract != nullptr)
			*CanInteract = params.CanInteract;
		if (CantReason != nullptr)
			*CantReason = params.CantReason;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.SetDeskBlockers
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		Engine_ECollisionEnabled                           NewType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASecurityOffice_Daycare_C::SetDeskBlockers(Engine_ECollisionEnabled NewType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.SetDeskBlockers");

		ASecurityOffice_Daycare_C_SetDeskBlockers_Params params{};
		params.NewType = NewType;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.Moonman
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Sunman                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UBehaviorTree*                               Behavior_Tree                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    Roation                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	 //void ASecurityOffice_Daycare_C::Moonman(bool Sunman, class UBehaviorTree* Behavior_Tree, const struct FVector& Location, const struct FRotator& Roation)
	 //{
	 //	static UFunction* fn = nullptr;
	 //	if (!fn)
	 //		fn = UObject::FindObject<UFunction>("Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.Moonman");
	 //	
	 //	ASecurityOffice_Daycare_C_Moonman_Params params {};
	 //	params.Sunman = Sunman;
	 //	params.Behavior_Tree = Behavior_Tree;
	 //	params.Location = Location;
	 //	params.Roation = Roation;
	 //	
	 //	auto flags = fn->FunctionFlags;
	 //	UObject::ProcessEvent(fn, &params);
	 //	fn->FunctionFlags = flags;
	 //}

	 /**
	  * Function:
	  * 		Offset -> 0x00EE6700
	  * 		Name   -> Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.On Office Game Activated
	  * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	  */
	void ASecurityOffice_Daycare_C::On_Office_Game_Activated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.On Office Game Activated");

		ASecurityOffice_Daycare_C_On_Office_Game_Activated_Params params{};

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.On Scenario Changed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASecurityOffice_Daycare_C::On_Scenario_Changed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.On Scenario Changed");

		ASecurityOffice_Daycare_C_On_Scenario_Changed_Params params{};

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.Spawn Sunman
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASecurityOffice_Daycare_C::Spawn_Sunman()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.Spawn Sunman");

		ASecurityOffice_Daycare_C_Spawn_Sunman_Params params{};

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.Spawn Moonman Phase 1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASecurityOffice_Daycare_C::Spawn_Moonman_Phase_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.Spawn Moonman Phase 1");

		ASecurityOffice_Daycare_C_Spawn_Moonman_Phase_1_Params params{};

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.Spawn Moonman Phase 2
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    Rotation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASecurityOffice_Daycare_C::Spawn_Moonman_Phase_2(const struct FVector& Location, const struct FRotator& Rotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.Spawn Moonman Phase 2");

		ASecurityOffice_Daycare_C_Spawn_Moonman_Phase_2_Params params{};
		params.Location = Location;
		params.Rotation = Rotation;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ASecurityOffice_Daycare_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.ReceiveBeginPlay");

		ASecurityOffice_Daycare_C_ReceiveBeginPlay_Params params{};

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.Spawn Moonman Phase 2 Spline Follower
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    Rotation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASecurityOffice_Daycare_C::Spawn_Moonman_Phase_2_Spline_Follower(const struct FVector& Location, const struct FRotator& Rotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.Spawn Moonman Phase 2 Spline Follower");

		ASecurityOffice_Daycare_C_Spawn_Moonman_Phase_2_Spline_Follower_Params params{};
		params.Location = Location;
		params.Rotation = Rotation;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.Generator Activated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Count                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Activator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASecurityOffice_Daycare_C::Generator_Activated(int32_t Count, class AActor* Activator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.Generator Activated");

		ASecurityOffice_Daycare_C_Generator_Activated_Params params{};
		params.Count = Count;
		params.Activator = Activator;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.BndEvt__PlayerBlocker_0_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         HitComponent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     NormalImpulse                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ASecurityOffice_Daycare_C::BndEvt__PlayerBlocker_0_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.BndEvt__PlayerBlocker_0_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");

		ASecurityOffice_Daycare_C_BndEvt__PlayerBlocker_0_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params params{};
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.BndEvt__PlayerBlocker_1_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         HitComponent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     NormalImpulse                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ASecurityOffice_Daycare_C::BndEvt__PlayerBlocker_1_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.BndEvt__PlayerBlocker_1_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature");

		ASecurityOffice_Daycare_C_BndEvt__PlayerBlocker_1_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature_Params params{};
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.Player Leaving Desk Area no flashlight
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASecurityOffice_Daycare_C::Player_Leaving_Desk_Area_no_flashlight(class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.Player Leaving Desk Area no flashlight");

		ASecurityOffice_Daycare_C_Player_Leaving_Desk_Area_no_flashlight_Params params{};
		params.OtherActor = OtherActor;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.BndEvt__FlashlightCollectListener_K2Node_ComponentBoundEvent_2_OnCorrectItemCollectedDelegate__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ASecurityOffice_Daycare_C::BndEvt__FlashlightCollectListener_K2Node_ComponentBoundEvent_2_OnCorrectItemCollectedDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.BndEvt__FlashlightCollectListener_K2Node_ComponentBoundEvent_2_OnCorrectItemCollectedDelegate__DelegateSignature");

		ASecurityOffice_Daycare_C_BndEvt__FlashlightCollectListener_K2Node_ComponentBoundEvent_2_OnCorrectItemCollectedDelegate__DelegateSignature_Params params{};

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.BndEvt__DeskArea_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ASecurityOffice_Daycare_C::BndEvt__DeskArea_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.BndEvt__DeskArea_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature");

		ASecurityOffice_Daycare_C_BndEvt__DeskArea_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature_Params params{};
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
	 * 		Name   -> Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.BndEvt__DeskArea_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASecurityOffice_Daycare_C::BndEvt__DeskArea_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.BndEvt__DeskArea_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature");

		ASecurityOffice_Daycare_C_BndEvt__DeskArea_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature_Params params{};
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
	 * 		Name   -> Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.EnterPhase1Chase
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASecurityOffice_Daycare_C::EnterPhase1Chase()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.EnterPhase1Chase");

		ASecurityOffice_Daycare_C_EnterPhase1Chase_Params params{};

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.EnterPhase5PlayerInLight
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     InvestigationLocation                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASecurityOffice_Daycare_C::EnterPhase5PlayerInLight(const struct FVector& InvestigationLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.EnterPhase5PlayerInLight");

		ASecurityOffice_Daycare_C_EnterPhase5PlayerInLight_Params params{};
		params.InvestigationLocation = InvestigationLocation;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.EnterPhase4End
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASecurityOffice_Daycare_C::EnterPhase4End()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.EnterPhase4End");

		ASecurityOffice_Daycare_C_EnterPhase4End_Params params{};

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.EnterPhase3DeskPace
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASecurityOffice_Daycare_C::EnterPhase3DeskPace()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.EnterPhase3DeskPace");

		ASecurityOffice_Daycare_C_EnterPhase3DeskPace_Params params{};

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.EnterPhase2Noisemaker
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABP_NoiseMakingTowerDaycareInteractible_C*   NoiseMaker                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASecurityOffice_Daycare_C::EnterPhase2Noisemaker(class ABP_NoiseMakingTowerDaycareInteractible_C* NoiseMaker)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.EnterPhase2Noisemaker");

		ASecurityOffice_Daycare_C_EnterPhase2Noisemaker_Params params{};
		params.NoiseMaker = NoiseMaker;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.EnterPhase1Wait
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASecurityOffice_Daycare_C::EnterPhase1Wait()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.EnterPhase1Wait");

		ASecurityOffice_Daycare_C_EnterPhase1Wait_Params params{};

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.EnterPhase1Carry
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASecurityOffice_Daycare_C::EnterPhase1Carry()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.EnterPhase1Carry");

		ASecurityOffice_Daycare_C_EnterPhase1Carry_Params params{};

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.EnterPhase1Dance
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASecurityOffice_Daycare_C::EnterPhase1Dance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.EnterPhase1Dance");

		ASecurityOffice_Daycare_C_EnterPhase1Dance_Params params{};

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.ExitPhase5PlayerInLight
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASecurityOffice_Daycare_C::ExitPhase5PlayerInLight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.ExitPhase5PlayerInLight");

		ASecurityOffice_Daycare_C_ExitPhase5PlayerInLight_Params params{};

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.ExitPhase3DeskPace
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASecurityOffice_Daycare_C::ExitPhase3DeskPace()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.ExitPhase3DeskPace");

		ASecurityOffice_Daycare_C_ExitPhase3DeskPace_Params params{};

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.On Doors Opened
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASecurityOffice_Daycare_C::On_Doors_Opened()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.On Doors Opened");

		ASecurityOffice_Daycare_C_On_Doors_Opened_Params params{};

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.BndEvt__DeskArea1_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ASecurityOffice_Daycare_C::BndEvt__DeskArea1_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.BndEvt__DeskArea1_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature");

		ASecurityOffice_Daycare_C_BndEvt__DeskArea1_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature_Params params{};
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
	 * 		Name   -> Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.SequenceOnStop
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASecurityOffice_Daycare_C::SequenceOnStop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.SequenceOnStop");

		ASecurityOffice_Daycare_C_SequenceOnStop_Params params{};

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.SetMazeState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               InsideMaze                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    Rotation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASecurityOffice_Daycare_C::SetMazeState(bool InsideMaze, const struct FVector& Location, const struct FRotator& Rotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.SetMazeState");

		ASecurityOffice_Daycare_C_SetMazeState_Params params{};
		params.InsideMaze = InsideMaze;
		params.Location = Location;
		params.Rotation = Rotation;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.Phase3Maze
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASecurityOffice_Daycare_C::Phase3Maze()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.Phase3Maze");

		ASecurityOffice_Daycare_C_Phase3Maze_Params params{};

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.EnterSplinePathToExit
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASecurityOffice_Daycare_C::EnterSplinePathToExit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.EnterSplinePathToExit");

		ASecurityOffice_Daycare_C_EnterSplinePathToExit_Params params{};

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.EnterPhase2PathToEntrance
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASecurityOffice_Daycare_C::EnterPhase2PathToEntrance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.EnterPhase2PathToEntrance");

		ASecurityOffice_Daycare_C_EnterPhase2PathToEntrance_Params params{};

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.CompleteFlashlightTask
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASecurityOffice_Daycare_C::CompleteFlashlightTask()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.CompleteFlashlightTask");

		ASecurityOffice_Daycare_C_CompleteFlashlightTask_Params params{};

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.EnterMazeTransition
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASecurityOffice_Daycare_C::EnterMazeTransition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.EnterMazeTransition");

		ASecurityOffice_Daycare_C_EnterMazeTransition_Params params{};

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.Sunman setup
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASecurityOffice_Daycare_C::Sunman_setup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.Sunman setup");

		ASecurityOffice_Daycare_C_Sunman_setup_Params params{};

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.DaycareEndCleanup
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASecurityOffice_Daycare_C::DaycareEndCleanup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.DaycareEndCleanup");

		ASecurityOffice_Daycare_C_DaycareEndCleanup_Params params{};

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.ExecuteUbergraph_SecurityOffice_Daycare
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASecurityOffice_Daycare_C::ExecuteUbergraph_SecurityOffice_Daycare(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.ExecuteUbergraph_SecurityOffice_Daycare");

		ASecurityOffice_Daycare_C_ExecuteUbergraph_SecurityOffice_Daycare_Params params{};
		params.EntryPoint = EntryPoint;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ASecurityOffice_Daycare_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASecurityOffice_Daycare_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SecurityOffice_Daycare.SecurityOffice_Daycare_C");
		return ptr;
	}

}

