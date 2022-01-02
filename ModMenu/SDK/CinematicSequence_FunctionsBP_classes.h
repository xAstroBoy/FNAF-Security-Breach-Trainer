#pragma once

// Name: FNAF Security Breach, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CinematicSequence_FunctionsBP.CinematicSequence_FunctionsBP_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UCinematicSequence_FunctionsBP_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass CinematicSequence_FunctionsBP.CinematicSequence_FunctionsBP_C");
		return ptr;
	}



	void STATIC_MatchPlayerCamPPSettings(class UCameraComponent* GameplayCamera, class UCineCameraComponent* CinemaCamera, class UObject* __WorldContext);
	void STATIC_SetDisableControllerInputs(bool DisableActionInput, bool IgnoreLookInput, bool IgnoreMoveInput, class UObject* __WorldContext);
	void STATIC_MatchPlayerCameraSettings(class UCameraComponent* TargetGamePlayCamera, class UCineCameraComponent* TargetCinemaCamera, class UObject* __WorldContext);
	void STATIC_CinematicTeleportPlayer_Func(class AActor* TargetActor, const struct FVector& Offset, const struct FRotator& RotationOffset, class UObject* __WorldContext);
	void STATIC_Cinematic_GetCurrentPlayerCam_Func(class UObject* __WorldContext, class AActor** Output_Get);
	void STATIC_Cinematic_Blend_Player_Cam_Func(class UObject* PlayerController, class AActor* NewViewTarget, float BlendTime, bool bLockOutgoing, class UObject* __WorldContext);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
