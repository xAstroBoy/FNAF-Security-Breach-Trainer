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
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.IsMeshVisible
	 * 		Flags  -> ()
	 */
	bool UAnimatronic_ABP_MASTER_C::IsMeshVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.IsMeshVisible");
		
		UAnimatronic_ABP_MASTER_C_IsMeshVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.CanReceiveAlert
	 * 		Flags  -> ()
	 */
	bool UAnimatronic_ABP_MASTER_C::CanReceiveAlert()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.CanReceiveAlert");
		
		UAnimatronic_ABP_MASTER_C_CanReceiveAlert_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.IsShatteredVersion
	 * 		Flags  -> ()
	 */
	bool UAnimatronic_ABP_MASTER_C::IsShatteredVersion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.IsShatteredVersion");
		
		UAnimatronic_ABP_MASTER_C_IsShatteredVersion_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.GetCurrentPathName
	 * 		Flags  -> ()
	 */
	class FName UAnimatronic_ABP_MASTER_C::GetCurrentPathName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.GetCurrentPathName");
		
		UAnimatronic_ABP_MASTER_C_GetCurrentPathName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.GetManagedAIType
	 * 		Flags  -> ()
	 */
	EFNAFAISpawnType UAnimatronic_ABP_MASTER_C::GetManagedAIType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.GetManagedAIType");
		
		UAnimatronic_ABP_MASTER_C_GetManagedAIType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.GetMoveSpeedInput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              MoveSpeed                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimatronic_ABP_MASTER_C::GetMoveSpeedInput(float* MoveSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.GetMoveSpeedInput");
		
		UAnimatronic_ABP_MASTER_C_GetMoveSpeedInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MoveSpeed != nullptr)
			*MoveSpeed = params.MoveSpeed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.Roxy_Dynamics
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   InPose                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FPoseLink                                   Roxy_Dynamics                                              (Parm, OutParm, NoDestructor)
	 */
	void UAnimatronic_ABP_MASTER_C::Roxy_Dynamics(const struct FPoseLink& InPose, struct FPoseLink* Roxy_Dynamics)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.Roxy_Dynamics");
		
		UAnimatronic_ABP_MASTER_C_Roxy_Dynamics_Params params {};
		params.InPose = InPose;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Roxy_Dynamics != nullptr)
			*Roxy_Dynamics = params.Roxy_Dynamics;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UAnimatronic_ABP_MASTER_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.AnimGraph");
		
		UAnimatronic_ABP_MASTER_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.CalculateAndApplyHeadAim
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_MASTER_C::CalculateAndApplyHeadAim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.CalculateAndApplyHeadAim");
		
		UAnimatronic_ABP_MASTER_C_CalculateAndApplyHeadAim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.ScanWhileMovingFunction
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_MASTER_C::ScanWhileMovingFunction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.ScanWhileMovingFunction");
		
		UAnimatronic_ABP_MASTER_C_ScanWhileMovingFunction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.CameraShake_MontyLand
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_MASTER_C::CameraShake_MontyLand()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.CameraShake_MontyLand");
		
		UAnimatronic_ABP_MASTER_C_CameraShake_MontyLand_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.CameraShake
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_MASTER_C::CameraShake()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.CameraShake");
		
		UAnimatronic_ABP_MASTER_C_CameraShake_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.Dynamic Alpha Blend Func
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AlphaVariable                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InterpSpeed                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DefaultValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        CurveName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Output_Get                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimatronic_ABP_MASTER_C::DynamicAlphaBlendFunc(float AlphaVariable, float InterpSpeed, float DefaultValue, const class FName& CurveName, float* Output_Get)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.Dynamic Alpha Blend Func");
		
		UAnimatronic_ABP_MASTER_C_DynamicAlphaBlendFunc_Params params {};
		params.AlphaVariable = AlphaVariable;
		params.InterpSpeed = InterpSpeed;
		params.DefaultValue = DefaultValue;
		params.CurveName = CurveName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Output_Get != nullptr)
			*Output_Get = params.Output_Get;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.ApplyControlRotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       AIPawn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimatronic_ABP_MASTER_C::ApplyControlRotation(class APawn* AIPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.ApplyControlRotation");
		
		UAnimatronic_ABP_MASTER_C_ApplyControlRotation_Params params {};
		params.AIPawn = AIPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.BlendJiggleAlphaToTarget
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_MASTER_C::BlendJiggleAlphaToTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.BlendJiggleAlphaToTarget");
		
		UAnimatronic_ABP_MASTER_C_BlendJiggleAlphaToTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.BlinkFunction
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_MASTER_C::BlinkFunction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.BlinkFunction");
		
		UAnimatronic_ABP_MASTER_C_BlinkFunction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.Procedural Scan
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_MASTER_C::ProceduralScan()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.Procedural Scan");
		
		UAnimatronic_ABP_MASTER_C_ProceduralScan_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.PerformScanTrace
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsRight                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UAnimatronic_ABP_MASTER_C::PerformScanTrace(bool IsRight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.PerformScanTrace");
		
		UAnimatronic_ABP_MASTER_C_PerformScanTrace_Params params {};
		params.IsRight = IsRight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.EnableAnimDynamics
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               AnimDynamics_Ears                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               AnimDynamics_Roxy                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               AnimDynamics_Monty                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               AnimDynamics_Chica                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAnimatronic_ABP_MASTER_C::EnableAnimDynamics(bool AnimDynamics_Ears, bool AnimDynamics_Roxy, bool AnimDynamics_Monty, bool AnimDynamics_Chica)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.EnableAnimDynamics");
		
		UAnimatronic_ABP_MASTER_C_EnableAnimDynamics_Params params {};
		params.AnimDynamics_Ears = AnimDynamics_Ears;
		params.AnimDynamics_Roxy = AnimDynamics_Roxy;
		params.AnimDynamics_Monty = AnimDynamics_Monty;
		params.AnimDynamics_Chica = AnimDynamics_Chica;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.AppyPhysicalAnimationToBone
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InBoneName                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        ProfileName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimatronic_ABP_MASTER_C::AppyPhysicalAnimationToBone(const class FName& InBoneName, const class FName& ProfileName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.AppyPhysicalAnimationToBone");
		
		UAnimatronic_ABP_MASTER_C_AppyPhysicalAnimationToBone_Params params {};
		params.InBoneName = InBoneName;
		params.ProfileName = ProfileName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.SetInitialHeadAimFunction
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_MASTER_C::SetInitialHeadAimFunction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.SetInitialHeadAimFunction");
		
		UAnimatronic_ABP_MASTER_C_SetInitialHeadAimFunction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.Setup Physical Animation
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_MASTER_C::SetupPhysicalAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.Setup Physical Animation");
		
		UAnimatronic_ABP_MASTER_C_SetupPhysicalAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.Perform Foot IK
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               LocalIsRightFoot                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAnimatronic_ABP_MASTER_C::PerformFootIK(bool LocalIsRightFoot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.Perform Foot IK");
		
		UAnimatronic_ABP_MASTER_C_PerformFootIK_Params params {};
		params.LocalIsRightFoot = LocalIsRightFoot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.OverlappingDoor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Overlapping                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      Instigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimatronic_ABP_MASTER_C::OverlappingDoor(bool Overlapping, class AActor* Instigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.OverlappingDoor");
		
		UAnimatronic_ABP_MASTER_C_OverlappingDoor_Params params {};
		params.Overlapping = Overlapping;
		params.Instigator = Instigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.IsHangingEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsHanging                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAnimatronic_ABP_MASTER_C::IsHangingEvent(bool IsHanging)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.IsHangingEvent");
		
		UAnimatronic_ABP_MASTER_C_IsHangingEvent_Params params {};
		params.IsHanging = IsHanging;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.Spotlight Aim Actor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      AimActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimatronic_ABP_MASTER_C::SpotlightAimActor(class AActor* AimActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.Spotlight Aim Actor");
		
		UAnimatronic_ABP_MASTER_C_SpotlightAimActor_Params params {};
		params.AimActor = AimActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.EndoBowlingCrawlEvent
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_MASTER_C::EndoBowlingCrawlEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.EndoBowlingCrawlEvent");
		
		UAnimatronic_ABP_MASTER_C_EndoBowlingCrawlEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.EndoSpawnInBowlingEvent
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_MASTER_C::EndoSpawnInBowlingEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.EndoSpawnInBowlingEvent");
		
		UAnimatronic_ABP_MASTER_C_EndoSpawnInBowlingEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.CanDieEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAnimatronic_ABP_MASTER_C::CanDieEvent(bool Off)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.CanDieEvent");
		
		UAnimatronic_ABP_MASTER_C_CanDieEvent_Params params {};
		params.Off = Off;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.CanHackEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAnimatronic_ABP_MASTER_C::CanHackEvent(bool Off)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.CanHackEvent");
		
		UAnimatronic_ABP_MASTER_C_CanHackEvent_Params params {};
		params.Off = Off;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.FreddyCorrupted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAnimatronic_ABP_MASTER_C::FreddyCorrupted(bool Off)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.FreddyCorrupted");
		
		UAnimatronic_ABP_MASTER_C_FreddyCorrupted_Params params {};
		params.Off = Off;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.ForceAnimOverride
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAnimatronic_ABP_MASTER_C::ForceAnimOverride(bool enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.ForceAnimOverride");
		
		UAnimatronic_ABP_MASTER_C_ForceAnimOverride_Params params {};
		params.enable = enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.ForceScanStates
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OverrideScan                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               CanScan                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               CanScanL                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               CanScanR                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAnimatronic_ABP_MASTER_C::ForceScanStates(bool OverrideScan, bool CanScan, bool CanScanL, bool CanScanR)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.ForceScanStates");
		
		UAnimatronic_ABP_MASTER_C_ForceScanStates_Params params {};
		params.OverrideScan = OverrideScan;
		params.CanScan = CanScan;
		params.CanScanL = CanScanL;
		params.CanScanR = CanScanR;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.IsNotFirstPersonEvent
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_MASTER_C::IsNotFirstPersonEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.IsNotFirstPersonEvent");
		
		UAnimatronic_ABP_MASTER_C_IsNotFirstPersonEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.IsFirstPersonEvent
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_MASTER_C::IsFirstPersonEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.IsFirstPersonEvent");
		
		UAnimatronic_ABP_MASTER_C_IsFirstPersonEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.SearchingDone
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_MASTER_C::SearchingDone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.SearchingDone");
		
		UAnimatronic_ABP_MASTER_C_SearchingDone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.TeleportAI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimatronic_ABP_MASTER_C::TeleportAI(const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.TeleportAI");
		
		UAnimatronic_ABP_MASTER_C_TeleportAI_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.StartMoveTo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimatronic_ABP_MASTER_C::StartMoveTo(const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.StartMoveTo");
		
		UAnimatronic_ABP_MASTER_C_StartMoveTo_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.SendVanessaAlert
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       VanessaPawn                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimatronic_ABP_MASTER_C::SendVanessaAlert(class APawn* VanessaPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.SendVanessaAlert");
		
		UAnimatronic_ABP_MASTER_C_SendVanessaAlert_Params params {};
		params.VanessaPawn = VanessaPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.SendPositionalAlert
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimatronic_ABP_MASTER_C::SendPositionalAlert(const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.SendPositionalAlert");
		
		UAnimatronic_ABP_MASTER_C_SendPositionalAlert_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.ForceJumpscarePlayer
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_MASTER_C::ForceJumpscarePlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.ForceJumpscarePlayer");
		
		UAnimatronic_ABP_MASTER_C_ForceJumpscarePlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.OnCompleted_0FBFA56A4810C9B21318009D4D15B9A9
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimatronic_ABP_MASTER_C::OnCompleted_0FBFA56A4810C9B21318009D4D15B9A9(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.OnCompleted_0FBFA56A4810C9B21318009D4D15B9A9");
		
		UAnimatronic_ABP_MASTER_C_OnCompleted_0FBFA56A4810C9B21318009D4D15B9A9_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.OnBlendOut_0FBFA56A4810C9B21318009D4D15B9A9
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimatronic_ABP_MASTER_C::OnBlendOut_0FBFA56A4810C9B21318009D4D15B9A9(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.OnBlendOut_0FBFA56A4810C9B21318009D4D15B9A9");
		
		UAnimatronic_ABP_MASTER_C_OnBlendOut_0FBFA56A4810C9B21318009D4D15B9A9_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.OnInterrupted_0FBFA56A4810C9B21318009D4D15B9A9
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimatronic_ABP_MASTER_C::OnInterrupted_0FBFA56A4810C9B21318009D4D15B9A9(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.OnInterrupted_0FBFA56A4810C9B21318009D4D15B9A9");
		
		UAnimatronic_ABP_MASTER_C_OnInterrupted_0FBFA56A4810C9B21318009D4D15B9A9_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.OnNotifyBegin_0FBFA56A4810C9B21318009D4D15B9A9
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimatronic_ABP_MASTER_C::OnNotifyBegin_0FBFA56A4810C9B21318009D4D15B9A9(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.OnNotifyBegin_0FBFA56A4810C9B21318009D4D15B9A9");
		
		UAnimatronic_ABP_MASTER_C_OnNotifyBegin_0FBFA56A4810C9B21318009D4D15B9A9_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.OnNotifyEnd_0FBFA56A4810C9B21318009D4D15B9A9
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimatronic_ABP_MASTER_C::OnNotifyEnd_0FBFA56A4810C9B21318009D4D15B9A9(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.OnNotifyEnd_0FBFA56A4810C9B21318009D4D15B9A9");
		
		UAnimatronic_ABP_MASTER_C_OnNotifyEnd_0FBFA56A4810C9B21318009D4D15B9A9_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.OnCompleted_3C038C4C41E515C7EAF663BC143B1F84
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimatronic_ABP_MASTER_C::OnCompleted_3C038C4C41E515C7EAF663BC143B1F84(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.OnCompleted_3C038C4C41E515C7EAF663BC143B1F84");
		
		UAnimatronic_ABP_MASTER_C_OnCompleted_3C038C4C41E515C7EAF663BC143B1F84_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.OnBlendOut_3C038C4C41E515C7EAF663BC143B1F84
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimatronic_ABP_MASTER_C::OnBlendOut_3C038C4C41E515C7EAF663BC143B1F84(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.OnBlendOut_3C038C4C41E515C7EAF663BC143B1F84");
		
		UAnimatronic_ABP_MASTER_C_OnBlendOut_3C038C4C41E515C7EAF663BC143B1F84_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.OnInterrupted_3C038C4C41E515C7EAF663BC143B1F84
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimatronic_ABP_MASTER_C::OnInterrupted_3C038C4C41E515C7EAF663BC143B1F84(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.OnInterrupted_3C038C4C41E515C7EAF663BC143B1F84");
		
		UAnimatronic_ABP_MASTER_C_OnInterrupted_3C038C4C41E515C7EAF663BC143B1F84_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.OnNotifyBegin_3C038C4C41E515C7EAF663BC143B1F84
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimatronic_ABP_MASTER_C::OnNotifyBegin_3C038C4C41E515C7EAF663BC143B1F84(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.OnNotifyBegin_3C038C4C41E515C7EAF663BC143B1F84");
		
		UAnimatronic_ABP_MASTER_C_OnNotifyBegin_3C038C4C41E515C7EAF663BC143B1F84_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.OnNotifyEnd_3C038C4C41E515C7EAF663BC143B1F84
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimatronic_ABP_MASTER_C::OnNotifyEnd_3C038C4C41E515C7EAF663BC143B1F84(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.OnNotifyEnd_3C038C4C41E515C7EAF663BC143B1F84");
		
		UAnimatronic_ABP_MASTER_C_OnNotifyEnd_3C038C4C41E515C7EAF663BC143B1F84_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Animatronic_ABP_MASTER_AnimGraphNode_RotationOffsetBlendSpace_7BDAAFA741396C2B6DD3D6A9DA6DE588
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_MASTER_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Animatronic_ABP_MASTER_AnimGraphNode_RotationOffsetBlendSpace_7BDAAFA741396C2B6DD3D6A9DA6DE588()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Animatronic_ABP_MASTER_AnimGraphNode_RotationOffsetBlendSpace_7BDAAFA741396C2B6DD3D6A9DA6DE588");
		
		UAnimatronic_ABP_MASTER_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Animatronic_ABP_MASTER_AnimGraphNode_RotationOffsetBlendSpace_7BDAAFA741396C2B6DD3D6A9DA6DE588_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Animatronic_ABP_MASTER_AnimGraphNode_ModifyBone_3B824F8E48009B840B4521ABEADE8F4F
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_MASTER_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Animatronic_ABP_MASTER_AnimGraphNode_ModifyBone_3B824F8E48009B840B4521ABEADE8F4F()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Animatronic_ABP_MASTER_AnimGraphNode_ModifyBone_3B824F8E48009B840B4521ABEADE8F4F");
		
		UAnimatronic_ABP_MASTER_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Animatronic_ABP_MASTER_AnimGraphNode_ModifyBone_3B824F8E48009B840B4521ABEADE8F4F_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Animatronic_ABP_MASTER_AnimGraphNode_LayeredBoneBlend_40124A0E42CA80CA07A1FF90DBA8AEB8
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_MASTER_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Animatronic_ABP_MASTER_AnimGraphNode_LayeredBoneBlend_40124A0E42CA80CA07A1FF90DBA8AEB8()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Animatronic_ABP_MASTER_AnimGraphNode_LayeredBoneBlend_40124A0E42CA80CA07A1FF90DBA8AEB8");
		
		UAnimatronic_ABP_MASTER_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Animatronic_ABP_MASTER_AnimGraphNode_LayeredBoneBlend_40124A0E42CA80CA07A1FF90DBA8AEB8_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Animatronic_ABP_MASTER_AnimGraphNode_LayeredBoneBlend_F0413BC34D49680CD5084581C867C985
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_MASTER_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Animatronic_ABP_MASTER_AnimGraphNode_LayeredBoneBlend_F0413BC34D49680CD5084581C867C985()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Animatronic_ABP_MASTER_AnimGraphNode_LayeredBoneBlend_F0413BC34D49680CD5084581C867C985");
		
		UAnimatronic_ABP_MASTER_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Animatronic_ABP_MASTER_AnimGraphNode_LayeredBoneBlend_F0413BC34D49680CD5084581C867C985_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Animatronic_ABP_MASTER_AnimGraphNode_AnimDynamics_CE0873164C0484567DBB5FB700C8482A
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_MASTER_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Animatronic_ABP_MASTER_AnimGraphNode_AnimDynamics_CE0873164C0484567DBB5FB700C8482A()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Animatronic_ABP_MASTER_AnimGraphNode_AnimDynamics_CE0873164C0484567DBB5FB700C8482A");
		
		UAnimatronic_ABP_MASTER_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Animatronic_ABP_MASTER_AnimGraphNode_AnimDynamics_CE0873164C0484567DBB5FB700C8482A_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Animatronic_ABP_MASTER_AnimGraphNode_ApplyAdditive_C0C945A54B6BF22E2AD1529F65561B02
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_MASTER_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Animatronic_ABP_MASTER_AnimGraphNode_ApplyAdditive_C0C945A54B6BF22E2AD1529F65561B02()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Animatronic_ABP_MASTER_AnimGraphNode_ApplyAdditive_C0C945A54B6BF22E2AD1529F65561B02");
		
		UAnimatronic_ABP_MASTER_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Animatronic_ABP_MASTER_AnimGraphNode_ApplyAdditive_C0C945A54B6BF22E2AD1529F65561B02_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Animatronic_ABP_MASTER_AnimGraphNode_LayeredBoneBlend_22EE638841B7E6C0E7FDA68B9E8CB2EB
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_MASTER_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Animatronic_ABP_MASTER_AnimGraphNode_LayeredBoneBlend_22EE638841B7E6C0E7FDA68B9E8CB2EB()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Animatronic_ABP_MASTER_AnimGraphNode_LayeredBoneBlend_22EE638841B7E6C0E7FDA68B9E8CB2EB");
		
		UAnimatronic_ABP_MASTER_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Animatronic_ABP_MASTER_AnimGraphNode_LayeredBoneBlend_22EE638841B7E6C0E7FDA68B9E8CB2EB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Animatronic_ABP_MASTER_AnimGraphNode_AnimDynamics_ABC04883476C501782211DA298CADA38
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_MASTER_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Animatronic_ABP_MASTER_AnimGraphNode_AnimDynamics_ABC04883476C501782211DA298CADA38()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Animatronic_ABP_MASTER_AnimGraphNode_AnimDynamics_ABC04883476C501782211DA298CADA38");
		
		UAnimatronic_ABP_MASTER_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Animatronic_ABP_MASTER_AnimGraphNode_AnimDynamics_ABC04883476C501782211DA298CADA38_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Animatronic_ABP_MASTER_AnimGraphNode_AnimDynamics_84A9111B4DDE0B4CB1CB90B0DF921700
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_MASTER_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Animatronic_ABP_MASTER_AnimGraphNode_AnimDynamics_84A9111B4DDE0B4CB1CB90B0DF921700()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Animatronic_ABP_MASTER_AnimGraphNode_AnimDynamics_84A9111B4DDE0B4CB1CB90B0DF921700");
		
		UAnimatronic_ABP_MASTER_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Animatronic_ABP_MASTER_AnimGraphNode_AnimDynamics_84A9111B4DDE0B4CB1CB90B0DF921700_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Animatronic_ABP_MASTER_AnimGraphNode_AnimDynamics_96A6401843DC76286490D18B811537C8
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_MASTER_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Animatronic_ABP_MASTER_AnimGraphNode_AnimDynamics_96A6401843DC76286490D18B811537C8()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Animatronic_ABP_MASTER_AnimGraphNode_AnimDynamics_96A6401843DC76286490D18B811537C8");
		
		UAnimatronic_ABP_MASTER_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Animatronic_ABP_MASTER_AnimGraphNode_AnimDynamics_96A6401843DC76286490D18B811537C8_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Animatronic_ABP_MASTER_AnimGraphNode_Constraint_72F426BB4219CC9BB1EB8795BA26E086
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_MASTER_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Animatronic_ABP_MASTER_AnimGraphNode_Constraint_72F426BB4219CC9BB1EB8795BA26E086()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Animatronic_ABP_MASTER_AnimGraphNode_Constraint_72F426BB4219CC9BB1EB8795BA26E086");
		
		UAnimatronic_ABP_MASTER_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Animatronic_ABP_MASTER_AnimGraphNode_Constraint_72F426BB4219CC9BB1EB8795BA26E086_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Animatronic_ABP_MASTER_AnimGraphNode_AnimDynamics_2F0D592D48997EE91A18F085212688C4
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_MASTER_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Animatronic_ABP_MASTER_AnimGraphNode_AnimDynamics_2F0D592D48997EE91A18F085212688C4()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Animatronic_ABP_MASTER_AnimGraphNode_AnimDynamics_2F0D592D48997EE91A18F085212688C4");
		
		UAnimatronic_ABP_MASTER_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Animatronic_ABP_MASTER_AnimGraphNode_AnimDynamics_2F0D592D48997EE91A18F085212688C4_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Animatronic_ABP_MASTER_AnimGraphNode_SequencePlayer_B88409B24EABCF80FB77DAB1AC1D6567
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_MASTER_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Animatronic_ABP_MASTER_AnimGraphNode_SequencePlayer_B88409B24EABCF80FB77DAB1AC1D6567()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Animatronic_ABP_MASTER_AnimGraphNode_SequencePlayer_B88409B24EABCF80FB77DAB1AC1D6567");
		
		UAnimatronic_ABP_MASTER_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Animatronic_ABP_MASTER_AnimGraphNode_SequencePlayer_B88409B24EABCF80FB77DAB1AC1D6567_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Animatronic_ABP_MASTER_AnimGraphNode_TransitionResult_7EA97177407CA354409B3B84AA5501F6
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_MASTER_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Animatronic_ABP_MASTER_AnimGraphNode_TransitionResult_7EA97177407CA354409B3B84AA5501F6()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Animatronic_ABP_MASTER_AnimGraphNode_TransitionResult_7EA97177407CA354409B3B84AA5501F6");
		
		UAnimatronic_ABP_MASTER_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Animatronic_ABP_MASTER_AnimGraphNode_TransitionResult_7EA97177407CA354409B3B84AA5501F6_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.BlueprintUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimatronic_ABP_MASTER_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.BlueprintUpdateAnimation");
		
		UAnimatronic_ABP_MASTER_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.AnimNotify_IsSpottedEvent
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_MASTER_C::AnimNotify_IsSpottedEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.AnimNotify_IsSpottedEvent");
		
		UAnimatronic_ABP_MASTER_C_AnimNotify_IsSpottedEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.SpottedTimerOverEvent
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_MASTER_C::SpottedTimerOverEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.SpottedTimerOverEvent");
		
		UAnimatronic_ABP_MASTER_C_SpottedTimerOverEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.AnimNotify_StartScanEvent
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_MASTER_C::AnimNotify_StartScanEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.AnimNotify_StartScanEvent");
		
		UAnimatronic_ABP_MASTER_C_AnimNotify_StartScanEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.AnimNotify_FinishedScanEvent
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_MASTER_C::AnimNotify_FinishedScanEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.AnimNotify_FinishedScanEvent");
		
		UAnimatronic_ABP_MASTER_C_AnimNotify_FinishedScanEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.AnimNotify_TurnCompleteEvent
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_MASTER_C::AnimNotify_TurnCompleteEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.AnimNotify_TurnCompleteEvent");
		
		UAnimatronic_ABP_MASTER_C_AnimNotify_TurnCompleteEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.IsSpottedEvent
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_MASTER_C::IsSpottedEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.IsSpottedEvent");
		
		UAnimatronic_ABP_MASTER_C_IsSpottedEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.BlueprintBeginPlay
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_MASTER_C::BlueprintBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.BlueprintBeginPlay");
		
		UAnimatronic_ABP_MASTER_C_BlueprintBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.AnimNotify_L_Foot_Down
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_MASTER_C::AnimNotify_L_Foot_Down()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.AnimNotify_L_Foot_Down");
		
		UAnimatronic_ABP_MASTER_C_AnimNotify_L_Foot_Down_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.AnimNotify_R_Foot_Down
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_MASTER_C::AnimNotify_R_Foot_Down()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.AnimNotify_R_Foot_Down");
		
		UAnimatronic_ABP_MASTER_C_AnimNotify_R_Foot_Down_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.AnimNotify_SearchEnd
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_MASTER_C::AnimNotify_SearchEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.AnimNotify_SearchEnd");
		
		UAnimatronic_ABP_MASTER_C_AnimNotify_SearchEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.AnimNotify_StartingSearchLoop
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_MASTER_C::AnimNotify_StartingSearchLoop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.AnimNotify_StartingSearchLoop");
		
		UAnimatronic_ABP_MASTER_C_AnimNotify_StartingSearchLoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.OpenDone
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_MASTER_C::OpenDone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.OpenDone");
		
		UAnimatronic_ABP_MASTER_C_OpenDone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.Searching
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHideObjectType                                    HideType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimatronic_ABP_MASTER_C::Searching(EHideObjectType HideType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.Searching");
		
		UAnimatronic_ABP_MASTER_C_Searching_Params params {};
		params.HideType = HideType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.TurnEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              TurnDegrees                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimatronic_ABP_MASTER_C::TurnEvent(float TurnDegrees)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.TurnEvent");
		
		UAnimatronic_ABP_MASTER_C_TurnEvent_Params params {};
		params.TurnDegrees = TurnDegrees;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.HeadAimEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OnOff                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAnimatronic_ABP_MASTER_C::HeadAimEvent(bool OnOff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.HeadAimEvent");
		
		UAnimatronic_ABP_MASTER_C_HeadAimEvent_Params params {};
		params.OnOff = OnOff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.Open
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_MASTER_C::Open()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.Open");
		
		UAnimatronic_ABP_MASTER_C_Open_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.StartScan
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_MASTER_C::StartScan()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.StartScan");
		
		UAnimatronic_ABP_MASTER_C_StartScan_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.CanJumpscareEvent
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_MASTER_C::CanJumpscareEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.CanJumpscareEvent");
		
		UAnimatronic_ABP_MASTER_C_CanJumpscareEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.SetHeadAimTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     AimLocation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimatronic_ABP_MASTER_C::SetHeadAimTarget(const struct FVector& AimLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.SetHeadAimTarget");
		
		UAnimatronic_ABP_MASTER_C_SetHeadAimTarget_Params params {};
		params.AimLocation = AimLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.CanRunEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CanRun                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAnimatronic_ABP_MASTER_C::CanRunEvent(bool CanRun)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.CanRunEvent");
		
		UAnimatronic_ABP_MASTER_C_CanRunEvent_Params params {};
		params.CanRun = CanRun;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.Stun Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsStunned                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAnimatronic_ABP_MASTER_C::StunEvent(bool IsStunned)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.Stun Event");
		
		UAnimatronic_ABP_MASTER_C_StunEvent_Params params {};
		params.IsStunned = IsStunned;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.CanRummageEvent
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_MASTER_C::CanRummageEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.CanRummageEvent");
		
		UAnimatronic_ABP_MASTER_C_CanRummageEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.RummagingDoneEvent
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_MASTER_C::RummagingDoneEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.RummagingDoneEvent");
		
		UAnimatronic_ABP_MASTER_C_RummagingDoneEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.AnimNotify_AnimDoneRummaging
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_MASTER_C::AnimNotify_AnimDoneRummaging()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.AnimNotify_AnimDoneRummaging");
		
		UAnimatronic_ABP_MASTER_C_AnimNotify_AnimDoneRummaging_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.CanBlinkEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CanBlink                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAnimatronic_ABP_MASTER_C::CanBlinkEvent(bool CanBlink)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.CanBlinkEvent");
		
		UAnimatronic_ABP_MASTER_C_CanBlinkEvent_Params params {};
		params.CanBlink = CanBlink;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.AnimNotify_BlinkNotify
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_MASTER_C::AnimNotify_BlinkNotify()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.AnimNotify_BlinkNotify");
		
		UAnimatronic_ABP_MASTER_C_AnimNotify_BlinkNotify_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.OnAnimInstanceSwap
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_MASTER_C::OnAnimInstanceSwap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.OnAnimInstanceSwap");
		
		UAnimatronic_ABP_MASTER_C_OnAnimInstanceSwap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.Breakthrough
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_MASTER_C::Breakthrough()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.Breakthrough");
		
		UAnimatronic_ABP_MASTER_C_Breakthrough_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.AnimNotify_BreakthroughEnd
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_MASTER_C::AnimNotify_BreakthroughEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.AnimNotify_BreakthroughEnd");
		
		UAnimatronic_ABP_MASTER_C_AnimNotify_BreakthroughEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.ScanTimerEvent
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_MASTER_C::ScanTimerEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.ScanTimerEvent");
		
		UAnimatronic_ABP_MASTER_C_ScanTimerEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.ScanWhileMoving
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_MASTER_C::ScanWhileMoving()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.ScanWhileMoving");
		
		UAnimatronic_ABP_MASTER_C_ScanWhileMoving_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.StopScanEventLocal
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_MASTER_C::StopScanEventLocal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.StopScanEventLocal");
		
		UAnimatronic_ABP_MASTER_C_StopScanEventLocal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.ForceTrackToPlayer
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_MASTER_C::ForceTrackToPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.ForceTrackToPlayer");
		
		UAnimatronic_ABP_MASTER_C_ForceTrackToPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.EndTrackToPlayer
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_MASTER_C::EndTrackToPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.EndTrackToPlayer");
		
		UAnimatronic_ABP_MASTER_C_EndTrackToPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.JumpEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CanJump                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAnimatronic_ABP_MASTER_C::JumpEvent(bool CanJump)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.JumpEvent");
		
		UAnimatronic_ABP_MASTER_C_JumpEvent_Params params {};
		params.CanJump = CanJump;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.AnimNotify_TurnOffScanningEvent
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_MASTER_C::AnimNotify_TurnOffScanningEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.AnimNotify_TurnOffScanningEvent");
		
		UAnimatronic_ABP_MASTER_C_AnimNotify_TurnOffScanningEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.StopScan
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_MASTER_C::StopScan()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.StopScan");
		
		UAnimatronic_ABP_MASTER_C_StopScan_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.AnimNotify_HidingSpotEvent
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_MASTER_C::AnimNotify_HidingSpotEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.AnimNotify_HidingSpotEvent");
		
		UAnimatronic_ABP_MASTER_C_AnimNotify_HidingSpotEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.AnimNotify_SearchKillEvent
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_MASTER_C::AnimNotify_SearchKillEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.AnimNotify_SearchKillEvent");
		
		UAnimatronic_ABP_MASTER_C_AnimNotify_SearchKillEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.AnimNotify_EnterSearchStateEvent
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_MASTER_C::AnimNotify_EnterSearchStateEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.AnimNotify_EnterSearchStateEvent");
		
		UAnimatronic_ABP_MASTER_C_AnimNotify_EnterSearchStateEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.PoundDoorEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               PoundDoor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAnimatronic_ABP_MASTER_C::PoundDoorEvent(bool PoundDoor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.PoundDoorEvent");
		
		UAnimatronic_ABP_MASTER_C_PoundDoorEvent_Params params {};
		params.PoundDoor = PoundDoor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.CanWaveEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CanWave                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAnimatronic_ABP_MASTER_C::CanWaveEvent(bool CanWave)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.CanWaveEvent");
		
		UAnimatronic_ABP_MASTER_C_CanWaveEvent_Params params {};
		params.CanWave = CanWave;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.IsSickEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OnOff                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAnimatronic_ABP_MASTER_C::IsSickEvent(bool OnOff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.IsSickEvent");
		
		UAnimatronic_ABP_MASTER_C_IsSickEvent_Params params {};
		params.OnOff = OnOff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.CanLieDownEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OnOff                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAnimatronic_ABP_MASTER_C::CanLieDownEvent(bool OnOff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.CanLieDownEvent");
		
		UAnimatronic_ABP_MASTER_C_CanLieDownEvent_Params params {};
		params.OnOff = OnOff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.CanLeapEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAnimatronic_ABP_MASTER_C::CanLeapEvent(bool Off)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.CanLeapEvent");
		
		UAnimatronic_ABP_MASTER_C_CanLeapEvent_Params params {};
		params.Off = Off;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.EnterFreddyOverrideEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAnimatronic_ABP_MASTER_C::EnterFreddyOverrideEvent(bool Off)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.EnterFreddyOverrideEvent");
		
		UAnimatronic_ABP_MASTER_C_EnterFreddyOverrideEvent_Params params {};
		params.Off = Off;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.LandEvent
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_MASTER_C::LandEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.LandEvent");
		
		UAnimatronic_ABP_MASTER_C_LandEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.RoxyCrying
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAnimatronic_ABP_MASTER_C::RoxyCrying(bool Off)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.RoxyCrying");
		
		UAnimatronic_ABP_MASTER_C_RoxyCrying_Params params {};
		params.Off = Off;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.VoAnimEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAkAudioEvent*                               AKEvent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimatronic_ABP_MASTER_C::VoAnimEvent(class UAkAudioEvent* AKEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.VoAnimEvent");
		
		UAnimatronic_ABP_MASTER_C_VoAnimEvent_Params params {};
		params.AKEvent = AKEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.AnimNotify_EnteredLeapEvent
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_MASTER_C::AnimNotify_EnteredLeapEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.AnimNotify_EnteredLeapEvent");
		
		UAnimatronic_ABP_MASTER_C_AnimNotify_EnteredLeapEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.AnimNotify_StunOverEvent
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_MASTER_C::AnimNotify_StunOverEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.AnimNotify_StunOverEvent");
		
		UAnimatronic_ABP_MASTER_C_AnimNotify_StunOverEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.AnimNotify_EnableBlendSpace
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_MASTER_C::AnimNotify_EnableBlendSpace()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.AnimNotify_EnableBlendSpace");
		
		UAnimatronic_ABP_MASTER_C_AnimNotify_EnableBlendSpace_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.AnimNotify_DisableBlendSpace
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_MASTER_C::AnimNotify_DisableBlendSpace()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.AnimNotify_DisableBlendSpace");
		
		UAnimatronic_ABP_MASTER_C_AnimNotify_DisableBlendSpace_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.LeapLoopEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAnimatronic_ABP_MASTER_C::LeapLoopEvent(bool Off)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.LeapLoopEvent");
		
		UAnimatronic_ABP_MASTER_C_LeapLoopEvent_Params params {};
		params.Off = Off;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.UpdateLeapInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     ActorLocation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Destination                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Distance                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimatronic_ABP_MASTER_C::UpdateLeapInfo(const struct FVector& ActorLocation, const struct FVector& Destination, float Distance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.UpdateLeapInfo");
		
		UAnimatronic_ABP_MASTER_C_UpdateLeapInfo_Params params {};
		params.ActorLocation = ActorLocation;
		params.Destination = Destination;
		params.Distance = Distance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.FreddyEndIdle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAnimatronic_ABP_MASTER_C::FreddyEndIdle(bool Off)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.FreddyEndIdle");
		
		UAnimatronic_ABP_MASTER_C_FreddyEndIdle_Params params {};
		params.Off = Off;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.CutSceneSpineBlender
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class ULevelSequencePlayer*                        Sequence                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimatronic_ABP_MASTER_C::CutSceneSpineBlender(bool Off, class ULevelSequencePlayer* Sequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.CutSceneSpineBlender");
		
		UAnimatronic_ABP_MASTER_C_CutSceneSpineBlender_Params params {};
		params.Off = Off;
		params.Sequence = Sequence;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.UpdateAlpha
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_MASTER_C::UpdateAlpha()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.UpdateAlpha");
		
		UAnimatronic_ABP_MASTER_C_UpdateAlpha_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.CutsceneGrateEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ULevelSequencePlayer*                        SequencePlayer                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimatronic_ABP_MASTER_C::CutsceneGrateEvent(class ULevelSequencePlayer* SequencePlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.CutsceneGrateEvent");
		
		UAnimatronic_ABP_MASTER_C_CutsceneGrateEvent_Params params {};
		params.SequencePlayer = SequencePlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.GrateSequenceStop
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_MASTER_C::GrateSequenceStop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.GrateSequenceStop");
		
		UAnimatronic_ABP_MASTER_C_GrateSequenceStop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.CutsceneSpineStop
	 * 		Flags  -> ()
	 */
	void UAnimatronic_ABP_MASTER_C::CutsceneSpineStop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.CutsceneSpineStop");
		
		UAnimatronic_ABP_MASTER_C_CutsceneSpineStop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.ExecuteUbergraph_Animatronic_ABP_MASTER
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimatronic_ABP_MASTER_C::ExecuteUbergraph_Animatronic_ABP_MASTER(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.ExecuteUbergraph_Animatronic_ABP_MASTER");
		
		UAnimatronic_ABP_MASTER_C_ExecuteUbergraph_Animatronic_ABP_MASTER_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimatronic_ABP_MASTER_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimatronic_ABP_MASTER_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C");
		return ptr;
	}

}


