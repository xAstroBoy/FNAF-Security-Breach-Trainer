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
	 * 		Name   -> Function CinematicSequence_FunctionsBP.CinematicSequence_FunctionsBP_C.MatchPlayerCamPPSettings
	 * 		Flags  -> (Static, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UCameraComponent*                            GameplayCamera                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCineCameraComponent*                        CinemaCamera                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCinematicSequence_FunctionsBP_C::STATIC_MatchPlayerCamPPSettings(class UCameraComponent* GameplayCamera, class UCineCameraComponent* CinemaCamera, class UObject* __WorldContext)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function CinematicSequence_FunctionsBP.CinematicSequence_FunctionsBP_C.SetDisableControllerInputs
	 * 		Flags  -> (Static, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               DisableActionInput                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IgnoreLookInput                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IgnoreMoveInput                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCinematicSequence_FunctionsBP_C::STATIC_SetDisableControllerInputs(bool DisableActionInput, bool IgnoreLookInput, bool IgnoreMoveInput, class UObject* __WorldContext)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function CinematicSequence_FunctionsBP.CinematicSequence_FunctionsBP_C.MatchPlayerCameraSettings
	 * 		Flags  -> (Static, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UCameraComponent*                            TargetGamePlayCamera                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCineCameraComponent*                        TargetCinemaCamera                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCinematicSequence_FunctionsBP_C::STATIC_MatchPlayerCameraSettings(class UCameraComponent* TargetGamePlayCamera, class UCineCameraComponent* TargetCinemaCamera, class UObject* __WorldContext)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function CinematicSequence_FunctionsBP.CinematicSequence_FunctionsBP_C.CinematicTeleportPlayer Func
	 * 		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      TargetActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Offset                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    RotationOffset                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCinematicSequence_FunctionsBP_C::STATIC_CinematicTeleportPlayer_Func(class AActor* TargetActor, const struct FVector& Offset, const struct FRotator& RotationOffset, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicSequence_FunctionsBP.CinematicSequence_FunctionsBP_C.CinematicTeleportPlayer Func");
		
		UCinematicSequence_FunctionsBP_C_CinematicTeleportPlayer_Func_Params params {};
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function CinematicSequence_FunctionsBP.CinematicSequence_FunctionsBP_C.Cinematic GetCurrentPlayerCam Func
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Output_Get                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCinematicSequence_FunctionsBP_C::STATIC_Cinematic_GetCurrentPlayerCam_Func(class UObject* __WorldContext, class AActor** Output_Get)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicSequence_FunctionsBP.CinematicSequence_FunctionsBP_C.Cinematic GetCurrentPlayerCam Func");
		
		UCinematicSequence_FunctionsBP_C_Cinematic_GetCurrentPlayerCam_Func_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Output_Get != nullptr)
			*Output_Get = params.Output_Get;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function CinematicSequence_FunctionsBP.CinematicSequence_FunctionsBP_C.Cinematic Blend Player Cam Func
	 * 		Flags  -> (Static, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     PlayerController                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      NewViewTarget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              BlendTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bLockOutgoing                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCinematicSequence_FunctionsBP_C::STATIC_Cinematic_Blend_Player_Cam_Func(class UObject* PlayerController, class AActor* NewViewTarget, float BlendTime, bool bLockOutgoing, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicSequence_FunctionsBP.CinematicSequence_FunctionsBP_C.Cinematic Blend Player Cam Func");
		
		UCinematicSequence_FunctionsBP_C_Cinematic_Blend_Player_Cam_Func_Params params {};
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
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UCinematicSequence_FunctionsBP_C.StaticClass
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


