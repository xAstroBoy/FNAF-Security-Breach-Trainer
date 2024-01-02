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
	 * 		Name   -> Function CinematicSequence_FunctionsBP.CinematicSequence_FunctionsBP_C.ApplyPlayerCamSettingsToCineComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCameraComponent*                            CameraComponent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCinematicSequence_FunctionsBP_C::ApplyPlayerCamSettingsToCineComponent(class UCameraComponent* CameraComponent, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicSequence_FunctionsBP.CinematicSequence_FunctionsBP_C.ApplyPlayerCamSettingsToCineComponent");
		
		UCinematicSequence_FunctionsBP_C_ApplyPlayerCamSettingsToCineComponent_Params params {};
		params.CameraComponent = CameraComponent;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CinematicSequence_FunctionsBP.CinematicSequence_FunctionsBP_C.ApplyPlayerCamSettingsToCine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ACineCameraActor*                            CineCamera                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCinematicSequence_FunctionsBP_C::ApplyPlayerCamSettingsToCine(class ACineCameraActor* CineCamera, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicSequence_FunctionsBP.CinematicSequence_FunctionsBP_C.ApplyPlayerCamSettingsToCine");
		
		UCinematicSequence_FunctionsBP_C_ApplyPlayerCamSettingsToCine_Params params {};
		params.CineCamera = CineCamera;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CinematicSequence_FunctionsBP.CinematicSequence_FunctionsBP_C.MatchPlayerCamPPSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCameraComponent*                            GameplayCamera                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCineCameraComponent*                        CinemaCamera                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCinematicSequence_FunctionsBP_C::MatchPlayerCamPPSettings(class UCameraComponent* GameplayCamera, class UCineCameraComponent* CinemaCamera, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicSequence_FunctionsBP.CinematicSequence_FunctionsBP_C.MatchPlayerCamPPSettings");
		
		UCinematicSequence_FunctionsBP_C_MatchPlayerCamPPSettings_Params params {};
		params.GameplayCamera = GameplayCamera;
		params.CinemaCamera = CinemaCamera;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CinematicSequence_FunctionsBP.CinematicSequence_FunctionsBP_C.SetDisableControllerInputs
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               DisableActionInput                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IgnoreLookInput                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IgnoreMoveInput                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCinematicSequence_FunctionsBP_C::SetDisableControllerInputs(bool DisableActionInput, bool IgnoreLookInput, bool IgnoreMoveInput, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicSequence_FunctionsBP.CinematicSequence_FunctionsBP_C.SetDisableControllerInputs");
		
		UCinematicSequence_FunctionsBP_C_SetDisableControllerInputs_Params params {};
		params.DisableActionInput = DisableActionInput;
		params.IgnoreLookInput = IgnoreLookInput;
		params.IgnoreMoveInput = IgnoreMoveInput;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CinematicSequence_FunctionsBP.CinematicSequence_FunctionsBP_C.MatchPlayerCameraSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCameraComponent*                            TargetGamePlayCamera                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCineCameraComponent*                        TargetCinemaCamera                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCinematicSequence_FunctionsBP_C::MatchPlayerCameraSettings(class UCameraComponent* TargetGamePlayCamera, class UCineCameraComponent* TargetCinemaCamera, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicSequence_FunctionsBP.CinematicSequence_FunctionsBP_C.MatchPlayerCameraSettings");
		
		UCinematicSequence_FunctionsBP_C_MatchPlayerCameraSettings_Params params {};
		params.TargetGamePlayCamera = TargetGamePlayCamera;
		params.TargetCinemaCamera = TargetCinemaCamera;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CinematicSequence_FunctionsBP.CinematicSequence_FunctionsBP_C.CinematicTeleportPlayer Func
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      TargetActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Offset                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    RotationOffset                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCinematicSequence_FunctionsBP_C::CinematicTeleportPlayerFunc(class AActor* TargetActor, const struct FVector& Offset, const struct FRotator& RotationOffset, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicSequence_FunctionsBP.CinematicSequence_FunctionsBP_C.CinematicTeleportPlayer Func");
		
		UCinematicSequence_FunctionsBP_C_CinematicTeleportPlayerFunc_Params params {};
		params.TargetActor = TargetActor;
		params.Offset = Offset;
		params.RotationOffset = RotationOffset;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CinematicSequence_FunctionsBP.CinematicSequence_FunctionsBP_C.Cinematic GetCurrentPlayerCam Func
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Output_Get                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCinematicSequence_FunctionsBP_C::CinematicGetCurrentPlayerCamFunc(class UObject* __WorldContext, class AActor** Output_Get)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicSequence_FunctionsBP.CinematicSequence_FunctionsBP_C.Cinematic GetCurrentPlayerCam Func");
		
		UCinematicSequence_FunctionsBP_C_CinematicGetCurrentPlayerCamFunc_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Output_Get != nullptr)
			*Output_Get = params.Output_Get;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CinematicSequence_FunctionsBP.CinematicSequence_FunctionsBP_C.Cinematic Blend Player Cam Func
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     PlayerController                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      NewViewTarget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              BlendTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bLockOutgoing                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCinematicSequence_FunctionsBP_C::CinematicBlendPlayerCamFunc(class UObject* PlayerController, class AActor* NewViewTarget, float BlendTime, bool bLockOutgoing, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicSequence_FunctionsBP.CinematicSequence_FunctionsBP_C.Cinematic Blend Player Cam Func");
		
		UCinematicSequence_FunctionsBP_C_CinematicBlendPlayerCamFunc_Params params {};
		params.PlayerController = PlayerController;
		params.NewViewTarget = NewViewTarget;
		params.BlendTime = BlendTime;
		params.bLockOutgoing = bLockOutgoing;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCinematicSequence_FunctionsBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCinematicSequence_FunctionsBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CinematicSequence_FunctionsBP.CinematicSequence_FunctionsBP_C");
		return ptr;
	}

}


