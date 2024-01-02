#pragma once

/**
 * Name: FNAFSB
 * Version: 1
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
		void ApplyPlayerCamSettingsToCineComponent(class UCameraComponent* CameraComponent, class UObject* __WorldContext);
		void ApplyPlayerCamSettingsToCine(class ACineCameraActor* CineCamera, class UObject* __WorldContext);
		void MatchPlayerCamPPSettings(class UCameraComponent* GameplayCamera, class UCineCameraComponent* CinemaCamera, class UObject* __WorldContext);
		void SetDisableControllerInputs(bool DisableActionInput, bool IgnoreLookInput, bool IgnoreMoveInput, class UObject* __WorldContext);
		void MatchPlayerCameraSettings(class UCameraComponent* TargetGamePlayCamera, class UCineCameraComponent* TargetCinemaCamera, class UObject* __WorldContext);
		void CinematicTeleportPlayerFunc(class AActor* TargetActor, const struct FVector& Offset, const struct FRotator& RotationOffset, class UObject* __WorldContext);
		void CinematicGetCurrentPlayerCamFunc(class UObject* __WorldContext, class AActor** Output_Get);
		void CinematicBlendPlayerCamFunc(class UObject* PlayerController, class AActor* NewViewTarget, float BlendTime, bool bLockOutgoing, class UObject* __WorldContext);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
