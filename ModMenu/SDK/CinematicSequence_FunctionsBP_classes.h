#pragma once

/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass CinematicSequence_FunctionsBP.CinematicSequence_FunctionsBP_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCinematicSequence_FunctionsBP_C : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_ApplyPlayerCamSettingsToCineComponent(class UCameraComponent* CameraComponent, class UObject* __WorldContext);
		void STATIC_ApplyPlayerCamSettingsToCine(class ACineCameraActor* CineCamera, class UObject* __WorldContext);
		void STATIC_MatchPlayerCamPPSettings(class UCameraComponent* GameplayCamera, class UCineCameraComponent* CinemaCamera, class UObject* __WorldContext);
		void STATIC_SetDisableControllerInputs(bool DisableActionInput, bool IgnoreLookInput, bool IgnoreMoveInput, class UObject* __WorldContext);
		void STATIC_MatchPlayerCameraSettings(class UCameraComponent* TargetGamePlayCamera, class UCineCameraComponent* TargetCinemaCamera, class UObject* __WorldContext);
		void STATIC_CinematicTeleportPlayer_Func(class AActor* TargetActor, const struct FVector& Offset, const struct FRotator& RotationOffset, class UObject* __WorldContext);
		void STATIC_Cinematic_GetCurrentPlayerCam_Func(class UObject* __WorldContext, class AActor** Output_Get);
		void STATIC_Cinematic_Blend_Player_Cam_Func(class UObject* PlayerController, class AActor* NewViewTarget, float BlendTime, bool bLockOutgoing, class UObject* __WorldContext);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
